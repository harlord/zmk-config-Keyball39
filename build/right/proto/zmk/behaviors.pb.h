/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.9-dev */

#ifndef PB_ZMK_BEHAVIORS_PROTO_ZMK_BEHAVIORS_PB_H_INCLUDED
#define PB_ZMK_BEHAVIORS_PROTO_ZMK_BEHAVIORS_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _zmk_behaviors_GetBehaviorDetailsRequest {
    uint32_t behavior_id;
} zmk_behaviors_GetBehaviorDetailsRequest;

typedef struct _zmk_behaviors_Request {
    pb_size_t which_request_type;
    union {
        bool list_all_behaviors;
        zmk_behaviors_GetBehaviorDetailsRequest get_behavior_details;
    } request_type;
} zmk_behaviors_Request;

typedef struct _zmk_behaviors_ListAllBehaviorsResponse {
    pb_callback_t behaviors;
} zmk_behaviors_ListAllBehaviorsResponse;

typedef struct _zmk_behaviors_GetBehaviorDetailsResponse {
    uint32_t id;
    pb_callback_t display_name;
    pb_callback_t metadata;
} zmk_behaviors_GetBehaviorDetailsResponse;

typedef struct _zmk_behaviors_Response {
    pb_size_t which_response_type;
    union {
        zmk_behaviors_ListAllBehaviorsResponse list_all_behaviors;
        zmk_behaviors_GetBehaviorDetailsResponse get_behavior_details;
    } response_type;
} zmk_behaviors_Response;

typedef struct _zmk_behaviors_BehaviorBindingParametersSet {
    pb_callback_t param1;
    pb_callback_t param2;
} zmk_behaviors_BehaviorBindingParametersSet;

typedef struct _zmk_behaviors_BehaviorParameterValueDescriptionRange {
    int32_t min;
    int32_t max;
} zmk_behaviors_BehaviorParameterValueDescriptionRange;

typedef struct _zmk_behaviors_BehaviorParameterNil {
    char dummy_field;
} zmk_behaviors_BehaviorParameterNil;

typedef struct _zmk_behaviors_BehaviorParameterLayerId {
    char dummy_field;
} zmk_behaviors_BehaviorParameterLayerId;

typedef struct _zmk_behaviors_BehaviorParameterHidUsage {
    uint32_t keyboard_max;
    uint32_t consumer_max;
} zmk_behaviors_BehaviorParameterHidUsage;

typedef struct _zmk_behaviors_BehaviorParameterValueDescription {
    pb_callback_t name;
    pb_size_t which_value_type;
    union {
        zmk_behaviors_BehaviorParameterNil nil;
        uint32_t constant;
        zmk_behaviors_BehaviorParameterValueDescriptionRange range;
        zmk_behaviors_BehaviorParameterHidUsage hid_usage;
        zmk_behaviors_BehaviorParameterLayerId layer_id;
    } value_type;
} zmk_behaviors_BehaviorParameterValueDescription;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define zmk_behaviors_Request_init_default       {0, {0}}
#define zmk_behaviors_GetBehaviorDetailsRequest_init_default {0}
#define zmk_behaviors_Response_init_default      {0, {zmk_behaviors_ListAllBehaviorsResponse_init_default}}
#define zmk_behaviors_ListAllBehaviorsResponse_init_default {{{NULL}, NULL}}
#define zmk_behaviors_GetBehaviorDetailsResponse_init_default {0, {{NULL}, NULL}, {{NULL}, NULL}}
#define zmk_behaviors_BehaviorBindingParametersSet_init_default {{{NULL}, NULL}, {{NULL}, NULL}}
#define zmk_behaviors_BehaviorParameterValueDescriptionRange_init_default {0, 0}
#define zmk_behaviors_BehaviorParameterNil_init_default {0}
#define zmk_behaviors_BehaviorParameterLayerId_init_default {0}
#define zmk_behaviors_BehaviorParameterHidUsage_init_default {0, 0}
#define zmk_behaviors_BehaviorParameterValueDescription_init_default {{{NULL}, NULL}, 0, {zmk_behaviors_BehaviorParameterNil_init_default}}
#define zmk_behaviors_Request_init_zero          {0, {0}}
#define zmk_behaviors_GetBehaviorDetailsRequest_init_zero {0}
#define zmk_behaviors_Response_init_zero         {0, {zmk_behaviors_ListAllBehaviorsResponse_init_zero}}
#define zmk_behaviors_ListAllBehaviorsResponse_init_zero {{{NULL}, NULL}}
#define zmk_behaviors_GetBehaviorDetailsResponse_init_zero {0, {{NULL}, NULL}, {{NULL}, NULL}}
#define zmk_behaviors_BehaviorBindingParametersSet_init_zero {{{NULL}, NULL}, {{NULL}, NULL}}
#define zmk_behaviors_BehaviorParameterValueDescriptionRange_init_zero {0, 0}
#define zmk_behaviors_BehaviorParameterNil_init_zero {0}
#define zmk_behaviors_BehaviorParameterLayerId_init_zero {0}
#define zmk_behaviors_BehaviorParameterHidUsage_init_zero {0, 0}
#define zmk_behaviors_BehaviorParameterValueDescription_init_zero {{{NULL}, NULL}, 0, {zmk_behaviors_BehaviorParameterNil_init_zero}}

/* Field tags (for use in manual encoding/decoding) */
#define zmk_behaviors_GetBehaviorDetailsRequest_behavior_id_tag 1
#define zmk_behaviors_Request_list_all_behaviors_tag 1
#define zmk_behaviors_Request_get_behavior_details_tag 2
#define zmk_behaviors_ListAllBehaviorsResponse_behaviors_tag 1
#define zmk_behaviors_GetBehaviorDetailsResponse_id_tag 1
#define zmk_behaviors_GetBehaviorDetailsResponse_display_name_tag 2
#define zmk_behaviors_GetBehaviorDetailsResponse_metadata_tag 3
#define zmk_behaviors_Response_list_all_behaviors_tag 1
#define zmk_behaviors_Response_get_behavior_details_tag 2
#define zmk_behaviors_BehaviorBindingParametersSet_param1_tag 1
#define zmk_behaviors_BehaviorBindingParametersSet_param2_tag 2
#define zmk_behaviors_BehaviorParameterValueDescriptionRange_min_tag 1
#define zmk_behaviors_BehaviorParameterValueDescriptionRange_max_tag 2
#define zmk_behaviors_BehaviorParameterHidUsage_keyboard_max_tag 1
#define zmk_behaviors_BehaviorParameterHidUsage_consumer_max_tag 2
#define zmk_behaviors_BehaviorParameterValueDescription_name_tag 1
#define zmk_behaviors_BehaviorParameterValueDescription_nil_tag 2
#define zmk_behaviors_BehaviorParameterValueDescription_constant_tag 3
#define zmk_behaviors_BehaviorParameterValueDescription_range_tag 4
#define zmk_behaviors_BehaviorParameterValueDescription_hid_usage_tag 5
#define zmk_behaviors_BehaviorParameterValueDescription_layer_id_tag 6

/* Struct field encoding specification for nanopb */
#define zmk_behaviors_Request_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    BOOL,     (request_type,list_all_behaviors,request_type.list_all_behaviors),   1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (request_type,get_behavior_details,request_type.get_behavior_details),   2)
#define zmk_behaviors_Request_CALLBACK NULL
#define zmk_behaviors_Request_DEFAULT NULL
#define zmk_behaviors_Request_request_type_get_behavior_details_MSGTYPE zmk_behaviors_GetBehaviorDetailsRequest

#define zmk_behaviors_GetBehaviorDetailsRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   behavior_id,       1)
#define zmk_behaviors_GetBehaviorDetailsRequest_CALLBACK NULL
#define zmk_behaviors_GetBehaviorDetailsRequest_DEFAULT NULL

#define zmk_behaviors_Response_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (response_type,list_all_behaviors,response_type.list_all_behaviors),   1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (response_type,get_behavior_details,response_type.get_behavior_details),   2)
#define zmk_behaviors_Response_CALLBACK NULL
#define zmk_behaviors_Response_DEFAULT NULL
#define zmk_behaviors_Response_response_type_list_all_behaviors_MSGTYPE zmk_behaviors_ListAllBehaviorsResponse
#define zmk_behaviors_Response_response_type_get_behavior_details_MSGTYPE zmk_behaviors_GetBehaviorDetailsResponse

#define zmk_behaviors_ListAllBehaviorsResponse_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, UINT32,   behaviors,         1)
#define zmk_behaviors_ListAllBehaviorsResponse_CALLBACK pb_default_field_callback
#define zmk_behaviors_ListAllBehaviorsResponse_DEFAULT NULL

#define zmk_behaviors_GetBehaviorDetailsResponse_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   id,                1) \
X(a, CALLBACK, SINGULAR, STRING,   display_name,      2) \
X(a, CALLBACK, REPEATED, MESSAGE,  metadata,          3)
#define zmk_behaviors_GetBehaviorDetailsResponse_CALLBACK pb_default_field_callback
#define zmk_behaviors_GetBehaviorDetailsResponse_DEFAULT NULL
#define zmk_behaviors_GetBehaviorDetailsResponse_metadata_MSGTYPE zmk_behaviors_BehaviorBindingParametersSet

#define zmk_behaviors_BehaviorBindingParametersSet_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  param1,            1) \
X(a, CALLBACK, REPEATED, MESSAGE,  param2,            2)
#define zmk_behaviors_BehaviorBindingParametersSet_CALLBACK pb_default_field_callback
#define zmk_behaviors_BehaviorBindingParametersSet_DEFAULT NULL
#define zmk_behaviors_BehaviorBindingParametersSet_param1_MSGTYPE zmk_behaviors_BehaviorParameterValueDescription
#define zmk_behaviors_BehaviorBindingParametersSet_param2_MSGTYPE zmk_behaviors_BehaviorParameterValueDescription

#define zmk_behaviors_BehaviorParameterValueDescriptionRange_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT32,    min,               1) \
X(a, STATIC,   SINGULAR, INT32,    max,               2)
#define zmk_behaviors_BehaviorParameterValueDescriptionRange_CALLBACK NULL
#define zmk_behaviors_BehaviorParameterValueDescriptionRange_DEFAULT NULL

#define zmk_behaviors_BehaviorParameterNil_FIELDLIST(X, a) \

#define zmk_behaviors_BehaviorParameterNil_CALLBACK NULL
#define zmk_behaviors_BehaviorParameterNil_DEFAULT NULL

#define zmk_behaviors_BehaviorParameterLayerId_FIELDLIST(X, a) \

#define zmk_behaviors_BehaviorParameterLayerId_CALLBACK NULL
#define zmk_behaviors_BehaviorParameterLayerId_DEFAULT NULL

#define zmk_behaviors_BehaviorParameterHidUsage_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   keyboard_max,      1) \
X(a, STATIC,   SINGULAR, UINT32,   consumer_max,      2)
#define zmk_behaviors_BehaviorParameterHidUsage_CALLBACK NULL
#define zmk_behaviors_BehaviorParameterHidUsage_DEFAULT NULL

#define zmk_behaviors_BehaviorParameterValueDescription_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   name,              1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (value_type,nil,value_type.nil),   2) \
X(a, STATIC,   ONEOF,    UINT32,   (value_type,constant,value_type.constant),   3) \
X(a, STATIC,   ONEOF,    MESSAGE,  (value_type,range,value_type.range),   4) \
X(a, STATIC,   ONEOF,    MESSAGE,  (value_type,hid_usage,value_type.hid_usage),   5) \
X(a, STATIC,   ONEOF,    MESSAGE,  (value_type,layer_id,value_type.layer_id),   6)
#define zmk_behaviors_BehaviorParameterValueDescription_CALLBACK pb_default_field_callback
#define zmk_behaviors_BehaviorParameterValueDescription_DEFAULT NULL
#define zmk_behaviors_BehaviorParameterValueDescription_value_type_nil_MSGTYPE zmk_behaviors_BehaviorParameterNil
#define zmk_behaviors_BehaviorParameterValueDescription_value_type_range_MSGTYPE zmk_behaviors_BehaviorParameterValueDescriptionRange
#define zmk_behaviors_BehaviorParameterValueDescription_value_type_hid_usage_MSGTYPE zmk_behaviors_BehaviorParameterHidUsage
#define zmk_behaviors_BehaviorParameterValueDescription_value_type_layer_id_MSGTYPE zmk_behaviors_BehaviorParameterLayerId

extern const pb_msgdesc_t zmk_behaviors_Request_msg;
extern const pb_msgdesc_t zmk_behaviors_GetBehaviorDetailsRequest_msg;
extern const pb_msgdesc_t zmk_behaviors_Response_msg;
extern const pb_msgdesc_t zmk_behaviors_ListAllBehaviorsResponse_msg;
extern const pb_msgdesc_t zmk_behaviors_GetBehaviorDetailsResponse_msg;
extern const pb_msgdesc_t zmk_behaviors_BehaviorBindingParametersSet_msg;
extern const pb_msgdesc_t zmk_behaviors_BehaviorParameterValueDescriptionRange_msg;
extern const pb_msgdesc_t zmk_behaviors_BehaviorParameterNil_msg;
extern const pb_msgdesc_t zmk_behaviors_BehaviorParameterLayerId_msg;
extern const pb_msgdesc_t zmk_behaviors_BehaviorParameterHidUsage_msg;
extern const pb_msgdesc_t zmk_behaviors_BehaviorParameterValueDescription_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define zmk_behaviors_Request_fields &zmk_behaviors_Request_msg
#define zmk_behaviors_GetBehaviorDetailsRequest_fields &zmk_behaviors_GetBehaviorDetailsRequest_msg
#define zmk_behaviors_Response_fields &zmk_behaviors_Response_msg
#define zmk_behaviors_ListAllBehaviorsResponse_fields &zmk_behaviors_ListAllBehaviorsResponse_msg
#define zmk_behaviors_GetBehaviorDetailsResponse_fields &zmk_behaviors_GetBehaviorDetailsResponse_msg
#define zmk_behaviors_BehaviorBindingParametersSet_fields &zmk_behaviors_BehaviorBindingParametersSet_msg
#define zmk_behaviors_BehaviorParameterValueDescriptionRange_fields &zmk_behaviors_BehaviorParameterValueDescriptionRange_msg
#define zmk_behaviors_BehaviorParameterNil_fields &zmk_behaviors_BehaviorParameterNil_msg
#define zmk_behaviors_BehaviorParameterLayerId_fields &zmk_behaviors_BehaviorParameterLayerId_msg
#define zmk_behaviors_BehaviorParameterHidUsage_fields &zmk_behaviors_BehaviorParameterHidUsage_msg
#define zmk_behaviors_BehaviorParameterValueDescription_fields &zmk_behaviors_BehaviorParameterValueDescription_msg

/* Maximum encoded size of messages (where known) */
/* zmk_behaviors_Response_size depends on runtime parameters */
/* zmk_behaviors_ListAllBehaviorsResponse_size depends on runtime parameters */
/* zmk_behaviors_GetBehaviorDetailsResponse_size depends on runtime parameters */
/* zmk_behaviors_BehaviorBindingParametersSet_size depends on runtime parameters */
/* zmk_behaviors_BehaviorParameterValueDescription_size depends on runtime parameters */
#define ZMK_BEHAVIORS_PROTO_ZMK_BEHAVIORS_PB_H_MAX_SIZE zmk_behaviors_BehaviorParameterValueDescriptionRange_size
#define zmk_behaviors_BehaviorParameterHidUsage_size 12
#define zmk_behaviors_BehaviorParameterLayerId_size 0
#define zmk_behaviors_BehaviorParameterNil_size  0
#define zmk_behaviors_BehaviorParameterValueDescriptionRange_size 22
#define zmk_behaviors_GetBehaviorDetailsRequest_size 6
#define zmk_behaviors_Request_size               8

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
