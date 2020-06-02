/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: Infos-ETC.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "Infos-ETC.pb-c.h"
void   infos__information__init
                     (Infos__Information         *message)
{
  static const Infos__Information init_value = INFOS__INFORMATION__INIT;
  *message = init_value;
}
void   infos__init
                     (Infos         *message)
{
  static const Infos init_value = INFOS__INIT;
  *message = init_value;
}
size_t infos__get_packed_size
                     (const Infos *message)
{
  assert(message->base.descriptor == &infos__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t infos__pack
                     (const Infos *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &infos__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t infos__pack_to_buffer
                     (const Infos *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &infos__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Infos *
       infos__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Infos *)
     protobuf_c_message_unpack (&infos__descriptor,
                                allocator, len, data);
}
void   infos__free_unpacked
                     (Infos *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &infos__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor infos__information__field_descriptors[15] =
{
  {
    "cardIssuerID",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Infos__Information, has_cardissuerid),
    offsetof(Infos__Information, cardissuerid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cardType",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Infos__Information, has_cardtype),
    offsetof(Infos__Information, cardtype),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cardVer",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Infos__Information, has_cardver),
    offsetof(Infos__Information, cardver),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cardNetID",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Infos__Information, has_cardnetid),
    offsetof(Infos__Information, cardnetid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cardInternalID",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Infos__Information, has_cardinternalid),
    offsetof(Infos__Information, cardinternalid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "enableTime",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Infos__Information, has_enabletime),
    offsetof(Infos__Information, enabletime),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "expiredTime",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Infos__Information, has_expiredtime),
    offsetof(Infos__Information, expiredtime),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "carNO",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Infos__Information, has_carno),
    offsetof(Infos__Information, carno),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "userType",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Infos__Information, has_usertype),
    offsetof(Infos__Information, usertype),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "carColor",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Infos__Information, has_carcolor),
    offsetof(Infos__Information, carcolor),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "carModel",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Infos__Information, has_carmodel),
    offsetof(Infos__Information, carmodel),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cardHolderName",
    12,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Infos__Information, has_cardholdername),
    offsetof(Infos__Information, cardholdername),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cardHolderID",
    13,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Infos__Information, has_cardholderid),
    offsetof(Infos__Information, cardholderid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cardHolderIDType",
    14,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Infos__Information, has_cardholderidtype),
    offsetof(Infos__Information, cardholderidtype),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "obuMac",
    15,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Infos__Information, has_obumac),
    offsetof(Infos__Information, obumac),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned infos__information__field_indices_by_name[] = {
  9,   /* field[9] = carColor */
  10,   /* field[10] = carModel */
  7,   /* field[7] = carNO */
  12,   /* field[12] = cardHolderID */
  13,   /* field[13] = cardHolderIDType */
  11,   /* field[11] = cardHolderName */
  4,   /* field[4] = cardInternalID */
  0,   /* field[0] = cardIssuerID */
  3,   /* field[3] = cardNetID */
  1,   /* field[1] = cardType */
  2,   /* field[2] = cardVer */
  5,   /* field[5] = enableTime */
  6,   /* field[6] = expiredTime */
  14,   /* field[14] = obuMac */
  8,   /* field[8] = userType */
};
static const ProtobufCIntRange infos__information__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 15 }
};
const ProtobufCMessageDescriptor infos__information__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Infos.Information",
  "Information",
  "Infos__Information",
  "",
  sizeof(Infos__Information),
  15,
  infos__information__field_descriptors,
  infos__information__field_indices_by_name,
  1,  infos__information__number_ranges,
  (ProtobufCMessageInit) infos__information__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor infos__field_descriptors[1] =
{
  {
    "information",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Infos, n_information),
    offsetof(Infos, information),
    &infos__information__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned infos__field_indices_by_name[] = {
  0,   /* field[0] = information */
};
static const ProtobufCIntRange infos__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor infos__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Infos",
  "Infos",
  "Infos",
  "",
  sizeof(Infos),
  1,
  infos__field_descriptors,
  infos__field_indices_by_name,
  1,  infos__number_ranges,
  (ProtobufCMessageInit) infos__init,
  NULL,NULL,NULL    /* reserved[123] */
};
