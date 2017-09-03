/** 
 * @file tup_confctrl_advanced_interface.h
 * 
 * Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header files of TUP conference control subsystem basic service function interface
 * [cn]描述：TUP 会议控制子系统基础业务功能接口头文件。 \n
 **/


#ifndef __CONFCTRL_ADVANCED_INTERFACE_H__
#define __CONFCTRL_ADVANCED_INTERFACE_H__

#include "tup_confctrl_advanced_def.h"
#include "tup_confctrl_interface.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


/**
 * @ingroup ConfMng
 * @brief [en]This interface is used to get conference list(synchronize interface).
 *        <br>[cn]获取会议列表 (同步接口)
 * 
 * @param [in] const TUP_VOID* get_conf_list  <b>:</b><br>[en]Indicates to get conference list info request structure.
 *                                                    <br>[en]On-premise VC meeting and Hosted VC meeting, not support at present.
 *                                                    <br>[en]In Convergent meeting(include PBX internal conference), corresponding structure is CONFCTRL_S_GET_CONF_LIST.
 *                                                    <br>[cn]获取会议列表信息请求结构 
 *                                                    <br>[cn]On-premise VC会议和Hosted VC会议，暂不支持； 
 *                                                    <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的数据结构为CONFCTRL_S_GET_CONF_LIST；
 * @param [out] TUP_VOID* conf_info           <b>:</b><br>[en]Indicates conference list information, the need for upper application space, the upper layer
 *                                                    <br>[en]should be allocated corresponding to the size of the data structure get_conf_list.page_size times the size of memory.
 *                                                    <br>[en]In Convergent meeting(include PBX internal conference), corresponding structure is CONFCTRL_S_CONF_LIST_INFO.
 *                                                    <br>[cn]会议列表信息,需要上层申请空间，上层应该分配对应数据结构大小的get_conf_list.page_size倍大小内存
 *                                                    <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的数据结构为CONFCTRL_S_CONF_LIST_INFO；
 * @param [out] TUP_UINT32* num_of_conf       <b>:</b><br>[en]Indicates number of conference whose size less or equal than get_conf_list.page_size.
 *                                                    <br>[cn]表示获取到的会议信息个数，个数小于等于get_conf_list.page_size
 * @param [out] TUP_UINT32* total_conf_num    <b>:</b><br>[en]Indicates total conference number.
 *                                                    <br>[cn]总的会议个数
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_get_conf_list_syn(IN const TUP_VOID* get_conf_list, OUT TUP_VOID* conf_info, OUT TUP_UINT32* num_of_conf, OUT TUP_UINT32* total_conf_num);



/**
 * @ingroup ConfMng
 * @brief [en]This interface is used to get detail info of conference(sychronize interface).
 *        <br>[cn]获取会议详细信息 (同步接口)
 * 
 * @param [in] const TUP_VOID* get_conf_list  <b>:</b><br>[en]Indicates get detail info of conference request structure.
 *                                                    <br>[en]On-premise VC meeting and Hosted VC meeting, not support at present.
 *                                                    <br>[en]In Convergent meeting(include PBX internal conference), corresponding structure is CONFCTRL_S_CONF_LIST_INFO.
 *                                                    <br>[cn]获取获取会议详细信息请求结构 
 *                                                    <br>[cn]On-premise VC会议和Hosted VC会议，暂不支持； 
 *                                                    <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的数据结构为CONFCTRL_S_GET_CONF_INFO；
 * @param [out] TUP_VOID* conf_info           <b>:</b><br>[en]Indicates conference list information, the need for upper application space, the upper layer
 *                                                    <br>[en]should be allocated corresponding to the size of the data structure get_conf_list.page_size times the size of memory.
 *                                                    <br>[en]In Convergent meeting(include PBX internal conference), corresponding struct is CONFCTRL_S_GET_CONF_INFO_RESULT，conf_info->attendee, memory to be allocated by the upper, the size of get_conf_info->page_size * sizeof(CONFCTRL_S_ATTENDEE).
 *                                                    <br>[cn]会议列表信息,需要上层申请空间，上层应该分配对应数据结构大小的get_conf_info.page_size倍大小内存 
 *                                                    <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的数据结构为CONFCTRL_S_GET_CONF_INFO_RESULT，conf_info->attendee内存要由上层分配，大小为 get_conf_info->page_size * sizeof(CONFCTRL_S_ATTENDEE)
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_get_conf_info_syn(IN const TUP_VOID* get_conf_info, OUT TUP_VOID* conf_info);



/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to get info of joining data conf (sychronize interface).
 *        <br>[cn]获取数据会议入会参数信息(同步接口)
 * 
 * @param [in] const CONFCTRL_S_GET_DATACONF_PARAMS* get_params  <b>:</b><br>[en]Indicates info of joining data conf request struct.
 *                                                                  <br>[cn]获取会议大参数入参
 * @param [io] TUP_CHAR* conf_params                        <b>:</b><br>[en]Indicates the data conference membership information, UI needs to allocate memory storage.
 *                                                                  <br>[cn]数据会议入会参数信息，UI需要自行分配内存存储。
 * @param [io] TUP_UINT32* data_len                         <b>:</b><br>[en]Indicates need to allocate the conf_params memory size of the UI to return to the conference parameters of large data length, maximum length CONFCTRL_MAX_CONFPARAMS_LENGTH.
 *                                                                  <br>[cn]需要将UI分配的conf_params内存大小传入，返回会议大参数数据长度，最大长度CONFCTRL_MAX_CONFPARAMS_LENGTH
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Indicates the data conference membership information is generally known as the "big data conference parameters", this interface is used in On-premise VC meeting, Hosted VC meeting and Convergent meeting(include PBX built-in Conference).
 *            <br>[cn]数据会议入会信息一般被称为"数据会议大参数"，此接口适用于On-premise VC会议、Hosted VC会议和Convergent meeting 融合会议(包括PBX内置会议)
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_get_dataconf_params_xml_syn(IN const CONFCTRL_S_GET_DATACONF_PARAMS* get_params, OUT TUP_CHAR* conf_params, IO TUP_UINT32* data_len);


/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to get info of joining data conference (synchronize interface)(big param has been parsed).
 *        <br>[cn]获取数据会议入会参数信息(同步接口),(大参数已解析)
 * 
 * @param [in] const CONFCTRL_S_GET_DATACONF_PARAMS* get_params  <b>:</b><br>[en]Indicates info of joining data conf request struct.
 *                                                                       <br>[cn]获取会议大参数入参
 * @param [out] CONFCTRL_S_DATACONF_PARAMS * conf_params         <b>:</b><br>[en]Indicates the data conference membership information, has to parse large parameter.
 *                                                                       <br>[cn]数据会议入会参数信息，已对大参数进行解析。
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Indicates the data conference membership information is generally known as the "big data conference parameters", this interface is used in On-premise VC meeting, Hosted VC meeting and Convergent meeting(include PBX built-in Conference).
 *            <br>[cn]数据会议入会信息一般被称为"数据会议大参数"，此接口适用于On-premise VC会议、Hosted VC会议和Convergent meeting 融合会议(包括PBX内置会议)
 * @see NA
 */
TUP_API TUP_RESULT tup_confctrl_get_dataconf_params_syn(IN const CONFCTRL_S_GET_DATACONF_PARAMS* get_params, OUT CONFCTRL_S_DATACONF_PARAMS* conf_params);

/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to get conference resource(MCU network, mediax network),synchronize interface.
 *        <br>[cn]获取会议资源(MCU组网 mediax组网)，同步接口
 * 
 * @param [in] const CONFCTRL_S_GET_CONF_RESOURCE *get_params  <b>:</b><br>[en]Indicates param of getting conf resource.
 *                                                                    <br>[cn]获取会议资源需要的入参信息
 * @param [io] TUP_CHAR *conf_resource                        <b>:</b><br>[en]Indicates conference resources, UI need to allocate their own memory storage.
 *                                                                    <br>[cn]会议资源，UI需要自行分配内存存储。
 * @param [io] TUP_UINT32 *data_len                           <b>:</b><br>[en]Indicates need to allocate the conf_resource memory size UI incoming, return to the conference resource data length, maximum length CONFCTRL_MAX_CONFRESOURCE_LENGTH.
 *                                                                    <br>[cn]需要将UI分配的conf_resource内存大小传入，返回会议资源数据长度，最大长度CONFCTRL_MAX_CONFRESOURCE_LENGTH
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_get_conf_resource_syn(IN const CONFCTRL_S_GET_CONF_RESOURCE *get_params, IO TUP_CHAR *conf_resource, IO TUP_UINT32 *data_len);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set conference control protocol trpe.
 *        <br>[cn]设置会控协议类型
 * 
 * @param [in] CONFCTRL_E_PROTOCOL_TYPE eProtocolType   <b>:</b><br>[en]Indicates protocol type.
 *                                                      <br>[cn]会控协议类型
 * @see NA
 **/
TUP_API  TUP_VOID tup_confctrl_set_protocol_type(IN CONFCTRL_E_PROTOCOL_TYPE eProtocolType);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to end conference, not destory conf handle(uportal network).
 *        <br>[cn]结束会议,不释放会议控制块
 * 
 * @param [in] TUP_UINT32 conf_handle      <b>:</b><br>[en]Indicates conference handle.
 *                                                 <br>[cn]会控句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]In convergent meeting(include PBX internal conference), chairman side receive end conference result: CONFCTRL_E_EVT_END_CONF_RESULT, other attendee receive corresponding conference end notification: CONFCTRL_E_EVT_END_CONF_IND.
 *            [en]In On-premise VC meeting、Hosted VC meeting, chairman side and other attendee sides will receive call end notification: CALL_E_EVT_CALL_ENDED and delete call id notification:CALL_E_EVT_CALL_DESTROY.
 *            <br>[cn]在Convergent meeting 融合会议(包括PBX内置会议)下，主席侧收到结束会议结果:CONFCTRL_E_EVT_END_CONF_RESULT，其他与会者收到对应的会议结束通知CONFCTRL_E_EVT_END_CONF_IND
 *            <br>[cn]在On-premise VC会议、Hosted VC会议下，主席侧和其他与会者侧都会收到呼叫结束通知:CALL_E_EVT_CALL_ENDED和删除呼叫ID通知:CALL_E_EVT_CALL_DESTROY
 * @see CONFCTRL_E_EVT_END_CONF_IND 
 **/
TUP_API  TUP_RESULT tup_confctrl_end_conf_ex(IN TUP_UINT32 conf_handle);

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#endif  /* __CONFCTRL_ADVANCED_INTERFACE_H__ */
