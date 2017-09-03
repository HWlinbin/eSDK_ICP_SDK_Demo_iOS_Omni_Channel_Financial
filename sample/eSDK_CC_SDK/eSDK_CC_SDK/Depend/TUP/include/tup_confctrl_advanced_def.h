/** 
 * @file tup_confctrl_advanced_def.h
 * 
 * Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header file of conference control subsystem basic service function struct definition.
 * 描述：TUP 会议控制子系统基础业务功能结构体定义头文件。 \n
 **/

#ifndef __CONFCTRL_ADVANCED_DEF_H__
#define __CONFCTRL_ADVANCED_DEF_H__

#include "tup_def.h"
#include "tup_confctrl_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


/** 
 * [en]<br>
 * [cn]会控协议类型
 */
typedef enum tagCONFCTRL_E_PROTOCOL_TYPE
{
    CONFCTRL_E_H323_H245,                       /**< [en]Indicates H245 confcontrol of H323  protocol.  [cn]H323协议的H245会控 */
    CONFCTRL_E_SIP_IDO,                         /**< [en]Indicates ido confcontrol for SIP  protocol.      [cn]SIP协议的IDO会控 */
    CONFCTRL_E_PROTOCOL_BUTT                    /**< [en]Indicates invalid  protocol type.                     [cn]无效的协议类型 */
} CONFCTRL_E_PROTOCOL_TYPE;

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#endif  /* __CONFCTRL_ADVANCED_DEF_H__ */
