#include <stdio.h>
#include <errno.h>
#include "Information.pb-c.h"
#include "protobuf-c/protobuf-c.h"

#define TRUE 1
#define FALSE  0

static size_t pack_user_data(uint8_t *buffer)
{
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
    cardInfo.enabledtime = "200101";
    cardInfo.expiretime = "210101";
    cardInfo.carplatenumber = "浙C78992";
    cardInfo.usertype = 77;
    cardInfo.carplatecolor = 88;
    cardInfo.carmodel = 99;
    //char name[64] = "BenjaminBenjaminBenjamin";
    //information__init(&Info);

    Info.userinfo = &userInfo;
    Info.cardinfo = &cardInfo;

    return information__pack(&Info, buffer);
}

static size_t unpack_user_data(const uint8_t *buffer, size_t len)
{
    Information *Info =  information__unpack(NULL, len, buffer);
    if(!Info){
        printf("user_information__unpack is fail!!!\n");
        return -1;
    }

    //printf("Unpack: %s %d %s %s\n", userInfo->name, userInfo->age, userInfo->phone, userInfo->email);
    const Information__UserInformation *userInfo = Info->userinfo;
    if(userInfo->has_oweridentifier) {
        printf("userInfo->owerIdentifier = %d\n", userInfo->oweridentifier);
    }
    if(userInfo->has_staffidentifier) {
        printf("userInfo->staffidentifier = %d\n", userInfo->staffidentifier);
    }
    if(userInfo->owername[0]) {
        printf("userInfo->owername = %s\n", userInfo->owername);
    }
    if(userInfo->owercertificatenum[0]) {
        printf("userInfo->owercertificatenum = %s\n", userInfo->owercertificatenum);
    }
    if(userInfo->has_owercertificatetype) {
        printf("userInfo->owercertificatetype = %d\n", userInfo->owercertificatetype);
    }

    const Information__CardInformation *cardInfo = Info->cardinfo;
    if(cardInfo->has_usertype) {
        printf("cardInfo->usertype = %d\n", cardInfo->usertype);
    }
    if(cardInfo->carplatenumber[0]) {
        printf("cardInfo->carplatenumber = %s\n", cardInfo->carplatenumber);
    }
    information__free_unpacked(Info, NULL);

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


