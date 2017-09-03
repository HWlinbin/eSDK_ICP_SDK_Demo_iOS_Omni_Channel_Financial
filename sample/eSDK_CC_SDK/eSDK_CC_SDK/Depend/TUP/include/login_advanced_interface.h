/** 
 * @file login_interface.h
 * 
 * Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header file of the TUP authorize and login component interface.
 * [cn]描述：TUP 统一鉴权与登录组件功能接口头文件。 \n
 **/


#ifndef __LOGIN_INTERFACE_ADVANCED_H__
#define __LOGIN_INTERFACE_ADVANCED_H__

#include "login_advanced_def.h"
#include "login_interface.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/**
 * @defgroup AdvancedAPI
 * @brief [en]This module is about authentication and login advanced interface. For internal use only, do not support open.
 *        <br>[cn]鉴权与登录高级接口，内部使用接口，不支持开放
 **/



/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get the personal Portal login authentication nonce.
 *        <br>[cn]获取个人Portal登录鉴权凭证
 * 
 * @param [in] const TUP_CHAR* auth_token  <b>:</b><br>[en]Indicates the token returned by the authentication login.
 *                                                 <br>[cn]鉴权登录返回的Token
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @retval LOGIN_E_EVT_GET_NONCE_RESULT    <b>:</b><br>[en]Indicates the event message returned asynchronously.
 *                                                 <br>[cn]异步返回的事件消息
 * 
 * @attention [en]Hosted EC & PBX solution for the application to access the individual portal (PC link to the individual Portal page), the corresponding callback notification message: LOGIN_E_EVT_GET_NONCE_RESULT.
 *            <br>[cn]Hosted EC&PBX解决方案下，用于应用程序访问个人portal(PC链接跳转至个人Portal页面)，对应的回调通知消息：LOGIN_E_EVT_GET_NONCE_RESULT
 * @see LOGIN_E_EVT_GET_NONCE_RESULT
 **/
TUP_API TUP_RESULT tup_login_get_nonce(IN const TUP_CHAR* auth_token);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set init parameters.
 *        <br>[cn]设置初始化参数
 * 
 * @param [in] const LOGIN_S_INIT_PARAM* param         <b>:</b><br>[en]Indicates the initialization parameter.
 *                                                             <br>[cn]初始化参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface is an internal interface that is set before initialization.
 *            <br>[cn]内部使用接口，在初始化前设置
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_set_init_param(IN const LOGIN_S_INIT_PARAM* param);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to search server.
 *        <br>[cn]服务器探测
 * 
 * @param [in] const LOGIN_S_AUTH_SERVER_INFO* server_info  <b>:</b><br>[en]Indicates the server information by searched.
 *                                                                  <br>[cn]探测的服务器信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface is used to set up own clients to be compatible with different solution networking. Corresponding callback notification message: LOGIN_E_EVT_SEARCH_SERVER_RESULT.
 *            <br>[cn]此接口用于自有客户端，以兼容不同解决方案的组网，对应的回调通知消息：LOGIN_E_EVT_SEARCH_SERVER_RESULT
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_search_server(IN const LOGIN_S_AUTH_SERVER_INFO* server_info);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set license management parameters.
 *        <br>[cn]设置license管理参数
 * 
 * @param [in] LOGIN_S_LICENSE_MANAGE_PARAM* param          <b>:</b><br>[en]Indicates the license management parameter.
 *                                                                  <br>[cn]license管理参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_login_apply_license
 * @see tup_login_release_license
 **/
TUP_API TUP_RESULT tup_login_set_license_manage_param(IN LOGIN_S_LICENSE_MANAGE_PARAM* param);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to initiate request for license type.
 *        <br>[cn]发起获取License类型请求
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface is used to return through the CALL_E_EVT_GET_LICENSE_TYPE_RESULT event.Asynchronous call.
 *            <br>[cn]异步调用，通过CALL_E_EVT_GET_LICENSE_TYPE_RESULT事件返回
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_get_license_type();


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to request license.
 *        <br>[cn]申请license
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_login_set_license_manage_param
 * @see tup_login_release_license
 **/
TUP_API TUP_RESULT tup_login_apply_license();


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to release the license.
 *        <br>[cn]释放license
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_login_set_license_manage_param
 * @see tup_login_apply_license
 **/
TUP_API TUP_RESULT tup_login_release_license();


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to download configuration.
 *        <br>[cn]下载个人配置
 * 
 * @param [in] const TUP_CHAR* file_path  <b>:</b><br>[en]Indicates the path to the downloaded file (including the file name).
 *                                                <br>[cn]下载文件存放路径(包括文件名)
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @retval LOGIN_E_EVT_DOWNLOAD_CONFIG_RESULT <b>:</b><br>[en]Indicates the event message returned asynchronously.
 *                                                    <br>[cn]异步返回的事件消息
 * 
 * @attention [en]This interface is for phone use only.
 *            <br>[cn]此接口仅供话机使用
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_download_config(IN const TUP_CHAR* file_path);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to subscribe configuration.
 *        <br>[cn]订阅配置
 * 
 * @param [in] TUP_VOID* val              <b>:</b><br>[en]Indicates the information carried when subscribing.
 *                                                <br>[cn]订阅时携带的信息。
 * @param [in] TUP_UINT32 size            <b>:</b><br>[en]Indicates the number of bytes passed in by val.
 *                                                <br>[cn]val传入的字节数。
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface is used for docking third-party platforms.
 *            <br>[cn]此接口用于对接第三方平台
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_subscribe_config(IN TUP_VOID* val, IN TUP_UINT32 size);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set login module parameters.
 *        <br>[cn]设置登录模块参数
 * 
 * @param [in] TUP_UINT32 cfgid           <b>:</b><br>[en]Indicates the configuration ID.
 *                                                <br>[cn]配置项ID
 * @param [in] TUP_VOID* val              <b>:</b><br>[en]Indicates configuration parameters.
 *                                                <br>[cn]配置参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface is used for docking third-party platforms.
 *            <br>[cn]此接口用于对接第三方平台
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_set_cfg(IN TUP_UINT32 cfgid, IN TUP_VOID* val);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get the configuration ID parameter.
 *        <br>[cn]获取指定cfgid的配置项参数
 * 
 * @param [in] TUP_UINT32 cfgid           <b>:</b><br>[en]Indicates the parameter ID, defined by login_def.h with the prefix LOGIN_D_CFG_.
 *                                                <br>[cn]参数ID,由login_def.h定义，前缀为LOGIN_D_CFG_
 * @param [in] TUP_VOID* val              <b>:</b><br>[en]Indicates the parameter value, which determines the data type according to the configured parameter ID.
 *                                                <br>[cn]参数值，根据配置的参数ID确定数据类型
 * @param [in] TUP_UINT32 size            <b>:</b><br>[en]Indicates the size of the pointer to point to memory, in bytes.
 *                                                <br>[cn]指明val指向内存的大小，单位字节
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface is used for docking third-party platforms.
 *            <br>[cn]此接口用于对接第三方平台
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_get_cfg(IN TUP_UINT32 cfgid, IN TUP_VOID *val, IN TUP_UINT32 size);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to active.
 *        <br>[cn]激活
 * 
 * @param [in] TUP_VOID* val              <b>:</b><br>[en]Indicates that different parameters are passed according to the platform type. If it is a VidexIO platform, pass in LOGIN_S_SERVER_INFO *.
 *                                                <br>[cn]根据平台类型的不同，传入不同的参数。如果是VidexIO平台，则传入LOGIN_S_SERVER_INFO*。
 * @param [in] TUP_UINT32 size            <b>:</b><br>[en]Indicates the number of bytes passed in by val.
 *                                                <br>[cn]val传入的字节数。
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface is used for docking third-party platforms.
 *            <br>[cn]此接口用于对接第三方平台
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_active(IN TUP_VOID* val, IN TUP_UINT32 size);


/**
 * @ingroup AdvancedAPI
 * @brief [en]set cipher list before init stage. The default sipher is LOGIN_E_TLS11_CK_RSA_WITH_AES_256_SHA, LOGIN_E_TLS12_CK_RSA_AES_128_CBC_SHA256, LOGIN_E_TLS12_CK_RSA_AES_256_CBC_SHA256 if this function not called.
 *        <br>[cn]设置加密套列表。如果不调用该接口，系统默认加密套为LOGIN_E_TLS11_CK_RSA_WITH_AES_256_SHA, LOGIN_E_TLS12_CK_RSA_AES_128_CBC_SHA256, LOGIN_E_TLS12_CK_RSA_AES_256_CBC_SHA256.
 * 
 * @param [in] const AIR_S_CIPHERLIST *sCipherList <b>:</b><br>[en]cipher list structure specifies add or set method, number of ciphers and cipher list
 *                                                         <br>[cn]设置加密套列表，如果不调用该接口，系统会取默认的加密套, 明确添加还是全量覆盖，加密套个数及加密套列表
 * @retval TUP_RESULT                              <b>:</b><br>[en]operation successful, TUP_SUCCESS returned
 *                                                         <br>[cn]成功返回TUP_SUCCESS
 * @attention [en]only calls before init stage
 *            <br>[cn]只在初始化阶段之前调用
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_set_cipher(IN const LOGIN_S_CIPHERLIST *cipherlist);


/**
 * @ingroup OpenAPI
 * @brief [en]This interface is used to get redirection server addr.
 *        <br>[cn]获取重定向服务器信息
 * 
 * @param [in] LOGIN_S_REDIRECT_ADDR_PARAM* param          <b>:</b><br>[en]Indicates the redirect addr parameter.
 *                                                                     <br>[cn]重定向地址参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 **/
TUP_API TUP_RESULT tup_login_get_redirect_addr(IN const LOGIN_S_REDIRECT_ADDR_PARAM* server);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif /* __LOGIN_INTERFACE_ADVANCED_H__ */
