/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: Infos-ETC.proto */

#ifndef PROTOBUF_C_Infos_2dETC_2eproto__INCLUDED
#define PROTOBUF_C_Infos_2dETC_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Infos Infos;
typedef struct _Infos__Information Infos__Information;


/* --- enums --- */


/* --- messages --- */

struct  _Infos__Information
{
  ProtobufCMessage base;
  protobuf_c_boolean has_ubmac;
  ProtobufCBinaryData ubmac;
  protobuf_c_boolean has_time;
  uint32_t time;
  /*
   *发卡方标识
   */
  protobuf_c_boolean has_cardissuerid;
  ProtobufCBinaryData cardissuerid;
  /*
   *卡片类型
   */
  protobuf_c_boolean has_cardtype;
  ProtobufCBinaryData cardtype;
  /*
   *卡片版本号
   */
  protobuf_c_boolean has_cardver;
  ProtobufCBinaryData cardver;
  /*
   *卡片网络编号
   */
  protobuf_c_boolean has_cardnetid;
  ProtobufCBinaryData cardnetid;
  /*
   *用户卡内部编号
   */
  protobuf_c_boolean has_cardinternalid;
  ProtobufCBinaryData cardinternalid;
  /*
   *启用时间
   */
  protobuf_c_boolean has_enabletime;
  ProtobufCBinaryData enabletime;
  /*
   *到期时间
   */
  protobuf_c_boolean has_expiredtime;
  ProtobufCBinaryData expiredtime;
  /*
   *	车牌号码
   */
  protobuf_c_boolean has_carno;
  ProtobufCBinaryData carno;
  /*
   *用户类型
   */
  protobuf_c_boolean has_usertype;
  ProtobufCBinaryData usertype;
  /*
   *	车牌颜色
   */
  protobuf_c_boolean has_carcolor;
  ProtobufCBinaryData carcolor;
  /*
   *车型
   */
  protobuf_c_boolean has_carmodel;
  ProtobufCBinaryData carmodel;
  /*
   *持卡人姓名
   */
  protobuf_c_boolean has_cardholdername;
  ProtobufCBinaryData cardholdername;
  /*
   *持卡人证件号码
   */
  protobuf_c_boolean has_cardholderid;
  ProtobufCBinaryData cardholderid;
  /*
   *持卡人证件类型
   */
  protobuf_c_boolean has_cardholderidtype;
  ProtobufCBinaryData cardholderidtype;
};
#define INFOS__INFORMATION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&infos__information__descriptor) \
    , 0, {0,NULL}, 0, 0, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL} }


struct  _Infos
{
  ProtobufCMessage base;
  size_t n_information;
  Infos__Information **information;
};
#define INFOS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&infos__descriptor) \
    , 0,NULL }


/* Infos__Information methods */
void   infos__information__init
                     (Infos__Information         *message);
/* Infos methods */
void   infos__init
                     (Infos         *message);
size_t infos__get_packed_size
                     (const Infos   *message);
size_t infos__pack
                     (const Infos   *message,
                      uint8_t             *out);
size_t infos__pack_to_buffer
                     (const Infos   *message,
                      ProtobufCBuffer     *buffer);
Infos *
       infos__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   infos__free_unpacked
                     (Infos *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Infos__Information_Closure)
                 (const Infos__Information *message,
                  void *closure_data);
typedef void (*Infos_Closure)
                 (const Infos *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor infos__descriptor;
extern const ProtobufCMessageDescriptor infos__information__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_Infos_2dETC_2eproto__INCLUDED */
