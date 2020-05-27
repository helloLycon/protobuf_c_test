/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: UserInformation.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "UserInformation.pb-c.h"
void   user_information__init
                     (UserInformation         *message)
{
  static const UserInformation init_value = USER_INFORMATION__INIT;
  *message = init_value;
}
size_t user_information__get_packed_size
                     (const UserInformation *message)
{
  assert(message->base.descriptor == &user_information__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t user_information__pack
                     (const UserInformation *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &user_information__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t user_information__pack_to_buffer
                     (const UserInformation *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &user_information__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
UserInformation *
       user_information__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (UserInformation *)
     protobuf_c_message_unpack (&user_information__descriptor,
                                allocator, len, data);
}
void   user_information__free_unpacked
                     (UserInformation *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &user_information__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor user_information__field_descriptors[5] =
{
  {
    "name",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(UserInformation, name),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "age",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(UserInformation, has_age),
    offsetof(UserInformation, age),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "phone",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(UserInformation, phone),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "stat",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    offsetof(UserInformation, has_stat),
    offsetof(UserInformation, stat),
    &user_status__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "email",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(UserInformation, email),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned user_information__field_indices_by_name[] = {
  1,   /* field[1] = age */
  4,   /* field[4] = email */
  0,   /* field[0] = name */
  2,   /* field[2] = phone */
  3,   /* field[3] = stat */
};
static const ProtobufCIntRange user_information__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor user_information__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "UserInformation",
  "UserInformation",
  "UserInformation",
  "",
  sizeof(UserInformation),
  5,
  user_information__field_descriptors,
  user_information__field_indices_by_name,
  1,  user_information__number_ranges,
  (ProtobufCMessageInit) user_information__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue user_status__enum_values_by_number[3] =
{
  { "UNKNOWN", "USER_STATUS__UNKNOWN", 0 },
  { "IDLE", "USER_STATUS__IDLE", 1 },
  { "BUSY", "USER_STATUS__BUSY", 2 },
};
static const ProtobufCIntRange user_status__value_ranges[] = {
{0, 0},{0, 3}
};
static const ProtobufCEnumValueIndex user_status__enum_values_by_name[3] =
{
  { "BUSY", 2 },
  { "IDLE", 1 },
  { "UNKNOWN", 0 },
};
const ProtobufCEnumDescriptor user_status__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "UserStatus",
  "UserStatus",
  "UserStatus",
  "",
  3,
  user_status__enum_values_by_number,
  3,
  user_status__enum_values_by_name,
  1,
  user_status__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
