/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : tup_dns_interface.h
  版 本 号   : 初稿
  作    者   : z00379872
  生成日期   : 2017年1月12日
  最近修改   :
  功能描述   : tup_dns_interface.h 的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2017年1月12日
    作    者   : z00379872
    修改内容   : 创建文件

******************************************************************************/

/*----------------------------------------------*
 * 外部变量说明                                 *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 外部函数原型说明                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 内部函数原型说明                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 全局变量                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 模块级变量                                   *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 常量定义                                     *
 *----------------------------------------------*/


/*----------------------------------------------*
 * 宏定义                                       *
 *----------------------------------------------*/

#ifndef __TUP_DNS_INTERFACE_H__
#define __TUP_DNS_INTERFACE_H__


#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */
#include "tup_def.h"
#define TUP_IP_ADDR_LEN (40)
#define TUP_DNS_DNAME_BUFSZ (256)
/*统一IP地址数据结构*/
typedef struct tagTUP_S_HOST 
{
    TUP_UINT32  ulType;  // IP地址类型，枚举IFRAME_E_IP_ADDR_TYPE
    TUP_UINT8   aucIP[TUP_IP_ADDR_LEN];  //IP地址

} TUP_S_HOST, *TUP_S_HOST_PTR;

/** 返回SRV记录结构 */
typedef struct tagTUP_DNS_S_SRV_TARGET 
{
  TUP_INT8 szTargetName[TUP_DNS_DNAME_BUFSZ]; /**< 目标域名,即真正提供服务的域名 */
  TUP_UINT16 usPriority;              /**< 优先级 */
  TUP_UINT16 usWeight;                /**< 权重 */
  TUP_S_HOST stIPAddr;         /**<IP 地址*/
  TUP_UINT16 usPort;                  /**< 端口号 */
  TUP_UINT16 usReserve;             /**< 对齐预留 */
} TUP_DNS_S_SRV_TARGET, *TUP_DNS_S_SRV_TARGET_PTR;


typedef enum tagTUP_DNS_E_SEARCH_RECORD_TYPE
{
    TUP_DNS_E_RECORD_A = 0,      /**< 查询A记录 */
    TUP_DNS_E_RECORD_AAAA,       /**< 查询AAAA记录 */
    TUP_DNS_E_RECORD             /**< 先查A记录，再查AAAA记录 */
}TUP_DNS_E_SEARCH_RECORD_TYPE;


/* dns 日志打印接口函数指针类型 */
typedef TUP_VOID  (*TUP_FN_DNS_LOG_PRINT_PTR)(const TUP_CHAR *str);


/*****************************************************************************
 函 数 名  : tup_dns_get_srv_resolve_syn
 功能描述  : 同步解析dns SRV地址
 输入参数  : const TUP_INT8 *pszService                
             const TUP_INT8 *pszProto                  
             const TUP_INT8 *pszDomain                 
             TUP_DNS_S_SRV_TARGET *  pstSrvTargetList  
             TUP_UINT32* pulRRCount                    
 输出参数  : 无
 返 回 值  : extern TUP_API TUP_RESULT
 调用函数  : 
 被调函数  : 
 
 修改历史      :
  1.日    期   : 2017年2月17日
    作    者   : z00379872
    修改内容   : 新生成函数

*****************************************************************************/
extern TUP_API TUP_RESULT tup_dns_get_srv_resolve_syn(const TUP_INT8 *pszService,  const TUP_INT8 *pszProto, const TUP_INT8 *pszDomain,
                                          TUP_DNS_S_SRV_TARGET *  pstSrvTargetList, TUP_UINT32* pulRRCount);
/*****************************************************************************
 函 数 名  : tup_dns_get_ip_resolve_syn
 功能描述  : 同步解析A/AAAA记录dns地址
 输入参数  : const TUP_INT8 *pszHostName  
             TUP_UINT32 ulSearchType      查看TUP_DNS_E_SEARCH_RECORD_TYPE
             TUP_S_HOST *pstAddressList   
             TUP_UINT32 *pulIpCount       
 输出参数  : 无
 返 回 值  : extern TUP_API TUP_RESULT
 调用函数  : 
 被调函数  : 
 
 修改历史      :
  1.日    期   : 2017年2月17日
    作    者   : z00379872
    修改内容   : 新生成函数

*****************************************************************************/
extern TUP_API TUP_RESULT tup_dns_get_ip_resolve_syn(
                     const TUP_CHAR *pszHostName,
                     TUP_UINT32 ulSearchType, 
                     TUP_S_HOST *pstAddressList,
                     TUP_UINT32 *pulIpCount);




/** 应用程序调用该接口设置输出调试信息的级别

 *  @param[in]  ulLevel  输出调试信息的级别
 *  @param[out]  none   
 *  
 *  @retval     none  
 *
  \b 注意：
 - 无
 
 \b 示例：
 - 无
 
 *  @see TSP_NETB_DnsSetLogLevel
 */
extern TUP_API TUP_VOID tup_dns_set_log_level(TUP_UINT32 ulLevel);

/** 应用程序调用该接口设置输出调试信息适配接口

 *  @param[in]  pfnLogFunc  输出调试信息的适配函数
 *  @param[out]  none   
 *  
 *  @retval     none  
 *
  \b 注意：
 - 无
 
 \b 示例：
 - 无
 
 *  @see TSP_NETB_DnsRegisterLogFunc
 */
extern TUP_API TUP_VOID tup_dns_register_log_func(TUP_FN_DNS_LOG_PRINT_PTR pfnLogFunc);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif /* __TUP_DNS_INTERFACE_H__ */
