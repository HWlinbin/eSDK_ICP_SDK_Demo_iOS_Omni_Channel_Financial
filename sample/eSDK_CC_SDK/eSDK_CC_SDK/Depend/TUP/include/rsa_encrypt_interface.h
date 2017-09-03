
/*******************************************************************************
 *               Copyright (C) 2011, Huawei Tech. Co., Ltd.
 *                      ALL RIGHTS RESERVED
 *******************************************************************************/


#ifndef __RSA_ENCRYPT_INTERFACE_H__
#define __RSA_ENCRYPT_INTERFACE_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


/**
 * @brief RSA加密
 * 
 * @param [in] const TUP_CHAR *src_data         <b>:</b> 待加密处理的数据
 * @param [in] const TUP_CHAR *public_key_path  <b>:</b> 公钥路径
 * @param [out] TUP_CHAR **encrypt_data         <b>:</b> 加密后的数据
 * @param [out] TUP_INT *encrypt_len            <b>:</b> 加密后的数据长度
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 加密后的数据内容需要释放，释放函数tup_rsa_free_public_encrypt_data
 * @see tup_rsa_free_public_encrypt_data
 **/
TUP_API TUP_RESULT tup_rsa_public_encrypt(const TUP_CHAR *src_data, const TUP_CHAR *public_key_path, TUP_CHAR **encrypt_data, TUP_INT *encrypt_len);


/**
 * @brief 释放RSA加密数据
 * 
 * @param [in] TUP_CHAR *encrypt_data  <b>:</b> 待释放的加密数据
 * @retval TUP_API TUP_VOID <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_rsa_public_encrypt
 **/
TUP_API TUP_VOID tup_rsa_free_public_encrypt_data(TUP_CHAR *encrypt_data);


#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#endif  /* __RSA_ENCRYPT_INTERFACE_H__ */

