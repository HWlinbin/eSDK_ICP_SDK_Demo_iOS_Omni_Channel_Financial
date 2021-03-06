/**
* @file tup_eaddr_def.h
*
* Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
*
* @brief [en]Description: TUP eaddr search component parameter-define header files
* [cn]描述：TUP 企业通讯录查询组件参数类型头文件.
**/


#ifndef __TUP_EADDR_DEF_H__
#define __TUP_EADDR_DEF_H__

#include "tup_def.h"
#include "tup_errdef.h"
#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif /* __cplusplus */

#define TUP_EADDR_D_SERVER_URL_MAX_LEN       (256)       /**< [en]the buffer size for server URL 
                                                              <br>[cn]服务器URL最大长度 */
#define TUP_EADDR_D_TOKEN_LEN                (256)       /**< [en] the buffer size for Authorization token
                                                              <br>[cn]认证token 数据最大长度 */
#define TUP_EADDR_D_MAX_PATH_LEN             (256)       /**< [en] the buffer size for file path
                                                              <br>[cn]文件路径最大长度 */
#define TUP_EADDR_D_SEARCH_MAX_LEN           (128)       /**< [en] the max buffer size for searching info
                                                              <br>[cn]搜索信息长度最大值 */  
#define TUP_EADDR_D_ENTERPRISE_COMMON_LEN    (128)       /**< [en] the max buffer size for contact item
                                                              <br>[cn]企业联系人字段最大长度 */
#define TUP_EADDR_D_ENTERPRISE_EMAIL_LEN     (256)       /**< [en] the max buffer size for contact email
                                                              <br>[cn]企业联系人电子邮件字段最大长度 */
#define TUP_EADDR_D_ENTERPRISE_NAME_LEN      (128)       /**< [en] the max buffer size for contact name
                                                              <br>[cn]企业联系人姓名字段最大长度 */
#define TUP_EADDR_D_ENTERPRISE_NUM_LEN       (33)        /**< [en] the max buffer size for contact phone number
                                                              <br>[cn]企业联系人号码字段最大长度 */
#define TUP_EADDR_D_ENTERPRISE_STAFFNO_LEN   (32)        /**< [en] the max buffer size for contact staff number
                                                              <br>[cn]企业联系人工号字段最大长度 */
#define TUP_EADDR_D_ENTERPRISE_STAFFACCOUNT_LEN   (128)  /**< [en] the max buffer size for contact staff account
                                                              <br>[cn]企业联系人UC账号字段最大长度 */
#define TUP_EADDR_D_ENTERPRISE_ADDRESS_LEN        (256)  /**< [en] the max buffer size for contact address
                                                              <br>[cn]企业联系人地址字段最大长度 */
#define TUP_EADDR_D_ENTERPRISE_URI_LEN            (128)  /**< [en] the max buffer size for contact uri
                                                              <br>[cn]uri字段最大长度 */
#define TUP_EADDR_D_ENTERPRISE_ICONID_LEN         (144)  /**< [en] the max buffer size for contact icon id
                                                              <br>[cn]头像ID最大长度 */
#define TUP_EADDR_D_ENTERPRISE_GENDER_LEN         (8)    /**< [en] the max buffer size for contact gender
                                                              <br>[cn]性别最大长度 */
#define TUP_EADDR_D_ENTERPRISE_ZIPCODE_LEN        (32)   /**< [en] the max buffer size for contact zip code
                                                              <br>[cn]邮编最大长度 */
#define TUP_EADDR_D_ENTERPRISE_SIGNATURE_LEN      (256)  /**< [en] the max buffer size for contact signature
                                                              <br>[cn]签名最大长度 */    
#define TUP_EADDR_D_ENTERPRISE_DEPID_LEN          (16)   /**< [en] the max buffer size for contact department id 
                                                              <br>[cn]部门ID最大长度，2^32=42亿，也就是12位 */
#define TUP_EADDR_D_ENTERPRISE_DEPT_LEN           (256)  /**< [en] the max buffer size for contact deparment name
                                                              <br>[cn]部门名称最大长度  */  
#define TUP_EADDR_D_ICONNAME_MAX_LEN              (148)  /**< [en] the max buffer size for contact icon name
                                                              <br>[cn]头像名最大长度 */
#define TUP_EADDR_D_DEPNAME_MAX_LEN               (128)  /**< [en]department name lenth maximum.
                                                              <br>[cn]部门名称最大长度 */

#define TUP_EADDR_D_AUTH_NAME                     (256)  /**< [en]authorizon name length maximun.
                                                              <br>[cn]鉴权/注册名称最大长度*/

#define TUP_EADDR_D_AUTH_PASSWORD                 (256)  /**< [en]authorizon password length maximum
                                                              <br>[cn]鉴权/注册密码最大长度*/

/** 
 * [en]error code.
 * [cn]EADDR 模块错误码
 */
typedef enum tagTUP_EADDR_E_ERR_EADDR
{
    TUP_E_ERR_EADDR_PARAME_NULL = TUP_ERR_DEF(TUP_E_CBBID_EADDR, \
                                  0, 0),            /**< [en] parameter is null
                                                         <br>[cn]参数错误 */
    TUP_E_ERR_EADDR_MEM_ERR,                        /**< [en] malloc failed
                                                         <br>[cn]内存分配失败 */
    TUP_E_ERR_EADDR_GETAPP_ERR,                     /**< [en] get APP name failed
                                                         <br>[cn]获取应用程序名失败 */
    TUP_E_ERR_EADDR_VTOPMSG_ERR,                    /**< [en] handle message failed
                                                         <br>[cn]消息失败 */
    TUP_E_ERR_EADDR_SEARCHATTR_NULL,                /**< [en] the search attribute is null
                                                         <br>[cn]搜索条件为空 */
    TUP_E_ERR_EADDR_ATTR_LEN_ERR,                   /**< [en] the lenth of search attribute is wrong
                                                         <br>[cn]属性列表字符串长度有误 */
    TUP_E_ERR_EADDR_STR_LONGER,                     /**< [en] the string lenth is wrong
                                                         <br>[cn]字符串长度越界 */
    TUP_E_ERR_EADDR_PARAME_ERR,                     /**< [en] wrong parameter
                                                         <br>[cn]参数有错 */
    TUP_E_ERR_EADDR_XML_ERR,                        /**< [en] handle xml failed
                                                         <br>[cn]xml操作失败 */
    TUP_E_ERR_EADDR_GZIP_ERR,                       /**< [en] handle GZIP failed
                                                         <br>[cn]GZIP操作失败 */
    TUP_E_ERR_EADDR_CONNECT_FAIL,                   /**< [en] connect failed
                                                         <br>[cn]连接失败 */
    TUP_E_ERR_EADDR_TIMEOUT,                        /**< [en] connect timeout
                                                         <br>[cn]连接超时 */
    TUP_E_ERR_EADDR_TOKEN,                          /**< [en] handle token failed
                                                         <br>[cn]token失败 */
    TUP_E_ERR_EADDR_BUTT
} TUP_EADDR_E_ERR_EADDR;


/** 
 * [en]searching result code.
 * [cn]EADDR 模块查询结果
 */
typedef enum tagTUP_EADDR_E_SEARCH_RES
{
    TUP_EADDR_SUCCESS_SEARCH, /**< [en]search succeed.
	                               <br>[cn]查找成功 */
    TUP_EADDR_FAIL_CONNECT,   /**< [en]connect failed.
	                               <br>[cn] 连接服务器失败 */
    TUP_EADDR_FAIL_AUTH,      /**< [en]authorizon failed
                                   <br>[cn] 鉴权失败 */
    TUP_EADDR_FAIL_SEARCH,    /**< [en]search failed 
                                   <br>[cn]查找失败 */
    TUP_EADDR_FAIL_TIMEOUT,   /**< [en]search timeout
                                   <br>[cn] 查找超时 */
    TUP_EADDR_FAIL_NOCONFIG,  /**< [en]config parameters error
                                   <br>[cn] 配置参数错误或为空 */
    TUP_EADDR_FAIL_NORESULT,  /**< [en]no such contactor
                                   <br>[cn] 查找不到联系人 */
    TUP_EADDR_FAIL_TOKEN,     /**< [en]token expired
                                   <br>[cn] token过期 */    
    TUP_EADDR_FAIL_UNKNOWN
}TUP_EADDR_E_SEARCH_RES;


/**
 * [en]log level
 * [cn]日志打印级别
 */
typedef enum  tagTUP_EADDR_E_LOG_LEVEL
{
    TUP_EADDR_DEBUG,   /**< [en] debugging   
	                        <br>[cn]调试 */
    TUP_EADDR_INFO,    /**< [en] informing   
	                        <br>[cn]提示 */
    TUP_EADDR_WARN,    /**< [en] warning      
	                        <br>[cn]警告 */
    TUP_EADDR_ERROR,   /**< [en] error          
	                        <br>[cn]错误 */
    TUP_EADDR_BUTT
} TUP_EADDR_E_LOG_LEVEL;

/**
 * [en]log configuration
 * [cn]日志配置参数结构体
 */
typedef  struct  tagTUP_EADDR_S_LOG_PARA
{
    TUP_EADDR_E_LOG_LEVEL    enLevel;                           /**< [en] log level. [cn]日志级别 */
    TUP_UINT32             ulMaxFileSize;                       /**< [en] the maximum of the file size, unit KB. [cn]日志文件最大值，单位KB */
    TUP_CHAR               acLogPath[TUP_EADDR_D_MAX_PATH_LEN]; /**< [en] the path of the logfile. [cn]日志文件路径 */
} TUP_EADDR_S_LOG_PARA;

/**
 * [en]type.
 * [cn]组网类型
 */
typedef enum tagTUP_EADDR_E_TYPE
{
    EADDR_E_TYPE_IMS,       /**< [en] IMS.          
	                             <br>[cn]IMS类型 */
    EADDR_E_TYPE_EC6X,      /**< [en] EC6X.          
	                             <br>[cn]EC6X类型 */
    EADDR_E_TYPE_BUTT
} TUP_EADDR_E_TYPE;

/**
 * [en]authorizon parameter.
 * [cn]代理鉴权信息结构体
 */
typedef struct tagTUP_EADDR_S_PROXY_AUTH_INFO
{
    TUP_CHAR acUserName[TUP_EADDR_D_AUTH_NAME];      /**< [en] username. [cn]代理鉴权用户名 */
    TUP_CHAR acPassword[TUP_EADDR_D_AUTH_PASSWORD];  /**< [en] password. [cn]代理鉴权密码 */ 
}TUP_EADDR_S_PROXY_AUTH_INFO;


/**
 * [en]proxy configuration
 * [cn]设置代理参数结构体
 */
typedef struct tagTUP_EADDR_S_PROXY_PARAM
{
    TUP_CHAR    acIpAddr[TUP_EADDR_D_SERVER_URL_MAX_LEN];   /**< [en] ip address. [cn]IP地址 */
    TUP_UINT32  ulPort;                                     /**< [en] port      . [cn]端口号 */
    TUP_EADDR_S_PROXY_AUTH_INFO stAuthInfo;                 /**< [en] authorizon. [cn]代理鉴权信息*/
} TUP_EADDR_S_PROXY_PARAM;

/**
 * [en]uportal configuration
 * [cn]uportal配置参数结构体
 */
typedef struct tagTUP_EADDR_S_UPORTAL_CONFIG
{
    TUP_CHAR   acServerAddr[TUP_EADDR_D_SERVER_URL_MAX_LEN];         /**< [en] the server url. [cn]服务器URL */
    TUP_CHAR   acHttpServerAddr[TUP_EADDR_D_SERVER_URL_MAX_LEN];     /**< [en] the server url. [cn]查询联系人服务器URL */
    TUP_CHAR   acIconServerAddr[TUP_EADDR_D_SERVER_URL_MAX_LEN];     /**< [en] the server url. [cn]查询头像服务器URL */                                                                                                      
    TUP_CHAR   acToken[TUP_EADDR_D_TOKEN_LEN];                       /**< [en] the authorization token. [cn]认证Token */
    TUP_UINT32 ulVerifyMode;                                         /**< [en] the flag for verifying server certification. [cn]是否对服务器证书进行认证，取值：1为需要认证，0为不需要认证 */
    TUP_INT8   acCertFilePath[TUP_EADDR_D_MAX_PATH_LEN];             /**< [en] the path of the certification file. [cn]如果认证需要设置证书文件路径 */
    TUP_EADDR_E_TYPE enType ;                                        /**< [en] the  searching  type. [cn]搜索组网类型 */
    TUP_UINT32 ulPageItemMax;                                        /**< [en] the  item amount maximum in a page. [cn]每页搜索上限 */
    TUP_INT8   acIconFilePath[TUP_EADDR_D_MAX_PATH_LEN];           /**< [en]getting icon result file path. [cn] 获取到的头像文件保存路径,临时文件存放路径 */    
    TUP_INT8   acDeptFilePath[TUP_EADDR_D_MAX_PATH_LEN];              /**< [en]department searching result file path，for a temp file. [cn]部门查询结果文件存放地址,临时文件存放路径 */
    TUP_EADDR_S_PROXY_PARAM    stPorxy;                              /**< [en] setting proxy param. [cn]代理设置参数 */                                                                                               
} TUP_EADDR_S_UPORTAL_CONFIG;

/**
 * [en]self-defined icon info
 * [cn]自定义头像参数结构体
 */
typedef struct tagTUP_EADDR_S_ICON
{
    TUP_UINT32  ulSmallIcon_len;           /**< [en] the length of the small icon content. [cn]小头像内容长度 */
    TUP_CHAR*   pcSmallIcon_data;          /**< [en] the small icon content. [cn]小头像内容 */
    TUP_UINT32  ulMediumIcon_len;          /**< [en] the length of the medium icon content. [cn]中头像内容长度 */
    TUP_CHAR*   pcMediumIcon_data;         /**< [en] the medium icon content. [cn]中头像内容 */
    TUP_UINT32  ulLargeIcon_len;           /**< [en] the length of the large icon content. [cn]大头像内容长度 */
    TUP_CHAR*   pcLargeIcon_data;          /**< [en] the large icon content. [cn]大头像内容 */
} TUP_EADDR_S_ICON;

/**
 * [en]searching contact term
 * [cn]搜索条件结构体 
 */
typedef struct tagTUP_EADDR_S_SEARCH_PARAM
{
    TUP_INT8     acSearchItem[TUP_EADDR_D_SEARCH_MAX_LEN];  /**< [en]id means to handle the searching contactor result message. [cn]匹配字符串 */
    TUP_UINT32   ulPageIndex;                               /**< [en]id means to handle the searching contactor result message. [cn]当前需要查找的页数 */
    TUP_UINT32   ulExactSearch;                             /**< [en]flag differring from exact searching or not;if exact searching,result just has one item.                    [cn]是否精确查找，取值：0:模糊；1:精确;精确查询，若匹配到多条，则返回对应的第一个值 */
    TUP_UINT32   ulSeqNo;                                   /**< [en]sequence number. [cn]查询序号 */
    TUP_CHAR     acDepId[TUP_EADDR_D_ENTERPRISE_DEPID_LEN]; /**< [en]department ID. [cn]部门ID，不查询就填空的 */
} TUP_EADDR_S_SEARCH_PARAM;


/**
 * [en]message priority.
 * [cn]消息优先级 
 */
typedef enum tagTUP_EADDR_E_MsgPrio
{
    EADDR_MSG_PRIO_HIGH = 2,     /**< [en] high.          
	                                  <br>[cn]优先级高*/
    EADDR_MSG_PRIO_MID,          /**< [en] medium.          
	                                  <br>[cn]优先级中*/
    EADDR_MSG_PRIO_LOW,          /**< [en] low.          
	                                  <br>[cn]优先级低 */
    EADDR_MSG_PRIO_BUTT
}TUP_EADDR_E_MsgPrio;


/**
 * [en]getting icon term
 * [cn]头像条件结构体 
 */
typedef struct tagTUP_EADDR_S_ICON_PARAM
{
    TUP_INT8        acStaffAccount[TUP_EADDR_D_ENTERPRISE_STAFFACCOUNT_LEN];/**< [en]UC account. [cn]UC账号 */
    TUP_UINT32      ulSeqNo;                                                /**< [en]sequence number. [cn]查询序号*/
    TUP_EADDR_E_MsgPrio   enMsgPrio;                                        /**< [en]searching priority. [cn]头像查询优先级 */
} TUP_EADDR_S_ICON_PARAM;

/**
 * [en]searching department term
 * [cn]部门列表搜索条件结构体 
 */
typedef struct tagTUP_EADDR_S_DEP_PARAM
{
    TUP_INT8    acDepId[TUP_EADDR_D_ENTERPRISE_DEPID_LEN];  /**< [en]department ID. [cn]查询的部门ID，ID为-1时代表获取0、1级部门 */
    TUP_UINT32  ulSeqNo;                                    /**< [en]sequence number. [cn]查询序号 */
} TUP_EADDR_S_DEP_PARAM;

/**
 * [en]searching result message id.
 * [cn]通讯录查询结果消息分类
 */
typedef enum tagTUP_EADDR_E_RESULT_OPER_ID
{
    TUP_EADDR_E_HANDLE_PERSONINFO,   /**< [en]id means to handle the searching contactor result message
                                          <br>[cn]搜索联系人信息结果返回消息 */
    TUP_EADDR_E_HANDLE_ICON,         /**< [en]id means to handle the searching contactor's icon result message
                                          <br>[cn]搜索联系人头像结果返回消息 */
    TUP_EADDR_E_HANDLE_DEPTINFO,     /**< [en]id means to handle the searching contactor's department result message
                                          <br>[cn]搜索联系人部门结果返回消息 */
    TUP_EADDR_E_HANDLE_BUTT
} TUP_EADDR_E_RESULT_OPER_ID;

/**
 * [en]searching contactor information.
 * [cn]联系人详细信息查询结果
 */
typedef struct tagTUP_EADDR_S_CONTACTOR_INFO
{
    TUP_INT8    StaffAccount[TUP_EADDR_D_ENTERPRISE_STAFFACCOUNT_LEN];  /**< [en]the uc account. [cn]UC账号 */
    TUP_INT8    PersonName[TUP_EADDR_D_ENTERPRISE_NAME_LEN];            /**< [en]the person's name. [cn]姓名 */
    TUP_INT8    Staffno[TUP_EADDR_D_ENTERPRISE_STAFFNO_LEN] ;           /**< [en]the person's staff number. [cn]工号 */
    TUP_INT8    Terminal[TUP_EADDR_D_ENTERPRISE_NUM_LEN];               /**< [en]the person's ip number. [cn]IP号码 软终端号码 */
    TUP_INT8    Terminal2[TUP_EADDR_D_ENTERPRISE_NUM_LEN];              /**< [en]the person's ip long number. [cn]软终端公网长号 */
    TUP_INT8    DeptName[TUP_EADDR_D_ENTERPRISE_DEPT_LEN];              /**< [en]the person's department name. [cn]部门名字 */
    TUP_INT8    Title[TUP_EADDR_D_ENTERPRISE_COMMON_LEN];               /**< [en]the person's title. [cn]职务 */
    TUP_INT8    Mobile[TUP_EADDR_D_ENTERPRISE_NUM_LEN];                 /**< [en]the person's cellphone. [cn]手机号码 */
    TUP_INT8    Homephone[TUP_EADDR_D_ENTERPRISE_NUM_LEN];              /**< [en]the person's home number. [cn]家庭电话 */
    TUP_INT8    Email[TUP_EADDR_D_ENTERPRISE_EMAIL_LEN];                /**< [en]the person's email. [cn]邮箱 */
    TUP_INT8    OfficePhone[TUP_EADDR_D_ENTERPRISE_NUM_LEN];            /**< [en]the person's seat phone. [cn]座机号码 办公电话 */
    TUP_INT8    OfficePhone2[TUP_EADDR_D_ENTERPRISE_NUM_LEN];           /**< [en]the person's office phone No.2. [cn]硬终端2 */
    TUP_INT8    OfficePhone3[TUP_EADDR_D_ENTERPRISE_NUM_LEN];           /**< [en]the person's office phone No.3. [cn]硬终端3 */
    TUP_INT8    OfficePhone4[TUP_EADDR_D_ENTERPRISE_NUM_LEN];           /**< [en]the person's office phone No.4. [cn]硬终端4 */
    TUP_INT8    OfficePhone5[TUP_EADDR_D_ENTERPRISE_NUM_LEN];           /**< [en]the person's office phone No.5. [cn]硬终端5 */
    TUP_INT8    OfficePhone6[TUP_EADDR_D_ENTERPRISE_NUM_LEN];           /**< [en]the person's office phone No.6. [cn]硬终端6 */
    TUP_INT8    Otherphone[TUP_EADDR_D_ENTERPRISE_NUM_LEN];             /**< [en]the person's other phone number No.1. [cn]其他电话 */
    TUP_INT8    Otherphone2[TUP_EADDR_D_ENTERPRISE_NUM_LEN];            /**< [en]the person's other phone number No.2. [cn]其他电话2 */
    TUP_CHAR    Gender[TUP_EADDR_D_ENTERPRISE_GENDER_LEN];              /**< [en]the person's gender. [cn]性别 */
    TUP_CHAR    ZipCode[TUP_EADDR_D_ENTERPRISE_ZIPCODE_LEN];            /**< [en]the person's zip code. [cn]邮编 */
    TUP_CHAR    Address[TUP_EADDR_D_ENTERPRISE_ADDRESS_LEN];            /**< [en]the person's address. [cn]地址 */
    TUP_CHAR    Signature[TUP_EADDR_D_ENTERPRISE_SIGNATURE_LEN];        /**< [en]the person's signature. [cn]签名 */
}TUP_EADDR_S_CONTACTOR_INFO;

/**
 * [en]result of searching contactor.
 * [cn]联系人搜索结果
 */
typedef struct tagTUP_EADDR_S_SEARCH_CONTACTOR_RESULT
{
    TUP_UINT32 ret;                                      /**< [en]result number. [cn]返回码，若有对应的enum值则参考 取值参考,成功取TUP_SUCCESS（0），否则取相应错误码*/
    TUP_UINT32 ulSeqNo;                                  /**< [en]sequence number. [cn]查询序号 */
    TUP_UINT32 ulPage;                                   /**< [en]page number. [cn]当前页码 */
    TUP_UINT32 ulTotalNum;                               /**< [en]total contactor number. [cn]联系人总数 */
    TUP_CHAR   acSearchItem[TUP_EADDR_D_SEARCH_MAX_LEN]; /**< [en]search item. [cn]搜索条件 */
    TUP_EADDR_S_CONTACTOR_INFO* pstContactorInfo;        /**< [en]contactor infomation. [cn]联系人信息 */
}TUP_EADDR_S_SEARCH_CONTACTOR_RESULT;

/**
 * [en]result of getting user icon.
 * [cn]头像查询结果
 */
typedef struct tagTUP_EADDR_S_GETICON_RESULT
{
    TUP_UINT32 ret;                                      /**< [en]result number. [cn]返回码，成功取TUP_SUCCESS（0），否则取相应错误码 */
    TUP_UINT32 ulSeqNo;                                  /**< [en]sequence number. [cn]查询序号 */
    TUP_UINT32 ulSysIconID;                              /**< [en]system Icon id. [cn]系统头像id */
    TUP_CHAR   acIconFile[TUP_EADDR_D_ICONNAME_MAX_LEN]; /**< [en]self-define Icon file path. [cn]自定义头像文件路径 */
}TUP_EADDR_S_GETICON_RESULT;

/**
 * [en]department information.
 * [cn]部门信息结构体
 */
typedef struct tagTUP_EADDR_S_DEPT_INFO
{
    TUP_INT8   deptId[TUP_EADDR_D_ENTERPRISE_DEPID_LEN];  /**< [en]department id. [cn]部门id */
    TUP_INT8   parentId[TUP_EADDR_D_ENTERPRISE_DEPID_LEN];/**< [en]parent id. [cn]父节点id */
    TUP_INT8   deptName[TUP_EADDR_D_DEPNAME_MAX_LEN];     /**< [en]department name. [cn]部门名称 */
}TUP_EADDR_S_DEPT_INFO;

/**
 * [en]result of searching department.
 * [cn]部门查询结果
 */
typedef struct tagTUP_S_EADDR_SEARCH_DEPT_RESULT
{
    TUP_UINT32 ret;                                             /**< [en]result number. [cn]返回码，成功取TUP_SUCCESS（0），否则取相应错误码 */
    TUP_UINT32 ulSeqNo;                                         /**< [en]sequence number. [cn]查询序号 */
    TUP_INT8   acSearchDepId[TUP_EADDR_D_ENTERPRISE_DEPID_LEN]; /**< [en]searching department id. [cn]查询的部门ID */
    TUP_UINT32 ulItemNum;                                       /**< [en]item number. [cn]查询到的下一级部门条目总数*/
    TUP_EADDR_S_DEPT_INFO* pstDeptInfo;                         /**< [en]department info. [cn]查询的部门信息 */
}TUP_EADDR_S_SEARCH_DEPT_RESULT;


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */
#endif /*__TUP_EADDR_DEF_H__*/
