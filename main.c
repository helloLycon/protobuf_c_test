#include <stdio.h>
#include <errno.h>
#include "Information.pb-c.h"
#include "protobuf-c/protobuf-c.h"

#define TRUE 1
#define FALSE  0

static size_t pack_user_data(uint8_t *buffer)
{
    RepeatedInformation repInfo = REPEATED_INFORMATION__INIT;
    Information Info = INFORMATION__INIT;
    Information__UserInformation userInfo = INFORMATION__USER_INFORMATION__INIT;
    /* 有数据要设置has_xxx字段 */
    userInfo.has_oweridentifier = TRUE;
    userInfo.oweridentifier = 11;
    userInfo.has_staffidentifier = TRUE;
    userInfo.staffidentifier = 22;
    userInfo.owername = "mike";
    userInfo.owercertificatenum = "157541653754235432451571454";
    userInfo.has_owercertificatetype = TRUE;
    userInfo.owercertificatetype = 3333;

    Information__CardInformation cardInfo = INFORMATION__CARD_INFORMATION__INIT;
    cardInfo.cardissueridentifier = "abcdefg";
    cardInfo.cardtype = 44;
    cardInfo.cardversion = 55;
    cardInfo.cardnetworknum = 66;
    //cardInfo.enabledtime = "200101";
    cardInfo.expiretime = "210101";
    cardInfo.carplatenumber = "浙C78992";
    cardInfo.usertype = 77;
    cardInfo.carplatecolor = 88;
    cardInfo.carmodel = 99;
    //char name[64] = "BenjaminBenjaminBenjamin";
    //information__init(&Info);

    Info.userinfo = &userInfo;
    Info.cardinfo = &cardInfo;
    Information *infoList[2] = {&Info, &Info/* &Info2, &Info3 */};
    repInfo.infos = infoList;
    repInfo.n_infos = 2;       /* Info数量 */

    return repeated_information__pack(&repInfo, buffer);
}

static size_t unpack_user_data(const uint8_t *buffer, size_t len)
{
    RepeatedInformation *repInfo =  repeated_information__unpack(NULL, len, buffer);
    if(!repInfo){
        printf("repeated_information__unpack is fail!!!\n");
        return -1;
    }

    //printf("Unpack: %s %d %s %s\n", userInfo->name, userInfo->age, userInfo->phone, userInfo->email);
    const Information__UserInformation *userInfo = repInfo->infos[0]->userinfo;
    if(userInfo->has_oweridentifier) {
        printf("userInfo->owerIdentifier = %d\n", userInfo->oweridentifier);
    }
    if(userInfo->has_staffidentifier) {
        printf("userInfo->staffidentifier = %d\n", userInfo->staffidentifier);
    }
    if(userInfo->owername) {
        printf("userInfo->owername = %s\n", userInfo->owername);
    }
    if(userInfo->owercertificatenum) {
        printf("userInfo->owercertificatenum = %s\n", userInfo->owercertificatenum);
    }
    if(userInfo->has_owercertificatetype) {
        printf("userInfo->owercertificatetype = %d\n", userInfo->owercertificatetype);
    }

    const Information__CardInformation *cardInfo = repInfo->infos[0]->cardinfo;
    if(cardInfo->cardissueridentifier) {
        printf("cardInfo->cardissueridentifier = %s\n", cardInfo->cardissueridentifier);
    }
    if(cardInfo->has_cardtype) {
        printf("cardInfo->cardtype = %d\n", cardInfo->cardtype);
    }
    if(cardInfo->has_cardversion) {
        printf("cardInfo->cardversion = %d\n", cardInfo->cardversion);
    }
    if(cardInfo->has_cardnetworknum) {
        printf("cardInfo->cardnetworknum = %d\n", cardInfo->cardnetworknum);
    }
    if(cardInfo->has_carduserinternalnum) {
        printf("cardInfo->carduserinternalnum = %d\n", cardInfo->carduserinternalnum);
    }
    if(cardInfo->enabledtime) {
        printf("cardInfo->enabledtime = %s\n", cardInfo->enabledtime);
    }
    if(cardInfo->expiretime) {
        printf("cardInfo->expiretime = %s\n", cardInfo->expiretime);
    }
    if(cardInfo->carplatenumber) {
        printf("cardInfo->carplatenumber = %s\n", cardInfo->carplatenumber);
    }
    if(cardInfo->has_usertype) {
        printf("cardInfo->usertype = %d\n", cardInfo->usertype);
    }
    if(cardInfo->has_carplatecolor) {
        printf("cardInfo->carplatecolor = %d\n", cardInfo->carplatecolor);
    }
    if(cardInfo->has_carmodel) {
        printf("cardInfo->carmodel = %d\n", cardInfo->carmodel);
    }

/*------------------------------ infos[1] -----------------------------*/
    //printf("Unpack: %s %d %s %s\n", userInfo->name, userInfo->age, userInfo->phone, userInfo->email);
    const Information__UserInformation *userInfo2 = repInfo->infos[1]->userinfo;
    if(userInfo2->has_oweridentifier) {
        printf("userInfo->owerIdentifier = %d\n", userInfo2->oweridentifier);
    }
    if(userInfo2->has_staffidentifier) {
        printf("userInfo->staffidentifier = %d\n", userInfo2->staffidentifier);
    }
    if(userInfo2->owername) {
        printf("userInfo->owername = %s\n", userInfo2->owername);
    }
    if(userInfo2->owercertificatenum) {
        printf("userInfo->owercertificatenum = %s\n", userInfo2->owercertificatenum);
    }
    if(userInfo2->has_owercertificatetype) {
        printf("userInfo->owercertificatetype = %d\n", userInfo2->owercertificatetype);
    }

    const Information__CardInformation *cardInfo2 = repInfo->infos[1]->cardinfo;
    if(cardInfo2->cardissueridentifier) {
        printf("cardInfo->cardissueridentifier = %s\n", cardInfo2->cardissueridentifier);
    }
    if(cardInfo2->has_cardtype) {
        printf("cardInfo->cardtype = %d\n", cardInfo2->cardtype);
    }
    if(cardInfo2->has_cardversion) {
        printf("cardInfo->cardversion = %d\n", cardInfo2->cardversion);
    }
    if(cardInfo2->has_cardnetworknum) {
        printf("cardInfo->cardnetworknum = %d\n", cardInfo2->cardnetworknum);
    }
    if(cardInfo2->has_carduserinternalnum) {
        printf("cardInfo->carduserinternalnum = %d\n", cardInfo2->carduserinternalnum);
    }
    if(cardInfo2->enabledtime) {
        printf("cardInfo->enabledtime = %s\n", cardInfo2->enabledtime);
    }
    if(cardInfo2->expiretime) {
        printf("cardInfo->expiretime = %s\n", cardInfo2->expiretime);
    }
    if(cardInfo2->carplatenumber) {
        printf("cardInfo->carplatenumber = %s\n", cardInfo2->carplatenumber);
    }
    if(cardInfo2->has_usertype) {
        printf("cardInfo->usertype = %d\n", cardInfo2->usertype);
    }
    if(cardInfo2->has_carplatecolor) {
        printf("cardInfo->carplatecolor = %d\n", cardInfo2->carplatecolor);
    }
    if(cardInfo2->has_carmodel) {
        printf("cardInfo->carmodel = %d\n", cardInfo2->carmodel);
    }
    repeated_information__free_unpacked(repInfo, NULL);
    return 0;
}

void hexdump(const void *data, int len) {
    printf("hex: ");
    for(int i=0; i<len; i++) {
        printf("0x%02x, ", ((const unsigned char *)data)[i]);
    }
    printf("\n");
}

int main()
{
    uint8_t buffer[1024];
    
    size_t lenght = pack_user_data(buffer);
    printf("User data len: %d\n",lenght);
    hexdump(buffer, lenght);
    unpack_user_data(buffer, lenght);
	
	return 0;
}


