/** 
 * @file login_def.h
 * 
 * Copyright(C), 2012-2015, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 *
 * @brief [en]Description: The header file of the TUP unified authentication and login component function struct definitioin
 *        [cn]描述：TUP 统一鉴权与登录组件功能结构定义头文件。 \n
 * 
 */


#ifndef __LOGIN_ADVANCED_DEF_H__
#define __LOGIN_ADVANCED_DEF_H__

#include "tup_def.h"
#include "login_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

/**
 *  [en]cipher enum type
 *  [cn]加密套类型枚举
 */
typedef enum tagLOGIN_E_CIPHER_TYPE
{
    LOGIN_E_TLS11_CK_RSA_NULL_MD5               = 0x03000001,               
    LOGIN_E_TLS11_CK_RSA_NULL_SHA               = 0x03000002,          
    LOGIN_E_TLS11_CK_RSA_RC4_128_MD5            = 0x03000004,            
    LOGIN_E_TLS11_CK_RSA_RC4_128_SHA            = 0x03000005,           
    LOGIN_E_TLS11_CK_RSA_DES_64_CBC_SHA         = 0x03000009,         
    LOGIN_E_TLS11_CK_RSA_DES_192_CBC3_SHA       = 0x0300000A, 
    LOGIN_E_TLS11_CK_EDH_DSS_DES_64_CBC_SHA     = 0x03000012,        
    LOGIN_E_TLS11_CK_EDH_DSS_DES_192_CBC3_SHA   = 0x03000013,      
    LOGIN_E_TLS11_CK_EDH_RSA_DES_64_CBC_SHA     = 0x03000015,            
    LOGIN_E_TLS11_CK_EDH_RSA_DES_192_CBC3_SHA   = 0x03000016,     
    LOGIN_E_TLS11_CK_ADH_RC4_128_MD5            = 0x03000018,            
    LOGIN_E_TLS11_CK_ADH_DES_64_CBC_SHA         = 0x0300001A,            
    LOGIN_E_TLS11_CK_ADH_DES_192_CBC3_SHA       = 0x0300001B,       
    LOGIN_E_TLS11_CK_RSA_WITH_AES_128_SHA       = 0x0300002F,       
    LOGIN_E_TLS11_CK_DHE_DSS_WITH_AES_128_SHA   = 0x03000032,   
    LOGIN_E_TLS11_CK_DHE_RSA_WITH_AES_128_SHA   = 0x03000033, 
    LOGIN_E_TLS11_CK_ADH_WITH_AES_128_SHA       = 0x03000034,  
    LOGIN_E_TLS11_CK_RSA_WITH_AES_256_SHA       = 0x03000035,      
    LOGIN_E_TLS11_CK_DHE_DSS_WITH_AES_256_SHA   = 0x03000038,  
    LOGIN_E_TLS11_CK_DHE_RSA_WITH_AES_256_SHA   = 0x03000039,  
    LOGIN_E_TLS11_CK_ADH_WITH_AES_256_SHA       = 0x0300003A,   
    LOGIN_E_TLS12_CK_RSA_NULL_SHA256            = 0x0300003B,
    LOGIN_E_TLS12_CK_RSA_AES_128_CBC_SHA256     = 0x0300003C,
    LOGIN_E_TLS12_CK_RSA_AES_256_CBC_SHA256     = 0x0300003D,
    LOGIN_E_TLS12_CK_DHE_DSS_AES_128_CBC_SHA256 = 0x03000040,
    LOGIN_E_TLS12_CK_DHE_RSA_AES_128_CBC_SHA256 = 0x03000067,
    LOGIN_E_TLS12_CK_DHE_DSS_AES_256_CBC_SHA256 = 0x0300006A,
    LOGIN_E_TLS12_CK_DHE_RSA_AES_256_CBC_SHA256 = 0x0300006B,
    LOGIN_E_TLS12_CK_ADH_AES_128_CBC_SHA256     = 0x0300006C,
    LOGIN_E_TLS12_CK_ADH_AES_256_CBC_SHA256     = 0x0300006D,
    LOGIN_E_TLS12_CK_RSA_WITH_AES_128_GCM_SHA256 = 0x0300009C,
    LOGIN_E_TLS12_CK_RSA_WITH_AES_256_GCM_SHA384 = 0x0300009D,
    LOGIN_E_TLS12_CK_DHE_RSA_WITH_AES_128_GCM_SHA256  = 0x0300009E,
    LOGIN_E_TLS12_CK_DHE_RSA_WITH_AES_256_GCM_SHA384  = 0x0300009F,
    LOGIN_E_TLS12_CK_DHE_DSS_WITH_AES_128_GCM_SHA256  = 0x030000A2,
    LOGIN_E_TLS12_CK_DHE_DSS_WITH_AES_256_GCM_SHA384  = 0x030000A3
}LOGIN_E_CIPHER_TYPE;



/** 
 * [en]This enumeration is used to describe the license type.
 * [cn]License类型
 */
typedef enum tagLOGIN_E_LICENSE_TYPE
{
    LOGIN_E_LICENSE_HUAWEI_SC = 0,          /**< [en]Indicates Huawei SC.
                                                 <br>[cn]华为SC */
    LOGIN_E_LICENSE_OTHER_SIP_SERVER,       /**< [en]Indicates third-party sip server.
                                                 <br>[cn]第三方sip server */
    LOGIN_E_LICENSE_BUTT                    /**< [en]Indicates invalid type.
                                                 <br>[cn]无效类型 */
}LOGIN_E_LICENSE_TYPE;



/** 
 * [en]This enumeration is used to describe platform types.
 * [cn]平台类型
 */
typedef enum tagLOGIN_E_PLATFORM_TYPE
{
    LOGIN_E_PLATFORM_TYPE_BEGIN = 0,
    LOGIN_E_PLATFORM_TYPE_VIDEXIO,              /**< [en]Indicates the VidexIO platform.
                                                     <br>[cn]VidexIO平台 */
    LOGIN_E_PLATFORM_TYPE_DR_PENG,              /**< [en]Indicates Dr. Peng platform.
                                                     <br>[cn]鹏博士平台  */
    LOGIN_E_PLATFORM_TYPE_STARLEAF,              /**< [en]Indicates StarLeaf platform.
                                                     <br>[cn]StarLeaf平台  */                                                                                                        
    LOGIN_E_PLATFORM_TYPE_END
}LOGIN_E_PLATFORM_TYPE;


/** 
 * [en]This enumeration is used to describe LDAP authentication types.
 * [cn]LADP鉴权类型
 */
typedef enum tagLOGIN_E_LDAP_AUTH_TYPE
{
    LOGIN_E_LDAP_AUTH_BEGIN,
    LOGIN_E_LDAP_AUTH_GENERAL,                  /**< [en]Indicates normal.
                                                     <br>[cn]普通 */
    LOGIN_E_LDAP_AUTH_SECURED,                  /**< [en]Indicates encryption.
                                                     <br>[cn]加密 */
    LOGIN_E_LDAP_AUTH_ANONYMOUS,                /**< [en]Indicates anonymity.
                                                     <br>[cn]匿名 */
    LOGIN_E_LDAP_AUTH_END
}LOGIN_E_LDAP_AUTH_TYPE;




/** 
 * [en]This enumeration is used to describe the major configuration types.
 * [cn]主要的配置类型
 */
typedef enum tagLOGIN_E_CFG_MAJOR_TYPE
{
    LOGIN_E_CFG_PLATFORM = 1,    /**< [en]Indicates docking platform.
                                      <br>[cn]对接平台   */
    LOGIN_E_CFG_SERVER,          /**< [en]Indicates the server address.
                                      <br>[cn]服务器地址 */
    LOGIN_E_CFG_DEVICE,          /**< [en]Indicates device information.
                                      <br>[cn]设备信息   */
    LOGIN_E_CFG_BUTT
} LOGIN_E_CFG_MAJOR_TYPE;

/** 
 * [en]This enumeration is used to describe the configuration data type.
 * [cn]配置数据类型
 */
typedef enum tagLOGIN_E_CFG_DATA_TYPE
{
    LOGIN_E_CFG_DATA_TYPE_INT       = 0x01,        /**< [en]Indicates the int type.
                                                        <br>[cn]int类型 */
    LOGIN_E_CFG_DATA_TYPE_STRING    = 0x02,        /**< [en]Indicates the string type.
                                                        <br>[cn]string类型 */
    LOGIN_E_CFG_DATA_TYPE_STRUCTURE = 0x04,        /**< [en]Indicates the structure type.
                                                        <br>[cn]structure类型 */
    LOGIN_E_CFG_DATA_TYPE_BOOL      = 0x08,        /**< [en]Indicates the bool type.
                                                        <br>[cn]bool类型 */
    LOGIN_E_CFG_DATA_TYPE_PTR       = 0x10,        /**< [en]Indicates the ptr type.
                                                        <br>[cn]ptr类型 */
    LOGIN_E_CFG_DATA_TYPE_BUTT
} LOGIN_E_CFG_DATA_TYPE;


#define LOGIN_ID_DEF(major, data_type, id, index) ((major) << 24 | ((data_type) << 16) | (id) << 8 | (index))

#define LOGIN_D_CFG_PLATFORM_TYPE              LOGIN_ID_DEF(LOGIN_E_CFG_PLATFORM, LOGIN_E_CFG_DATA_TYPE_INT,       0x1, 0)  /**< [en]Indicates the docking platform type, LOGIN_E_PLATFORM_TYPE
                                                                                                                                 <br>[cn]对接平台类型，LOGIN_E_PLATFORM_TYPE */
#define LOGIN_D_CFG_TIME_QUERY_INTERVAL        LOGIN_ID_DEF(LOGIN_E_CFG_SERVER,   LOGIN_E_CFG_DATA_TYPE_INT,       0x3, 0)  /**< [en]Indicates the time interval for querying the configuration server, and the heartbeat interval in seconds
                                                                                                                                 <br>[cn]向配置服务器定时查询间隔，兼做心跳间隔，单位: 秒    */

#define LOGIN_D_CFG_DEVICE_INFO                LOGIN_ID_DEF(LOGIN_E_CFG_DEVICE,   LOGIN_E_CFG_DATA_TYPE_STRUCTURE, 0x1, 0)  /**< [en]Indicates the device information, LOGIN_S_VIDEXIO_DEVICE_INFO
                                                                                                                                 <br>[cn]设备信息，LOGIN_S_VIDEXIO_DEVICE_INFO  */
#define LOGIN_D_CFG_SYSTEM_NAME                LOGIN_ID_DEF(LOGIN_E_CFG_DEVICE,   LOGIN_E_CFG_DATA_TYPE_STRING,    0x2, 0)  /**< [en]Indicates the system name, TUP_CHAR system_name [LOGIN_D_MAX_SYSTEM_NAME_LEN + 1]
                                                                                                                                 <br>[cn]系统名称，TUP_CHAR system_name[LOGIN_D_MAX_SYSTEM_NAME_LEN + 1]   */



/**
 * [en]This struct is used to describe cipher list structure
 * [cn]加密套结构体
 */
typedef struct tagLOGIN_S_CIPHERLIST
{
    TUP_BOOL isAdd;                           /**[en]indicate set or add, set: init or override current cipher list; add: add extra ciphers usually to default ones, ignoring the duplicates 
                                                 [cn]配置或增加方法，配置：会全量设置加密套列表；增加：在原有基础上增加加密套，如果已存在则不生效，典型场景为在默认的加密套上增加*/
    TUP_UINT32 uiSize;                        /**[en]number of ciphers in array. [cn]数组实际长度*/
    LOGIN_E_CIPHER_TYPE *peCipherList;        /**[en]cipher list. [cn]加密套内容*/
} LOGIN_S_CIPHERLIST;


/**
 * [en]This struct is used to describe the parameters of HTTP timeout.
 * [cn]HTTP超时参数
 */
typedef struct tagLOGIN_S_HTTP_TIMEOUT_VALUE
{
    TUP_UINT32 uiTcpCreateTimeOut; /**< [en]Indicates tcp three-way handshake timeout, the default 5s. [cn]tcp三次握手超时,默认5s */
    TUP_UINT32 uiTlsCreateTimeOut; /**< [en]Indicates tls timeout, the default 4s. [cn]tls建立超时,默认4s */
    TUP_UINT32 uiRequestTimeOut;   /**< [en]Indicates the signaling request timed out, the default 30s. [cn]信令请求超时,默认30s */
} LOGIN_S_HTTP_TIMEOUT_VALUE;


/**
 * [en]This struct is used to describe initialize the parameters.
 * [cn]初始化参数结构体
 */
typedef struct tagLOGIN_S_INIT_PARAM
{
    TUP_BOOL bWaiMsgpThread;               /**< [en]Indicates whether to wait for the message Queuing thread (default: TRUE). [cn]是否要等待消息队列线程(默认TRUE) */
    TUP_BOOL bFailedRetry;                 /**< [en]Indicates whether to retry after failed. [cn]失败后是否重试 */
    LOGIN_S_HTTP_TIMEOUT_VALUE stTimeOut;  /**< [en]Indicates time http timeout. [cn]http超时时间 */
} LOGIN_S_INIT_PARAM;


/** 
 * [en]This structure is used to describe the license management parameters.
 * [cn]license管理参数
 */
typedef struct tagLOGIN_S_LICENSE_MANAGE_PARAM
{
    TUP_CHAR acUseName[LOGIN_D_MAX_USERNAME_LEN];         /**< [en]Indicates the username. [cn]用户名 */
    TUP_CHAR acPassword[LOGIN_D_MAX_PASSWORD_LEN];        /**< [en]Indicates the password. [cn]密码 */
    TUP_CHAR acServerAddress[LOGIN_D_MAX_SERVICE_LEN];    /**< [en]Indicates the license management server. [cn]license管理服务器 */
}LOGIN_S_LICENSE_MANAGE_PARAM;


/** 
 * [en]This structure is used to describe call bandwidth information.
 * [cn]呼叫带宽信息
 */
typedef struct tagLOGIN_S_VIDEXIO_CONF_INFO
{
    TUP_UINT32              max_call_out_band_width;    /**< [en]Indicates the maximum of outgoing bandwidth. [cn]最大呼出带宽 */
    TUP_UINT32              max_call_in_band_width;     /**< [en]Indicates the maximum of incoming bandwidth. [cn]最大呼入带宽 */
    LOGIN_E_ENCRYPTION_TYPE encrypt_type;               /**< [en]Indicates the signaling encryption policy. [cn]信令加密策略 */
    LOGIN_E_PROTOCOL_TYPE   default_protocol;           /**< [en]Indicates the default call protocol. [cn]缺省呼叫协议 */
    TUP_UINT32              default_band_width;         /**< [en]Indicates the default call bandwidth. [cn]缺省呼叫带宽 */
}LOGIN_S_VIDEXIO_CONF_INFO;

/** 
 * [en]This structure is used to describe LDAP server information.
 * [cn]LDAP服务器信息
 */
typedef struct tagLOGIN_S_LDAP_SERVER_INFO
{
    TUP_CHAR                ldap_server_address[LOGIN_D_MAX_URL_LENGTH + 1];    /**< [en]Indicates the LDAP server address. [cn]LDAP服务器地址 */
    TUP_UINT16              port;                                               /**< [en]Indicates the port. [cn]端口 */
    TUP_CHAR                base_dn[LOGIN_D_MAX_DN_LEN + 1];                    /**< [en]Indicates the base domain name. [cn]base DN */
    LOGIN_E_LDAP_AUTH_TYPE  authentication_type;                                /**< [en]Indicates the type of authentication. [cn]鉴权类型 */
    TUP_UINT32              ssl_encrypt;                                        /**< [en]Indicates whether SSL is supported.The options are as follows: 0, indicating Disable; non-0, said Enable. [cn]是否支持SSL。0，表示Disable；非0，表示Enable */
    TUP_CHAR                user_name[LOGIN_D_MAX_VIDEXIO_ACCOUNT_LEN + 1];     /**< [en]Indicates the login account. [cn]登录账号 */
    TUP_CHAR                pwd[LOGIN_D_MAX_VIDEXIO_PASSWORD_LENGTH + 1];       /**< [en]Indicates the password. [cn]密码 */
    TUP_CHAR                domain[LOGIN_D_MAX_URL_LENGTH + 1];                 /**< [en]Indicates the domain. [cn]域 */
    TUP_UINT32              auto_search;                                        /**< [en]Indicates whether automatic searching is supported. The options are as follows:0, said Off; non-0, said On. [cn]是否支持自动搜索。0，表示Off；非0，表示On */
}LOGIN_S_LDAP_SERVER_INFO;

/** 
 * [en]This structure is used to describe query results of configuration information.
 * [cn]配置信息的查询结果
 */
typedef struct tagLOGIN_S_CONFIG_QUERY_RES
{
    TUP_UINT32                subscribe_result;         /**< [en]Indicates to query result. [cn]查询结果 */
    LOGIN_S_SIP_INFO          sip_info;                 /**< [en]Indicates SIP information. [cn]SIP信息 */
    LOGIN_S_VIDEXIO_CONF_INFO conf_info;                /**< [en]Indicates to call bandwidth. [cn]呼叫带宽 */
    TUP_BOOL                  net_service_on_sip;       /**< [en]Indicates the sip network service information. The options are as follows:: 0, off; 1, open. [cn]sip网络服务信息。取值：0，关闭；1，开启  */
    TUP_UINT32                heart_beat_interval;      /**< [en]Indicates the sip heartbeat interval, in seconds. [cn]sip心跳间隔时间，单位:秒 */
    LOGIN_S_LDAP_SERVER_INFO  ldap_info;                /**< [en]Indicates the LDAP server information. [cn]LDAP服务器信息 */
}LOGIN_S_CONFIG_QUERY_RES;



/** 
 * [en]This structure is used to describe active result.
 * [cn]激活结果
 */
typedef struct tagLOGIN_S_ACTIVE_RESULT
{
    TUP_UINT32         active_result;                                       /**< [en]Indicates the active result. [cn]激活结果 */
    TUP_CHAR           account[LOGIN_D_MAX_VIDEXIO_ACCOUNT_LEN + 1];        /**< [en]Indicates the account. [cn]账号 */
    TUP_CHAR           password[LOGIN_D_MAX_VIDEXIO_PASSWORD_LENGTH + 1];   /**< [en]Indicates the password. [cn]密码 */
    TUP_CHAR           server_url[LOGIN_D_MAX_HTTPURL_LEN + 1];             /**< [en]Indicates the server address. [cn]服务器地址 */
}LOGIN_S_IPADDR_S_ACTIVE_RESULT;



/** 
 * [en]This structure is used to describe Videxio device information.
 * [cn]VIDEXIO设备信息
 */
typedef struct tagLOGIN_S_VIDEXIO_DEVICE_INFO
{
    TUP_CHAR       software_version[LOGIN_D_MAX_SOFTWARE_VER_LEN + 1];  /**< [en]Indicates the device software version number. [cn]本设备软件版本号       */
    TUP_CHAR       product_name[LOGIN_D_MAX_PRODUCT_NAME_LEN + 1];      /**< [en]Indicates the product's product name. [cn]本设备产品名称         */
    TUP_UINT32     ipv4;                                                /**< [en]Indicates the the IPV6 address of the device, network order. [cn]本设备IPV4地址，网络序 */
    TUP_UINT8      ipv6[LOGIN_D_IP_LENGTH];                             /**< [en]Indicates the IPV6 address of the device. [cn]本设备IPV6地址         */
    TUP_CHAR       device_mac[LOGIN_D_MAC_LEN];                         /**< [en]Indicates the MAC address of the device. [cn]本设备MAC地址          */
    TUP_CHAR       dev_sn[LOGIN_D_MAX_SN_LEN + 1];                      /**< [en]Indicates the SN number of the device. [cn]本设备SN号             */
}LOGIN_S_VIDEXIO_DEVICE_INFO;

/** 
 * [en]This structure is used to describe StarLeaf device information.
 * [cn]STARLEAF设备信息
 */
typedef struct tagLOGIN_S_STARLEAF_DEVICE_INFO
{
    TUP_CHAR       server_url[LOGIN_D_MAX_HTTPURL_LEN + 1];    /**< [en]Indicates the server address. [cn]服务器地址 */
    TUP_CHAR       product_id[LOGIN_D_MAX_PRODUCT_NAME_LEN + 1];      /**< [en]Indicates the device product ID. [cn]本设备产品ID         */
    TUP_CHAR       model_name[LOGIN_D_MAX_MODEL_NAME_LEN + 1];      /**< [en]Indicates the model name. [cn]设备模块名称         */
    TUP_CHAR       software_version[LOGIN_D_MAX_SOFTWARE_VER_LEN + 1];  /**< [en]Indicates the device software version number. [cn]本设备软件版本号       */
    TUP_CHAR       hardware_version[LOGIN_D_MAX_HARDWARE_VER_LEN + 1];  /**< [en]Indicates the device hardware version number. [cn]本设备硬件版本号       */
    TUP_CHAR       nonce[LOGIN_D_MAX_NONCE_LEN + 1];                      /**< [en]Indicates the device nonce number. [cn]本设备接入码号             */
    TUP_CHAR       guid[LOGIN_D_MAX_GUID_LEN + 1];                      /**< [en]Indicates the device guid number. [cn]本设备标识符             */
}LOGIN_S_STARLEAF_DEVICE_INFO;


/** 
 * [en]This structure is used to describe StarLeaf SIP register information.
 * [cn]STARLEAF SIP注册信息
 */
typedef struct tagLOGIN_STARLEAF_SIP_REG_PARAMS
{
    TUP_CHAR           username[LOGIN_D_MAX_ACCOUNT_LEN + 1];        /**< [en]Indicates the account. [cn]账号 */
    TUP_CHAR           password[LOGIN_D_MAX_PASSWORD_LENGTH + 1];   /**< [en]Indicates the password. [cn]密码 */
    TUP_CHAR           authname[LOGIN_D_MAX_ACCOUNT_LEN + 1];        /**< [en]Indicates the auth account. [cn]鉴权账号 */
    TUP_CHAR           domain[LOGIN_D_MAX_HTTPURL_LEN + 1];             /**< [en]Indicates the server address. [cn]服务器地址 */
}LOGIN_STARLEAF_SIP_REG_PARAMS;

/** 
 * [en]This structure is used to describe StarLeaf H323 register information.
 * [cn]STARLEAF H323注册信息
 */
typedef struct tagLOGIN_STARLEAF_H323_REG_PARAMS
{
    TUP_CHAR           gk_addr[LOGIN_D_MAX_HTTPURL_LEN + 1];        /**< [en]Indicates the gk server address. [cn]gk地址 */
    TUP_UINT32         gk_port;                                                            /**< [en]Indicates the gk server port. [cn]gk端口 */
    TUP_CHAR           h323_id[LOGIN_D_MAX_ACCOUNT_LEN + 1];         /**< [en]Indicates the H323 ID. [cn]h323 ID */
    TUP_CHAR           username[LOGIN_D_MAX_ACCOUNT_LEN + 1];        /**< [en]Indicates the account. [cn]账号 */
    TUP_CHAR           password[LOGIN_D_MAX_PASSWORD_LENGTH + 1];   /**< [en]Indicates the password. [cn]密码 */
}LOGIN_STARLEAF_H323_REG_PARAMS;

/** 
 * [en]This structure is used to describe StarLeaf LDAP  information.
 * [cn]STARLEAF LDAP信息
 */
typedef struct tagLOGIN_STARLEAF_LDAP_PARAMS
{
    TUP_CHAR           base_dn[LOGIN_D_MAX_DN_LEN + 1];        /**< [en]Indicates the base dn. [cn]基础dn */
    TUP_CHAR           bind_dn[LOGIN_D_MAX_DN_LEN + 1];   /**< [en]Indicates the bind dn. [cn]绑定dn */
    TUP_CHAR           host[LOGIN_D_MAX_URL_LENGTH + 1];        /**< [en]Indicates the host addr. [cn]主机地址*/
    TUP_CHAR           password[LOGIN_D_MAX_PASSWORD_LENGTH + 1];             /**< [en]Indicates the password. [cn]密码*/
}LOGIN_STARLEAF_LDAP_PARAMS;

/** 
 * [en]This structure is used to describe StarLeaf active information.
 * [cn]STARLEAF激活信息
 */
typedef struct tagLOGIN_S_STARLEAF_ACTIVE_INFO
{
    TUP_UINT32         active_result;                                /**< [en]Indicates the active result. [cn]激活结果 */
    TUP_BOOL           is_set_nonce;                                 /**< [en]Indicates wether set nonce or not. [cn]是否设置接入码 */
    TUP_CHAR           firmware_url[LOGIN_D_MAX_URL_LENGTH + 1];     /**< [en]Indicates the upgard url. [cn]升级路径 */
    TUP_CHAR           display_name[LOGIN_D_MAX_NAME + 1];           /**< [en]Indicates the display name. [cn]会场名 */
    TUP_CHAR           language[LOGIN_D_MAX_NAME + 1];               /**< [en]Indicates the language type. [cn]语言类型 */
    TUP_CHAR           timezone[LOGIN_D_MAX_NAME + 1];               /**< [en]Indicates the time zone. [cn]时区 */
    TUP_CHAR           guid[LOGIN_D_MAX_GUID_LEN + 1];               /**< [en]Indicates the device guid. [cn]服务端返回的本设备标识符             */
    LOGIN_STARLEAF_SIP_REG_PARAMS sip_registration;                  /**< [en]Indicates the sip register information. [cn]sip 注册信息 */
    LOGIN_STARLEAF_H323_REG_PARAMS h323_registration;                /**< [en]Indicates the H323 register information. [cn]H323 注册信息 */
    LOGIN_STARLEAF_LDAP_PARAMS ldap_information;                /**< [en]Indicates the ldap information. [cn]LDAP 信息 */
}LOGIN_S_STARLEAF_ACTIVE_INFO;

/** 
 * [en]This enumeration is used to describe return code of download device configuration retcode.
 * [cn]下载设备配置retcode返回码 
 */
typedef enum tagLOGIN_E_UPORTAL_RETCODE
{
    LOGIN_E_UPORTAL_RETCODE_NORMAL,    /**< [en]Indicates the device is normal bound.
                                            <br>[cn]0：表示用户正常绑定设备。 */
    LOGIN_E_UPORTAL_RETCODE_DEFAULT,   /**< [en]Indicates the device only has the default account number.
                                            <br>[cn]1：设备仅有默认账号 */
    LOGIN_E_UPORTAL_RETCODE_BUTT
} LOGIN_E_UPORTAL_RETCODE;

/** 
 * [en]This structure is used to describe redirect addr param
 * [cn]重定向地址参数
 */
typedef struct tagLOGIN_S_REDIRECT_ADDR_PARAM
{
    TUP_UINT32 server_num;                           /**< [en]Indicates the number of servers. [cn]服务器个数 */
    LOGIN_S_SERVER_ADDR_INFO* servers;               /**< [en]Indicates the server. [cn]服务器地址 */
    TUP_CHAR device_sn[LOGIN_D_MAX_SN_LEN];          /**< [en]Indicates the sn number. [cn]设备sn号。*/
} LOGIN_S_REDIRECT_ADDR_PARAM;

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif  /* __LOGIN_ADVANCED_DEF_H__ */


