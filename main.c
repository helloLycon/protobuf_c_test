#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include "Infos-ETC.pb-c.h"
#include "protobuf-c/protobuf-c.h"

#define TRUE 1
#define FALSE  0

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;

struct etc_msg {
    uint8_t cardIssuerID[8];
    uint8_t cardType;
    uint8_t cardVer;
    uint16_t cardNetID;
    uint8_t cardInternalID[8];
    uint8_t enableTime[4];
    uint8_t expiredTime[4];
    uint8_t carNO[12];
    uint8_t userType;
    uint8_t carColor;
    uint8_t carModel;
    uint8_t obuType;
    uint8_t gps[8];
} __attribute__ ((packed));

struct single_bytes_struct {
    protobuf_c_boolean has_cardissuerid;
    ProtobufCBinaryData cardissuerid;
};

void simple_cpy(ProtobufCBinaryData *bytes, const void *src, int len) {
    bytes->len = len;
    bytes->data = malloc(64);
    memcpy(bytes->data, src, len);

    uint32_t offset = (uint32_t)(&((struct single_bytes_struct *)0)->cardissuerid);
    protobuf_c_boolean *b = (protobuf_c_boolean *)((uint32_t)bytes - offset);
    *b = 1; /* has_xxx */
}

void hexdump(const char *hdr, const void *data, int len) {
    //printf("hex: ");
    printf(hdr);
    for(int i=0; i<len; i++) {
        printf("0x%02x, ", ((const unsigned char *)data)[i]);
    }
    printf("\n");
}

static size_t pack_user_data(const struct etc_msg *etc, uint8_t *buffer)
{
    Infos infos = INFOS__INIT;
    Infos__Information information = INFOS__INFORMATION__INIT;
    simple_cpy(&information.cardissuerid, &etc->cardIssuerID, sizeof(etc->cardIssuerID));
    simple_cpy(&information.cardtype, &etc->cardType, sizeof(etc->cardType));
    simple_cpy(&information.cardver, &etc->cardVer, sizeof(etc->cardVer));
    simple_cpy(&information.cardnetid, &etc->cardNetID, sizeof(etc->cardNetID));
    simple_cpy(&information.cardinternalid, &etc->cardInternalID, sizeof(etc->cardInternalID));
    simple_cpy(&information.enabletime, &etc->enableTime, sizeof(etc->enableTime));
    simple_cpy(&information.expiredtime, &etc->expiredTime, sizeof(etc->expiredTime));
    simple_cpy(&information.carno, &etc->carNO, sizeof(etc->carNO));
    simple_cpy(&information.obutype, &etc->obuType, sizeof(etc->obuType));
    simple_cpy(&information.gps, &etc->gps, sizeof(etc->gps));

    Infos__Information *information_list[] = {&information,&information,&information,&information};
    //Infos__Information *information_list[] = {&information};

    infos.n_information = sizeof information_list / sizeof(void *);
    infos.information = information_list;

    size_t sz = infos__pack(&infos, buffer);
    free(information.cardissuerid.data);
    free(information.cardtype.data);
    free(information.cardver.data);
    free(information.cardnetid.data);
    free(information.cardinternalid.data);
    free(information.enabletime.data);
    free(information.expiredtime.data);
    free(information.carno.data);
    free(information.obutype.data);
    free(information.gps.data);
    return sz;
}

void dump_bytes(const char *hdr, const ProtobufCBinaryData *bytes) {
    uint32_t offset = (uint32_t)(&((struct single_bytes_struct *)0)->cardissuerid);
    protobuf_c_boolean *b = (protobuf_c_boolean *)((uint32_t)bytes - offset);
    if(*b) {
        hexdump(hdr, bytes->data, bytes->len);
    }
}

static size_t unpack_user_data(const uint8_t *buffer, size_t len)
{
    Infos *infos =  infos__unpack(NULL, len, buffer);
    if(!infos){
        printf("infos__unpack failed!!!\n");
        return -1;
    }
    for(int i=0; i<infos->n_information; i++) {
        Infos__Information *information = infos->information[i];
        printf("[index = %d]\n", i);
        dump_bytes("cardissuerid = ", &information->cardissuerid);
        dump_bytes("cardver = ", &information->cardver);
        dump_bytes("cardtype = ", &information->cardtype);
        dump_bytes("cardnetid = ", &information->cardnetid);
        dump_bytes("cardinternalid = ", &information->cardinternalid);
        dump_bytes("enabletime = ", &information->enabletime);
        dump_bytes("expiredtime = ", &information->expiredtime);
        dump_bytes("carno = ", &information->carno);
        dump_bytes("obutype = ", &information->obutype);
        dump_bytes("gps = ", &information->gps);
    }
    infos__free_unpacked(infos, NULL);
    return 0;
}

int main()
{
    uint8_t buffer[1024];

    uint8_t etc_data[] = {0xD5,0xE3 ,0xBD ,0xAD ,0x33 ,0x01 ,0x00 ,0x01 ,0x17 ,0x41 ,0x33 ,0x01 ,0x19 ,0x07 ,0x23 ,0x02 ,0x00 ,0x12 ,0x99 ,0x78 ,0x20 ,0x19 ,0x12 ,0x30 ,0x20 ,0x29 ,0x12 ,0x30 ,0xD5,0xE3,0x43 ,0x30 ,0x31 ,0x33 ,0x52 ,0x4B ,0x00 ,0x00 ,0x00 ,0x00,0xD5,0xE3 ,0xBD ,0xAD ,0x33 ,0x01 ,0x00 ,0x01 ,0x17 ,0x41 ,0x33 ,0x01 ,0x19 ,0x07 ,0x23 ,0x02 ,0x00 ,0x12 ,0x99 ,0x78 ,0x20 ,0x19 ,0x12 ,0x30 ,0x20 ,0x29 ,0x12 ,0x30 ,0xD5,0xE3,0x43 ,0x30 ,0x31 ,0x33 ,0x52 ,0x4B ,0x00 ,0x00 ,0x00 ,0x00,0xD5,0xE3 ,0xBD ,0xAD ,0x33 ,0x01 ,0x00 ,0x01 ,0x17 ,0x41 ,0x33 ,0x01 ,0x19 ,0x07 ,0x23 ,0x02 ,0x00 ,0x12 ,0x99 ,0x78 ,0x20 ,0x19 ,0x12 ,0x30 ,0x20 ,0x29 ,0x12 ,0x30 ,0xD5,0xE3,0x43 ,0x30 ,0x31 ,0x33 ,0x52 ,0x4B ,0x00 ,0x00 ,0x00 ,0x00,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,};

    size_t lenght = pack_user_data((const struct etc_msg *)etc_data, buffer);
    printf("User data len: %d\n",lenght);
    hexdump("hex: ", buffer, lenght);
    unpack_user_data(buffer, lenght);
	
	return 0;
}


