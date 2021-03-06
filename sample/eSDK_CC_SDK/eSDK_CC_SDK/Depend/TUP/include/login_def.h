/** 
 * @file login_def.h
 * 
 * Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 *
 * @brief [en]Description: The header file of the TUP unified authentication and login component function struct definitioin
 *        [cn]描述：TUP 统一鉴权与登录组件功能结构定义头文件。 \n
 * 
 */


#ifndef __LOGIN_DEF_H__
#define __LOGIN_DEF_H__

#include "tup_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#define LOGIN_D_MAX_USERNAME_LEN        (128)       /**< [en]Indicates the maximum length of the login username 
                                                         <br>[cn]登录用户名最大长度*/
#define LOGIN_D_MAX_PASSWORD_LEN        (256)       /**< [en]Indicates the maximum length of the login password
                                                         <br>[cn]登录密码最大长度*/
#define LOGIN_D_MAX_SERVICE_LEN         (128)       /**< [en]Indicates the maximum length of the login server address
                                                         <br>[cn]登录服务器地址最大长度*/
#define LOGIN_D_MAX_SESSIONID_LEN       (128)       /**< [en]Indicates the maximum length of the login SESSIONID
                                                         <br>[cn]登录SESSIONID最大长度*/
#define LOGIN_D_MAX_HTTPURL_LEN         (256)       /**< [en]Indicates the maximum length of the login HTTP URL
                                                         <br>[cn]登录HTTP URL最大长度*/
#define LOGIN_D_MAX_AUTHCODE_LEN        (512)       /**< [en]Indicates the maximum length of the login authentication code
                                                         <br>[cn]登录鉴权码最大长度*/
#define LOGIN_D_MAX_CA_PATH_LEN         (512)       /**< [en]Indicates the maximum length of the CA path
                                                         <br>[cn]CA证书路径最大长度 */

#define LOGIN_D_MAX_URL_LENGTH                          (256)       /**< [en]Indicates the maximum length of the common URL.
                                                                             <br>[cn]通用URL最大长度 */
#define LOGIN_D_IP_LENGTH                               (16)        /**< [en]Indicates the maximum byte length of the Ipv6.
                                                                             <br>[cn]ipv6字节长度 */
#define LOGIN_D_MAX_ACCOUNT_LEN                         (128)       /**< [en]Indicates the maximum length of the account.
                                                                             <br>[cn]最大账号长度 */
#define LOGIN_D_MAX_PASSWORD_LENGTH                     (128)       /**< [en]Indicates the maximum length of the password.
                                                                             <br>[cn]最大密码长度 */
#define LOGIN_D_MAX_USERNUMBER_LENGTH                   (256)       /**< [en]Indicates the maximum length of the user number.
                                                                             <br>[cn]最大号码长度 */
#define LOGIN_D_MAX_VIDEXIO_SIP_URL_LEN                 (128)       /**< [en]Indicates the maximum byte length of the SIP url.
                                                                             <br>[cn]最大SIP url字节长度 */
#define LOGIN_D_MAX_VIDEXIO_SIP_DISPLAY_NAME_LEN        (128)       /**< [en]Indicates the maximum byte length of the SIP terminal name.
                                                                             <br>[cn]最大SIP终端名称字节长度 */
#define LOGIN_D_MAX_VIDEXIO_ACCOUNT_LEN                 (128)       /**< [en]Indicates the maximum length of the account
                                                                             <br>[cn]最大账号长度 */
#define LOGIN_D_MAX_VIDEXIO_PASSWORD_LENGTH             (128)       /**< [en]Indicates the maximum length of the password.
                                                                             <br>[cn]最大密码长度 */
#define LOGIN_D_MAX_DN_LEN                              (128)       /**< [en]Indicates the maximum length of the domain name.
                                                                             <br>[cn]最大DN长度 */
#define LOGIN_D_MAX_PATH_LEN                            (256)       /**< [en]Indicates the maximum length of the path.
                                                                             <br>[cn]最大路径长度 */
#define LOGIN_D_MAX_SN_LEN                              (128)       /**< [en]Indicates the maximum length of the SN.
                                                                             <br>[cn]最大SN长度 */
#define LOGIN_D_MAX_SOFTWARE_VER_LEN                    (128)       /**< [en]Indicates the maximum length of the software version.
                                                                             <br>[cn]最大软件版本长度 */
#define LOGIN_D_MAX_PRODUCT_NAME_LEN                    (256)       /**< [en]Indicates the maximum length of the product name.
                                                                             <br>[cn]最大产品名称长度 */
#define LOGIN_D_MAX_SYSTEM_NAME_LEN                     (192)       /**< [en]Indicates the maximum length of the system name.
                                                                             <br>[cn]最大系统名称长度 */
#define LOGIN_D_MAC_LEN                                 (32)        /**< [en]Indicates the maximum length of the MAC address.
                                                                             <br>[cn]MAC地址长度 */
#define LOGIN_D_MAX_USERAGENT_LEN                       (256)       /**< [en]Indicates the length of the UserAgent.
                                                                             <br>[cn]UserAgent长度 */
#define LOGIN_D_MAX_TIKET_LEN                           (256)       /**< [en]Indicates the Tiket length.
                                                                             <br>[cn]Tiket长度 */
#define LOGIN_D_MAX_TOKEN_LEN                           (256)       /**< [en]Indicates the length of the Token.
                                                                             <br>[cn]Token长度 */
#define LOGIN_D_MAX_MEDIATYPE_LEN                       (256)       /**< [en]Indicates the MediaType type length.
                                                                             <br>[cn]MediaType类型长度 */    
#define LOGIN_D_MAX_NAME                                (256)       /**< [en]Indicates the maximum length of the name.
                                                                             <br>[cn]最大name长度 */
#define LOGIN_D_MAX_EUA_NUM                              18         /**< [en]Indicates the maximum number of EUA.
                                                                             <br>[cn]EUA最大个数 */
#define LOGIN_D_MAX_USERNAME_LENGTH                      (256)      /**< [en]Indicates the maximum length of the username.
                                                                             <br>[cn]最大用户名长度 */
#define LOGIN_D_MAX_DOMAIN_LENGTH                        (256)      /**< [en]Indicates the maximum length of domain.
                                                                             <br>[cn]最大域名长度 */
#define LOGIN_D_MAX_GUID_LEN                              (128)           /**< [en]Indicates the maximum length of guid.
                                                                             <br>[cn]最大GUID长度 */      
#define LOGIN_D_MAX_NONCE_LEN                            (12)            /**< [en]Indicates the maximum length of nonce.
                                                                             <br>[cn]最大NONCE长度 */                                                                             
#define LOGIN_D_MAX_HARDWARE_VER_LEN                    (128)   /**< [en]Indicates the maximum length of hardware.
                                                                             <br>[cn]最大硬件版本长度 */                                                                         
#define LOGIN_D_MAX_MODEL_NAME_LEN                    (64)         /**< [en]Indicates the maximum length of model.
                                                                             <br>[cn]最大模块名称长度 */


/**
 * [en]This enumeration is used to describe the log level.
 * [cn]日志级别
 */
typedef enum tagLOGIN_E_LOG_LEVEL
{
    LOGIN_E_LOG_ERROR = 0,            /**<[en]Indicates error level.
                                      <br>[cn]错误级别 */
    LOGIN_E_LOG_WARNING,              /**<[en]Indicates warning level.
                                      <br>[cn]警告级别 */     
    LOGIN_E_LOG_INFO,                 /**<[en]Indicates log level.
                                      <br>[cn]一般级别 */      
    LOGIN_E_LOG_DEBUG                 /**<[en]Indicates debug level.
                                      <br>[cn]调试级别 */      
}LOGIN_E_LOG_LEVEL;


/** 
 * [en]This enumeration is used to describe ID definition of login authentication event.
 * [cn]登录鉴权事件ID定义
 */
typedef enum tagLOGIN_E_EVENT
{
    LOGIN_E_EVT_BEGIN = 0x8f<<24,

    LOGIN_E_EVT_PASSWORD_CHANGEED_RESULT,   /**< [en]Indicates the password modification result
                                                 <br>[cn]密码修改结果
                                                 <br>param1：TUP_UINT32 result [en]Indicates the password modification result.Reference value:tagLOGIN_E_ERR_ID [cn]密码修改结果, 取值参考:tagLOGIN_E_ERR_ID
                                                 <br>param2：None
                                                 <br>data：  None  */
                                                                
    LOGIN_E_EVT_GET_LICENSE_TYPE_RESULT,    /**< [en]Indicates that the license type response is obtained
                                                 <br>[cn]获取license类型结果
                                                 <br>param1：TUP_UINT32 result [en]Indicates result.Reference value: tagLOGIN_E_ERR_ID[cn]结果, 取值参考:tagLOGIN_E_ERR_ID
                                                 <br>param2：LOGIN_E_LICENSE_TYPE license_type [en]Indicates license type.Reference value:LOGIN_E_LICENSE_TYPE [cn]获取license类型结果 取值参考:LOGIN_E_LICENSE_TYPE
                                                 <br>data：  None  */    
                                                                
    LOGIN_E_EVT_APPLY_LICENSE_RESULT,       /**< [en]Indicates license application result.
                                                 <br>[cn]申请license结果
                                                 <br>param1：TUP_UINT32 result [en]Indicates result.Reference value:tagLOGIN_E_ERR_ID [cn]结果, 取值参考: tagLOGIN_E_ERR_ID
                                                 <br>param2：None
                                                 <br>data：  None  */ 
                                                                
    LOGIN_E_EVT_REFRESH_LICENSE_FAILED,     /**< [en]Indicates refresh license failed.
                                                 <br>[cn]保活license失败
                                                 <br>param1：None
                                                 <br>param2：None
                                                 <br>data：  None */   
                                                                
    LOGIN_E_EVT_RELEASE_LICENSE_RESULT,     /**< [en]Indicates release license response.
                                                 <br>[cn]释放license响应
                                                 <br>param1：TUP_UINT32 result [en]Indicates the release of license results. Reference value: tagLOGIN_E_ERR_ID [cn]释放license结果 取值参考:tagLOGIN_E_ERR_ID
                                                 <br>param2：None
                                                 <br>data：  None  */   

    LOGIN_E_EVT_ACTIVE_RES,                 /**< [en]Indicates report VidexIO platform activation results.
                                                 <br>[cn]VidexIO平台激活结果上报
                                                 <br>param1：TUP_UINT32 result [en]Indicates result.Reference value: tagLOGIN_E_ERR_ID[cn]结果, 取值参考:tagLOGIN_E_ERR_ID
                                                 <br>param2：None
                                                 <br>data：  LOGIN_S_IPADDR_S_ACTIVE_RESULT* active_result [en]Indicates the VidexIO platform activation result. [cn]VidexIO平台激活结果 */ 

    LOGIN_E_EVT_CONFIG_QUERY_RES,           /**< [en]Indicates report VidexIO platform configuration query results.
                                                 <br>[cn]VidexIO平台配置查询结果上报
                                                 <br>param1：None
                                                 <br>param2：None
                                                 <br>data：  LOGIN_S_CONFIG_QUERY_RES* result [en]Indicates the VidexIO platform configure the query results.[cn]VidexIO平台配置查询结果 */

    LOGIN_E_EVT_SEARCH_SERVER_RESULT,       /**< [en]Indicates the probe server results.
                                                 <br>[cn]探测服务器结果
                                                 <br>param1：TUP_UINT32 result [en]Indicates the probe server results.Reference value: tagLOGIN_E_ERR_ID[cn]探测服务器结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：None
                                                 <br>data：  None */

    LOGIN_E_EVT_AUTHORIZE_RESULT,           /**< [en]Indicates the mediax authentication login result.
                                                 <br>[cn]SP&IMS Hosted VC鉴权登录结果(MediaX)
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：TUP_UINT32 ulUserId [en]Indicates the user ID. [cn]用户ID
                                                 <br>data：  LOGIN_S_AUTHORIZE_RESULT* auth_result [en]Indicates the mediax authentication login result.[cn] mediax鉴权登录结果  */

    LOGIN_E_EVT_UPORTAL_AUTHORIZE_RESULT,   /**< [en]Indicates the uportal authentication login result.
                                                 <br>[cn]uportal鉴权登录结果
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：TUP_UINT32 user_id [en]Indicates the user ID. [cn]用户ID
                                                 <br>data：  LOGIN_S_UPORTAL_AUTHORIZE_RESULT* result [en]Indicates Reference the uportal authentication login result.[cn] uportal鉴权登录结果   */

    LOGIN_E_EVT_REFRESH_TOKEN_RESULT,       /**< [en]Indicates the token refresh results (both forced and timed refresh).
                                                 <br>[cn]Token刷新结果（强制刷新和定时刷新都上报这个事件）
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：None
                                                 <br>data：  LOGIN_S_REFRESH_TOKEN_RESULT* token [en]Indicates the token refresh results.[cn]Token刷新结果*/

    LOGIN_E_EVT_GET_NONCE_RESULT,           /**< [en]Indicates to get the personal nonce result
                                                 <br>[cn]获取个人nonce结果
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：None
                                                 <br>data：  TUP_CHAR * nonce[en]Indicate to get the user nonce result.[cn]获取个人nonce结果*/
                                                 
    LOGIN_E_EVT_DOWNLOAD_CONFIG_RESULT,     /**< [en]Indicates download configuration file results.
                                                 <br>[cn]下载配置文件结果         
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：LOGIN_E_UPORTAL_RETCODE eRetCode [en]Indicates download configuration file results.[cn]下载配置文件结果
                                                 <br>data：  None */
                                                 
    LOGIN_E_EVT_SMC_AUTHORIZE_RESULT,       /**< [en]Indicates the smc network authentication login result.
                                                 <br>[cn]On-premise VC组网鉴权登录结果(SMC)
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：TUP_UINT32 user_id [en]Indicates the user id.[cn]用户ID 
                                                 <br>data：  LOGIN_S_SMC_AUTHORIZE_RESULT* authorizeInfo [en]Indicates the smc networking authentication login result.[cn]smc组网鉴权登录结果 */
                                                 
    LOGIN_E_EVT_FIREWALL_DETECT_RESULT,     /**< [en]Indicates the result of firewall probe.
                                                 <br>[cn]防火墙探测结果
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：LOGIN_E_FIREWALL_MODE mode[en]Indicates the firewall mode.[cn]防火墙模式
                                                 <br>data：  None */
                                                 
    LOGIN_E_EVT_STG_TUNNEL_BUILD_RESULT,    /**< [en]Indicates the result of STG tunnel setup.
                                                 <br>[cn]STG隧道建立结果
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：None
                                                 <br>data：  TUP_CHAR* stgAddress [en]the address of used STG[cn]使用的stg地址 */
                                                 
    LOGIN_E_EVT_STG_DESTORY_TUNNEL_RESULT,  /**< [en]Indicates the result of STG tunnel destruction.
                                                 <br>[cn]销毁STG隧道结果
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：None
                                                 <br>data：  None */
    LOGIN_E_EVT_STG_STUNNEL_DISCONNECTED,   /**< [en]Indicates the STG tunnel has disconnected.
                                                 <br>[cn]STG隧道已断开的通知
                                                 <br>param1：None
                                                 <br>param2：None
                                                 <br>data：  None */

    LOGIN_E_EVT_MAIN_SITE_IS_VALID,         /**< [en]Indicates the main site is invalid
                                                 <br>[cn]通知主站点可用
                                                 <br>param1：None
                                                 <br>param2：None
                                                 <br>data：  None */ 
    LOGIN_E_EVT_GET_REDIRECT_ADDR_RESULT,   /**< [en]Indicates get recirect addr result
                                                 <br>[cn]获取重定向地址结果
                                                 <br>param1：TUP_UINT32 result
                                                 <br>param2：None
                                                 <br>data：  TUP_CHAR* redirect_addr */ 
    LOGIN_E_EVT_STARLEAF_CONFIG_QUERY_RES,           /**< [en]Indicates config query result
                                                 <br>[cn]StarLeaf平台配置查询结果上报
                                                 <br>param1：无
                                                 <br>param2：无
                                                 <br>data：  LOGIN_S_STARLEAF_ACTIVE_INFO */
    LOGIN_E_EVT_END
} LOGIN_E_EVENT;

/** 
 * [en]This enumeration is used to describe login module error code.
 * [cn]LOGIN 模块错误码
 */
typedef enum tagLOGIN_E_ERR_ID
{
    LOGIN_E_ERR_BEGIN = 0,                                      /**< [en]Indicates begin error.
                                                                     <br>[cn]起始错误[MODIFY] */
    LOGIN_E_ERR_GENERAL,                                        /**< [en]Indicates general error.
                                                                     <br>[cn]一般错误 */
    LOGIN_E_ERR_PARAM_ERROR,                                    /**< [en]Indicates parameter error.
                                                                     <br>[cn]参数错误 */
    LOGIN_E_ERR_TIMEOUT,                                        /**< [en]Indicates timeout.
                                                                     <br>[cn]超时 */
    LOGIN_E_ERR_MEM_ERROR,                                      /**< [en]Indicates allocating memory errors.
                                                                     <br>[cn]分配内存错误 */
    LOGIN_E_ERR_XML_ERROR,                                      /**< [en]Indicates XML parsing error.
                                                                     <br>[cn]XML解析出错 */
    LOGIN_E_ERR_PARSE_PTKT_ERROR,                               /**< [en]Indicates that the parse server PTKT package is abnormal.
                                                                     <br>[cn]解析服务器PTKT包异常 */
    LOGIN_E_ERR_DNS_ERROR,                                      /**< [en]Indicates DNS resolution exception.
                                                                     <br>[cn]DNS解析异常 */
    LOGIN_E_ERR_REQUEST_FAILED,                                 /**< [en]Indicates that the request message is abnormal.
                                                                     <br>[cn]请求消息异常 */
    LOGIN_E_ERR_AUTH_FAILED,                                    /**< [en]Indicates authentication failure.
                                                                     <br>[cn]鉴权失败 */
    LOGIN_E_ERR_SN_FAILED,                                      /**< [en]Indicates that the sn match failed.
                                                                     <br>[cn]sn匹配失败 */
    LOGIN_E_ERR_SERVICE_ERROR,                                  /**< [en]Indicates a server exception.
                                                                     <br>[cn]服务器异常 */
    LOGIN_E_ERR_ACCOUNT_LOCKED,                                 /**< [en]Indicates that the account is locked.
                                                                     <br>[cn]账号被锁定 */
    LOGIN_E_ERR_TIMER_ERROR,                                    /**< [en]Indicates create timer error.
                                                                     <br>[cn]创建定时器错误 */
    LOGIN_E_ERR_WRONG_SERVERTYPE,                               /**< [en]Indicates wrong server type.
                                                                     <br>[cn]错误的服务器类型 */
    LOGIN_E_ERR_WRONG_SERVERVERSION,                            /**< [en]Indicates wrong server version.
                                                                     <br>[cn]错误的服务器版本 */
    LOGIN_E_ERR_INVALID_URL,                                    /**< [en]Indicates invalid URL.
                                                                     <br>[cn]无效的URL */
    LOGIN_E_ERR_SEARCH_SERVER_FAIL,                             /**< [en]Indicates query server address failed.
                                                                     <br>[cn]查询服务器地址失败 */ 
    LOGIN_E_ERR_START_REFRESH_FAIL,                             /**< [en]Indicates start Token refresh failed.
                                                                     <br>[cn]启动Token刷新失败 */ 
    LOGIN_E_ERR_NOT_SUPPORT_MOD_PWD,                            /**< [en]Indicates The system does not support to change password.
                                                                     <br>[cn]系统不支持修改密码 */
    LOGIN_E_ERR_WRONG_OLD_PWD,                                  /**< [en]Indicates the old password is incorrect.
                                                                     <br>[cn]老密码错误 */
    LOGIN_E_ERR_INVAILD_NEW_PWD_LEN,                            /**< [en]Indicates the new password length is illegal.
                                                                     <br>[cn]新密码长度非法 */
    LOGIN_E_ERR_INVAILD_NEW_PWD_LEVEL,                          /**< [en]Indicates the new password does not meet complexity requirements.
                                                                     <br>[cn]新密码复杂度不满足要求 */
    LOGIN_E_ERR_NEW_PWD_CANNOT_SAME_WITH_HISTROY_PWD,           /**< [en]Indicates the new password can not be the same as the last old passwords.
                                                                     <br>[cn]新密码不能与最近旧密码相同 */
    LOGIN_E_ERR_NEW_PWD_REPEAT_CHAR_NUM_IS_BIG,                 /**< [en]Indicates the new password can not contain three or more repeated characters.
                                                                     <br>[cn]新密码不能包含3个以上重复字符 */
    LOGIN_E_ERR_MOD_PWD_TOO_FREQUENTLY,                         /**< [en]Indicates the password cannot be modified twice within 5 minutes.
                                                                     <br>[cn]上次修改密码后5分钟内不能更新密码 */
    LOGIN_E_ERR_NEW_PWD_CANNOT_CONTAIN_ACCOUNT,                 /**< [en]Indicates the password can not contain the account or accounts in reverse.
                                                                     <br>[cn]密码不能包含账号或其逆序账号 */
    LOGIN_E_ERR_NEW_PWD_CONTAIN_TOO_MANY_SAME_CHAR_WITH_OLD_PWD,/**< [en]Indicates the new password must have at least two different characters compared to the old password.
                                                                     <br>[cn]新密码相较于老密码至少要有两个不同的字符 */
    LOGIN_E_ERR_MOD_PWD_ON_HSS_FAIL,                            /**< [en]Indicates Change password on the HSS fails.
                                                                     <br>[cn]HSS上修改密码失败 */
    LOGIN_E_ERR_AUTH_NAME_OR_PWD_ERROR,                         /**< [en]Indicates username or password is incorrect.
                                                                     <br>[cn]用户名或者密码错误 */
    LOGIN_E_ERR_USER_IS_LOCKED,                                            /**< [en]Indicates the user is locked.
                                                                     <br>[cn]用户已被锁定 */
    LOGIN_E_ERR_NONCE_FAIL                                                    /**< [en]Indicates nonce is incorrect.
                                                                     <br>[cn]nonce接入码错误 */                                                                 
}LOGIN_E_ERR_ID;


/**
 * [en]This enumeration is used to describe the protocol type.
 * [cn]协议类型
 */
typedef enum tagLOGIN_E_PROTOCOL_TYPE
{
    LOGIN_D_PROTOCOL_TYPE_SIP = 1,          /**< [en]Indicates SIP .
                                                 <br>[cn]SIP */
    LOGIN_D_PROTOCOL_TYPE_H323,             /**< [en]Indicates H323.
                                                 <br>[cn]H323 */
    LOGIN_D_PROTOCOL_TYPE_BUTT    
}LOGIN_E_PROTOCOL_TYPE;


/** 
 * [en]This enumeration is used to describe the mode of firewall.
 * [cn]防火墙模式
 */
typedef enum tagLOGIN_E_FIREWALL_MODE
{
    LOGIN_E_FIREWALL_MODE_ONLY_HTTP,     /**< [en]Indicates that only http can pass through the firewall.
                                              <br>[cn]只有http能通过防火墙 */
    LOGIN_E_FIREWALL_MODE_HTTP_AND_SVN,  /**< [en]Indicates that only http and svn (udp 443) can pass through the firewall.
                                              <br>[cn]只有http和svn(udp 443)能通过防火墙 */
    LOGIN_E_FIREWALL_MODE_NULL           /**< [en]Indicates that there is no firewall.
                                              <br>[cn]无防火墙拦截 */
} LOGIN_E_FIREWALL_MODE;



/** 
 * [en]This enumeration is used to describe verify mode.
 * [cn]认证模式
 */
typedef enum tagLOGIN_E_VERIFY_MODE
{
    LOGIN_E_VERIFY_MODE_NONE        = 0,                  /**< [en]Indicates no authentication.
                                                               <br>[cn]不认证 */
    LOGIN_E_VERIFY_MODE_SERVER      = 1                   /**< [en]Indicates  authentication server.
                                                               <br>[cn]认证服务端 */
}LOGIN_E_VERIFY_MODE;



/** 
 * [en]This enumeration is used to describe encryption policy types.
 * [cn]加密策略类型
 */
typedef enum tagLOGIN_E_ENCRYPTION_TYPE
{
    LOGIN_E_ENCRYPTION_REJECTED,                /**< [en]Indicates that encryption is rejected.
                                                     <br>[cn]拒绝(不)加密*/
    LOGIN_E_ENCRYPTION_REQUIRED,                /**< [en]Indicates forced encryption.
                                                     <br>[cn]强制加密*/
    LOGIN_E_ENCRYPTION_OPTIONAL,                /**< [en]Indicates optional encryption,maximum interoperability.
                                                     <br>[cn]可选加密，即最大互通性*/
    LOGIN_E_ENCRYPTION_BUTT
}LOGIN_E_ENCRYPTION_TYPE;


/** 
 * [en]This enumeration is used to describe send mode.
 * [cn]发送模式
 */
typedef enum tagLOGIN_E_TRANSPORTMODE
{
    LOGIN_E_TRANSPORTMODE_UDP,                  /**< [en]Indicates UDP.
                                                     <br>[cn]UDP */
    LOGIN_E_TRANSPORTMODE_TLS,                  /**< [en]Indicates TLS.
                                                     <br>[cn]TLS */
    LOGIN_E_TRANSPORTMODE_TCP,                  /**< [en]Indicates TCP.
                                                     <br>[cn]TCP */
    LOGIN_E_TRANSPORTMODE_DEFAULT,              /**< [en]Indicates default use public transport mode.
                                                     <br>[cn]默认使用公用传输方式 */
    LOGIN_E_TRANSPORTMODE_SVN,                  /**< [en]Indicates SVN.
                                                     <br>[cn]SVN */
    LOGIN_E_TRANSPORTMODE_BUTT
} LOGIN_E_TRANSPORTMODE;


/** 
 * [en]This enumeration is used to describe registered account password types.
 * [cn]注册账号密码类型
 */
typedef enum tagLOGIN_E_AUTH_PASSWORD_TYPE
{
    LOGIN_E_AUTH_PASSWORD_NORMAL = 0, /**< [en]Indicates the general password type.
                                           <br>[cn]普通密码类型 */
    LOGIN_E_AUTH_PASSWORD_HA1,        /**< [en]Indicates the HA1 password type.
                                           <br>[cn]HA1密码类型 */
    LOGIN_E_AUTH_PASSWORD_BUTT
} LOGIN_E_AUTH_PASSWORD_TYPE;


/** 
 * [en]This enumeration is used to describe the deployment mode.
 * [cn]部署模式
 */
typedef enum tagLOGIN_E_DEPLOY_MODE
{
    LOGIN_E_DEPLOY_ENTERPRISE_IPT, /**< [en]Indicates on-premise PBX.
                                        <br>[cn]企业入驻-IPT */
    LOGIN_E_DEPLOY_ENTERPRISE_CC,  /**< [en]Indicates on-premise Convergent conference.
                                        <br>[cn]企业入驻-融合会议 */
    LOGIN_E_DEPLOY_SPHOSTED_IPT,   /**< [en]Indicates SP hosted-IP T.
                                        <br>[cn]SP Hosted -IPT */
    LOGIN_E_DEPLOY_SPHOSTED_CC,    /**< [en]Indicates SP Hosted - Converged conference.
                                        <br>[cn]SP Hosted -融合会议 */
    LOGIN_E_DEPLOY_SPHOSTED_CONF,  /**< [en]Indicates Hosted - pure conference.
                                        <br>[cn]SP Hosted -纯会议 */
    LOGIN_E_DEPLOY_IMSHOSTED_IPT,  /**< [en]Indicates IMS hosted-IPT.
                                        <br>[cn]IMS Hosted -IPT */
    LOGIN_E_DEPLOY_IMSHOSTED_CC    /**< [en]Indicates IMS Hosted - Converged conference.
                                        <br>[cn]IMS Hosted -融合会议 */
} LOGIN_E_DEPLOY_MODE;


/** 
 * [en]This enumeration is used to describe the server type.
 * [cn]服务器类型
 */
typedef enum tagLOGIN_E_SERVER_TYPE
{
    LOGIN_E_SERVER_TYPE_PORTAL = 0,         /**< [en]Indicates the UPortal server.
                                                 <br>[cn]UPortal服务器 */
    LOGIN_E_SERVER_TYPE_MEDIAX,             /**< [en]Indicates the Mediax server.
                                                 <br>[cn]Mediax服务器 */
    LOGIN_E_SERVER_TYEP_SMC,                /**< [en]Indicates the SMC server.
                                                 <br>[cn]SMC服务器 */
    LOGIN_E_SERVER_TYPE_BUTT
}LOGIN_E_SERVER_TYPE;


/** 
 * [en]This enumeration is used to describe the type of authentication.
 * [cn]鉴权类型
 */
typedef enum tagLOGIN_E_AUTH_TYPE
{
    LOGIN_E_AUTH_NORMAL,        /**< [en]Indicates password authentication.
                                     <br>[cn]密码鉴权 */
    LOGIN_E_AUTH_TIKET,         /**< [en]Indicates the tiket authentication.
                                     <br>[cn]Tiket鉴权 */

    LOGIN_E_AUTH_BUTT
}LOGIN_E_AUTH_TYPE;

/** 
 * [en]This enumeration is used to describe the source of password.
 * [cn]IP话机登录密码的来源
 */
typedef enum tagLOGIN_E_SOURCE_OF_PSW
{
    LOGIN_E_SRCPSW_NONE,        /**< [en]Indicates no source of password.
                                     <br>[cn]不设置来源 */
    LOGIN_E_SRCPSW_USER,        /**< [en]Indicates user input the password.
                                     <br>[cn]用户输入的密码 */
    LOGIN_E_SRCPSW_OM,          /**< [en]Indicates the manager give the password.
                                     <br>[cn]表示网管下发的密码 */
    LOGIN_E_SRCPSW_BUTT
}LOGIN_E_SOURCE_OF_PSW;

/** 
 * [en]This structure is used to describe change the login password.
 * [cn]修改登陆密码数据结构
 */
typedef struct tagLOGIN_S_CHANGE_PWD_PARAM
{
    TUP_CHAR acAccount[LOGIN_D_MAX_USERNAME_LEN];         /**< [en]Indicates the login account. [cn]登录账号 */
    TUP_CHAR acOldPassword[LOGIN_D_MAX_PASSWORD_LEN];     /**< [en]Indicates the original password. [cn]原密码 */
    TUP_CHAR acNewPassword[LOGIN_D_MAX_PASSWORD_LEN];     /**< [en]Indicates the new password. [cn]新密码 */
    TUP_CHAR acNumber[LOGIN_D_MAX_USERNAME_LEN];          /**< [en]Indicates the number. [cn]号码 */
    TUP_CHAR acServer[LOGIN_D_MAX_SERVICE_LEN];           /**< [en]Indicates the server address. [cn]服务器地址 */
    TUP_UINT32 uiPort;                                    /**< [en]Indicates the server port. [cn]服务器端口 */
    LOGIN_E_PROTOCOL_TYPE eProtocol;                      /**< [en]Indicates the protocol type. [cn]协议类型 */
    LOGIN_E_SERVER_TYPE server_type;                      /**< [en]Indicates the server type. [cn]服务器类型 */
}LOGIN_S_CHANGE_PWD_PARAM;


/** 
 * [en]This structure is used to describe the server information.
 * [cn]服务器信息
 */
typedef struct tagLOGIN_S_SERVER_INFO
{
    TUP_CHAR                server_url[LOGIN_D_MAX_HTTPURL_LEN + 1];    /**< [en]Indicates the server address. [cn]服务器地址 */
    TUP_CHAR                account[LOGIN_D_MAX_ACCOUNT_LEN];           /**< [en]Indicates the account. [cn]账号 */
    TUP_CHAR                password[LOGIN_D_MAX_PASSWORD_LENGTH];      /**< [en]Indicates the password. [cn]密码 */
}LOGIN_S_SERVER_INFO;


/** 
 * [en]This structure is used to describe authentication information.
 * [cn]鉴权信息
 */
typedef struct tagLOGIN_S_AUTH_INFO
{
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN + 1];                        /**< [en]Indicates the account username. [cn]账户用户名 */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH + 1];                     /**< [en]Indicates the account password. [cn]账户密码 */
}LOGIN_S_AUTH_INFO;

/** 
 * [en]This structure is used to describe SIP information.
 * [cn]SIP信息
 */
typedef struct tagLOGIN_S_SIP_INFO
{
    TUP_CHAR                sip_url[LOGIN_D_MAX_VIDEXIO_SIP_URL_LEN + 1];               /**< [en]Indicates the SIP registration URL. [cn]SIP注册URL */
    TUP_CHAR                display_name[LOGIN_D_MAX_VIDEXIO_SIP_DISPLAY_NAME_LEN + 1]; /**< [en]Indicates the terminal name. [cn]终端名称 */
    LOGIN_E_TRANSPORTMODE   transport_mode;                                             /**< [en]Indicates SIP send mode. [cn]SIP发送模式 */
    LOGIN_S_AUTH_INFO       auth_info;                                                  /**< [en]Indicates SIP account, password. [cn]SIP账号、密码 */
    TUP_CHAR                proxy_address[LOGIN_D_MAX_HTTPURL_LEN + 1];                 /**< [en]Indicates proxy server address. [cn]代理服务器地址 */
}LOGIN_S_SIP_INFO;


/** 
 * [en]This structure is used to describe authentication server information.
 * [cn]鉴权服务器信息
 */
typedef struct tagLOGIN_S_AUTH_SERVER_INFO
{
    LOGIN_E_SERVER_TYPE server_type;                                    /**< [en]Indicates the server type. [cn]服务器类型 */
    TUP_UINT32          server_port;                                    /**< [en]Indicates the server port. [cn]服务器端口号 */
    TUP_CHAR            server_url[LOGIN_D_MAX_URL_LENGTH];             /**< [en]Indicates the server address. [cn]服务器地址 */
    TUP_UINT32          proxy_port;                                     /**< [en]Indicates the proxy port. [cn]代理服务器端口号 */
    TUP_CHAR            proxy_url[LOGIN_D_MAX_URL_LENGTH];              /**< [en]Indicates the proxy server address. [cn]代理服务器地址 */
    TUP_CHAR            server_version[LOGIN_D_MAX_SOFTWARE_VER_LEN];   /**< [en]Indicates the server version. [cn]服务器版本 */
}LOGIN_S_AUTH_SERVER_INFO;


/** 
 * [en]This structure is used to describe authentication parameters.
 * [cn]鉴权参数
 */
typedef struct tagLOGIN_S_AUTHORIZE_PARAM
{
    LOGIN_E_AUTH_TYPE   auth_type;                                  /**< [en]Indicates the type of authentication. [cn]鉴权类型 */
    LOGIN_S_AUTH_INFO   auth_info;                                  /**< [en]Indicates the user name and password. [cn]用户名+密码 */
    TUP_CHAR            user_agent[LOGIN_D_MAX_USERAGENT_LEN];      /**< [en]Indicates the product information: Type the terminal type, TE Enter the accountType. [cn]产品信息：携带终端类型，TE输入accountType*/
    TUP_CHAR            user_tiket[LOGIN_D_MAX_TIKET_LEN];          /**< [en]Indicates the Tiket value used by a third-party authentication Tiken scenario. [cn]Tiket值，第三方鉴权Tiken场景使用 */
    LOGIN_S_AUTH_SERVER_INFO auth_server;                           /**< [en]Indicates the authentication server. [cn]鉴权服务器 */
    TUP_CHAR            device_sn[LOGIN_D_MAX_SN_LEN];              /**< [en]Indicates the sn number. Option parameter. [cn]设备sn号。 可选参数。*/
    TUP_UINT32          user_id;                                    /**< [en]Indicates the user id that requires UI generation. [cn]用户id，需要UI生成 */
    TUP_CHAR            domain[LOGIN_D_MAX_DOMAIN_LENGTH];          /**< [en]Indicates the SIP domain. 
                                                                         <br>[en]If network only has one sc and SIP URI is empty, this  option be empty; 
                                                                         <br>[en]If network only has one sc and SIP URI is not empty, it should be domain name of SIP URI; 
                                                                         <br>[en]If network has several sc, SIP URI must be written, this option also must be written, it should be domain name of SIP URI.
                                                                         <br>[cn]SIP域名。
                                                                         <br>[cn]组网中仅有1个SC，且若SIP URI为空时，此项为空；
                                                                         <br>[cn]组网中仅有1个SC，且若SIP URI非空时，此项为SIP URI中的域名；
                                                                         <br>[cn]组网中有多个SC时，SIP URI 必然非空，此项为SIP URI中的域名。*/
    LOGIN_E_SOURCE_OF_PSW src_of_psw;                               /**< [en]Indicates the source of password. [cn]IP话机登录密码的来源(用于IP话机) */
} LOGIN_S_AUTHORIZE_PARAM;


/** 
 * [en]This structure is used to describe EUA information.
 * [cn]EUA信息
 */
typedef struct tagLOGIN_S_EUA_INFO
{
    LOGIN_S_AUTH_INFO   eua_auth;                                                    /**< [en]Indicates the user name and password. [cn]用户名+密码 */
    TUP_CHAR            eua_dn[LOGIN_D_MAX_DN_LEN];                                  /**< [en]Indicates the eua reference DN. [cn]eua基准DN */

    TUP_UINT32          num_of_eua;                                                  /**< [en]Indicates the number of eua. [cn]eua个数 */
    TUP_CHAR            eua_addr[LOGIN_D_MAX_EUA_NUM][LOGIN_D_MAX_URL_LENGTH];       /**< [en]Indicates the eua address information. [cn]eua地址信息 */
}LOGIN_S_EUA_INFO;


/** 
 * [en]This structure is used to describe single server information.
 * [cn]单个服务器信息
 */
typedef struct tagLOGIN_S_SERVER_ADDR_INFO
{
    TUP_UINT32  server_port;                            /**< [en]Indicates the server port. [cn]服务器端口号 */
    TUP_CHAR    server_uri[LOGIN_D_MAX_URL_LENGTH];     /**< [en]Indicates the server address. [cn]服务器地址 */
} LOGIN_S_SERVER_ADDR_INFO;

#define LOGIN_S_SINGLE_SERVER_INFO LOGIN_S_SERVER_ADDR_INFO


/** 
 * [en]This structure is used to describe STG information.
 * [cn]STG信息
 */
typedef struct tagLOGIN_S_STG_INFO
{
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN];                /**< [en]Indicates the username. [cn]用户名 */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH];             /**< [en]Indicates the password. [cn]密码 */

    TUP_UINT32 stg_num;                                         /**< [en]Indicates the number of stg. [cn]stg个数 */
    LOGIN_S_SERVER_ADDR_INFO* stg_addr;                         /**< [en]Indicates the STG addr. [cn]STG 地址信息 */

    TUP_UINT32 sbc_num;                                         /**< [en]Indicates the number of sbc. [cn]sbc个数 */
    LOGIN_S_SERVER_ADDR_INFO* sbc_addr;                         /**< [en]Indicates the SBC addr. [cn]SBC 地址信息 */
}LOGIN_S_STG_INFO;


/** 
 * [en]This structure is used to describe TMS information.
 * [cn]TMS信息
 */
typedef struct tagLOGIN_S_TMS_INFO
{
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN];                /**< [en]Indicates the username. [cn]用户名 */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH];             /**< [en]Indicates the password. [cn]密码 */

    TUP_UINT32 tms_num;                                         /**< [en]Indicates the number of stg. [cn]tms个数 */
    LOGIN_S_SERVER_ADDR_INFO* tms_addr;                         /**< [en]Indicates the STG addr. [cn]tms 地址信息 */
}LOGIN_S_TMS_INFO;


/** 
 * [en]This structure is used to describe multi-server information.
 * [cn]多服务器信息
 */
typedef struct tagLOGIN_S_MULTI_SERVER_INFO
{
    TUP_UINT32                  server_num;             /**< [en]Indicates the number of servers. [cn]服务器个数 */
    LOGIN_S_SERVER_ADDR_INFO  * server_info;            /**< [en]Indicates server information. [cn]服务器信息  modify 参数变动 */
}LOGIN_S_MULTI_SERVER_INFO, *LOGIN_S_MULTI_SERVER_PTR;

#define LOGIN_D_MAX_MS_NUM 8


/** 
 * [en]This structure is used to describe STG information.
 * [cn]STG信息
 */
typedef struct tagLOGIN_S_UPORTAL_STG_INFO
{
    TUP_CHAR stg_uri[LOGIN_D_MAX_URL_LENGTH];          /**< [en]Indicates the STG URI. Required for external network access. [cn]STG接入URI，外网接入时必选 */
    TUP_CHAR account[LOGIN_D_MAX_ACCOUNT_LEN];         /**< [en]Indicates the account. Required for external network access.[cn]STG接入帐号，外网接入时必选 */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH];    /**< [en]Indicates the password. Required for external network access.[cn]STG接入密码，外网接入时必选 */
    TUP_CHAR sip_stg_uri[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates the sip STG URI. Proxy intranet address, required for external network access.[cn]SBC上的SIP Proxy内网地址，外网接入时必选 */
    TUP_CHAR eserver_stg_uri[LOGIN_D_MAX_URL_LENGTH];  /**< [en]Indicates the IP address of the internal network accessed through STG. Required for external network access. [cn]通过STG接入的内网eServer地址，外网接入时必选 */
    TUP_CHAR maa_stg_uri[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates the internal network MAA address accessed through the STG. Required for external network access. [cn]通过STG接入的内网MAA地址，外网接入时必选 */
    TUP_CHAR ms_stg_uri[LOGIN_D_MAX_MS_NUM][LOGIN_D_MAX_URL_LENGTH];   /**< [en]Indicates the internal network MS address accessed through the STG. Required for external network access. [cn]通过STG接入的内网MS地址，外网接入时必选 */
} LOGIN_S_UPORTAL_STG_INFO;


/** 
 * [en]This structure is used to describe access server.
 * [cn]访问服务器
 */
typedef struct tagLOGIN_S_ACCESS_SERVER
{
    TUP_CHAR server_name[LOGIN_D_MAX_NAME];             /**< [en]Indicates the access server name. [cn]接入服务器名称 */
    TUP_CHAR sip_uri[LOGIN_D_MAX_URL_LENGTH];           /**< [en]Indicates the SIP URI. [cn]SIP注册地址 */
    TUP_CHAR svn_uri[LOGIN_D_MAX_URL_LENGTH];           /**< [en]Indicates the SVN proxy server address. [cn]SVN代理服务器地址 */
    TUP_CHAR httpsproxy_uri[LOGIN_D_MAX_URL_LENGTH];    /**< [en]Indicates the Https proxy server address. [cn]HTTPS反向代理地址 */
    TUP_CHAR eserver_uri[LOGIN_D_MAX_URL_LENGTH];       /**< [en]Indicates the eServer address. [cn]eServer服务器(IM业务服务器)地址 */
    TUP_CHAR conf_uri[LOGIN_D_MAX_URL_LENGTH];          /**< [en]Indicates the conference uri. [cn]会议服务器URI */
    TUP_CHAR maa_uri[LOGIN_D_MAX_URL_LENGTH];           /**< [en]Indicates the MAA server address. [cn] MAA服务器地址*/
    TUP_CHAR androidpush_uri[LOGIN_D_MAX_URL_LENGTH];   /**< [en]Indicates an Android push address. [cn]AndroidPush服务器地址 */
    TUP_CHAR ms_param_uri[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates the MS conference parameter gets the server address. [cn] MS会议参数获取服务器地址*/
    TUP_CHAR ms_param_path_uri[LOGIN_D_MAX_URL_LENGTH]; /**< [en]Indicates that the MS conference parameter gets the server path. [cn] MS会议参数获取服务器路径*/
    TUP_CHAR eab_uri[LOGIN_D_MAX_URL_LENGTH];           /**< [en]Indicates the enterprise address The server address. [cn] 企业地址本服务器地址*/
    TUP_CHAR prophoto_uri[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates the avatar server address. [cn] 头像服务器地址*/
    TUP_CHAR tms_uri[LOGIN_D_MAX_URL_LENGTH];           /**< [en]Indicates the tms server address. [cn] tms服务器地址*/
    TUP_CHAR ms_uri[LOGIN_D_MAX_MS_NUM][LOGIN_D_MAX_URL_LENGTH];       /**< [en]Indicates the MS conferencing server. [cn] MS会议服务器*/
    LOGIN_S_UPORTAL_STG_INFO stg_info;                  /**< [en]Indicates stg information. [cn]STG信息 */
} LOGIN_S_ACCESS_SERVER;


/** 
 * [en]This structure is used to describe authentication address information.
 * [cn]鉴权地址信息
 */
typedef struct tagLOGIN_S_AUTHORIZE_SITE_INFO
{
    TUP_CHAR site_name[LOGIN_D_MAX_NAME];          /**< [en]Indicates the site name. [cn]站点名称 */
    TUP_CHAR sbc_domain[LOGIN_D_MAX_URL_LENGTH];   /**< [en]Indicates the SBC domain. [cn]SBC域名 */
    TUP_CHAR tms_account[LOGIN_D_MAX_ACCOUNT_LEN]; /**< [en]Indicates the tms auth account [cn]tms服务器鉴权用户名 */
    TUP_CHAR tms_pwd[LOGIN_D_MAX_PASSWORD_LEN];    /**< [en]Indicates the tms auth pwd [cn]tms服务器鉴权密码 */
    TUP_UINT32 priority;                           /**< [en]Indicates the priority, value range from 1 to 3, the smaller number represent the higher priority [cn]站点优先级。值域：[1-3]，优先级从高到低，数字越小代表优先级越高 */
    TUP_UINT32 num_of_server;                      /**< [en]Indicates the number of servers. [cn]接入服务器个数 */
    LOGIN_S_ACCESS_SERVER* access_server;          /**< [en]Indicates access to the server. [cn]接入服务器信息 */
} LOGIN_S_AUTHORIZE_SITE_INFO;


/** 
 * [en]This structure is used to describe authentication login result.(SP&IMS Hosted VC)
 * [cn]鉴权登录结果(SP&IMS Hosted VC)
 */
typedef struct tagLOGIN_S_AUTHORIZE_RESULT
{
    TUP_CHAR auth_token[LOGIN_D_MAX_TOKEN_LEN];         /**< [en]Indicates the token value. [cn]token值 */
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN];        /**< [en]Indicates the username (third-party Tiket authentication, Uportal return username and Token). [cn]用户名(第三方Tiket鉴权，Uportal返回用户名和Token)  */
    TUP_CHAR media_type[LOGIN_D_MAX_MEDIATYPE_LEN];     /**< [en]Indicates the MediaType type, the media type of the user-supported conference, similar to: voice; video. [cn]MediaType类型，用户支持的会议的媒体类型，类似：voice;video */
    
    LOGIN_S_SERVER_ADDR_INFO auth_serinfo;              /**< [en]Indicates the authentication login address information, usually the IP address. [cn]鉴权登录地址信息，一般是IP地址 */

    LOGIN_S_SIP_INFO sip_info;                          /**< [en]Indicates SIP information. [cn]SIP信息 */
    LOGIN_S_STG_INFO stg_info;                          /**< [en]Indicates STG information. [cn]STG信息 */
    LOGIN_S_EUA_INFO eua_info;                          /**< [en]Indicates EUA information. [cn]EUA信息 */    
    LOGIN_S_TMS_INFO tms_info;                          /**< [en]Indicates TMS information. [cn]TMS信息 */  
    LOGIN_S_MULTI_SERVER_INFO maa_info;                 /**< [en]Indicates the MAA server address and port. [cn]MAA    服务器地址和端口号 */
    LOGIN_S_MULTI_SERVER_INFO eServer_info;             /**< [en]Indicates the eServer server address and port. [cn]eServer服务器地址和端口号 */
    LOGIN_S_SERVER_ADDR_INFO eab_info;                  /**< [en]Indicates the EAB server address and port. [cn]EAB    服务器地址和端口号 */
    LOGIN_S_SERVER_ADDR_INFO group_info;                /**< [en]Indicates the Group server address and port. [cn]Group 服务器地址和端口号 */
    LOGIN_S_MULTI_SERVER_INFO uportal_info;             /**< [en]Indicates the Uportal server address and port. [cn]Uportal 服务器地址和端口号 */
} LOGIN_S_AUTHORIZE_RESULT;


/** 
 * [en]This structure is used to describe authentication login result.(uportal)
 * [cn]鉴权登录结果 uportal
 */
typedef struct tagLOGIN_S_UPORTAL_AUTHORIZE_RESULT
{
    TUP_CHAR auth_token[LOGIN_D_MAX_TOKEN_LEN];         /**< [en]Indicates the token value. [cn]Token值 */
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN];        /**< [en]Indicates the username (third-party Tiket authentication, Uportal returns the user name and Token). [cn]用户名(第三方Tiket鉴权，Uportal返回用户名和Token)  */
    TUP_CHAR media_type[LOGIN_D_MAX_MEDIATYPE_LEN];     /**< [en]Indicates the MediaType type, the media type of the user-supported conference, similar to: voice; video. [cn]MediaType类型，用户支持的会议的媒体类型，类似：voice;video */
    
    TUP_CHAR sip_account[LOGIN_D_MAX_ACCOUNT_LEN];      /**< [en]Indicates the sip number. [cn]SIP注册帐号 */
    TUP_CHAR sip_impi[LOGIN_D_MAX_ACCOUNT_LEN];         /**< [en]Indicates the impi number. [cn]SIP IP多媒体私有标识(IP Multimedia Private Identity) */

    LOGIN_E_AUTH_PASSWORD_TYPE password_type;           /**< [en]Indicates the password type. [cn]SIP密码类型 */
    TUP_CHAR sip_password[LOGIN_D_MAX_PASSWORD_LENGTH]; /**< [en]Indicates the sip password. [cn]SIP注册密码 */
    TUP_CHAR sip_domain[LOGIN_D_MAX_URL_LENGTH];        /**< [en]Indicates the sip domain name. [cn]SIP域名 */
    
    LOGIN_S_SERVER_ADDR_INFO auth_serinfo;              /**< [en]Indicates the authentication login address information, usually the IP address. [cn]当前鉴权登录地址信息 */
    TUP_UINT32 expire;                                  /**< [en]Indicates the authentication expiration time. [cn]鉴权过期时间 */
    TUP_UINT32 num_of_site;                             /**< [en]Indicates the number of site. [cn]站点数量 */
    LOGIN_E_DEPLOY_MODE deploy_mode;                    /**< [en]Indicates the deployment mode. [cn]部署模式 */
    LOGIN_S_AUTHORIZE_SITE_INFO* site_info;             /**< [en]Indicates site information. [cn]站点信息 */
    TUP_BOOL is_first_login;                            /**< [en]Indicates whether is first login. [cn]是否首次登陆 */
    TUP_UINT32 left_days_of_pwd;                        /**< [en]Indicates the left days of password. [cn]密码剩余有效期天数 */
    TUP_CHAR real_user_account[LOGIN_D_MAX_ACCOUNT_LEN];/**< [en]Indicates the real account in third-party authentication.[cn]第三方鉴权返回的真实用户名 */
    TUP_CHAR eab_server[LOGIN_D_MAX_URL_LENGTH];        /**< [en]Indicates the enterprise address book server. [cn]企业通讯录服务器 */
    TUP_CHAR group_server[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates the avatar server. [cn]头像服务器 */
    TUP_CHAR dms_server[LOGIN_D_MAX_URL_LENGTH];        /**< [en]Indicates the dms server. [cn]dms服务器 */
    LOGIN_S_MULTI_SERVER_INFO all_sip_server;           /**< [cn]Indicates all sip server url. [cn]所有站点的sip地址 */
} LOGIN_S_UPORTAL_AUTHORIZE_RESULT;



/** 
 * [en]This structure is used to describe login server parameters(On-premise VC).
 * [cn]登录服务器参数(On-premise VC)
 **/
typedef struct tagLOGIN_S_SMC_AUTHORIZE_RESULT
{
    TUP_CHAR name[LOGIN_D_MAX_NAME];                   /**< [en]Indicates the STG login name. [cn]STG登入名称 */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH];    /**< [en]Indicates the STG login password. [cn]STG登入密码 */

    TUP_UINT32 stg_num;                                /**< [en]Indicates the number of STG servers. [cn]STG服务器个数*/
    LOGIN_S_SERVER_ADDR_INFO* stg_servers;             /**< [en]Indicates the STG server IP. [cn]STG服务器IP*/
    TUP_UINT32 sbc_num;                                /**< [en]Indicates the number of IP addresses in the SBC. [cn]SBC内网IP个数*/
    LOGIN_S_SERVER_ADDR_INFO* sbc_servers;             /**< [en]Indicates the SBC Intranet IP. [cn]SBC内网IP */
    TUP_UINT32 smc_num;                                /**< [en]Indicates the number of SMC addresses. [cn]SMC地址个数*/
    LOGIN_S_SERVER_ADDR_INFO* smc_servers;             /**< [en]Indicates the SMC address. [cn]SMC地址 */ 
    TUP_UINT32 sbc_out_num;                            /**< [en]Indicates the number of IP addresses in the SBC. [cn]SBC外网IP个数*/
    LOGIN_S_SERVER_ADDR_INFO* sbc_out_servers;         /**< [en]Indicates the SBC external network IP. [cn]SBC外网IP */
    TUP_UINT32 sip_server_num;                         /**< [en]Indicates the number of SIP server. [cn]SIP 服务器个数 */
    LOGIN_S_SERVER_ADDR_INFO* sip_servers;             /**< [en]Indicates the SIP server address. [cn]SIP 服务器地址 */
    TUP_UINT32 sip_proxy_num;                          /**< [en]Indicates the number of SIP proxy server . [cn]SIP 代理服务器个数 */
    LOGIN_S_SERVER_ADDR_INFO* sip_proxy_servers;       /**< [en]Indicates the SIP proxy server address. [cn]SIP 代理服务器地址 */
    TUP_CHAR sip_uri[LOGIN_D_MAX_URL_LENGTH];          /**< [en]Indicates the SIP uri. [cn]SIP uri地址 */
    TUP_CHAR sip_authname[LOGIN_D_MAX_NAME];           /**< [en]Indicates the SIP authorize account. [cn]SIP 鉴权用户名 */
    TUP_CHAR sip_pwd[LOGIN_D_MAX_PASSWORD_LENGTH];     /**< [en]Indicates the SIP authorize pwd. [cn]SIP 鉴权密码 */
    TUP_UINT32 h323_gk_num;                            /**< [en]Indicates the number of h.323 gk server . [cn]h.323 gk服务器个数 */
    LOGIN_S_SERVER_ADDR_INFO* h323_gk_servers;         /**< [en]Indicates the h.323 gk server address. [cn]h.323 gk 服务器地址 */
    TUP_CHAR h323_e164[LOGIN_D_MAX_USERNUMBER_LENGTH]; /**< [en]Indicates the h.323 e164. [cn]h.323 e164 */
    TUP_CHAR h323_id[LOGIN_D_MAX_USERNUMBER_LENGTH];   /**< [en]Indicates the h.323 id. [cn]h.323 id */
    TUP_CHAR h323_authname[LOGIN_D_MAX_NAME];          /**< [en]Indicates the h.323 authorize account. [cn]h.323 鉴权用户名 */
    TUP_CHAR h323_pwd[LOGIN_D_MAX_PASSWORD_LENGTH];    /**< [en]Indicates the h.323 authorize pwd. [cn]h.323 鉴权密码 */

    LOGIN_S_SERVER_ADDR_INFO auth_serinfo;             /**< [en]Indicates the authentication login address information, usually the IP address. [cn]鉴权登录地址信息，一般是IP地址 */
} LOGIN_S_SMC_AUTHORIZE_RESULT;


/** 
 * [en]This structure is used to describe the refresh token result.
 * [cn]token刷新结果
 */
typedef struct tagLOGIN_S_REFRESH_TOKEN_RESULT
{
    TUP_CHAR auth_token[LOGIN_D_MAX_TOKEN_LEN];    /**< [en]Indicates the token value. [cn]token值 */
    TUP_CHAR stg_account[LOGIN_D_MAX_ACCOUNT_LEN]; /**< [en]Indicates the account. [cn]STG接入帐号 */
    TUP_CHAR stg_psw[LOGIN_D_MAX_PASSWORD_LENGTH]; /**< [en]Indicates the password. [cn]STG接入密码 */
}LOGIN_S_REFRESH_TOKEN_RESULT;


/** 
 * [en]This structure is used to describe the firewall detection server parameters.
 * [cn]防火墙探测服务器参数
 **/
typedef struct tagLOGIN_S_DETECT_SERVER
{
    TUP_UINT32 server_num;                       /**< [en]Indicates the number of servers. [cn]服务器个数*/
    LOGIN_S_SERVER_ADDR_INFO* servers;           /**< [en]Indicates Server IP (Port Reservation). [cn]服务器IP(端口预留)*/
} LOGIN_S_DETECT_SERVER;


/** 
 * [en]This structure is used to describe the STG information.
 * [cn]STG信息
 */
typedef struct tagLOGIN_S_STG_PARAM
{
    TUP_UINT32 stg_num;                              /**< [en]Indicates the number of STG servers. [cn]STG服务器个数 */
    LOGIN_S_SERVER_ADDR_INFO* stg_servers;           /**< [en]Indicates the STG server. [cn]STG服务器 */
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN];     /**< [en]Indicates the account username. [cn]账户用户名 */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH];  /**< [en]Indicates the account password. [cn]账户密码 */
    TUP_CHAR ca_path[LOGIN_D_MAX_CA_PATH_LEN];       /**< [en]Indicates the path of CA . [cn]CA证书路径 */
} LOGIN_S_STG_PARAM;


/** 
 * [en]This structure is used to describe the http proxy information.
 * [cn]代理信息
 */
typedef struct tagLOGIN_S_PROXY_PARAM
{  
    LOGIN_S_SERVER_ADDR_INFO proxy_server;           /**< [en]Indicates that the http proxy server, up to only one. [cn]http代理服务器，最多只有一个 */
    LOGIN_S_AUTH_INFO proxy_auth;                    /**< [en]Indicates the username and password. [cn]用户名+密码 */
} LOGIN_S_PROXY_PARAM;


/**
 * @brief [en]Indicates the login event notification callback function definition..
 *        <br>[cn]登录事件通知回调函数定义
 * 
 * @param [in] TUP_UINT32 msgid           <b>:</b><br>[en]Indicates the message ID. @see tagLOGIN_E_EVENT.
 *                                                <br>[cn]消息ID @see tagLOGIN_E_EVENT
 * @param [in] TUP_UINT32 param1          <b>:</b><br>[en]Indicates the parameter 1.
 *                                                <br>[cn]参数1
 * @param [in] TUP_UINT32 param2          <b>:</b><br>[en]Indicates the parameter 2.
 *                                                <br>[cn]参数2
 * @param [in] TUP_VOID *data             <b>:</b><br>[en]]Indicates the message to attach data, see the description of the different event IDs.
 *                                                <br>[cn]附加数据，具体参见不同事件ID的说明
 * @retval TUP_VOID
 * 
 * @attention [en]None.
 *            <br>[cn]
 * @see NA
 **/
typedef TUP_VOID (*LOGIN_FN_CALLBACK_PTR)(TUP_UINT32 msgid, TUP_UINT32 param1, TUP_UINT32 param2, TUP_VOID *data);


#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif  /* __LOGIN_DEF_H__ */


/*
* History: \n
* 2012-12-10, 初始化该文件。 \n
* 2015-12-30, TUP V100R001C50 TR5 发布，更新此文件。 \n
*
* vi: set expandtab ts=4 sw=4 tw=80:
*/

