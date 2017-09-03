/** 
 * @file call_def.h
 * 
 * Copyright(C), 2012-2015, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * ������TUP ������ϵͳ�߼�ҵ��ӿ�ͷ�ļ��� \n
 */


/**
 *
 *  @{
 */


#ifndef __CALL_ADVANCED_INTERFACE_H__
#define __CALL_ADVANCED_INTERFACE_H__

#include "call_advanced_def.h"
#include "call_interface.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */



/**
 * @defgroup AdvancedAPI
 * @brief Advanced API
 *        <br>�߼��ӿڣ����ڼ�����ʷ�汾���Žӿں��ڲ�ʹ��
 **/


/**
 * @defgroup ExtendInitAndLoading
 * @ingroup AdvancedAPI
 * @brief Initialization and loading 
 *        <br>��ʼ������غ���ҵ���������չ�ӿ�
 **/


/**
 * @brief This function is xxx
 *        <br>����CALL���HMEģ����־����
 * 
 * @param [in] TUP_INT32 audio_log_level   <b>:</b> HME-Audio ��־����(����ֵ��Դ:ö����CALL_E_LOG_LEVEL)
 * @param [in] TUP_INT32 audio_max_size    <b>:</b> HME-Audio ��־��ֵ(��λΪM, ��������Ϊ10, ��С1M, ���100M; Ĭ��Ϊ1M)
 * @param [in] TUP_INT32 video_log_level   <b>:</b> HME-Video ��־����(����ֵ��Դ:ö����CALL_E_LOG_LEVEL)
 * @param [in] TUP_INT32 video_max_size    <b>:</b> HME-Video ��־��ֵ(��λM, ��������Ϊ50, ��С1M, ���512M; Ĭ��Ϊ5M)
 * 
 * @attention ��ѡ�����ڵ�������ý���������־��������������ʹ��Ĭ��ֵ
 * @see NA
 **/
TUP_API TUP_VOID tup_call_hme_log_info(IN TUP_INT32 audio_log_level, 
            IN TUP_INT32 audio_max_size, IN TUP_INT32 video_log_level, IN TUP_INT32 video_max_size);


/**
 * @brief This function is used to initialize the call component.
 *        <br>ֹͣCALL�����־
 * 
 * @param [in] TUP_VOID
 * 
 * @attention ��ѡ�������ȥ��ʼ��ʱ����
 * @see tup_call_log_start
 **/
TUP_API TUP_VOID tup_call_log_stop(TUP_VOID);


/**
 * @brief ע����־�ص�����
 * 
 * @param [in] CALL_FN_DEBUG_CALLBACK_PTR callback_log   <b>:</b> �������Զ�����־������ַ
 * @retval TUP_API TUP_VOID
 * 
 * @attention �˺��������������ã���ΪԤ���ӿ�
 * @see tup_call_log_start
 **/
TUP_API TUP_VOID   tup_call_register_logfun(IN CALL_FN_DEBUG_CALLBACK_PTR callback_log);



/**
 * @brief ��ȡ����ҵ�����
 * 
 * @param [in] TUP_UINT32 cfgid  <b>:</b> ����ID,��call_def.h���壬ǰ׺ΪCALL_D_CFG_
 * @param [out] TUP_VOID* val    <b>:</b> ����ֵ���������õĲ���IDȷ����������
 * @param [in] TUP_UINT32 size   <b>:</b> ����ֵ��С���������õĲ���IDȷ����������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_set_cfg
 **/
TUP_API TUP_RESULT tup_call_get_cfg(IN TUP_UINT32 cfgid, OUT TUP_VOID* val,  IN TUP_UINT32 size);


/**
 * @brief ����IP���й���
 * 
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_disable_ipaddr_call
 **/
TUP_API TUP_RESULT tup_call_enable_ipaddr_call();


/**
 * @brief �ر�IP���й���
 * 
 * @param [out] NA
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_enable_ipaddr_call
 **/
TUP_API TUP_RESULT tup_call_disable_ipaddr_call();

/**
 * @}
 **/


/**
 * @defgroup ExtendRegister
 * @ingroup AdvancedAPI
 * @brief SIP account registration and cancellation  
 *        <br>��SIP�˺�ע����ע�����ݽ�����Ӳ�ն�
 * @{
 **/

/**
 * @brief ����SIP�˻���Ȩ
 * 
 * @param [in] const TUP_CHAR* number    <b>:</b> �û�����
 * @param [in] const TUP_CHAR* name      <b>:</b> �û���
 * @param [in] const TUP_CHAR* password  <b>:</b> ��Ȩ����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_authorize_account(IN const TUP_CHAR* number, IN const TUP_CHAR* name, IN const TUP_CHAR* password);


/**
 * @brief ��¼������ȡ����¼
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_cancel_login(TUP_VOID);



/**
 * @brief ע��ָ���˺�
 * 
 * @param [in] TUP_UINT32 account_id  <b>:</b> ��ע����˺�id
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_deregister_for_account
 **/
TUP_API TUP_RESULT tup_call_register_for_account(IN TUP_UINT32 account_id);


/**
 * @brief ע��ָ���˺�
 * 
 * @param [in] TUP_UINT32 account_id  <b>:</b> ��ע�����˺�id
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_register_for_account
 **/
TUP_API TUP_RESULT tup_call_deregister_for_account(IN TUP_UINT32 account_id);


/**
 * @brief ��ʼָ���˺ŵ�ˢ��ע��
 * 
 * @param [in] TUP_UINT32 account_id  <b>:</b> �˺�id
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_stop_refreshregister_for_account
 **/
TUP_API TUP_RESULT tup_call_start_refreshregister_for_account(IN TUP_UINT32 account_id);


/**
 * @brief ָֹͣ���˺ŵ�ˢ��ע��
 * 
 * @param [in] TUP_UINT32 account_id  <b>:</b> �˺�id
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_start_refreshregister_for_account
 **/
TUP_API TUP_RESULT tup_call_stop_refreshregister_for_account(IN TUP_UINT32 account_id);



/**
 * @brief �ر�ָ���˻�ˢ��ע��
 * 
 * @param [in] const TUP_CHAR* number  <b>:</b> �˻�����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention �˻���������Ǽ�Ȩ����
 * @see tup_call_start_refreshregister
 **/
TUP_API TUP_RESULT tup_call_stop_refreshregister(IN const TUP_CHAR* number);


/**
 * @brief ����ָ���˻�ˢ��ע��
 * 
 * @param [in] const TUP_CHAR* number  <b>:</b> �˻�����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention �˻���������Ǽ�Ȩ����
 * @see tup_call_stop_refreshregister
 **/
TUP_API TUP_RESULT tup_call_start_refreshregister(IN const TUP_CHAR* number);

/**
 * @brief  ��ȡ�˺�ע��ķ�����
 
 * 
 * @param [in] TUP_UINT32 ulSipAccountId  <b>:</b>�˺�id
 * @param [out] CALL_S_SERVER_CFG * pstServerInfo  <b>:</b> ��������Ϣ
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @attention ע��ɹ����з���ֵ�����������Ϊ��
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_registered_server(IN TUP_UINT32 ulSipAccountId, OUT CALL_S_SERVER_CFG *pstServerInfo);



/**
 * @brief �����˺ŵ��û�����Ϣ
 * 
 * @param [in] CALL_S_ACCOUNT_USER_NAME* user_name  <b>:</b> �˺��û�����Ϣ����
 * @param [in] TUP_UINT32 data_num                  <b>:</b> �˺��û�����Ϣ�������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_user_name(IN CALL_S_ACCOUNT_USER_NAME* user_name, IN TUP_UINT32 data_num);


/**
 * @brief ��ȡSIP����������״̬��Ϣ
 * 
 * @param [in] TUP_UINT8 server_index  <b>:</b> ����������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_sipserver_link_status(IN TUP_UINT8 server_index);



/**
 * @brief ��ȡ��ǰ���е�SIP��������Ϣ
 * 
 * @param [in] TUP_UINT32 callid                        <b>:</b> ����ID
 * @param [in] CALL_S_CURRENT_SIPSERVER* server_info  <b>:</b> SIP��������Ϣ
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_sipserver_info(IN TUP_UINT32 callid, IN CALL_S_CURRENT_SIPSERVER* server_info);


/**
 * @brief ��ȡָ���˺ŵķ�������ַ�б�
 * 
 * @param [in] TUP_UINT32 account_id                <b>:</b> �˺�ID
 * @param [out] TUP_UINT32* addr_num                <b>:</b> ��ַ��Ϣ����
 * @param [out] CALL_S_SIP_ADDR_INFO* addr_info     <b>:</b> �����ַ��Ϣ������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention addr_info�ڴ���Ӧ�ò���䣬�����СΪ������������������Ϊ5
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_sipserver_addrlist(IN TUP_UINT32 account_id, 
                        OUT TUP_UINT32* addr_num,  OUT CALL_S_SIP_ADDR_INFO* addr_info);

/**
 * @brief ��ȡָ���˺ŵ�ע���������ַ�б�������H323��SIP
 * 
 * @param [in] CALL_E_PROTOCOL_TYPE protocol_type <b>:</b> Э������
 * @param [in] TUP_UINT32 account_id                <b>:</b> �˺�ID
 * @param [out] TUP_UINT32* addr_num                <b>:</b> ��ַ��Ϣ����
 * @param [out] CALL_S_SIP_ADDR_INFO* addr_info     <b>:</b> �����ַ��Ϣ������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention addr_info�ڴ���Ӧ�ò���䣬�����СΪ������������������Ϊ5
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_regserver_addrlist(IN CALL_E_PROTOCOL_TYPE  protocol_type, 
                        IN TUP_UINT32 account_id, OUT TUP_UINT32* addr_num, OUT CALL_S_IPADDR *addr_info);

/**
 * @brief ��ȡ�˻���Ϣ
 * 
 * @param [out] CALL_S_SIP_ACCOUNT_INFO* account_info <b>:</b> �����˺���Ϣ�Ľṹ����
 * @param [out] TUP_UINT32* count                     <b>:</b> ʵ�ʻ�ȡ���˺���Ϣ����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention account_info���ڴ���Ӧ�ò���䣬��СΪsiaeof(CALL_S_SIP_ACCOUNT_INFO) * ����˺���
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_account_info(OUT CALL_S_SIP_ACCOUNT_INFO* account_info, OUT TUP_UINT32* count);




/**
 * @brief ˢ��uportal��token
 * 
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ��������token�������ʧ��ʱ����
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_uportal_refresh_token();
/**
 * @}
 **/


/**
 * @defgroup ExtendCall
 * @ingroup AdvancedAPI
 * @brief Advanced Call  
 *        <br>�߼����нӿ�
 * @{
 **/


/**
 * @brief ��������ID
 * 
 * @param [in] TUP_UINT32 account_id       <b>:</b> �˺�ID
 * @param [in] CALL_E_LINE_TYPE line_type  <b>:</b> ��·����
 * @param [in] TUP_UINT32 lineid           <b>:</b> ��·ID
 * @param [out] TUP_UINT32* callid         <b>:</b> �����ɹ��ĺ���ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ���ݺ���ID���к�̵��õĺ���(*_bycallid)������Ҫ���ô˺���
 * @see tup_call_start_call_bycallid
 * @see tup_call_anonymous_call_bycallid
 * @see tup_call_emergency_call
 **/
TUP_API TUP_RESULT tup_call_create_callid(IN TUP_UINT32 account_id,  IN CALL_E_LINE_TYPE line_type, IN TUP_UINT32 lineid, OUT TUP_UINT32* callid);


/**
 * @brief ���ݺ���ID����һ·����Ƶ����
 * 
 * @param [in] TUP_UINT32 callid              <b>:</b> ����ID
 * @param [in] CALL_E_CALL_TYPE call_type     <b>:</b> �������ͣ���Ƶ����Ƶ
 * @param [in] const TUP_CHAR* callee_number  <b>:</b> ���к���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_create_callid
 **/
TUP_API TUP_RESULT tup_call_start_call_bycallid(IN TUP_UINT32 callid, IN CALL_E_CALL_TYPE call_type, IN const TUP_CHAR* callee_number);


/**
 * @brief ����CALLID����һ·ָ����ʽ��VOIP����
 * 
 * @param [in] const CALL_S_CALL_PARAMS* call_params  <b>:</b> ���в���������ulCallIdΪ�������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_start_call
 * @see tup_call_anonymous_call
 * @see tup_call_start_call_ex
 * @see tup_call_accept_call
 * @see tup_call_alerting_call
 * @see tup_call_end_call
 * @see tup_call_hold_call
 * @see tup_call_unhold_call
 **/
TUP_API TUP_RESULT tup_call_start_call_bycallid_ex(IN const CALL_S_CALL_PARAMS* call_params);



/**
 * @brief ���ݺ���ID����һ·��������
 * 
 * @param [in] TUP_UINT32 callid              <b>:</b> ����ID
 * @param [in] const TUP_CHAR* callee_number  <b>:</b> ���к���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ��������Ϊ��Ƶ����
 * @see tup_call_create_callid
 **/
TUP_API TUP_RESULT tup_call_anonymous_call_bycallid(IN TUP_UINT32 callid, IN const TUP_CHAR* callee_number);


/**
 * @brief ���ݺ���ID����һ·��������
 * 
 * @param [in] TUP_UINT32 callid              <b>:</b> ����ID
  * @param [in] CALL_E_CALL_TYPE call_type     <b>:</b> �������ͣ���Ƶ����Ƶ
 * @param [in] const TUP_CHAR* callee_number  <b>:</b> ���к���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ��������Ϊ��Ƶ����
 * @see tup_call_create_callid
 **/
TUP_API TUP_RESULT tup_call_start_anonymous_call_bycallid(IN TUP_UINT32 callid, IN CALL_E_CALL_TYPE call_type, IN const TUP_CHAR* callee_number);


/**
 * @brief ���ݺ���ID����һ·��������
 * 
 * @param [in] TUP_UINT32 callid              <b>:</b> ����ID
 * @param [in] const TUP_CHAR* callee_number  <b>:</b> ���к���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ��������Ϊ��Ƶ����
 * @see tup_call_create_callid
 **/
TUP_API TUP_RESULT tup_call_emergency_call(IN TUP_UINT32 callid, IN const TUP_CHAR* callee_number);


/**
 * @brief ����һ·����VOIP���У���������tup_call_start_anonymous_call�滻
 * 
 * @param [out] TUP_UINT32 *callid             <b>:</b> ���е�id����ʶΨһ�ĺ���
 * @param [in] const TUP_CHAR* callee_number   <b>:</b> ���к��룬�����Ч����255
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ��������ֻ֧����Ƶ����
 * @see tup_call_accept_call
 * @see tup_call_alerting_call
 * @see tup_call_end_call
 * @see tup_call_start_anonymous_call
 **/
TUP_API TUP_RESULT tup_call_anonymous_call(OUT TUP_UINT32* callid, IN const TUP_CHAR* callee_number);

/**
 * @brief ����һ·����VOIP����
 * 
 * @param [out] TUP_UINT32 *callid             <b>:</b> ���е�id����ʶΨһ�ĺ���
 * @param [in] CALL_E_CALL_TYPE call_type      <b>:</b> ��������
 * @param [in] const TUP_CHAR* callee_number   <b>:</b> ���к��룬��󳤶�32
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_accept_call
 * @see tup_call_alerting_call
 * @see tup_call_end_call
 **/
TUP_API TUP_RESULT tup_call_start_anonymous_call(OUT TUP_UINT32* callid, IN CALL_E_CALL_TYPE call_type, IN const TUP_CHAR* callee_number);


/**
 * @brief ����ָ����·�ĺ���
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @param [in] TUP_UINT32 lineid  <b>:</b> ��·ID
 * @param [in] TUP_BOOL is_video  <b>:</b> �Ƿ������Ƶ����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_accept_call_with_lineid(IN TUP_UINT32 callid, IN TUP_UINT32 lineid, IN TUP_BOOL is_video);


/**
 * @brief ����ԭ���������
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @param [in] TUP_UINT32 cause   <b>:</b> �������е�ԭ��
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_end_call
 **/
TUP_API TUP_RESULT tup_call_end_call_with_cause(IN TUP_UINT32 callid, IN TUP_UINT32 cause);


/**
 * @brief �������к���
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_end_call
 * @see tup_call_end_call_with_cause
 **/
TUP_API TUP_RESULT tup_call_end_allcall(TUP_VOID);


/**
 * @brief ����reinvite��Э��
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention TODO
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_reinvite(IN TUP_UINT32 callid);



/**
 * @brief ���ͻỰ��INFO��Ϣ
 * 
 * @param [in] TUP_UINT32 callid ����ID
 * @param [in] CALL_S_DIALOG_INFO *dialog_info �Ự��INFO��Ϣ�ṹ 
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ��Ʒ����Ҫʱʹ�ô˺������Ͷ��Ƶ�SIP INFO��Ϣ����ʵ���ض�ҵ��
 * @see NA
 **/ 
TUP_API TUP_RESULT tup_call_send_diaglog_info(IN TUP_UINT32 callid, IN CALL_S_DIALOG_INFO *dialog_info);



/**
 * @brief ��ȡctd�����б�
 * 
 * @param [in] NA
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_start_call_ex
 **/
TUP_API TUP_RESULT tup_call_ctd_get_list(TUP_VOID);


/**
 * @brief ����һ·ָ����ʽ��VOIP���У���CTD����
 * 
 * @param [in] CALL_S_CALL_PARAMS* call_params  <b>:</b> ���в���������ulCallIdΪ�������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_accept_call
 * @see tup_call_alerting_call
 * @see tup_call_end_call
 * @tup_call_ctd_get_list
 **/
TUP_API TUP_RESULT tup_call_start_call_ex(IN CALL_S_CALL_PARAMS* call_params);


/**
 * @brief ���ݺ���ID����CTD����
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention �����ӿڣ������tup_call_end_call
 * @see tup_call_end_call
 **/
TUP_API TUP_RESULT tup_call_ctd_destroy_call(IN TUP_UINT32 callid);



/**
 * @brief ���������ѯת/����ѯת����
 * 
 * @param [in] TUP_UINT32 callid                <b>:</b> ������ת�Ƶĺ���ID
 * @param [in] const TUP_UINT32 transto_callid  <b>:</b> ����ת�Ƶ�Ŀ�ĺ���ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_blind_transfer
 **/
TUP_API TUP_RESULT tup_call_consult_transfer(IN TUP_UINT32 callid, IN const TUP_UINT32 transto_callid);




/**
 * @brief ��ȡָ���˻��µĺ�����Ϣ
 * 
 * @param [in] TUP_UINT32 account_id        <b>:</b> �˺�ID
 * @param [out] TUP_UINT32* callids         <b>:</b> �����˺��º���ID������
 * @param [in/out] TUP_UINT32* callsnum     <b>:</b> ����ʱΪcallids����Ĵ�С�����ʱΪʵ�ʵĺ���ID��
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention �����˺��º���ID�����齨��Ϊ��󲢷�������(��ǰΪ24)
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_account_callids(IN TUP_UINT32 account_id, OUT TUP_UINT32* callids, IO TUP_UINT32* callsnum);




/**
 * @brief ��ȡ����״̬��Ϣ
 * 
 * @param [out] CALL_S_STREAM_INFO* state  <b>:</b> ����״̬��Ϣ
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_callstatics(OUT CALL_S_STREAM_INFO* state);




/**
 * @brief �����˺�ID��ȡ��ͨ����Ϣ
 * 
 * @param [in] TUP_UINT32 accountid            <b>:</b> �˺�ID
 * @param [in] CALL_S_STREAM_INFO* streaminfo  <b>:</b> ��ͨ����Ϣ
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_get_callstatics
 **/
TUP_API TUP_RESULT tup_call_get_channelinfo(IN TUP_UINT32 accountid, IN CALL_S_STREAM_INFO* streaminfo);


/**
 * @defgroup ExtendVideoCall
 * @ingroup ExtendCall
 * @brief Video Call 
 *        <br>��Ƶ����
 * @{
 **/


/**
 * @brief �Է�������Ƶת��Ƶ����(ɾ����Ƶ)ʱ������ѡ��ͬ����߾ܾ�
 * 
 * @param [in] TUP_UINT32 callid   <b>:</b> ����ID
 * @param [in] TUP_BOOL is_accept  <b>:</b> �Ƿ�ͬ��
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ��ʵ��ʹ�ó������û��޷��ܾ�
 * @see tup_call_add_video
 * @see tup_call_reply_add_video
 * @see tup_call_del_video
 **/
TUP_API TUP_RESULT tup_call_reply_del_video(IN TUP_UINT32 callid, IN TUP_BOOL is_accept);



/**
 * @brief ������Ƶ����
 * 
 * @param [in] TUP_UINT32 count                    <b>:</b> ���ڸ�����һ��Ϊ2
 * @param [in] const CALL_S_VIDEOWND_INFO* window  <b>:</b> �������� 
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ���ں���δ����(���к���)ʱ��Ԥ�ȴ���(����)��Ƶ����
             <br>��tup_call_set_video_window�ӿ�������ѷ���
 * @see tup_call_destroy_video_window
 * @see tup_call_set_video_window
 **/
TUP_API TUP_RESULT tup_call_create_video_window(IN TUP_UINT32 count, IN const CALL_S_VIDEOWND_INFO* window);



/**
 * @brief ������Ƶ������Ϣ
 * 
 * @param [in] TUP_UINT32 Count                    <b>:</b> ���ڸ�����һ��Ϊ2
 * @param [in] const CALL_S_VIDEOWND_INFO* window  <b>:</b> �������� 
 * @param [in] TUP_UINT32 callid                   <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ��tup_call_set_video_window�ӿ�������ѷ���
 * @see tup_call_set_video_window
 **/
TUP_API TUP_RESULT tup_call_update_video_window(IN TUP_UINT32 count, IN const CALL_S_VIDEOWND_INFO * window, IN TUP_UINT32 callid);




/**
 * @brief ������Ƶ����
 * 
 * @param [in] CALL_E_VIDEOWND_TYPE wndtype  <b>:</b> ��������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention Ӳ�ն���Ҫʹ��
 * @see tup_call_create_video_window
 * @see tup_call_set_video_window
 **/
TUP_API TUP_RESULT tup_call_destroy_video_window(IN CALL_E_VIDEOWND_TYPE wndtype);



/**
 * @brief ������Ƶ����
 * 
 * @param [in] TUP_UINT32 ctrl_type                <b>:</b> ��Ƶ���ڿ������ͣ���ӦCALL_E_VIDEOWND_CTRL_TYPE
 * @param [in] const CALL_S_VIDEOWND_INFO* window  <b>:</b> ��Ƶ������Ϣ
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention Ӳ�ն���Ҫʹ��
 * @see tup_call_destroy_video_window
 **/
TUP_API TUP_RESULT tup_call_change_video_window(IN TUP_UINT32 ctrl_type, IN const CALL_S_VIDEOWND_INFO* window);



/**
 * @brief ͨ���д򿪱���Ԥ��
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_close_local_preview_in_dialog
 **/
TUP_API TUP_RESULT tup_call_open_local_preview_in_dialog(IN TUP_UINT32 callid);


/**
 * @brief ͨ���йرձ���Ԥ��
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_open_local_preview_in_dialog
 **/
TUP_API TUP_RESULT tup_call_close_local_preview_in_dialog(IN TUP_UINT32 callid);


/**
 * @brief ͨ���д�Զ��Ԥ��
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_close_remote_preview_in_dialog
 **/
TUP_API TUP_RESULT tup_call_open_remote_preview_in_dialog(IN TUP_UINT32 callid);


/**
 * @brief ͨ���йر�Զ��Ԥ��
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_open_remote_preview_in_dialog
 **/
TUP_API TUP_RESULT tup_call_close_remote_preview_in_dialog(IN TUP_UINT32 callid);


/**
 * @brief ������Ƶ�ػ������ڲ��Ա���MIC��Speaker
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_close_audio_preview
 **/
TUP_API TUP_RESULT tup_call_open_audio_preview(TUP_VOID);


/**
 * @brief �ر���Ƶ�ػ������ڲ��Ա���MIC��Speaker
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_open_audio_preview
 **/
TUP_API TUP_RESULT tup_call_close_audio_preview(TUP_VOID);


 /**
 * @brief [en]This interface is used to get the aux data token state.
 *        <br>[cn] ��ȡ��������״̬
 * 
 * @param [in]  TUP_UINT32 callid                    <b>:</b><br>[en] Indicates call id.
 *                                                           <br>[cn]����ID
 * @param [out] CALL_E_AUX_TOKEN_STATE *pTokenState  <b>:</b><br>[en] Indicates token state.
 *                                                           <br>[cn] ����״̬
 * @retval TUP_API TUP_RESULT <b>:</b>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_RESULT tup_call_get_aux_tokenstate(TUP_UINT32 callid, CALL_E_AUX_TOKEN_STATE *pTokenState);
/**
 * @}
 **/


/**
 * @}
 **/



/**
 * @defgroup ExtendMediaAndDevices
 * @ingroup AdvancedAPI
 * @brief Media processing and equipment management  
 *        <br>ý�崦�����豸����
 * @{
 **/

    
/**
 * @brief ����(��ȡ��)����������
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @param [in] TUP_BOOL is_on     <b>:</b> ������ȡ������  TRUE Ϊ����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_media_mute_mic
 **/
TUP_API TUP_RESULT tup_call_media_mute_speak(IN TUP_UINT32 callid, IN TUP_BOOL is_on);


/**
 * @ingroup Call
 * @brief [en]This interface is used to set whether pause the video device.
 *        <br>[cn] ����(��ȡ��)��ͣ��Ƶ�豸����(��Ƶ�ɼ�)
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID.
 *                                        <br>[cn] ����ID
 * @param [in] TUP_BOOL is_mute   <b>:</b><br>[en] Indicates whether to pause the video device.
 *                                        <br>[cn] �Ƿ���ͣ��Ƶ����
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_media_mute_mic
 **/
TUP_API TUP_RESULT tup_call_media_mute_video(IN TUP_UINT32 callid, IN TUP_BOOL is_mute);



/**
 * @defgroup IPPhoneAPI
 * @ingroup MediaAndDevicesExt
 * @brief Media processing and equipment management for IP Phone  
 *        <br>ý�崦�����豸����������IP����
 * @{
 **/


/**
 * @brief ������Ƶ����豸
 * 
 * @param [in] CALL_E_AUDDEV_ROUTE route_dev  <b>:</b> ��Ƶ��������豸����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention IP Phoneʹ��
 * @see tup_call_media_set_audio_indev
 **/
TUP_API TUP_RESULT tup_call_media_set_audio_outdev(IN CALL_E_AUDDEV_ROUTE route_dev);


/**
 * @brief ������Ƶ�����豸
 * 
 * @param [in] CALL_E_AUDDEV_ROUTE route_dev  <b>:</b> ��Ƶ��������豸����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention IP Phoneʹ��
 * @see tup_call_media_set_audio_outdev
 **/
TUP_API TUP_RESULT tup_call_media_set_audio_indev(IN CALL_E_AUDDEV_ROUTE route_dev);
/**
 * @}
 **/


/**
 * @defgroup TCAPI
 * @ingroup MediaAndDevicesExt
 * @brief Media processing and equipment management for TC
 *        <br>ý�崦�����豸����������TC���ն�
 * @{
 **/


/**
 * @brief ����������������
 * 
 * @param [in] TUP_FLOAT in_gain  <b>:</b> ���棬ȡֵ��Χ [0,1)����˥����1������Ҳ��˥����(1,10]����Ŵ�
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ���ó���:TCģʽ������С����Ҫ����/�������
 * @see tup_call_media_get_audio_ingain
 **/
TUP_API TUP_RESULT tup_call_media_set_audio_ingain(IN TUP_FLOAT in_gain);


/**
 * @brief ��ȡ������������
 * 
 * @param [out] TUP_FLOAT* in_gain  <b>:</b> ���棬[0,1)����˥����1������Ҳ��˥����(1,10]����Ŵ�
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ���ó���:TCģʽ������С����Ҫ����/�������
 * @see tup_call_media_set_audio_ingain
 **/
TUP_API TUP_RESULT tup_call_media_get_audio_ingain(OUT TUP_FLOAT* in_gain);


/**
 * @brief ���������������
 * 
 * @param [in] TUP_FLOAT out_gain  <b>:</b> ���棬ȡֵ��Χ [0,1)����˥����1������Ҳ��˥����(1,10]����Ŵ�
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ���ó���:TCģʽ������С����Ҫ����/�������
 * @see tup_call_media_get_audio_outgain
 **/
TUP_API TUP_RESULT tup_call_media_set_audio_outgain(IN TUP_FLOAT out_gain);


/**
 * @brief ��ȡ�����������
 * 
 * @param [out] TUP_FLOAT* pfOutGain  <b>:</b> ���棬[0,1)����˥����1������Ҳ��˥����(1,10]����Ŵ�
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ���ó���:TCģʽ������С����Ҫ����/�������
 * @see tup_call_media_set_audio_outgain
 **/
TUP_API TUP_RESULT tup_call_media_get_audio_outgain(OUT TUP_FLOAT* out_gain);
/**
 * @}
 **/


/**
 * @brief ʹ����Ƶ����
 * 
 * @param [in] TUP_BOOL enable  <b>:</b> ״̬������0��ʾ���ã���0��ʾʹ�ܣ�Ĭ��ʹ��
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention Ŀǰ������ʹ����Ƶ�����豸ˢ��
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_media_enable_audioengine(IN TUP_BOOL enable);



/**
 * @brief ������Ƶ�ļ�
 * 
 * @param [in] CALL_S_MEDIA_PLAY_PARAM* media_play_param  <b>:</b> ���Ų���������ѭ�������������ļ�·����ý�����ͣ�����ģʽ����Ϣ
 * @param [out] TUP_INT32* play_handle                    <b>:</b> ���ž��(����ֹͣ����ʱ�Ĳ���)
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ��������������������������(��ʾ)����DTMF����æµ��ʾ�������ذ�������TCģʽ������TCģʽ������������������ý���
 * @see tup_call_media_startplay 
 * @see tup_call_media_stopplay
 **/
TUP_API TUP_RESULT tup_call_media_startplay_ex(IN CALL_S_MEDIA_PLAY_PARAM* media_play_param, OUT TUP_INT32* play_handle);

/**
 * @defgroup TCAPI
 * @ingroup MediaAndDevicesExt
 * @brief Media processing and equipment management for TC
 *        <br>ý�崦�����豸����������TC���ն�
 * @{
 **/


/**
 * @brief ����TC���� 
 * 
 * @param [in] TUP_INT32 tc_file_value   <b>:</b> �ļ���Ӧ��ֵ
 * @param [out] TUP_INT32* play_handle   <b>:</b> ���ž��(����ֹͣ����ʱ�Ĳ���)
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention �����ӿڣ���tup_call_media_startplay_ex���
 * @see tup_call_media_startplay
 * @see tup_call_media_startplay_ex
 * @see tup_call_media_startLocalplay
 * @see tup_call_media_stopplay
 **/
TUP_API TUP_RESULT tup_call_media_startTcplay(IN TUP_INT32 tc_file_value, OUT TUP_INT32* play_handle);


/**
 * @brief ǿ�Ʊ��ز�������(������TCģʽ�²��ű����ļ�) 
 * 
 * @param [in] TUP_UINT32 loops           <b>:</b> ѭ������
 * @param [in] const TUP_CHAR* play_file  <b>:</b> ���������ļ���
 * @param [out] TUP_INT32* play_handle    <b>:</b> ���ž��(����ֹͣ����ʱ�Ĳ���)
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention �����ӿڣ���tup_call_media_startplay_ex���
 * @see tup_call_media_startplay
 * @see tup_call_media_startplay_ex
 * @see tup_call_media_startTcplay
 * @see tup_call_media_stopplay
 **/
TUP_API TUP_RESULT tup_call_media_startLocalplay(IN TUP_UINT32 loops, IN const TUP_CHAR* play_file, OUT TUP_INT32* play_handle);
/**
 * @}
 **/


/**
 * @brief ֹͣ�����ź���
 * 
 * @param [in] TUP_UINT32 sender_handle  <b>:</b> �ź������ͷ��Ĵ���ģ��ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_media_play_signal_tone
 **/
TUP_API TUP_RESULT tup_call_media_stop_signal_tone(IN TUP_UINT32 sender_handle);


/**
 * @brief �����ź���
 * 
 * @param [in] TUP_UINT32 toneid         <b>:</b> �ź���ID,AUDIO_E_COMPOUNT_VOICE
 * @param [in] TUP_BOOL is_cycle         <b>:</b> �Ƿ�ѭ������
 * @param [in] TUP_UINT32 sender_handle  <b>:</b> �ź������ͷ��Ĵ���ģ��ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_media_stop_signal_tone
 **/
TUP_API TUP_RESULT tup_call_media_play_signal_tone(IN TUP_UINT32 toneid, IN TUP_BOOL is_cycle, IN TUP_UINT32 sender_handle);


/**
 * @brief ���Ż᳡�ź���
 * 
 * @param [in] TUP_UINT32 toneid         <b>:</b> �ź���ID
 * @param [in] TUP_BOOL is_cycle         <b>:</b> �Ƿ�ѭ������
 * @param [in] TUP_UINT32 sender_handle  <b>:</b> �ź������ͷ��Ĵ���ģ��ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_media_stop_signal_tone_to_conf
 **/
TUP_API TUP_RESULT tup_call_media_play_signal_tone_to_conf(IN TUP_UINT32 toneid, IN TUP_BOOL iscycle, IN TUP_UINT32 sender_handle);


/**
 * @brief ֹͣ���Ż᳡�ź���
 * 
 * @param [in] TUP_UINT32 sender_handle  <b>:</b> �ź������ͷ��Ĵ���ģ��ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_media_play_signal_tone_to_conf
 **/
TUP_API TUP_RESULT tup_call_media_stop_signal_tone_to_conf(IN TUP_UINT32 senderhandle);


/**
 * @brief ��ȡ�����������
 * 
 * @param [out] TUP_UINT32* level  <b>:</b> ��������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_media_set_speak_volume
 * @see tup_call_media_get_speak_volume
 **/
TUP_API TUP_RESULT tup_call_media_get_speak_level(OUT TUP_UINT32* level);


/**
 * @brief ������������
 * 
 * @param [in] CALL_E_AUDDEV_ROUTE aud_direction  <b>:</b> ��Ƶ��������豸����(Ӳ�ն�ʹ��)
 * @param [in] TUP_UINT32 volume                  <b>:</b> ����ֵ��ȡֵ��Χ[0, 100]
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_media_get_mic_volume
 * @see tup_call_media_get_mic_level
 **/
TUP_API TUP_RESULT tup_call_media_set_mic_volume(IN CALL_E_AUDDEV_ROUTE aud_direction, IN TUP_UINT32 volume);


/**
 * @brief ��ȡ��������
 * 
 * @param [out] TUP_UINT32* volume  <b>:</b> ����ֵ
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_media_set_mic_volume
 * @see tup_call_media_get_mic_level
 **/
TUP_API TUP_RESULT tup_call_media_get_mic_volume(OUT TUP_UINT32* volume);


/**
 * @brief ��ȡ������������
 * 
 * @param [out] TUP_UINT32* level  <b>:</b> ��������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_media_set_mic_volume
 * @see tup_call_media_get_mic_volume
 **/
TUP_API TUP_RESULT tup_call_media_get_mic_level(OUT TUP_UINT32* level);


/**
 * @brief ��ȡϵͳ����������״̬
 * 
 * @param [out] TUP_BOOL* is_mute  <b>:</b> �Ƿ���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_media_get_sys_mic_mute
 **/
TUP_API TUP_RESULT tup_call_media_get_sys_spk_mute(OUT TUP_BOOL* is_mute);

 
/**
 * @brief ��ȡϵͳ��˷羲��״̬
 * 
 * @param [out] TUP_BOOL* is_mute  <b>:</b> �Ƿ���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_media_get_sys_spk_mute
 **/
TUP_API TUP_RESULT tup_call_media_get_sys_mic_mute(OUT TUP_BOOL* is_mute);


/**
 * @brief ��ȡӲ����������
 * 
 * @param [out] CALL_S_VIDEO_HDACCELERATE *hd_accelerate  <b>:</b> ��Ƶ�������������Ϣ
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_media_get_hdaccelerate(OUT CALL_S_VIDEO_HDACCELERATE *hd_accelerate);


/**
 * @brief ��ʼ��������
 * 
 * @param [in] const TUP_INT8* ringfile  <b>:</b> �����ļ�
 * @param [in] TUP_UINT32 senderhandler  <b>:</b> �������ŷ��Ĵ���ģ��ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_media_stop_ring_tone
 **/
TUP_API TUP_RESULT tup_call_media_play_ring_tone(IN const TUP_INT8* ringfile, IN TUP_UINT32 senderhandler);


/**
 * @brief ֹͣ��������
 * 
 * @param [in] TUP_UINT32 senderhandler  <b>:</b> �������ŷ��Ĵ���ģ��ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_media_play_ring_tone
 **/
TUP_API TUP_RESULT tup_call_media_stop_ring_tone(IN TUP_UINT32 senderhandler);



/**
 * @brief ���Ų�����
 * 
 * @param [in] TUP_UINT32 callid         <b>:</b> ����ID
 * @param [in] CALL_E_SIGTONE_TYPE tone  <b>:</b> �ź�������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_stop_signaltone
 **/
TUP_API TUP_RESULT tup_call_play_signaltone(IN TUP_UINT32 callid, IN CALL_E_SIGTONE_TYPE tone);


/**
 * @brief ֹͣ���Ų�����
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_play_signaltone
 **/
TUP_API TUP_RESULT tup_call_stop_signaltone(IN TUP_UINT32 callid);



/**
 * @brief �������ؼ�¼��������Ƶ(¼*����¼*��)
 * 
 * @param [in] TUP_UINT32 callid           <b>:</b> ����ID
 * @param [in] const TUP_CHAR* file_name   <b>:</b> ������ļ���һ��Ϊ*.wav�ļ�
 * @param [in] TUP_BOOL is_video           <b>:</b> �Ƿ�Ϊ��Ƶ
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention �ݲ�֧������Ƶ����¼��
 * @see tup_call_media_stoprecord
 **/
TUP_API TUP_RESULT tup_call_media_startrecord(IN TUP_UINT32 callid, IN const TUP_CHAR* file_name, IN TUP_BOOL is_video);


/**
 * @brief ֹͣ���ؼ�¼��������Ƶ(¼*����¼*��)
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_media_startrecord
 **/
TUP_API TUP_RESULT tup_call_media_stoprecord(IN TUP_UINT32 callid);




/**
 * @brief ������Ƶ�豸����
 * 
 * @param [in] TUP_UINT32 anc  <b>:</b> ��������
 * @param [in] TUP_UINT32 aec  <b>:</b> ��������
 * @param [in] TUP_UINT32 agc  <b>:</b> �Զ�����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_set_AEC_params
 **/
TUP_API TUP_RESULT tup_call_set_audio_dev_options(IN TUP_UINT32 anc, IN TUP_UINT32 aec, IN TUP_UINT32 agc);


/**
 * @brief ������ƵAEC����
 * 
 * @param [in] const CALL_S_AUDIO_AEC_PARAMS* pstAecParams  <b>:</b> ��ƵAEC����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_set_audio_dev_options
 **/
TUP_API TUP_RESULT tup_call_set_AEC_params(IN const CALL_S_AUDIO_AEC_PARAMS* aec_params);


/**
 * @brief ������ƵEQ����
 * 
 * @param [in] const CALL_S_AUDIO_EQ_CONFIG* pstEqConfig  <b>:</b> ��ƵEQ����
 * @param [in] CALL_E_AO_DEV enAudDirection               <b>:</b> ��Ƶ��������豸����(���ն�ʹ��)
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_get_EQ_param
 * @see tup_call_set_preset_EQ_param
 **/
TUP_API TUP_RESULT tup_call_set_EQ_param(IN const CALL_S_AUDIO_EQ_CONFIG* pstEqConfig, IN CALL_E_AO_DEV enAudDirection);


/**
 * @brief ��ȡ��ƵEQ����
 * 
 * @param [out] CALL_S_AUDIO_EQ_CONFIG* pstEqConfig  <b>:</b> ��ƵEQ����
 * @param [in] CALL_E_AO_DEV enAudDirection          <b>:</b> ��Ƶ��������豸����(���ն�ʹ��)
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @see tup_call_set_EQ_param
 * @see tup_call_set_preset_EQ_param
 **/
TUP_API TUP_RESULT tup_call_get_EQ_param(IN CALL_S_AUDIO_EQ_CONFIG* pstEqConfig, IN CALL_E_AO_DEV enAudDirection);


/**
 * @brief ����Ԥ����ƵEQ����
 * 
 * @param [in] CALL_E_PRESET_EQ_TYPE enPresetEqType  <b>:</b> Ԥ����ƵEQ����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @see tup_call_set_EQ_param
 * @see tup_call_get_EQ_param
 **/
TUP_API TUP_RESULT tup_call_set_preset_EQ_param(IN CALL_E_PRESET_EQ_TYPE enPresetEqType);


/**
 * @brief ����Ӳ��(����ͷ)����
 * 
 * @param [in] const CALL_S_HARDWARE_PARAMS* hardwareparams  <b>:</b> Ӳ��(����ͷ)�����ṹ
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_get_hardware_params
 **/
TUP_API TUP_RESULT tup_call_set_hardware_params(IN const CALL_S_HARDWARE_PARAMS* hardwareparams);


/**
 * @brief ��ȡӲ��(����ͷ)����
 * 
 * @param [in] CALL_S_HARDWARE_PARAMS* hardwareparams  <b>:</b> Ӳ��(����ͷ)�����ṹ
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_set_hardware_params
 **/
TUP_API TUP_RESULT tup_call_get_hardware_params(IN CALL_S_HARDWARE_PARAMS* hardwareparams);


/**
 * @brief ����H.264��ƵB֡����
 * 
 * @param [in] TUP_BOOL is_enable  <b>:</b> �Ƿ���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_vpuorder_enable(IN TUP_BOOL is_enable);


    
/**
 * @brief �����Ƿ�֧��H264 cabca���뷽ʽ
 * 
 * @param [in] TUP_UINT32 callid            <b>:</b> ����ID
 * @param [in] TUP_BOOL is_enable           <b>:</b> �Ƿ���
 * @param [in] CALL_E_MEDIATYPE media_type  <b>:</b> ý������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_enable_cabac_encode(IN TUP_UINT32 callid, IN TUP_BOOL is_enable, IN CALL_E_MEDIATYPE media_type);



/**
 * @brief �ı���Ƶ������ʾλ��
 * 
 * @param [in] CALL_E_VIDEOWND_TYPE wndtype                        <b>:</b> ��������
 * @param [in] const TUP_INT32 coordinate[CALL_E_COORDINATE_BUTT]  <b>:</b> Ŀ��������Ϣ
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention �ݽ�Ӳ�ն���Ҫʹ��
 * @see tup_call_change_video_window_type
 **/
TUP_API TUP_RESULT tup_call_change_video_window_pos(IN CALL_E_VIDEOWND_TYPE wndtype, IN const TUP_INT32 coordinate[CALL_E_COORDINATE_BUTT]);


/**
 * @brief �ı���Ƶ������ʾ����
 * 
 * @param [in] CALL_E_VIDEOWND_TYPE wndtype  <b>:</b> ��������
 * @param [in] TUP_UINT32 displaytype        <b>:</b> Ŀ����ʾ���ͣ�0:����ģʽ 1:(������)�ڱ�ģʽ 2:(������)�ü�ģʽ)
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention �ݽ�Ӳ�ն���Ҫʹ��
 * @see tup_call_change_video_window_pos
 **/
TUP_API TUP_RESULT tup_call_change_video_window_type(IN CALL_E_VIDEOWND_TYPE wndtype, IN TUP_UINT32 displaytype);


/**
 * @brief ������Ƶ�ɼ�ģʽ
 * 
 * @param [in]  TUP_UINT32  collect_mode    <b>:</b> ��Ƶ�ɼ�ģʽ Ĭ��0
 *  0: (������)�ü�ģʽ 
 *  1: ͨ�����ߵķ�ʽ���ַ�����Ƶ�Ŀ��ߣ�ʹ�ú������л��󣬱��ֲɼ�������Ƶ���߲��䣬��Ҫ����RCS��MCUֻ�ܱ���ɺ������泡��
 *  2: ͨ���ü��ķ�ʽ���ַ�����Ƶ�Ŀ��ߣ�ʹ�ú������л��󣬱��ֲɼ�������Ƶ���߲��䣬��Ҫ����RCS��MCUֻ�ܱ���ɺ������泡��
 * @retval TUP_RESULT
 * 
 * @attention NA
 * @see NA
 **/
TUP_RESULT tup_call_set_video_collect_mode(TUP_UINT32 uiCollectMode);

/**
 * @brief ������Ƶ��ʾ��������
 * 
 * @param [in] TUP_UINT32 callid                        <b>:</b> ����ID
 * @param [in] const CALL_S_VIDEO_RENDER_INFO* render   <b>:</b> ��Ƶ��ʾ��������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_set_video_orient
 **/
TUP_API TUP_RESULT tup_call_set_video_render(IN TUP_UINT32 callid, IN const CALL_S_VIDEO_RENDER_INFO* render);


/**
 * @brief ��������ͷ�ɼ�����
 * 
 * @param [in] TUP_UINT32 callid            <b>:</b> ����ID
 * @param [in] TUP_UINT32 capture_index     <b>:</b> �ɼ��豸(����ͷ)����
 * @param [in] TUP_UINT32 capture_rotation  <b>:</b> ����ͷ�ɼ��Ƕ� {0,1,2,3} �����ƶ�ƽ̨��Ч��Ĭ��Ϊ0
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_set_display_rotation
 **/
TUP_API TUP_RESULT tup_call_set_capture_rotation(IN TUP_UINT32 callid, IN TUP_UINT32 capture_index, IN TUP_UINT32 capture_rotation);


/**
 * @brief ���ô�����ʾ����
 * 
 * @param [in] TUP_UINT32 callid            <b>:</b> ����ID
 * @param [in] TUP_UINT32 render_type       <b>:</b> ��Ƶ�������ͣ�ȡֵCALL_E_VIDEOWND_TYPE
 * @param [in] TUP_UINT32 rotation          <b>:</b> ��Ƶ��ʾ����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_set_capture_rotation
 **/
TUP_API TUP_RESULT tup_call_set_display_rotation(IN TUP_UINT32 callid, IN TUP_UINT32 render_type, IN TUP_UINT32 rotation);
/**
 * @}
 **/




/**
 * @defgroup ExtendConference
 * @ingroup AdvancedAPI
 * @brief Instant conference control   
 *        <br>�������
 * @{
 **/



/**
 * @brief ����ͨ��ת����(��Refer����)
 * 
 * @param [in] TUP_UINT32 callid         <b>:</b> ��תΪ����ĺ���(���ƿ�)ID
 * @param [out] TUP_UINT32 *confid       <b>:</b> ����(���ƿ�)ID
 * @param [in] const TUP_CHAR *groupuri  <b>:</b> Ⱥ��URI�������Ⱥ�����ʱ��д
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ������ʹ��
 * @see tup_call_serverconf_transferto_conf
 **/
TUP_API TUP_RESULT tup_call_serverconf_transferto_conf_non_refer(IN TUP_UINT32 callid, OUT TUP_UINT32 *confid, IN const TUP_CHAR *groupuri);

/**
 * @ingroup Conference
 * @brief [en]This interface is used to change P2P call to conference(Refer procedure)(Tup_call_serverconf_transferto_conf applies to scenes that are joined by info, this interface applies to scenes that are joined by invite).
 *        <br>[cn] ����ͨ��ת����(Refer����)(tup_call_serverconf_transferto_conf������ͨ��info��Ϣ���ĳ��������ӿ�������ͨ��invite��Ϣ���ĳ���)
 * 
 * @param [in] TUP_UINT32 callid        <b>:</b><br>[en] Indicates conference call ID.
 *                                              <br>[cn] �������(���ƿ�)ID
 * @param [in] TUP_UINT32 transto_callid        <b>:</b><br>[en] Indicates call ID.
 *                                              <br>[cn] ��ת�����ĺ���(���ƿ�)ID
 * @retval TUP_RESULT                   <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                              <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Calling this interface follow the process:
 *              1.The chairman establishes call with B and C, than hold them
 *              2.Chairman join the conference with conference factory uri(by invite)
 *              3.Chairman calling this interface to invite B and C join the conference
 *            <br>[cn] �ýӿڵĵ��ó�������:
 *                   1.��ϯ�������B��C����ͨ����Ȼ������·ͨ������ס
 *                   2.��ϯͨ�����鹤�������(sip����Ϊinvite)
 *                   3.��ϯ���ô˽ӿڷֱ������B��C���뵽����
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_transferto_conf_ex(TUP_UINT32 callid, TUP_UINT32 transto_callid);

/**
 * @brief ���ֻ���
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b> ����(���ƿ�)ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_serverconf_unhold
 **/
TUP_API TUP_RESULT tup_call_serverconf_hold(IN TUP_UINT32 confid); 


/**
 * @brief ȡ�����ֻ���
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b> ����(���ƿ�)ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_serverconf_hold
 **/
TUP_API TUP_RESULT tup_call_serverconf_unhold(IN TUP_UINT32 confid);


/**
 * @brief ��Ե�ֱ��ת��ý�����
 * 
 * @param [out] TUP_UINT32* confid        <b>:</b> ת�ɶ�ý�������Ӧ�Ļ���(���ƿ�)ID
 * @param [out] TUP_UINT32* callid        <b>:</b> ת�ɶ�ý�������Ӧ�ĺ���(���ƿ�)ID
 * @param [in] TUP_UINT32 p2p_callid      <b>:</b> ԭP2P����(���ƿ�)ID
 * @param [in] const TUP_CHAR* groupuri   <b>:</b> Ⱥ��URI�������Ⱥ�����ʱ��д
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ת�����ԭ��Ե����Ƶ���ڱ��֡�TODO
 * @see tup_call_serverconf_transferto_dataconf
 **/
TUP_API TUP_RESULT tup_call_serverconf_p2p_transferto_dataconf(OUT TUP_UINT32* confid, OUT TUP_UINT32* callid, IN TUP_UINT32 p2p_callid, IN const TUP_CHAR* groupuri);


/**
 * @brief ������������Ŀ��ƿ�
 * 
 * @param [out] TUP_UINT32 *confid  <b>:</b> ����(���ƿ�)ID
 * @param [out] TUP_UINT32 *callid  <b>:</b> ����(���ƿ�)ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ������ʹ�ã��ڴ���֮ǰ���ã�������������Ŀ��ƿ�
 * @see tup_call_serverconf_set_type
 * @see tup_call_serverconf_create_by_confid
 **/
TUP_API TUP_RESULT tup_call_serverconf_create_confid(OUT TUP_UINT32 *confid, OUT TUP_UINT32 *callid);


/**
 * @brief ���û�������
 * 
 * @param [in] TUP_UINT32 confid            <b>:</b> ����(���ƿ�)ID
 * @param [in] TUP_UINT32 type              <b>:</b> ��������  type = CALL_E_CONF_MEDIA_AUDIO|CALL_E_CONF_MEDIA_VIDEO|CALL_E_CONF_MEDIA_DATA 
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ������ʹ�ã��ڴ���֮ǰ����,�Կ��ƴ������������
 * @see tup_call_serverconf_create_confid
 * @see tup_call_serverconf_create_by_confid
 **/
TUP_API TUP_RESULT tup_call_serverconf_set_type(IN TUP_UINT32 confid, IN TUP_UINT32 type);


/**
 * @brief ���ݻ���id�½�����
 * 
 * @param [in] TUP_UINT32 confid         <b>:</b> ����(���ƿ�)ID
 * @param [in] const TUP_CHAR *groupuri  <b>:</b> Ⱥ��URI�������Ⱥ�����ʱ��д
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ������ʹ�ã��ڴ���֮ǰ��Ҫ����������ƿ�����û�������, 
 * @see tup_call_serverconf_create_confid
 * @see tup_call_serverconf_set_type
 **/
TUP_API TUP_RESULT tup_call_serverconf_create_by_confid(IN TUP_UINT32 confid, IN const TUP_CHAR *groupuri);


/**
 * @brief ����ָ���˻����е�callid������������Ŀ��ƿ�
 * 
 * @param [in] TUP_UINT32 accountid    <b>:</b> �˺�ID
 * @param [in] TUP_UINT32 incallid     <b>:</b> ԭ�к���ID
 * @param [out] TUP_UINT32* confid     <b>:</b> ����(���ƿ�)ID
 * @param [out] TUP_UINT32* outcallid  <b>:</b> �������Ӧ�ĺ���ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_serverconf_create_confid
 **/
TUP_API TUP_RESULT tup_call_serverconf_create_confid_ex (IN TUP_UINT32 accountid, 
                    IN TUP_UINT32 incallid , OUT TUP_UINT32* confid, OUT TUP_UINT32* outcallid);


/**
 * @brief ����ָ����·�Ļ�������
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b> ����(���ƿ�)ID
 * @param [in] TUP_UINT32 lineid  <b>:</b> ��·ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_serverconf_accept
 **/
TUP_API TUP_RESULT tup_call_serverconf_accept_with_lineid(IN TUP_UINT32 confid, IN TUP_UINT32 lineid);


/**
 * @brief ���������CTD����
 * 
 * @param [in] TUP_UINT32 confid       <b>:</b> ����ID
 * @param [in] const TUP_CHAR *number  <b>:</b> ������CTD����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ���ڻ�ΪUC��ת����
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_add_extra_num(IN TUP_UINT32 confid, IN const TUP_CHAR *number);


/**
 * @brief �ܾ���Ե����ݻ��� 
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_reject_p2pdataconf(IN TUP_UINT32 confid);


/**
 * @brief ֱ�ӽ���ԤԼ����
 * 
 * @param [in] TUP_UINT32 callid           <b>:</b> ����ID
 * @param [in] const TUP_CHAR *accesscode  <b>:</b> ���������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ֱ�ӽ���ԤԼ���飬��Ҫ����callid���ṩ���������ʺŵ������ʹ��
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_access_reserved_conf_directly(IN TUP_UINT32 callid, IN const TUP_CHAR *accesscode);


/**
 * @brief ���û�������
 * 
 * @param [in] TUP_UINT32 confid            <b>:</b> ����(���ƿ�)ID
 * @param [in] const TUP_CHAR* confsubject  <b>:</b> ��������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention �ݽ�Ӳ�ն�ʹ�ã��ڴ�����������ñ��ػ������⣬���ڻ��鴰�ڴ���������ʾ
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_set_confsubject(IN TUP_UINT32 confid, IN const TUP_CHAR* confsubject);


/**
 * @brief  �˳����з���������
 * 
 * @param NA
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_leave_all_server_conf(TUP_VOID);

/**
 * @brief  �������з���������
 * 
 * @param NA
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_end_all_server_conf(TUP_VOID);





/**
 * @brief �ϲ�����
 * 
 * @param [in] TUP_UINT32 confid                  <b>:</b> ����ID
 * @param [in] const TUP_CHAR* security_conf_num  <b>:</b> ��ȫ�����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_serverconf_split
 **/
TUP_API TUP_RESULT tup_call_serverconf_merger(IN TUP_UINT32 confid, IN const TUP_CHAR* security_conf_num);


/**
 * @brief ��ֻ���
 * 
 * @param [in] TUP_UINT32 confid                  <b>:</b> ����ID
 * @param [in] const TUP_CHAR* security_conf_num  <b>:</b> ��ȫ�����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_serverconf_merger
 **/
TUP_API TUP_RESULT tup_call_serverconf_split(IN TUP_UINT32 confid, IN const TUP_CHAR* security_conf_num);


/**
 * @brief ��ȡ�û������˺�ԤԼ�����б�
 * 
 * @param [in] NA
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention �ݽ�����ʹ��
 * @see tup_call_get_conf_list_for_account
 **/
TUP_API TUP_RESULT tup_call_get_all_conf_list(TUP_VOID);


/**
 * @brief ��ȡ�û�ָ���˺�ԤԼ�����б�
 * 
 * @param [in] TUP_UINT32 accountid  <b>:</b> ����ȡ�����б����˺�ID
 * @param [in] TUP_UINT32 pagesize   <b>:</b> �������б�ҳ�� 
 * @param [in] TUP_UINT32 curpage    <b>:</b> ��ǰ�����б�ҳ������ 
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention �ݽ�����ʹ��
 * @see tup_call_get_all_conf_list
 **/
TUP_API TUP_RESULT tup_call_get_conf_list_for_account(IN TUP_UINT32 accountid, IN TUP_UINT32 pagesize, IN TUP_UINT32 curpage);


/**
 * @brief ���û�������
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @param [in] TUP_BOOL islink    <b>:</b> �Ƿ�����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_set_linked(IN TUP_UINT32 callid, IN TUP_BOOL islink);


/**
 * @brief ������������β���
 * 
 * @param [in] TUP_UINT32 confid        <b>:</b> ����ID
 * @param [in] CALL_E_DTMF_TONE keyevt  <b>:</b> DTMF��ֵ
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_send_DTMF(IN TUP_UINT32 confid, IN CALL_E_DTMF_TONE keyevt);


/**
 * @brief �����Ե㷽�������ݻ���
 * 
 * @param [in] TUP_UINT32 confid           <b>:</b> ����ID
 * @param [in] const TUP_CHAR* p2p_number  <b>:</b> �������P2P����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ��ΪUC�����£�CTD������²���Ҫ����
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_add_p2p_to_dataconf(IN TUP_UINT32 confid, IN const TUP_CHAR* p2p_number);




/**
 * @brief ��ȡ��ȫ���������
 * 
 * @param [in] TUP_UINT32 confid         <b>:</b> ����ID
 * @param [out] TUP_CHAR*  security_num  <b>:</b> ��ȫ�����
 * @param [in] TUP_UINT32 numsize        <b>:</b> �洢��ȫ������ڴ�Ĵ�С
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_get_securitynum(IN TUP_UINT32 confid, OUT TUP_CHAR* security_num, IN TUP_UINT32 numsize);


/**
 * @brief ������������
 * 
 * @param [in] TUP_UINT32 confid              <b>:</b> ����ID
 * @param [in] TUP_UINT32 attendcount         <b>:</b> ���������
 * @param [in] const  TUP_CHAR* attendnumber  <b>:</b> ����ߺ�������
 * @param [in] TUP_UINT32 pernumsize          <b>:</b> ÿ��������󳤶�
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_create_linkage_conf(IN TUP_UINT32 confid, 
                    IN TUP_UINT32 attendcount, IN const  TUP_CHAR* attendnumber, IN TUP_UINT32 pernumsize);

/**
 * @defgroup IPPhoneVideoConf
 * @ingroup ExtendConference
 * @brief Instant conference control for IP Phone  
 *        <br>��ʱ���飬����IP����
 * @{
 **/



/**
 * @brief ������Ƶ���鴰��
 * 
 * @param [in] TUP_UINT32 confid                         <b>:</b> ����ID
 * @param [in] const CALL_S_VIDEOWND_INFO* videowndinfo  <b>:</b> ��Ƶ������Ϣ
 * @param [in] TUP_UINT32 wndnum                         <b>:</b> ����������ȡֵ[1,20]
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_videoconf_destroy_wnd
 **/
TUP_API TUP_RESULT tup_call_videoconf_create_wnd(IN TUP_UINT32 confid, IN const CALL_S_VIDEOWND_INFO* videowndinfo, IN TUP_UINT32 wndnum);


/**
 * @brief ������Ƶ���鴰��
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_videoconf_create_wnd
 **/
TUP_API TUP_RESULT tup_call_videoconf_destroy_wnd(IN TUP_UINT32 confid);


/**
 * @brief ����Ƶ�����Լ�����Ƶ
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_videoconf_close_self_video
 **/
TUP_API TUP_RESULT tup_call_videoconf_open_self_video(IN TUP_UINT32 confid);


/**
 * @brief �ر���Ƶ�����Լ�����Ƶ
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_videoconf_close_self_video
 **/
TUP_API TUP_RESULT tup_call_videoconf_close_self_video(IN TUP_UINT32 confid);


/**
 * @brief ֪ͨ��Ƶ��������ߴ���Ƶ
 * 
 * @param [in] TUP_UINT32 confid          <b>:</b> ����ID
 * @param [in] const TUP_CHAR* attendnum  <b>:</b> ����ߺ���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_videoconf_notify_attend_close_video
 **/
TUP_API TUP_RESULT tup_call_videoconf_notify_attend_open_video(IN TUP_UINT32 confid, IN const TUP_CHAR* attendnum);


/**
 * @brief ֪ͨ��Ƶ��������ߴ���Ƶ
 * 
 * @param [in] TUP_UINT32 confid          <b>:</b> ����ID
 * @param [in] const TUP_CHAR* attendnum  <b>:</b> ����ߺ���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_videoconf_notify_attend_open_video
 **/
TUP_API TUP_RESULT tup_call_videoconf_notify_attend_close_video(IN TUP_UINT32 confid, IN const TUP_CHAR* attendnum);



/**
 * @brief ��ʾ�������Ƶ������
 * 
 * @param [in] TUP_UINT32 confid          <b>:</b> ����ID
 * @param [in] const TUP_CHAR* attendnum  <b>:</b> ����ߺ���
 * @param [in] TUP_UINT32 wndid           <b>:</b> ����ID
 * @param [in] TUP_UINT32 ishighstream    <b>:</b> �Ƿ��Ǹ�(����)��
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_videoconf_detach_attend_video_from_wnd
 **/
TUP_API TUP_RESULT tup_call_videoconf_attach_attend_video_to_wnd(IN TUP_UINT32 confid, 
                    IN const TUP_CHAR* attendnum, IN TUP_UINT32 wndid, IN TUP_UINT32 ishighstream);


/**
 * @brief ȡ����ʾ�������������
 * 
 * @param [in] TUP_UINT32 confid          <b>:</b> ����ID
 * @param [in] const TUP_CHAR* attendnum  <b>:</b> ����ߺ���
 * @param [in] TUP_UINT32 wndid           <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_videoconf_attach_attend_video_to_wnd
 **/
TUP_API TUP_RESULT tup_call_videoconf_detach_attend_video_from_wnd(IN TUP_UINT32 confid, 
                    IN const TUP_CHAR* attendnum, IN TUP_UINT32 wndid);

/**
 * @brief �ı���Ƶ�����������Ƶ���ڴ�С
 * 
 * @param [in] TUP_UINT32 confid                    <b>:</b> ����ID
 * @param [in] TUP_UINT32 wndid                     <b>:</b> ����ID
 * @param [in] const CALL_S_VIDEOWND_INFO* wndinfo  <b>:</b> ������Ϣ
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_videoconf_change_wnd_size(IN TUP_UINT32 confid, IN TUP_UINT32 wndid, IN const CALL_S_VIDEOWND_INFO* wndinfo);


/**
 * @brief �л���Ƶ�����������Ƶ�ֱ��ʣ������͵���
 * 
 * @param [in] TUP_UINT32 confid            <b>:</b> ����ID
 * @param [in] const TUP_CHAR* attendnum    <b>:</b> ����ߺ���
 * @param [in] TUP_UINT32 ishighresolution  <b>:</b> �Ƿ��Ǹ�(����)��
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_videoconf_switch_attend_video_resolution(IN TUP_UINT32 confid, IN const TUP_CHAR* attendnum, IN TUP_UINT32 ishighresolution);


/**
 * @brief �ر���Ƶ���������������Ƶ
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_videoconf_close_self_all_video(IN TUP_UINT32 confid);


/**
 * @brief ��ͣ��Ƶ���鱾����Ƶ
 * 
 * @param [in] TUP_UINT32 confid          <b>:</b> ����ID
 * @param [in] const TUP_CHAR* attendnum  <b>:</b> ����ߺ���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_videoconf_resume_attend_local_video
 **/
TUP_API TUP_RESULT tup_call_videoconf_pause_attend_local_video(IN TUP_UINT32 confid, IN const TUP_CHAR* attendnum);


/**
 * @brief �ָ���Ƶ���鱾����Ƶ
 * 
 * @param [in] TUP_UINT32 confid          <b>:</b> ����ID
 * @param [in] const TUP_CHAR* attendnum  <b>:</b> ����ߺ���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_videoconf_pause_attend_local_video
 **/
TUP_API TUP_RESULT tup_call_videoconf_resume_attend_local_video(IN TUP_UINT32 confid, IN const TUP_CHAR* attendnum);


/**
 * @brief �ı���Ƶ�����������Ƶ����"Z"��
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b> ����ID
 * @param [in] TUP_UINT32 zorder  <b>:</b> "Z"��
 * @param [in] TUP_UINT32 wndid   <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_videoconf_change_wnd_zorder(IN TUP_UINT32 confid, IN TUP_UINT32 zorder, IN TUP_UINT32 wndid);


/**
 * @brief ��Ƶ����ת��Ƶ����
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_videoconf_voiceconf_tranfto_videoconf(IN TUP_UINT32 confid);


/**
 * @brief �ı���Ƶ�������������Ƶ���ڴ�С�ʹ���Z��
 * 
 * @param [in] TUP_UINT32 confid                      <b>:</b> ����ID
 * @param [in] const CALL_S_VIDEOWND_INFO* videoinfo  <b>:</b> ������Ϣ
 * @param [in] TUP_UINT32 infocount                   <b>:</b> ������Ϣ����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_videoconf_change_wnd_pos(IN TUP_UINT32 confid, IN const CALL_S_VIDEOWND_INFO* videoinfo, IN TUP_UINT32 infocount);


/**
 * @brief ����Ƶ����Ԥ��
 * 
 * @param [in] TUP_UINT32 confid                               <b>:</b> ����ID
 * @param [in] TUP_UINT32 wndid                                <b>:</b> ����ID
 * @param [in] const CALL_S_VIDEOCONF_VIDEO_PARAM* videoparam  <b>:</b> ��Ƶ����Ԥ������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_videoconf_close_preview
 **/
TUP_API TUP_RESULT tup_call_videoconf_open_preview(IN TUP_UINT32 confid, IN TUP_UINT32 wndid, IN const CALL_S_VIDEOCONF_VIDEO_PARAM* videoparam);


/**
 * @brief �ر���Ƶ����Ԥ��
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_videoconf_close_preview(IN TUP_UINT32 confid);


/**
 * @brief ��ȡ��Ƶ�����������Ƶ״̬
 * 
 * @param [in] TUP_UINT32 confid          <b>:</b> ����ID
 * @param [in] const TUP_CHAR* attendnum  <b>:</b> ����ߺ���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_videoconf_get_video_device_status(IN TUP_UINT32 confid, IN const TUP_CHAR* attendnum);
/**
 * @}
 **/


/**
 * @defgroup LocalConf
 * @ingroup ExtendConference
 * @brief  Local Conf  
 *        <br>���ػ��飬�ݽ�IP Phoneʹ��
 * @{
 **/



/**
 * @brief ��ȡ���ػ���᳡״̬
 * 
 * @param [in] CALL_S_CONFER_LOCAL_INFO* confinfo  <b>:</b> ���ػ���᳡��Ϣ
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_localconf_get_conferstate(IN CALL_S_CONFER_LOCAL_INFO* confinfo);


/**
 * @brief ���ػ����о����Լ�
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_localconf_unmute_self
 **/
TUP_API TUP_RESULT tup_call_localconf_mute_self(IN TUP_UINT32 callid);


/**
 * @brief ���ػ�����ȡ�������Լ�
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_localconf_mute_self
 **/
TUP_API TUP_RESULT tup_call_localconf_unmute_self(IN TUP_UINT32 callid);


/**
 * @brief ���ֱ��ػ���᳡
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_localconf_unhold
 **/
TUP_API TUP_RESULT tup_call_localconf_hold(TUP_VOID);


/**
 * @brief ȡ�����ֱ��ػ���᳡
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_localconf_hold
 **/
TUP_API TUP_RESULT tup_call_localconf_unhold(TUP_VOID);



/**
 * @brief �������ػ���
 * 
 * @param [in] TUP_UINT32 call_id  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_localconf_join
 * @see tup_call_localconf_drop_conferee
 * @see tup_call_localconf_mute_conferee
 * @see tup_call_localconf_unmute_conferee
 * @see tup_call_localconf_end
 **/
TUP_API TUP_RESULT tup_call_localconf_create(IN TUP_UINT32 call_id);


/**
 * @brief ���뱾�ػ���
 * 
 * @param [in] TUP_UINT32 call_id  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_localconf_create
 * @see tup_call_localconf_drop_conferee
 * @see tup_call_localconf_mute_conferee
 * @see tup_call_localconf_unmute_conferee
 * @see tup_call_localconf_end
 **/
TUP_API TUP_RESULT tup_call_localconf_join(IN TUP_UINT32 call_id);


/**
 * @brief �޳������
 * 
 * @param [in] TUP_UINT32 call_id  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_localconf_create
 * @see tup_call_localconf_join
 * @see tup_call_localconf_mute_conferee
 * @see tup_call_localconf_unmute_conferee
 * @see tup_call_localconf_end
 **/
TUP_API TUP_RESULT tup_call_localconf_drop_conferee(IN TUP_UINT32 call_id);

/**
 * @brief ���������
 * 
 * @param [in] TUP_UINT32 call_id  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_localconf_create
 * @see tup_call_localconf_join
 * @see tup_call_localconf_drop_conferee
 * @see tup_call_localconf_unmute_conferee
 * @see tup_call_localconf_end
 **/
TUP_API TUP_RESULT tup_call_localconf_mute_conferee(IN TUP_UINT32 call_id);


/**
 * @brief ȡ�����������
 * 
 * @param [in] TUP_UINT32 call_id  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_localconf_create
 * @see tup_call_localconf_join
 * @see tup_call_localconf_drop_conferee
 * @see tup_call_localconf_mute_conferee
 * @see tup_call_localconf_end
 **/
TUP_API TUP_RESULT tup_call_localconf_unmute_conferee(IN TUP_UINT32 call_id);


/**
 * @brief �������ػ���
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_localconf_create
 * @see tup_call_localconf_join
 * @see tup_call_localconf_drop_conferee
 * @see tup_call_localconf_mute_conferee
 * @see tup_call_localconf_unmute_conferee
 **/
TUP_API TUP_RESULT tup_call_localconf_end(TUP_VOID);
/**
 * @}
 **/


/**
 * @}
 **/


/**
 * @defgroup LinkageService
 * @ingroup AdvancedAPI
 * @brief Linkage service  
 *        <br>����ҵ��
 * @{
 **/



/**
 * @brief ������������
 * 
 * @param [in] TUP_UINT32 accountid        <b>:</b> �˺�ID
 * @param [in] TUP_BOOL right              <b>:</b> ����Ȩ��
 * @param [in] const char* linkage_number  <b>:</b> ������Ŀ�껰�����룬��󳤶�32
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention �ڿ�������ǰ����
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_joint_setting(IN TUP_UINT32 accountid, IN TUP_BOOL right, IN const char* linkage_number);


/**
 * @brief ��������
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ����ǰ�����������������
 * @see tup_call_joint_stop
 **/
TUP_API TUP_RESULT tup_call_joint_start(TUP_VOID);


/**
 * @brief �ر�����
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_joint_start
 **/
TUP_API TUP_RESULT tup_call_joint_stop(TUP_VOID);


/**
 * @brief ����ͨ��Desktop��IP Phone�л�
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_joint_switch(TUP_VOID);

/**
 * @brief ��������������Desktop��IP Phone֮��ͬ������DNDҵ�񡣿���Desktopͬ����IP PhoneҲ����IP Phoneͬ����Desktop��
 * 
 * @param [in] TUP_UINT32 accountid�����˺�id
 * @param [in] CALL_E_SERVICE_CALL_TYPE servicetype ҵ������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ����IPT��ҵ������Զ�ͬ��������Ҫͨ�����ӿ�ͬ����
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_joint_sync_ipt_service(IN TUP_UINT32 accountid, IN CALL_E_SERVICE_CALL_TYPE servicetype);


/**
 * @brief ͨ��ת����
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_joint_conf_result
 **/
TUP_API TUP_RESULT tup_call_joint_uptoconference(TUP_VOID);


/**
 * @brief ����������֪ͨ������
 * 
 * @param [in] TUP_UINT32 result  <b>:</b> ������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_joint_uptoconference
 **/
TUP_API TUP_RESULT tup_call_joint_conf_result(IN TUP_UINT32 result);

/**
 * @}
 **/




/**
 * @defgroup AdvancedIPTService
 * @ingroup AdvancedAPI
 * @brief Advanced IPT Service   
 *        <br>�߼�IPTҵ��
 * @{
 **/



/**
 * @brief ��ȡָ��ҵ���ҵ��������(ע�����ע����)
 * 
 * @param [in] TUP_UINT32 account_id            <b>:</b> �˺�ID
 * @param [in] CALL_S_IPT_DATA *ipt_data        <b>:</b> ����ȡҵ���������ҵ��������Ϣ
 * @param [out] TUP_CHAR code[]                 <b>:</b> ������������ڴ棬��Ӧ�ò���䣬���鳤�Ȳ�С��32�ֽ�
 * @param [in] TUP_UINT32 size                  <b>:</b> ������������ڴ泤��
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_service_code(IN TUP_UINT32 account_id, IN CALL_S_IPT_DATA *ipt_data, OUT TUP_CHAR code[], IN TUP_UINT32 size);


/**
 * @brief ͬ���������ҵ��Ȩ��
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention Ӳ�ն�ʹ�ã�������������( ��"�ֻ�Я��"��"�����·�����")ʱ���ɲ�Ʒ����
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_sync_service_right(TUP_VOID);


/**
 * @brief ���¼���ҵ��Ȩ��
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_update_serviceright
 **/
TUP_API TUP_RESULT tup_call_reload_serviceright(TUP_VOID);


/**
 * @brief ����ָ��ҵ��Ȩ��
 * 
 * @param [in] TUP_UINT32 accountid                       <b>:</b> �˺�ID
 * @param [in] const CALL_S_SERVICERIGHT_CFG* servicecfg  <b>:</b> �����µ�ҵ��Ȩ��
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_reload_serviceright
 **/
TUP_API TUP_RESULT tup_call_update_serviceright(IN TUP_UINT32 accountid, IN const CALL_S_SERVICERIGHT_CFG* servicecfg);


/**
 * @brief ����Ǽ�ҵ��ɹ���֪ͨ����ҵ��Ȩ�޵Ǽ����
 * 
 * @param [in] TUP_UINT32 accountid                    <b>:</b> �˺�ID
 * @param [in] CALL_E_SERVICE_RIGHT_TYPE service_type  <b>:</b> ҵ������
 * @param [in] TUP_UINT32 reg                          <b>:</b> �Ǽ������CALL_E_SEVICEREGISTER_STATUS
 * @param [in] const TUP_CHAR* param                   <b>:</b> ҵ���������ǰת��Ŀ�ĺ���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_service_register(IN TUP_UINT32 accountid, 
                    IN CALL_E_SERVICE_RIGHT_TYPE service_type, IN TUP_UINT32 reg, IN const TUP_CHAR* param);


/**
 * @brief ��ȡҵ��Ȩ��
 * 
 * @param [in] TUP_UINT32 accountid                 <b>:</b> �˺�ID
 * @param [out] CALL_S_SERVICERIGHT_CFG* servicecfg  <b>:</b> ҵ��Ȩ����Ϣ
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_serviceright(IN TUP_UINT32 accountid, OUT CALL_S_SERVICERIGHT_CFG* servicecfg);



/**
 * @brief �Ǽ�ָ���˺ŵ�DNDҵ��
 * 
 * @param [in] TUP_UINT32 account_id  <b>:</b> �˺�ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ҵ����������Ҫ����ȷ����
 * @see tup_call_cancel_DND_for_account
 **/
TUP_API TUP_RESULT tup_call_set_DND_for_account(IN TUP_UINT32 account_id);

 
/**
 * @brief ע��ָ���˺ŵ�DNDҵ��
 * 
 * @param [in] TUP_UINT32 account_id  <b>:</b> �˺�ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ҵ����������Ҫ����ȷ����
 * @see tup_call_set_DND_for_account
 **/
TUP_API TUP_RESULT tup_call_cancel_DND_for_account(IN TUP_UINT32 account_id);


/**
 * @brief �Ǽ�ָ���˺ŵ����羲��ҵ��
 * 
 * @param [in] TUP_UINT32 account_id  <b>:</b> �˺�ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ҵ����������Ҫ����ȷ����
 * @see tup_call_set_alertsilence_off
 **/
TUP_API TUP_RESULT tup_call_set_alertsilence_on(IN TUP_UINT32 account_id);


/**
 * @brief ע��ָ���˺ŵ����羲��ҵ��
 * 
 * @param [in] TUP_UINT32 account_id  <b>:</b> �˺�ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ҵ����������Ҫ����ȷ����
 * @see tup_call_set_alertsilence_off
 **/
TUP_API TUP_RESULT tup_call_set_alertsilence_off(IN TUP_UINT32 account_id);


/**
 * @brief �Ǽ�privacyҵ��(˽�˺���)
 * 
 * @param [in] TUP_UINT32 account_id  <b>:</b> �˺�ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_set_privacy_off
 **/
TUP_API TUP_RESULT tup_call_set_privacy_on(IN TUP_UINT32 account_id);


/**
 * @brief ע��privacyҵ��(˽�˺���)
 * 
 * @param [in] TUP_UINT32 account_id  <b>:</b> �˺�ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_set_privacy_on
 **/
TUP_API TUP_RESULT tup_call_set_privacy_off(IN TUP_UINT32 account_id);


/**
 * @brief �����п�ҵ���б��ֺ���
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_pnotification_unholdcall
 **/
TUP_API TUP_RESULT tup_call_pnotification_holdcall(IN TUP_UINT32 callid);

 
/**
 * @brief �����п�ҵ����ȡ�����ֺ���
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_pnotification_holdcall
 **/
TUP_API TUP_RESULT tup_call_pnotification_unholdcall(IN TUP_UINT32 callid);


/**
 * @brief ����������¼/��
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_server_recordcall_off
 **/
TUP_API TUP_RESULT tup_call_server_recordcall_on(IN TUP_UINT32 callid);


/**
 * @brief �رշ�����¼/��
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_server_recordcall_on
 **/
TUP_API TUP_RESULT tup_call_server_recordcall_off(IN TUP_UINT32 callid);


/**
 * @brief �Ǽ��Զ��غ�ҵ��
 * 
 * @param [in] TUP_UINT32 account_id       <b>:</b> �˺�ID
 * @param [in] const TUP_CHAR* callee_number  <b>:</b> ���к���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ҵ����������Ҫ����ȷ����
 * @see tup_call_cancel_callback
 **/
TUP_API TUP_RESULT tup_call_callback(IN TUP_UINT32 account_id, IN const TUP_CHAR* callee_number);

 
/**
 * @brief ע���Զ��غ�ҵ��
 * 
 * @param [in] TUP_UINT32 account_id       <b>:</b> �˺�ID
 * @param [in] const TUP_CHAR* callee_number  <b>:</b> ���к���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ҵ����������Ҫ����ȷ����
 * @see tup_call_callback
 **/
TUP_API TUP_RESULT tup_call_cancel_callback(IN TUP_UINT32 account_id, IN const TUP_CHAR* callee_number);


/**
 * @brief ȡ��ֱ�Ӻ���פ��ҵ��
 * 
 * @param [in] TUP_UINT32 callid           <b>:</b> ����ID
 * @param [in] CALL_E_CALL_TYPE call_type  <b>:</b> �������ͣ���Ƶ����Ƶ
 * @param [in] const TUP_CHAR* pszparknum  <b>:</b> ����פ������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_set_callpark
 * @see tup_call_set_direct_callpark
 **/
TUP_API TUP_RESULT tup_call_get_callpark(IN TUP_UINT32 callid, IN CALL_E_CALL_TYPE call_type, IN const TUP_CHAR* pszparknum);


/**
 * @brief �����߼���bridge���� 
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_SCA_in_bridgeconf(IN TUP_UINT32 callid);


/**
 * @brief �ɱ�̼�/��չ�尴�����ñ��֪ͨ
 * 
 * @param [in] TUP_INT32 broad_id     <b>:</b> 0:�����ɱ�̼���1:��չ��һ��2:��չ�����3:��չ����
 * @param [in] const TUP_INT32* keys  <b>:</b> ���÷����仯�İ���Loc�������, ����һ�δ���������仯�İ�����ţ�����Loc����Ǵ�1��ʼ������
 * @param [in] TUP_INT32 number       <b>:</b> ����Loc��������С��
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_progkey_modify_ind(IN TUP_INT32 broad_id, IN const TUP_INT32* keys, IN TUP_INT32 number);


/**
 * @brief ���ù�����·˽�˺���
 * 
 * @param [in] TUP_UINT32 accountid               <b>:</b> �˺�ID
 * @param [in] CALL_E_SERVICE_CALL_TYPE calltype  <b>:</b> ��������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_SCA_private(IN TUP_UINT32 accountid, IN CALL_E_SERVICE_CALL_TYPE calltype);


/**
 * @brief ����Ⱥ�����
 * 
 * @param [in] TUP_UINT32 callid           <b>:</b> ����ID
 * @param [in] CALL_E_CALL_TYPE call_type  <b>:</b> ��������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_group_pickup(IN TUP_UINT32 callid, IN CALL_E_CALL_TYPE call_type);

/**
 * @brief ����Ⱥ�����
 * 
 * @param [in] TUP_UINT32 ulCallID                          <b>:</b> ����ID
 * @param [in] CALL_E_CALL_TYPE call_type                   <b>:</b> ��������
 * @param [in] const CALL_S_PICKUP_INFO * group_packup_info <b>:</b> ͬ����������Ϣ
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention:
 * @see �����ڶ����������ʱ�����Ե��ô˽ӿڴ���ָ���ı���
 **/
TUP_API TUP_RESULT tup_call_group_pickup_ex(IN TUP_UINT32 ulCallID, IN CALL_E_CALL_TYPE call_type, IN const CALL_S_PICKUP_INFO * group_packup_info);


/**
 * @brief ���ú���ǰת
 * 
 * @param [in] const CALL_S_FORWARD_INFO* fwdconfig  <b>:</b> ǰת������������
 * @param [in] TUP_UINT32 configcount                <b>:</b> ǰת���������������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_forward_config(IN const CALL_S_FORWARD_INFO* fwdconfig , IN TUP_UINT32 configcount);


/**
 * @brief ����intercom����
 * 
 * @param [in] TUP_UINT32 callid              <b>:</b> ����ID
 * @param [in] const TUP_CHAR* callee_number  <b>:</b> ���к���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_intercom_call(IN TUP_UINT32 callid, IN const TUP_CHAR* callee_number);


/**
 * @brief ��������
 * 
 * @param [in] TUP_UINT32 callid              <b>:</b> ����ID
 * @param [in] const TUP_CHAR* callee_number  <b>:</b> ���к���(VVM�������)
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_VVM_query
 * @see tup_call_VVM_forward
 * @see tup_call_VVM_delete
 * @see tup_call_VVM_pausal
 * @see tup_call_VVM_fast_forward
 * @see tup_call_VVM_rewind
 **/
TUP_API TUP_RESULT tup_call_VVM_listen(IN TUP_UINT32 callid,  IN const TUP_CHAR* callee_number);


/**
 * @brief ��������
 * 
 * @param [in] const CALL_S_VVM_QUERY_MSG* query  <b>:</b> VVM���������������ݽṹ
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_VVM_listen
 * @see tup_call_VVM_forward
 * @see tup_call_VVM_delete
 * @see tup_call_VVM_pausal
 * @see tup_call_VVM_fast_forward
 * @see tup_call_VVM_rewind
 **/
TUP_API TUP_RESULT tup_call_VVM_query(IN const CALL_S_VVM_QUERY_MSG* query);


/**
 * @brief ת������
 * 
 * @param [in] const CALL_S_VVM_FWD_MSG* fwd  <b>:</b> VVMת���������ݽṹ
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_VVM_listen
 * @see tup_call_VVM_query
 * @see tup_call_VVM_delete
 * @see tup_call_VVM_pausal
 * @see tup_call_VVM_fast_forward
 * @see tup_call_VVM_rewind
 **/
 
TUP_API TUP_RESULT tup_call_VVM_forward(IN const CALL_S_VVM_FWD_MSG* fwd);


/**
 * @brief ɾ������
 * 
 * @param [in] const CALL_S_VVM_DEL_MSG* del  <b>:</b> VVMת���������ݽṹ
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_VVM_listen
 * @see tup_call_VVM_query
 * @see tup_call_VVM_forward
 * @see tup_call_VVM_pausal
 * @see tup_call_VVM_fast_forward
 * @see tup_call_VVM_rewind
 **/
TUP_API TUP_RESULT tup_call_VVM_delete(IN const CALL_S_VVM_DEL_MSG* del);


/**
 * @brief ���Բ���(��ͣ)
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_VVM_listen
 * @see tup_call_VVM_query
 * @see tup_call_VVM_forward
 * @see tup_call_VVM_delete
 * @see tup_call_VVM_fast_forward
 * @see tup_call_VVM_rewind
 **/
TUP_API TUP_RESULT tup_call_VVM_pausal(IN TUP_UINT32 callid);


/**
 * @brief ���Կ��
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_VVM_listen
 * @see tup_call_VVM_query
 * @see tup_call_VVM_forward
 * @see tup_call_VVM_delete
 * @see tup_call_VVM_pausal
 * @see tup_call_VVM_rewind
 **/
TUP_API TUP_RESULT tup_call_VVM_fast_forward(IN TUP_UINT32 callid);


/**
 * @brief ���Կ���
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_VVM_listen
 * @see tup_call_VVM_query
 * @see tup_call_VVM_forward
 * @see tup_call_VVM_delete
 * @see tup_call_VVM_pausal
 * @see tup_call_VVM_fast_forward
 **/
TUP_API TUP_RESULT tup_call_VVM_rewind(IN TUP_UINT32 callid);


/**
 * @brief ���þܾ�ǰת���翪��
 * 
 * @param [in] TUP_UINT32 accountid  <b>:</b> �˺�ID
 * @param [in] TUP_BOOL switches     <b>:</b> 1 ������0 �ر�
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_DICF_switct(IN TUP_UINT32 accountid, IN TUP_BOOL switches);



/**
 * @brief ���������˺�DND
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_set_all_account_DND_off
 **/
TUP_API TUP_RESULT tup_call_set_all_account_DND_on(TUP_VOID);


/**
 * @brief �ر������˺�DND
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_set_all_account_DND_on
 **/
TUP_API TUP_RESULT tup_call_set_all_account_DND_off(TUP_VOID);


/**
 * @brief ���������˺�ȱϯҵ��
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_set_all_account_absent_off
 **/
TUP_API TUP_RESULT tup_call_set_all_account_absent_on(TUP_VOID);


/**
 * @brief ���������˺�ȡ��ȱϯ
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_set_all_account_absent_on
 **/
TUP_API TUP_RESULT tup_call_set_all_account_absent_off(TUP_VOID);


/**
 * @brief ����MCID(������и�*��)
 * 
 * @param [in] TUP_UINT32 accountid  <b>:</b> �˺�ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_MCID(IN TUP_UINT32 accountid);


/**
 * @brief �����Ǽ������˺�IPTҵ��
 * 
 * @param [in] const CALL_S_IPT_DATA* IPTdata  <b>:</b> ���Ǽǵ�IPTҵ����������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_IPTservice_batch(IN const CALL_S_IPT_DATA* IPTdata);


/**
 * @brief �����Ǽ�ָ���˺�IPTҵ��
 * 
 * @param [in] TUP_UINT32 accountid      <b>:</b> �˺�ID
 * @param [in] CALL_S_IPT_DATA* IPTdata  <b>:</b> ���Ǽǵ�IPTҵ����������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_IPTservice_for_accout(IN TUP_UINT32 accountid, IN CALL_S_IPT_DATA* IPTdata);


/**
 * @brief ����ָ���˺������޺�
 * 
 * @param [in] TUP_UINT32 accountid            <b>:</b> �˺�ID
 * @param [in] const CALL_S_IPT_DATA* IPTdata  <b>:</b> �����޺�ҵ����������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_cancel_callbarring_for_account
 **/
TUP_API TUP_RESULT tup_call_set_callbarring_for_account(IN TUP_UINT32 accountid, IN const CALL_S_IPT_DATA* IPTdata);


/**
 * @brief �ر�ָ���˺������޺�
 * 
 * @param [in] TUP_UINT32 accountid            <b>:</b> �˺�ID
 * @param [in] const CALL_S_IPT_DATA* IPTdata  <b>:</b> �����޺�ҵ����������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_set_callbarring_for_account
 **/
TUP_API TUP_RESULT tup_call_cancel_callbarring_for_account(IN TUP_UINT32 accountid, IN const CALL_S_IPT_DATA* IPTdata);


/**
 * @brief ����ָ���˺ŵ�ȱϯҵ��
 * 
 * @param [in] TUP_UINT32 accountid  <b>:</b> �˺�ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_cancel_absent_for_account
 **/
TUP_API TUP_RESULT tup_call_set_absent_for_account(IN TUP_UINT32 accountid);


/**
 * @brief ȡ��ָ���˺ŵ�ȱϯҵ��
 * 
 * @param [in] TUP_UINT32 accountid  <b>:</b> �˺�ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_set_absent_for_account
 **/
TUP_API TUP_RESULT tup_call_cancel_absent_for_account(IN TUP_UINT32 accountid);

/**
 * @brief �����˺�״̬
 * 
 * @param [in] IN TUP_UINT32 account_id     <b>:</b> �˺�ID
 * @param [in] IN TUP_UINT32 status_type    <b>:</b> ״̬��Ϣ����ӦCALL_E_CONTACT_STATUS
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_publish_setting_status(IN TUP_UINT32 account_id, IN TUP_UINT32 status_type);


/**
 * @brief �Ự���ֻ��ֻ��л�
 * 
 * @param [in] TUP_UINT32 callid      <b>:</b> ����ID
 * @param [in] const TUP_CHAR* MPnum  <b>:</b> �ֻ��ֻ�����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_mobile_extend_call(IN TUP_UINT32 callid, IN const TUP_CHAR* pszMPNum);


/**
 * @brief ����intercom˫��ͨ������
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_answer_intercom_call(IN TUP_UINT32 callid);


/**
 * @brief ����ֱ�Ӻ���פ��ҵ��
 * 
 * @param [in] TUP_UINT32 callid             <b>:</b> ����ID
 * @param [in] const TUP_CHAR*  direct_num   <b>:</b> ����פ������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 
 * @attention NA
 * @see tup_call_set_callpark
 * @see tup_call_get_callpark
 **/
TUP_API TUP_RESULT tup_call_direct_callpark(IN TUP_UINT32 callid, IN const TUP_CHAR* direct_num);


/**
 * @brief ���ú���פ��ҵ��
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_set_direct_callpark
 * @see tup_call_get_callpark
 **/
TUP_API TUP_RESULT tup_call_callpark(IN TUP_UINT32 callid);


/**
 * @brief ����˽�˱���
 * 
 * @param [in] TUP_UINT32 ulCallID  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_private_hold_call (IN TUP_UINT32 callid);


/**
 * @brief ������λ����
 * 
 * @param [in] TUP_UINT32 callid              <b>:</b> �˺�ID
 * @param [in] CALL_E_CALL_TYPE call_type     <b>:</b> ��������
 * @param [in] const TUP_CHAR* callee_number  <b>:</b> ���к���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_abbrdial_Call(IN TUP_UINT32 callid, IN CALL_E_CALL_TYPE call_type, IN const TUP_CHAR* callee_number);

/**
 * @brief ����ָ������
 * 
 * @param [in] TUP_UINT32 callid             <b>:</b> ����ID
 * @param [in] CALL_E_CALL_TYPE call_type    <b>:</b> ��������
 * @param [in] const TUP_CHAR* calleenumber  <b>:</b> ���к���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_point_pickup(IN TUP_UINT32 callid, IN CALL_E_CALL_TYPE call_type, IN const TUP_CHAR* callee_number);

/**
 * @brief ����ָ������
 * 
 * @param [in] TUP_UINT32 callid             <b>:</b> ����ID
 * @param [in] CALL_E_CALL_TYPE call_type    <b>:</b> ��������
 * @param [in] const TUP_CHAR* calleenumber  <b>:</b> ���к���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see ���յ���������ָ������֪ͨ�󣬱�����˽ӿڽ���ָ������
 **/
TUP_API TUP_RESULT tup_call_point_pickup_ex(IN TUP_UINT32 ulCallID, IN CALL_E_CALL_TYPE call_type, IN const CALL_S_PICKUP_INFO * point_packup_info);

/**
 * @brief ��������·ǿ��
 * 
 * @param [in] TUP_UINT32 call_id  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_SCA_retrieve
 * @see tup_call_SCA_sub_state
 * @see tup_call_SCA_offhook
 **/
TUP_API TUP_RESULT tup_call_SCA_insert (IN TUP_UINT32 call_id);


/**
 * @brief ��������·ʰ��
 * 
 * @param [in] TUP_UINT32 call_id  <b>:</b> ����ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_SCA_insert
 * @see tup_call_SCA_sub_state
 * @see tup_call_SCA_offhook
 **/
TUP_API TUP_RESULT tup_call_SCA_retrieve (IN TUP_UINT32 call_id);


/**
 * @brief ��������״̬���ġ����ĺ󣬿����յ�������·��״̬���͡�
 * 
 * @param [in] TUP_UINT32 account_id  <b>:</b> �˺�ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_SCA_insert
 * @see tup_call_SCA_retrieve
 * @see tup_call_SCA_offhook
 **/
TUP_API TUP_RESULT tup_call_SCA_sub_state(IN TUP_UINT32 account_id);


/**
 * @brief ָʾ������·�ϵ�����������������ժ����
 * 
 * @param [in] TUP_UINT32 account_id   <b>:</b> �˺�ID
 * @param [in] TUP_UINT32 sca_line_id  <b>:</b> ��������·ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_SCA_insert
 * @see tup_call_SCA_retrieve
 * @see tup_call_SCA_sub_state
 **/
TUP_API TUP_RESULT tup_call_SCA_offhook (IN TUP_UINT32 account_id, IN TUP_UINT32 sca_line_id);

/**
 * @brief ָʾ������·�ϵ������������������ͷ�ժ����
 * 
 * @param [in] TUP_UINT32 account_id   <b>:</b> �˺�ID
 * @param [in] TUP_UINT32 sca_line_id  <b>:</b> ��������·ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_SCA_insert
 * @see tup_call_SCA_retrieve
 * @see tup_call_SCA_sub_state
 * @see tup_call_SCA_offhook
 **/
TUP_API TUP_RESULT tup_call_SCA_onhook(IN TUP_UINT32 ulSipAccountID, IN TUP_UINT32 sca_line_id);

/**
 * @brief һ��ת��������
 * 
 * @param [in] TUP_UINT32 callid              <b>:</b> ����ID
 * @param [in] const TUP_CHAR* divert_number  <b>:</b> ����פ��
 * @param [in] TUP_BOOL is_callpicked         <b>:</b> ͨ���Ƿ��Ѿ�����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_onekey_transferto_VM(IN TUP_UINT32 callid, IN const TUP_CHAR* divert_number, IN TUP_BOOL is_callpicked);


/**
 * @brief �л�DND����(����/������)
 * 
 * @param [in] TUP_UINT32 DNDtype       <b>:</b> DNDģʽ����ӦCALL_E_DND_TYPE
 * @param [in] TUP_UINT32 localDNDtype  <b>:</b> DND���ͣ���ӦCALL_E_LOCALDND_TYPE
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_switch_DND_type(IN TUP_UINT32 DNDtype, IN TUP_UINT32 localDNDtype);


/**
 * @brief huntgroupǩ��
 * 
 * @param [in] TUP_UINT32 callid             <b>:</b> ����ID
 * @param [in] const TUP_CHAR *group_number  <b>:</b> HuntGroup��
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see  tup_call_huntgroup_signout
 **/
TUP_API TUP_RESULT tup_call_huntgroup_signin(IN TUP_UINT32 callid, IN const TUP_CHAR *group_number);


/**
 * @brief huntgroupǩ��
 * 
 * @param [in] TUP_UINT32 callid             <b>:</b> ����ID
 * @param [in] const TUP_CHAR *group_number  <b>:</b> HuntGroup��
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_huntgroup_signin
 **/
TUP_API TUP_RESULT tup_call_huntgroup_signout(IN TUP_UINT32 callid, IN const TUP_CHAR *group_number);


/**
 * @brief ��ȡHuntGroup״̬
 * 
 * @param [in] TUP_UINT32 ulSipAccountID          <b>:</b> �˺�ID
 * @param [out] CALL_S_CONTACT_STATUS *pstStatus  <b>:</b> ��ϵ��״̬
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_huntgroup_getstatus(IN TUP_UINT32 ulSipAccountID, OUT CALL_S_CONTACT_STATUS *pstStatus);


/**
 * @brief ����paging��
 * 
 * @param [in] TUP_UINT32 ulGroupID  <b>:</b> Paging��ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see CALL_E_EVT_PAGING_INCOMING
 * @see tup_call_paging_end
 **/
TUP_API TUP_RESULT tup_call_paging_accept(IN TUP_UINT32 ulGroupID);


/**
 * @brief ����paging�鲥��
 * 
 * @param [in] TUP_UINT32 ulGroupID  <b>:</b> Paging��ID
 * @param [out] NA
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see  CALL_E_EVT_PAGING_ENDED
 * @see  tup_call_paging_accept
 **/
TUP_API TUP_RESULT tup_call_paging_end(IN TUP_UINT32 ulGroupID);

/**
 * @}
 **/



/**
 * @defgroup RLS
 * @ingroup AdvancedAPI
 * @brief Resource List Server  
 *        <br>�߼�IPTҵ��
 * @{
 **/



/**
 * @brief ��RLS�б����Ƴ���ϵ��
 * 
 * @param [in] TUP_UINT32 account_id           <b>:</b> �˺�id
 * @param [in] const TUP_CHAR* contact_number  <b>:</b> ��ϵ�˺���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_contact_removed_indicate(IN TUP_UINT32 account_id, IN const TUP_CHAR* contact_number);


/**
 * @brief ��ȡ��ϵ��״̬����һ�λ�ȡ�����ϵ��״̬
 * 
 * @param [in] TUP_UINT32 number               <b>:</b> ��ϵ�˸�������pastStatus�����С
 * @param [in/out] CALL_S_CONTACT_STATUS status[]  <b>:</b> ��ϵ��״̬���飬����������룬���������Ӧ�����״̬
 * @param [out] NA
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_contact_status(IN TUP_UINT32 number, IO CALL_S_CONTACT_STATUS status[]);


/**
 * @brief ������ϵ��״̬
 * 
 * @param [in] TUP_UINT32 account_id        <b>:</b> �˺�ID
 * @param [in] TUP_UINT32 contact_type      <b>:</b> ��ϵ������:0 ��ͨ��ϵ�ˣ�1 HUNTGROUP ��ϵ��
 * @param [in] const TUP_CHAR* contact_num  <b>:</b> ��ϵ�˺���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_unsubscribe_contact
 **/
TUP_API TUP_RESULT tup_call_subscribe_contact(IN TUP_UINT32 account_id, IN TUP_UINT32 contact_type, IN const TUP_CHAR* contact_num);


/**
 * @brief ȡ������ϵ��״̬�Ķ���
 * 
 * @param [in] TUP_UINT32 account_id        <b>:</b> �˺�ID
 * @param [in] const TUP_CHAR* contact_num  <b>:</b> ��ϵ�˺���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_subscribe_contact
 **/
TUP_API TUP_RESULT tup_call_unsubscribe_contact(IN TUP_UINT32 account_id, IN const TUP_CHAR* contact_num);


/**
 * @brief ����RLS(Resource List Server)�б�
 * 
 * @param [in] TUP_UINT32 accountid  <b>:</b> �˺�ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_unsubscriber_RLS
 **/
TUP_API TUP_RESULT tup_call_subscriber_RLS(IN TUP_UINT32 accountid);


/**
 * @brief ȡ������RLS(Resource List Server)�б�
 * 
 * @param [in] TUP_UINT32 accountid  <b>:</b> �˺�ID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_subscriber_RLS
 **/
TUP_API TUP_RESULT tup_call_unsubscriber_RLS(IN TUP_UINT32 accountid);

/**
 * @}
 **/



/**
 * @defgroup ExtendOther
 * @ingroup AdvancedAPI
 * @brief Other   
 *        <br>�����ӿ�
 * @{
 **/


/**
 * @defgroup TCProcess
 * @ingroup ExtendOther
 * @brief Other   
 *        <br>�����ӿ�
 * @{
 **/



/**
 * @brief ���ӻ�ΪTC
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ��ʼ����ע��ǰ���ã���������TC��IE�ƣ������سɹ��������ƻ���
 * @see tup_call_disconnect_tc
 **/
TUP_API TUP_RESULT tup_call_connect_tc(TUP_VOID);


/**
 * @brief �Ͽ���ΪTC������
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ��Ϊ��TC�豸ʹ��
 * @see tup_call_connect_tc
 **/
TUP_API TUP_RESULT tup_call_disconnect_tc(TUP_VOID);


/**
 * @brief ��ȡTC��IP��ַ
 * 
 * @param [out] CALL_S_IF_INFO* inetaddr  <b>:</b> IP��ַ��Ϣ
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see ��Ϊ��TC�豸ʹ��
 **/
TUP_API TUP_RESULT tup_call_get_tc_ipaddr(OUT CALL_S_IF_INFO* inetaddr);


/**
 * @brief ��ȡ��Ƶģʽ
 * 
 * @param [out] TUP_UINT32* auido_mode  <b>:</b> ��Ƶģʽ @see tagCALL_E_AUDIO_MODE
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ��Ϊ��TC�豸ʹ��
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_audio_mode(OUT TUP_UINT32* auido_mode);


/**
 * @brief ��ȡTC��־
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ��Ϊ��TC�豸ʹ��
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_tc_log(TUP_VOID);


/**
 * @brief ����TC��MIC����
 * 
 * @param [out] TUP_INT32 is_mute  <b>:</b> �Ƿ���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ��Ϊ��TC�豸ʹ��
 * @see tup_call_set_spkdev_mute
 **/
TUP_API TUP_RESULT tup_call_set_micdev_mute(OUT TUP_INT32 is_mute);


/**
 * @brief ����TC������������
 * 
 * @param [in] TUP_INT32 is_mute  <b>:</b> �Ƿ���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ��Ϊ��TC�豸ʹ��
 * @see tup_call_set_micdev_mute
 **/
TUP_API TUP_RESULT tup_call_set_spkdev_mute(IN TUP_INT32 is_mute);

/**
 * @}
 **/




/**
 * @defgroup DigitMap
 * @ingroup ExtendOther
 * @brief Other   
 *        <br>�����ӿ�
 * @{
 **/




/**
 * @}
 **/




/**
 * @defgroup RSAEncrypt
 * @ingroup ExtendOther
 * @brief Other   
 *        <br>�����ӿ�
 * @{
 **/




/**
 * @}
 **/



/**
 * @brief ������Ϣ���ȡԭʼ��Ϣ
 * 
 * @param [in] TUP_UINT8* msgbody  <b>:</b> ��Ϣ��
 * @retval TUP_API TUP_VOID* <b>:</b> �ɹ�����ԭʼ��Ϣָ�룬ʧ�ܷ��ؿ�
 * 
 * @attention �����������ȫ����ֹ��ʹ��(���ݲ�Ʒ��ʷ�汾�ݱ����Ľӿ�)
 * @see NA
 **/
TUP_API TUP_VOID* tup_call_get_notifiy_msg_by_msgbody(IN TUP_UINT8* msgbody);


/**
 * @brief ���ÿͻ�����
 * 
 * @param [in] const TUP_CHAR* client_name  <b>:</b> �ͻ������ַ��������Ȳ�����11���ֽ�
 * @retval TUP_API TUP_VOID <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_VOID tup_call_set_client_name(IN const TUP_CHAR* client_name);


/**
 * @brief ����(CALL����)Ӧ�ò���Ϣ��������
 * 
 * @param [in] const TUP_CHAR* client_name  <b>:</b> ��Ϣ��������
 * @param [in] TUP_BOOL bIsUI               <b>:</b> �Ƿ�UI
 * @param [in] TUP_BOOL bIsReg              <b>:</b> �Ƿ�ע��
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_notify_client_name(IN const TUP_CHAR* client_name, IN TUP_BOOL bIsUI, IN TUP_BOOL bIsReg);


/**
 * @brief ע��ص�����(�����ص�����) 
 * 
 * @param [in] CALL_FN_CALLBACK_PTR callback_process_notify  <b>:</b> �ص�������ַ
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_deregister_process_notifiy_ex
 **/
TUP_API TUP_RESULT tup_call_register_process_notifiy_ex(IN CALL_FN_CALLBACK_PTR callback_process_notify);


/**
 * @brief ע���ص�����(�����ص�����) 
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_register_process_notifiy_ex
 **/
TUP_API TUP_RESULT tup_call_deregister_process_notifiy_ex(TUP_VOID);


/**
 * @defgroup AutoTest
 * @ingroup ExtendOther
 * @brief Other   
 *        <br>�����ӿ�
 * @{
 **/



/**
 * @brief �����Զ������Թ���
 * 
 * @param [in] TUP_BOOL bEnable  <b>:</b> �Ƿ�����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_enable_test_callback(IN TUP_BOOL bEnable);

/**
 * @}
 **/


/**
 * @defgroup Eqpt
 * @ingroup ExtendOther
 * @brief Eqpt test   
 *        <br>װ������
 * @{
 **/


/**
 * @brief  װ�����Կ�ʼͬ������
 * 
 * @param [in] CALL_E_AUDDEV_ROUTE audioinputdev  <b>:</b> ��Ƶ�����豸
 * @param [in] TUP_UINT32 volume                  <b>:</b> ����
 * @param [in] TUP_UINT32 samplefreq              <b>:</b> ������
 * @param [in] TUP_UINT32 bitwide                 <b>:</b> ����
 * @param [in] TUP_UINT32 recordtime              <b>:</b> ͬ������ʱ��
 * @param [in] TUP_UINT32 audiotype               <b>:</b> ��Ƶ����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_eqpt_test_stop_record
 **/
TUP_API TUP_RESULT tup_call_eqpt_test_start_record(IN CALL_E_AUDDEV_ROUTE audioinputdev, IN TUP_UINT32 volume, 
                    IN TUP_UINT32 samplefreq, IN TUP_UINT32 bitwide, IN TUP_UINT32 recordtime, IN TUP_UINT32 audiotype);


/**
 * @brief װ������ֹͣͬ������
 * 
 * @param [in] CALL_E_AUDDEV_ROUTE audioinputdev  <b>:</b> ��Ƶ�����豸
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_eqpt_test_start_record
 **/
TUP_API TUP_RESULT tup_call_eqpt_test_stop_record(IN CALL_E_AUDDEV_ROUTE audioinputdev);


/**
 * @brief װ�����Կ�ʼ����
 * 
 * @param [in] CALL_E_AUDDEV_ROUTE audioinputdev  <b>:</b> ��Ƶ�����豸
 * @param [in] TUP_UINT32 volume                  <b>:</b> ����
 * @param [in] TUP_UINT32 samplefreq              <b>:</b> ������
 * @param [in] TUP_UINT32 bitwide                 <b>:</b> ����
 * @param [in] TUP_UINT32 AMPtype                 <b>:</b> AMP����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_eqpt_test_stop_play
 **/
TUP_API TUP_RESULT tup_call_eqpt_test_start_play(IN CALL_E_AUDDEV_ROUTE audiooutputdev, 
                    IN TUP_UINT32 volume, IN TUP_UINT32 samplefreq, IN TUP_UINT32 bitwide, IN TUP_UINT32 AMPtype);


/**
 * @brief װ�����Կ�ʼ����
 * 
 * @param [in] CALL_E_AUDDEV_ROUTE audiooutputdev  <b>:</b> ��Ƶ�����豸
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_eqpt_test_start_play
 **/
TUP_API TUP_RESULT tup_call_eqpt_test_stop_play(IN CALL_E_AUDDEV_ROUTE audiooutputdev);



/**
* @brief ������ͬ������ͨ�������ý��(¼*����¼*��)
* 
* @param [in] TUP_UINT32 cid             <b>:</b> ��ͨͨ��ʱ���������ID�� ����ʱ���������ID��
* @param [in] CALL_E_ID_TYPE record_type <b>:</b> ��¼���ͣ���ͨͨ��ΪCALL_E_IDTYPE_CALL_ID��  ����ΪCALL_E_IDTYPE_CONF_ID
* @param [in] TUP_BOOL record_on         <b>:</b> ���ؿ��ơ�TUP_TRUE, ����TUP_FALSE����
* @param [in] TUP_UINT32 media_type      <b>:</b> ý�����ͣ�������Ƶ����Ƶ��Ŀǰֻ֧������Ϊ1������������Ƶͬ������(¼*��)���ܡ�
* @retval TUP_API TUP_RESULT             <b>:</b> �ɹ�������TUP_SUCCESS��ʧ�ܣ�������Ӧ������
* 
* @attention 
* @see 
**/
TUP_API TUP_RESULT tup_call_server_record(TUP_UINT32 callid, CALL_E_ID_TYPE record_type, TUP_BOOL record_on, TUP_UINT32 media_type);




/**
 * @brief ����BLF�б�
 * 
 * @param [in] TUP_UINT32 count                  <b>:</b> �����С
 * @param [in] const CALL_S_BLF_ITEM *blf_array  <b>:</b> BLF����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_blflist(TUP_UINT32 count, const CALL_S_BLF_ITEM *blf_array);



//Ϊ��1�������רҵ�Ե����ﱩ¶���ϲ㣻2��ͳһH323��SIPЭ�飬���ӱ��ӿڡ�
//���ӿ��������ԭtup_call_reinvite�ӿڣ�ԭtup_call_reinvite�ӿ��𲽷ϳ���

/**
 * <b>Description:</b> ���·�������Э��
 * <br><b>Purpose:</b>
 * @TUP_UINT32 callid,              ����ID
 * @return TUP_RESULT
 * @see  tup_call_renegotiate
 */
TUP_API TUP_RESULT       tup_call_renegotiate(TUP_UINT32 callid);


/**
 * <b>Description:</b> This function is used to TODO
 * <br><b>Purpose:</b> The UI used this function to TODO
 *
 * @TODO [in/out] TODO
 * @return TUP_SUCCESS  Indicates operation succeeds
 *      <br>Others value Indicates operation fails
 * @see  tup_call_TODO
 */
TUP_API TUP_RESULT       tup_call_get_call_info(TUP_UINT32 callid, CALL_E_CALL_INFO_ID infoid, TUP_VOID *val);



TUP_API TUP_RESULT       tup_call_register_call_event_proc(CALL_S_CALL_EVENT_PROC *callback_process_notify);

/*This function  will create one msg thread.
 bNeedNotify:  For IP Phone, UI shoud set TRUE, WEB should set FALSE

 */




/**
 * <b>Description:</b> This function is used to
 * <br><b>Purpose:</b> The UI used this function to
 *
 * @ulCallID [in] call ID
 * @uiIndex [in] the camera device index
 * @pstVideoOrient [in] pointer to CALL_S_VIDEO_ORIENT.
 *     typedef struct tagCALL_S_VIDEO_ORIENT
 *     {
 *         TUP_UINT32 ulChoice;         //Orient video by UI. 1:portrait; 2:landscape; 3:seascape. It will be used in sip sdp.
 *         TUP_UINT32 ulPortrait;       //Video rotation angle(Counterclockwise) when portrait. 0:0 degree; 1:90 degree; 2:180 degree; 3:270 degree.
 *         TUP_UINT32 ulLandscape;      //Video rotation angle(Counterclockwise) when landscape. 0:0 degree; 1:90 degree; 2:180 degree; 3:270 degree.
 *         TUP_UINT32 ulSeascape;       //Video rotation angle(Counterclockwise) when seascape. 0:0 degree; 1:90 degree; 2:180 degree; 3:270 degree.
 *     }CALL_S_VIDEO_ORIENT;
 * @return TUP_SUCCESS  Indicates operation succeeds
 *      <br>Others value Indicates operation fails
 * @see  tup_call_set_mboile_video_orient
 */
TUP_API TUP_RESULT       tup_call_set_mboile_video_orient(TUP_UINT32 ulCallID, TUP_UINT32 uiIndex, const CALL_S_VIDEO_ORIENT *pstVideoOrient);

/**
 * <b>Description:</b> This function is used to
 * <br><b>Purpose:</b> The UI used this function to
 *
 * @ulCallID [in] call ID
 * @pstRender [in] pointer to CALL_S_VIDEO_RENDER_INFO.
 *      typedef struct tagCALL_S_VIDEO_RENDER_INFO
 *      {
 *          CALL_E_VIDEOWND_TYPE enRenderType;  //��������ö��ֵ 0:Զ�˴��ڣ�1:���˴��ڣ�2������Ԥ��
 *          TUP_UINT32 ulDisplaytype;           //������ʾģʽ 0:����ģʽ 1:(������)�ڱ�ģʽ 2:(������)�ü�ģʽ
 *          TUP_UINT32 ulMirrortype;            //���ھ���ģʽ 0:��������(Ĭ��ֵ) 1:���¾���(Ŀǰδ֧��) 2:���Ҿ���
 *       }CALL_S_VIDEO_RENDER_INFO;
 * @return TUP_SUCCESS  Indicates operation succeeds
 *      <br>Others value Indicates operation fails
 * @see  tup_call_set_mboile_video_render
 */
TUP_API TUP_RESULT       tup_call_set_mboile_video_render(TUP_UINT32 ulCallID, const CALL_S_VIDEO_RENDER_INFO *pstRender);


/**
 * <b>Description:</b> ����H323Э��ջ�������ܹ��ɹ���Ҫ����TUP��ʼ��ǰ�����Ƿ�ʹ��H323Э��ջ���Լ�H323Э��ջ��������������ȷ��
 * <br><b>Purpose:</b>
 *
 * @return TUP_SUCCESS �ɹ���
 *      <br>����ʧ�ܡ�
 * @see NA
 */
TUP_API TUP_RESULT       tup_call_start_H323_stack();

/**
 * <b>Description:</b> ����SIP��H323ע��
 * <br><b>Purpose:</b>
 *
 * @param [in] TUP_CHAR*             number        <b>:</b> ���˺���
 * @param [in] TUP_CHAR*             name          <b>:</b> ���˱���
 * @param [in] TUP_CHAR*             password      <b>:</b> ע������
 * @param [in] CALL_S_REGISTER_MODE  regist_mode   <b>:</b> ע��ģʽ
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see tup_call_deregister_with_protocol
 */
TUP_API TUP_RESULT       tup_call_register_with_protocol
(const TUP_CHAR *            number,
 const TUP_CHAR *            name,
 const TUP_CHAR *            password,
 const CALL_S_REGISTER_MODE *regist_mode);

/**
 * <b>Description:</b> ����SIP��H323ע��
 * <br><b>Purpose:</b>
 *
 * @param [in] CALL_E_PROTOCOL_TYPE protocol  <b>:</b>  Э������
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention ���ӿ��ڲ�ʵ�����ǹ̶�accountidΪ0������tup_call_deregister_advanceʵ�ֵġ�
 * @see tup_call_register_with_protocol
 */
TUP_API TUP_RESULT       tup_call_deregister_with_protocol(CALL_E_PROTOCOL_TYPE protocol);

/**
 * <b>Description:</b> ����SIP��H323ע��
 * <br><b>Purpose:</b>
 *
 * @param [in] TUP_UINT32 accountid          <b>:</b>  �˺�ID
 * @param [in] CALL_E_PROTOCOL_TYPE protocol <b>:</b>  Э������
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
TUP_API TUP_RESULT       tup_call_deregister_advance(TUP_UINT32 accountid, CALL_E_PROTOCOL_TYPE protocol);

/**
 * <b>Description:</b> �������п��ƿ�
 * <br><b>Purpose:</b> �ȴ���callid��Ȼ�����callid���ûỰ������������tup_call_start_call_advance��������С�
 *
 * @param [in] CALL_E_PROTOCOL_TYPE    protocol   <b>:</b> Э������
 * @param [in] CALL_E_CALL_TYPE*       call_type  <b>:</b> ����ý������
 * @param [in] TUP_UINT32*             callid     <b>:</b> ����ID
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see tup_call_start_call_advance
 */
TUP_API TUP_RESULT       tup_call_create_callid_with_protocol
(IN CALL_E_PROTOCOL_TYPE  protocol,
 IN OUT CALL_E_CALL_TYPE *call_type,
 OUT TUP_UINT32 *         callid);

/**
 * <b>Description:</b> �������
 * <br><b>Purpose:</b>
 *
 * @param [in] TUP_UINT32*             call_id       <b>:</b>  ���п��ƿ�����
 * @param [in] const TUP_CHAR*         callee_number <b>:</b>  ���к���
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see
 */
TUP_API TUP_RESULT       tup_call_start_call_advance
(IN TUP_UINT32      call_id,
 IN const TUP_CHAR *callee_number);

/**
 * <b>Description:</b>
 * <br><b>Purpose:</b> ����/�޸�һ·�Ự�����ã�ͬ���ӿڣ�
 *
 * @param [in] TUP_UINT32           callid   <b>:</b>���п��ƿ�����
 * @param [in] CALL_E_PROTOCOL_TYPE protocol <b>:</b>Э������
 * @param [in] CALL_E_LOCAL_CAP_ID  cap_id   <b>:</b>��Ҫ���õ�����ID
 * @param [in] TUP_VOID *           val      <b>:</b>��������
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
TUP_API TUP_RESULT       tup_call_set_call_capability
(IN TUP_UINT32           callid,
 IN CALL_E_PROTOCOL_TYPE protocol,
 IN CALL_E_LOCAL_CAP_ID  cap_id,
 IN TUP_VOID *           val);


/**
 * <b>Description:</b> ���ͻ�������
 * <br><b>Purpose:</b>
 * @param [in] const CALL_S_LOOPBACK_REQUEST *pstLoopbackRequest <b>:</b> �����������
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention TUPֻʵ���к��е�����Ƶ���ء�SIP����ʱ��ֻ֧�ֱ��˻��أ�H323����ʱ��֧�ֱ��˻��أ�Ҳ֧��Զ�˻��ء�
 * @see tup_call_loopback_answer
 */
TUP_API TUP_RESULT       tup_call_loopback_request(const CALL_S_LOOPBACK_REQUEST *pstLoopbackRequest);

/**
 * <b>Description:</b> ��Ӧ��������
 * <br><b>Purpose:</b>
 * @param [in] const CALL_S_LOOPBACK_ANSWER *pstLoopbackAnswer <b>:</b> ������Ӧ����
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see tup_call_loopback_request
 */
TUP_API TUP_RESULT       tup_call_loopback_answer(const CALL_S_LOOPBACK_ANSWER *pstLoopbackAnswer);

/**
 * <b>Description:</b> ����֪ͨTUP����˷��Ƿ��ѱ������� ��ԭ��TE���ص�ָʾ�Զ˱��ر���
 * <br><b>Purpose:</b>
 *
 * @param [in] TUP_UINT32 callid <b>:</b>����ID
 * @param [in] TUP_BOOL is_muted  <b>:</b>�Ƿ��ѱ�������TUP_TURE����ʾ�ѱ�����������δ������
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
TUP_API TUP_RESULT       tup_call_mic_mute_indicate(TUP_UINT32 callid, TUP_BOOL is_muted);

/**
 * <b>Description:</b> IMS�ն˻������
 * <br><b>Purpose:</b>
 *
 * @param [in] TUP_UINT32 callid <b>:</b>��ǰͨ��id
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
TUP_API TUP_RESULT       tup_call_request_ims_confinfo(TUP_UINT32 callid);

/**
 * <b>Description:</b> ִ�е�������
 * <br><b>Purpose:</b>
 *
 * @param [in] TUP_UINT32 cmd       <b>:</b>Ҫִ�е�����
 * @param [in] TUP_VOID   cmd_param <b>:</b>�������
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
TUP_API TUP_RESULT tup_call_debug_command(CALL_E_DEBUG_COMMAND cmd, const CALL_S_DEBUG_COMMAND *cmd_param);

/**
 * @brief ���ú��йҶ�ԭ����tup_call_end_call֮ǰ���á�
 * 
 * @param [in] TUP_UINT32 callid <b>:</b> ����ID
 * @param [in] CALL_E_ENDCALL_REASON reason <b>:</b> �Ҷ�ԭ��
 * @param [in] TUP_UINT32 val <b>:</b> SIP����ʱ������CALL_E_CAUSE_RESONֵ;H323����ʱ������CALL_E_NON_STD_REASON_CODEֵ��
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_end_call_reason(TUP_UINT32 callid, CALL_E_END_CALL_REASON reason, TUP_UINT32 val);

/**
 * @brief ���ñ����Ƿ�������߸���������
 * 
 * @param [in] TUP_BOOL enable <b>:</b> TUP_TRUE����ʾ�����߸��������������ʾû�С�
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_enable_air_data(TUP_BOOL enable);

/**
 * @brief �������߸�����/������
 * 
 * @param [in] CALL_E_CODER_TYPE coder_type  <b>:</b> codec����:��/��������
 * @param [in] CALL_S_CODEC_INFO* codec  <b>:</b> ���������ʽ��
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_air_codec(CALL_E_CODER_TYPE coder_type, CALL_S_CODEC_INFO* codec);

/**
 * @brief �ǻ���/��ͨ���У����عۿ����߸���
 * 
 * @param NA
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_start_local_airaux(TUP_VOID);

/**
 * @brief �ǻ���/��ͨ���У�ֹͣ���عۿ����߸���
 * 
 * @param NA
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_stop_local_airaux(TUP_VOID);

/**
 * @brief ��ʼ��������Ƶģ��(ICP)
 * 
 * @param [in] CALL_S_AIR_AUDIO_PARAM* air_audio_param  <b>:</b>  ��ʼ������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention 1��ͬ���ӿڡ�2����ǰ��֧�ֱ������ص�ַ�����������������ӵİ�ȫ���⡣
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_init_air_audio(IN CALL_S_AIR_AUDIO_PARAM* air_audio_param);


/**
 * @brief �г�/�л���Ƶ������ָ����ַ�Ͷ˿�(ICP)
 * 
 * @param [in] TUP_UINT32 call_id  <b>:</b> ����ID
 * @param [in] TUP_BOOL is_send  <b>:</b> TUP_TRUE����ʾ�г������򣬱�ʾ�лء�
 * @param [in] CALL_S_COM_ADDR* com_addr <b>:</b> ��Զ�˵�ַ�Ͷ˿�
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention 1���첽�ӿڡ�2�� ��ǰ��֧�ֱ������ص�ַ�����������������ӵİ�ȫ���⡣
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_send_call_audio(IN TUP_UINT32 call_id, IN TUP_BOOL is_send, IN TUP_UINT32 subprocess_id);

/**
 * @brief ��������ý���豸����(ICP)
 * 
 * @param [in] TUP_UINT32 subprocess_id  <b>:</b> �������̱�ʶ���������������ӵ�Air Serverʱ����Air Server���ɲ����͸��������̡�
 * @param [in] TUP_BOOL is_set  <b>:</b>  ���û��Ƕ�ȡ��TUP_TRUE����ʾ���ã�TUP_FALSE����ȡ��
 * @param [in] CALL_S_AUDIO_OP* audio_op  <b>:</b> ��Ƶ��������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention �첽�ӿڡ�
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_media_audio_op(IN TUP_UINT32 subprocess_id, IN CALL_S_AUDIO_OP* audio_op);

/**
 * @brief ��ָ�����е��������������(ICP)
 * 
 * @param [in] TUP_UINT32 call_id  <b>:</b> ����ID
 * @param [in] TUP_BOOL is_set  <b>:</b>  ���û��Ƕ�ȡ��TUP_TRUE����ʾ���ã�TUP_FALSE����ȡ��
 * @param [in] CALL_S_CALL_AUDIO_CHN_OP* audio_op <b>:</b> ��Ƶͨ��������Ϣ
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention �첽�ӿڡ�
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_audio_gain_op(IN TUP_UINT32 call_id, IN CALL_S_CALL_AUDIO_CHN_OP* audio_op);

/**
 * @brief ȥ��ʼ��������Ƶģ��(ICP)
 * 
 * @param NA
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ͬ���ӿڡ�
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_uinit_air_audio();


/**
 * @brief ����ԤԼ����(EC6.0�ںϻ����VC6.0 hosting�����µ�һ�����),���������������п��ƿ�
 *
 * @param [in] TUP_UINT32 callid   <b>:</b> ���п��ƿ�ID
 * @param [in] CALL_E_CALL_TYPE call_type   <b>:</b> ��������
 * @param [in] CALL_S_CONF_PARAM * pstconfparam   <b>:</b> ������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_access_reserved_conf_directly_ex(TUP_UINT32 callid, CALL_E_CALL_TYPE call_type, const CALL_S_CONF_PARAM *pstconfparam);

/**
 * @brief EC6.0 USM���û���-89������Ƶ���鴴���ӿ�
 
 * @param [in] const CALL_S_CONF_VIDEOCONF_INFO * video_conf_info   <b>:</b> MEETING���������
 * @param [out] TUP_UINT32 *confid   <b>:</b> CALL��᳡ID����Ҫ���ڴ���MEETING��Ƶ�᳡
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_create_videoconf(TUP_UINT32 *confid, const CALL_S_CONF_VIDEOCONF_INFO * video_conf_info);

/**
 * @brief IMS �����£�invite����IMS���к����ӿ�
 
 * @param [in] const CALL_S_CONF_IMS * ims_conf_info   <b>:</b> MEETING���������
 * @param [out] TUP_UINT32 callid   <b>:</b> CALL��᳡ID����Ҫ���ڴ���MEETING��Ƶ�᳡
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_set_imsconf(TUP_UINT32 callid, const CALL_S_CONF_IMS * ims_conf_info);

/**
 * @brief ������ʱ����(TE10/20)
 * 
 * @param [in] is_delayed_mode �Ƿ�����ʱ����
 * @retval TUP_UINT32
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_delayed_sendpkt(IN TUP_BOOL is_delayed_mode);

/**
 * @brief ���ý���ģʽ(TE10/20)
 * 
 * @param [in] is_redec_mode �Ƿ����ش�����ģʽ
 * @retval TUP_UINT32
 * 
 * @attention ���TE10��8950������Ե���У����ȣ�TE10�͸��ʳ��ֻ��������⡣��ǰΪ��ܷ��������ӿ����õ�HME��HME�ᶨʱ�ش��������������ԼһСʱ����
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_redec_mode(IN TUP_BOOL is_redec_mode);


/**
 * @brief ����H263plus����PCS�ն˻�ͨ��������ģʽ (TE10/20)
 * 
 * @param [in] is_pcs_aux_enc_fmt �Ƿ���PCS�ն˻�ͨ��������ģʽ
 * @retval TUP_UINT32
 * 
 * @attention ���TE10/20 Sony PCS-1�ն˻�ͨ����ʱ����ⲻ����չ��H263+�ֱ��ʵĸ������⡣��ǰΪ��ܷ���������������ʱ�����Թ��,�޶������ֱ��ʲ�����H263Э�鷶Χ��
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_h263plus_aux_enc_fmt(IN TUP_BOOL is_pcs_aux_enc_fmt);

/**
 * @brief EC6.0 ���Ļغ����룬�ص���ϢΪ:�ɹ�CALL_E_EVT_CALL_ACBCALL_ACTIVE_SUCCESS��ʧ��CALL_E_EVT_CALL_ACBCALL_ACTIVE_FAILED��ACB��Auto Call Back��
 
 * @param [in] TUP_UINT32 account_id   <b>:</b> �˺�ID
 * @param [in] TUP_UINT32 call_back_type   <b>:</b> �غ����ͣ���Ӧö��CALL_E_SUBCALLBACK_TYPE��CALL_E_SUBCALLBACK_BS������æ�غ���CALL_E_SUBCALLBACK_NR������Ӧ��غ�
 * @param [in] const TUP_CHAR* call_back_number   <b>:</b> �����ĵĻغ�����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_subcribe_acbcall(TUP_UINT32 account_id, TUP_UINT32 call_back_type, const TUP_CHAR* call_back_number);

/**
 * @brief EC6.0 ȥ���Ļغ����롣ACB��Auto Call Back��
 
 * @param [in] TUP_UINT32 account_id   <b>:</b> �˺�ID
 * @param [in] const TUP_CHAR* call_back_number   <b>:</b> �����ĵĻغ�����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_unsubcribe_acbcall(TUP_UINT32 account_id, const TUP_CHAR* call_back_number);

/**
 * @brief EC6.0 �������лغ���ACB��Auto Call Back��
 
 * @param [in] TUP_UINT32 call_id   <b>:</b> �˺�ID
 * @param [in] TUP_UINT32 call_back_type   <b>:</b> �غ����ͣ���Ӧö��CALL_E_SUBCALLBACK_TYPE��CALL_E_SUBCALLBACK_BS������æ�غ���CALL_E_SUBCALLBACK_NR������Ӧ��غ�
 * @param [in] const TUP_CHAR* call_back_number   <b>:</b> �����ĵĻغ�����
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_RESULT tup_call_start_acbcall(TUP_UINT32 call_id, TUP_UINT32 call_back_type, const TUP_CHAR* call_back_number);

/**
 * @brief ���ͻỰ��INFO��Ϣ
 * 
 * @param [in] CALL_S_SIP_INFO *info <b>:</b> sip info��Ϣ�ṹ 
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ��Ʒ����Ҫʱʹ�ô˺������Ͷ��Ƶ�sip info��Ϣ����ʵ���ض�ҵ��
 * @see NA
 **/ 
TUP_API TUP_RESULT tup_call_send_out_band_sip_info(CALL_S_SIP_INFO* info);



/**
 * @brief ���ò�Ʒ֧�ֵ�����
 * 
 * @param [in] CALL_S_FEATURE *pstFeature
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 **/
TUP_API TUP_RESULT tup_call_set_feature(IN const CALL_S_FEATURE *pstFeature);

/**
 * @brief ʹ����Ƶ����
 * 
 * @param [in] TUP_BOOL enable  <b>:</b> ״̬������0��ʾ���ã���0��ʾʹ�ܣ�Ĭ��ʹ��
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention Ŀǰ������ʹ����Ƶ�����豸ˢ��
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_media_enable_audioengine(IN TUP_BOOL enable);


/**
 * @ingroup Call
 * @brief [en]This interface is used to add svc video window handle to a call.
 *        <br>[cn]���Ӷ�����Ƶ������Ϣ(���ھ��)��һ�νӿڵ���ֻ����һ�����ڡ�
 * 
 * @param [in] const CALL_S_SVC_VIDEOWND_INFO* window  <b>:</b><br>[en] Indicates Window info.
 *                                                         <br>[cn]�������� 
 * @param [in] TUP_UINT32 callid                   <b>:</b><br>[en]    Indicates Call ID
 *                                                         <br>[cn]����ID
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Call there, fill in the corresponding effective value of callid��when call does not exist (not established, calling out breath), fill in illegal value 0xFFFFFFFF
 *            <br>[cn]���д���ʱ��callid��д��Ӧ����Чֵ�����в�����(δ���������к���ʱ)��callid��д�Ƿ�ֵ
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_add_svc_video_window(IN TUP_UINT32 callid, IN const CALL_S_SVC_VIDEOWND_INFO *window);

/**
 * @ingroup Call
 * @brief [en]This interface is used to update svc video window handle to a call
 *        <br>[cn]���¶�����Ƶ������Ϣ(���ھ��)
 * 
 * @param [in] const CALL_S_SVC_VIDEOWND_INFO* window  <b>:</b><br>[en] Indicates Window info.
 *                                                         <br>[cn]�������� 
 * @param [in] TUP_UINT32 callid                   <b>:</b><br>[en]    Indicates Call ID
 *                                                         <br>[cn]����ID
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Call there, fill in the corresponding effective value of callid��when call does not exist (not established, calling out breath), fill in illegal value 0xFFFFFFFF
 *            <br>[cn]���д���ʱ��callid��д��Ӧ����Чֵ�����в�����(δ���������к���ʱ)��callid��д�Ƿ�ֵ
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_update_svc_video_window(IN TUP_UINT32 callid, IN const CALL_S_SVC_VIDEOWND_INFO *window);

/**
 * @ingroup Call
 * @brief [en]This interface is used to remove svc video window handle to a call
 *        <br>[cn]ɾ��������Ƶ������Ϣ(���ھ��)
 * 
 * @param [in] const CALL_S_SVC_VIDEOWND_INFO* window  <b>:</b><br>[en] Indicates Window info.
 *                                                         <br>[cn]�������� 
 * @param [in] TUP_UINT32 callid                   <b>:</b><br>[en]    Indicates Call ID
 *                                                         <br>[cn]����ID
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Call there, fill in the corresponding effective value of callid��when call does not exist (not established, calling out breath), fill in illegal value 0xFFFFFFFF
 *            <br>[cn]���д���ʱ��callid��д��Ӧ����Чֵ�����в�����(δ���������к���ʱ)��callid��д�Ƿ�ֵ
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_remove_svc_video_window(IN TUP_UINT32 callid, IN const CALL_S_SVC_VIDEOWND_INFO *window);

/**
 * @ingroup InitAndLoading
 * @brief [en]This interface is used to set call service parameters 
 *        <br>[cn] ���ú���ҵ�����(����עʵ�ʵ����ý��)
 * 
 * @param [in] TUP_UINT32 cfgid  <b>:</b><br>[en] Indicates param ID, defined by call_def.h, start with CALL_D_CFG_
 *                                       <br>[cn] ����ID,��call_def.h���壬ǰ׺ΪCALL_D_CFG_
 * @param [in] TUP_VOID * val    <b>:</b><br>[en] Indicates data type corresponding to the configured parameter.
 *                                       <br>[cn] ����ֵ���������õĲ���IDȷ����������
 * @retval TUP_RESULT            <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                       <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention    [en] 1 Before invoking the login interface, invoke this interface to set: 
 *           <br>[en] CALL_D_CFG_ENV_PRODUCT_TYPE (product type),
 *           <br>[en] CALL_D_CFG_NET_NETADDRESS (local address),
 *           <br>[en] CALL_D_CFG_SERVER_REG_PRIMARY (SIP registrar server) or CALL_D_CFG_SERVER_PROXY_PRIMARY (SIP proxy server), 
 *           <br>[en] CALL_D_CFG_ENV_USEAGENT (user agent), 
 *           <br>[en] Call this interface as required:
 *           <br>[en] CALL_D_CFG_SIP_TRANS_MODE (SIP transmission mode), 
 *           <br>[en] 2 When used in conjunction with an IM system, it is recommended that the incoming parameters of the interface be obtained directly through the tup_im_getserviceprofile interface.
 *           <br>[cn] 1 ʵ��������ĺ���ҵ�񣬱�����ô˽ӿڷֱ�����:
 *           <br>[cn] CALL_D_CFG_ENV_PRODUCT_TYPE����Ʒ���ͣ�
 *           <br>[cn] CALL_D_CFG_NET_NETADDRESS�����ص�ַ��
 *           <br>[cn] CALL_D_CFG_SERVER_REG_PRIMARY��sipע����������� CALL_D_CFG_SERVER_PROXY_PRIMARY��sip������������
 *           <br>[cn] CALL_D_CFG_ENV_USEAGENT��UserAgent��
 *           <br>[cn] ������Ҫ���ô˽ӿڷֱ�����:
 *           <br>[cn] CALL_D_CFG_SIP_TRANS_MODE��SIP����ģʽ�� 
 *           <br>[cn] 2 ��EC3.0��������У���IMϵͳ���ʹ��ʱ������ýӿڵ����ֱ��ͨ��tup_im_getserviceprofile�ӿڻ�ȡ��
 * @see tup_call_get_cfg
 **/
TUP_API TUP_RESULT tup_call_set_cfg_asyn(TUP_UINT32 cfgid, const TUP_VOID *val);

/**
 * @ingroup Call
 * @brief [en]This interface is used to get a account id not used
 *        <br>[cn]��ȡһ��δʹ�õ�account id
 * 
 * @param [in]  TUP_UINT32 protocol  <b>:</b><br>[en] protocol type: 0 for SIP, 1 for H.323.
 *                                           <br>[cn] Э������: 0 : SIP, 1: h.323 
 * @retval TUP_RESULT <b>:</b><br>[en] if success, get a account id not used; otherwise, return 0xFFFFFFFF
 *                                    <br>[cn]�ɹ�����һ��accountid ��ʧ�ܷ���0xFFFFFFFF
 * 
 * @attention [en] This interface is used for get a  not used account id
 *            <br>[cn]����ӿ������������˺���Ϣǰ��ȡһ��δʹ�õ��˺�ID��
                  �Ա��ϲ��ܽ��˺����ã�ý�����ã�SIP ���� ����Ӧ���˺����棻
 * @see NA
 **/
TUP_API TUP_UINT32 tup_call_get_no_use_account_id(TUP_UINT32 protocol);


TUP_API TUP_RESULT tup_call_media_get_call_account_isIdle(IN TUP_UINT32 callId);

TUP_API TUP_RESULT tup_call_media_get_call_basic_isIdle(TUP_VOID);

TUP_API TUP_RESULT tup_call_media_startplay_ex_for_account_id(IN CALL_S_MEDIA_PLAY_PARAM* media_play_param, OUT TUP_INT32* play_handle);

TUP_API TUP_RESULT tup_call_get_account_index(TUP_UINT32 callid, TUP_UINT32 *accountid);

TUP_API TUP_BOOL tup_call_is_support_muti_use(TUP_VOID);

TUP_API TUP_UINT32 tup_call_set_enable_muti_used(TUP_BOOL enable);

TUP_API TUP_UINT32 tup_call_release_account_by_id(TUP_UINT32 accountid, TUP_UINT32 protocol);

TUP_API TUP_RESULT tup_call_media_set_account_mic_index(TUP_UINT32 accountid , TUP_UINT32 index);

TUP_API TUP_RESULT tup_call_media_set_account_speak_index(TUP_UINT32 accountid , TUP_UINT32 index);

TUP_API TUP_RESULT tup_call_media_set_account_video_index(TUP_UINT32 accountid , TUP_UINT32 index);

TUP_API TUP_RESULT tup_call_media_get_account_mic_index(TUP_UINT32 accountid, TUP_UINT32 *index);

TUP_API TUP_RESULT tup_call_media_get_account_speak_index(TUP_UINT32 accountid, TUP_UINT32 *index);

TUP_API TUP_RESULT tup_call_media_get_account_video_index(TUP_UINT32 accountid, TUP_UINT32 *index);

TUP_API TUP_RESULT tup_call_set_account_mobile_audio_route(TUP_UINT32 accountid, CALL_E_MOBILE_AUIDO_ROUTE route);

TUP_API TUP_RESULT tup_call_media_get_account_devices(IN TUP_UINT32 accountid, OUT TUP_UINT32 *puiNum, OUT CALL_S_DEVICEINFO *deviceinfo, OUT CALL_E_DEVICE_TYPE devicetype);

TUP_API TUP_RESULT tup_call_set_video_orient_for_account(IN TUP_UINT32 accountid, IN TUP_UINT32 ulCallID, IN TUP_UINT32 uiIndex, const CALL_S_VIDEO_ORIENT *pstVideoOrient);

TUP_API TUP_RESULT tup_call_open_preview_for_account(IN TUP_UINT32 accountId, IN TUP_UPTR handle, IN TUP_UINT32 index);

TUP_API TUP_RESULT tup_call_media_get_hdaccelerate_for_account(IN TUP_UINT32 accountid, OUT CALL_S_VIDEO_HDACCELERATE *hd_accelerate);

TUP_API TUP_RESULT tup_call_authorize_ad_account(const TUP_CHAR* account_number, const TUP_CHAR* pwd_number);

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif  /* __CALL_ADVANCED_INTERFACE_H__ */
/** @}*/

/*
* History: \n
* 2012-12-10, ��ʼ�����ļ��� \n
* 2015-12-30, TUP V100R001C50 TR5 ���������´��ļ��� \n
*
* vi: set expandtab ts=4 sw=4 tw=80:
*/

