/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : dk_interface.h
  版 本 号   : 初稿
  作    者   : lijun
  生成日期   : 2014年11月7日
  最近修改   :
  功能描述   : dk_interface.c 的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2014年11月7日
    作    者   : lijun
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

#ifndef __DK_INTERFAEC_H__
#define __DK_INTERFAEC_H__

#include "tup_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */



/*****************************************************************************
 * 函 数 名  : tup_pkcs5_derivekey
 * 功能描述  : 通过PKCS5算法获取密钥
 * 输入参数  : pucSalt 盐值
 *             ulSaltLen 盐值长度
 *             iIter 迭代次数
 *             ulDKLen 密钥长度
 *
 * 输出参数  : pucDerivedKey 密钥
 * 返 回 值  : TUP_SUCCESS 成功
               错误码 失败
 * 其它说明  :
 *
 * 修改历史      :
 *  1.日    期   : 2015年3月2日
 *    作    者   : lijun
 *    修改内容   : 新生成函数
 *
 *****************************************************************************/
TUP_API extern TUP_UINT32 tup_pkcs5_derivekey
(
    TUP_UCHAR* pucsalt, 
    TUP_UINT32 ulsaltlen, 
    TUP_INT32 iiter,    /* if equal to or less than 0, uses the default value 2048 */
    TUP_UINT32 uldklen, 
    TUP_UCHAR* pucderivedkey
);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif /* __ENCRYPT_INTERFAEC_H__ */
