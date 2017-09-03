
/*******************************************************************************
 *               Copyright (C) 2011, Huawei Tech. Co., Ltd.
 *                      ALL RIGHTS RESERVED
 *******************************************************************************/


#ifndef __CMPT_INTERFACE_H__
#define __CMPT_INTERFACE_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#include "cmpt_def.h"

/**
 * @brief 开启日志
 *
 * @param [in] TUP_INT32       log_level     <b>:</b> 日志级别，E_LOG_LEVEL
 * @param [in] TUP_INT32       max_size_KB   <b>:</b> 单个日志文件大小，单位KB
 * @param [in] TUP_INT32       file_count    <b>:</b> 支持日志文件总个数
 * @param [in] const TUP_CHAR* log_path      <b>:</b> 日志文件路径
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tup_cmpt_log_stop
 **/
TUP_API TUP_RESULT tup_cmpt_log_start(TUP_INT32       log_level, 
                                       TUP_INT32       max_size_KB,
                                       TUP_INT32       file_count,
                                       const TUP_CHAR* log_path);

/**
 * @brief 停止日志
 *
 * @param [in] 无
 * @retval TUP_API TUP_VOID <b>:</b> 无
 *
 * @attention NA
 * @see tup_cmpt_log_start
 **/
TUP_API TUP_VOID   tup_cmpt_log_stop(TUP_VOID);


/**
 * @brief 创建数图句柄
 * 
 * @param [in] const TUP_INT32 type       <b>:</b> 数图类型，0 立即匹配数图索引，1 替换匹配数图索引
 * @param [in] const TUP_CHAR *digit_map  <b>:</b> 数图
 * @param [out] TUP_INT32 *handle         <b>:</b> 创建的数图句柄
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_digitmap_match
 * @see tup_digitmap_destroy_handle
 **/
TUP_API TUP_RESULT tup_digitmap_create_handle(const TUP_INT32 type, const TUP_CHAR *digit_map, TUP_INT32 *handle);


/**
 * @brief 销毁数图句柄
 * 
 * @param [in] const TUP_INT32 handle  <b>:</b> 待销毁的数图句柄
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_digitmap_create_handle
 * @see tup_digitmap_match
 **/
TUP_API TUP_RESULT tup_digitmap_destroy_handle(const TUP_INT32 handle);


/**
 * @brief 数图匹配处理
 * 
 * @param [in] const TUP_INT32 handle  <b>:</b> 数图句柄
 * @param [in] const char *input_num   <b>:</b> 原始待数图处理号码
 * @param [out] DMRESULT *dm_result     <b>:</b> 数图处理结果
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_digitmap_create_handle
 * @see tup_digitmap_destroy_handle
 **/
TUP_API TUP_RESULT tup_digitmap_match(const TUP_INT32 handle, const char *input_num, DMRESULT *dm_result);

/**
 * @brief 证书有效期检查
 * 
 * @param [in] TUP_CHAR *pcCertFilePath  <b>:</b> 证书路径
 * @param [out] CMPT_S_DATETIME *expire_time <b>:</b> 证书过期时间
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see 
 **/
TUP_API TUP_RESULT tup_cmpt_check_certificate_overdue(IN TUP_CHAR *certfile_path, OUT CMPT_S_DATETIME *expire_time);


/**
 * @brief 证书有效性校验(格式, 签名 ,有效期 ,颁发机构 ,CRL, 其他基本信息)
 * 
 * @param [in] TUP_CHAR *pcCertFilePath  <b>:</b> 证书路径
 * @retval TUP_API TUP_VOID <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see 
 **/
TUP_API TUP_RESULT tup_cmpt_verify_certificate(IN TUP_CHAR *certfile_path, IN CMPT_S_CERTVERIFY_INFO *verify_info);


#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#endif  /* __CMPT_INTERFACE_H__ */

