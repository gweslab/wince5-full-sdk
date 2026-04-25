//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this source code is subject to the terms of the Microsoft end-user
// license agreement (EULA) under which you licensed this SOFTWARE PRODUCT.
// If you did not accept the terms of the EULA, you are not authorized to use
// this source code. For a copy of the EULA, please see the LICENSE.RTF on your
// install media.
//

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 5.03.0286 */
/* at Thu Jun 24 18:48:51 2004
 */
/* Compiler settings for .\mdisp.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32 (32b run), ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __mdisp_h__
#define __mdisp_h__

/* Forward Declarations */ 

#ifndef __IMsgrObject_FWD_DEFINED__
#define __IMsgrObject_FWD_DEFINED__
typedef interface IMsgrObject IMsgrObject;
#endif 	/* __IMsgrObject_FWD_DEFINED__ */


#ifndef __IMsgrUser_FWD_DEFINED__
#define __IMsgrUser_FWD_DEFINED__
typedef interface IMsgrUser IMsgrUser;
#endif 	/* __IMsgrUser_FWD_DEFINED__ */


#ifndef __IMsgrUsers_FWD_DEFINED__
#define __IMsgrUsers_FWD_DEFINED__
typedef interface IMsgrUsers IMsgrUsers;
#endif 	/* __IMsgrUsers_FWD_DEFINED__ */


#ifndef __IMsgrIMSession_FWD_DEFINED__
#define __IMsgrIMSession_FWD_DEFINED__
typedef interface IMsgrIMSession IMsgrIMSession;
#endif 	/* __IMsgrIMSession_FWD_DEFINED__ */


#ifndef __IMsgrIMSessions_FWD_DEFINED__
#define __IMsgrIMSessions_FWD_DEFINED__
typedef interface IMsgrIMSessions IMsgrIMSessions;
#endif 	/* __IMsgrIMSessions_FWD_DEFINED__ */


#ifndef __IMessengerApp_FWD_DEFINED__
#define __IMessengerApp_FWD_DEFINED__
typedef interface IMessengerApp IMessengerApp;
#endif 	/* __IMessengerApp_FWD_DEFINED__ */


#ifndef __IMessengerIMWindow_FWD_DEFINED__
#define __IMessengerIMWindow_FWD_DEFINED__
typedef interface IMessengerIMWindow IMessengerIMWindow;
#endif 	/* __IMessengerIMWindow_FWD_DEFINED__ */


#ifndef __IMessengerIMWindows_FWD_DEFINED__
#define __IMessengerIMWindows_FWD_DEFINED__
typedef interface IMessengerIMWindows IMessengerIMWindows;
#endif 	/* __IMessengerIMWindows_FWD_DEFINED__ */


#ifndef __IMsgrOE_FWD_DEFINED__
#define __IMsgrOE_FWD_DEFINED__
typedef interface IMsgrOE IMsgrOE;
#endif 	/* __IMsgrOE_FWD_DEFINED__ */


#ifndef __IMsgrUserOE_FWD_DEFINED__
#define __IMsgrUserOE_FWD_DEFINED__
typedef interface IMsgrUserOE IMsgrUserOE;
#endif 	/* __IMsgrUserOE_FWD_DEFINED__ */


#ifndef __IMsgrUsersOE_FWD_DEFINED__
#define __IMsgrUsersOE_FWD_DEFINED__
typedef interface IMsgrUsersOE IMsgrUsersOE;
#endif 	/* __IMsgrUsersOE_FWD_DEFINED__ */


#ifndef __IMsgrServices_FWD_DEFINED__
#define __IMsgrServices_FWD_DEFINED__
typedef interface IMsgrServices IMsgrServices;
#endif 	/* __IMsgrServices_FWD_DEFINED__ */


#ifndef __IMsgrService_FWD_DEFINED__
#define __IMsgrService_FWD_DEFINED__
typedef interface IMsgrService IMsgrService;
#endif 	/* __IMsgrService_FWD_DEFINED__ */


#ifndef __DMsgrObjectEvents_FWD_DEFINED__
#define __DMsgrObjectEvents_FWD_DEFINED__
typedef interface DMsgrObjectEvents DMsgrObjectEvents;
#endif 	/* __DMsgrObjectEvents_FWD_DEFINED__ */


#ifndef __DMsgrOEEvents_FWD_DEFINED__
#define __DMsgrOEEvents_FWD_DEFINED__
typedef interface DMsgrOEEvents DMsgrOEEvents;
#endif 	/* __DMsgrOEEvents_FWD_DEFINED__ */


#ifndef __IMsgrSP_FWD_DEFINED__
#define __IMsgrSP_FWD_DEFINED__
typedef interface IMsgrSP IMsgrSP;
#endif 	/* __IMsgrSP_FWD_DEFINED__ */


#ifndef __MsgrObject_FWD_DEFINED__
#define __MsgrObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class MsgrObject MsgrObject;
#else
typedef struct MsgrObject MsgrObject;
#endif /* __cplusplus */

#endif 	/* __MsgrObject_FWD_DEFINED__ */


#ifndef __MessengerApp_FWD_DEFINED__
#define __MessengerApp_FWD_DEFINED__

#ifdef __cplusplus
typedef class MessengerApp MessengerApp;
#else
typedef struct MessengerApp MessengerApp;
#endif /* __cplusplus */

#endif 	/* __MessengerApp_FWD_DEFINED__ */


/* header files for imported files */
#include "objidl.h"
#include "oleidl.h"
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_mdisp_0000 */
/* [local] */ 

//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this source code is subject to the terms of the Microsoft end-user
// license agreement (EULA) under which you licensed this SOFTWARE PRODUCT.
// If you did not accept the terms of the EULA, you are not authorized to use
// this source code. For a copy of the EULA, please see the LICENSE.RTF on your
// install media.
//


extern RPC_IF_HANDLE __MIDL_itf_mdisp_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mdisp_0000_v0_0_s_ifspec;


#ifndef __Messenger_LIBRARY_DEFINED__
#define __Messenger_LIBRARY_DEFINED__

/* library Messenger */
/* [helpstring][version][uuid] */ 














typedef /* [public][public][public][public][public][public] */ 
enum __MIDL___MIDL_itf_mdisp_0000_0001
    {	MSTATEOE_UNKNOWN	= 0,
	MSTATEOE_OFFLINE	= 0x1,
	MSTATEOE_ONLINE	= 0x2,
	MSTATEOE_INVISIBLE	= 0x6,
	MSTATEOE_BUSY	= 0xa,
	MSTATEOE_BE_RIGHT_BACK	= 0xe,
	MSTATEOE_IDLE	= 0x12,
	MSTATEOE_AWAY	= 0x22,
	MSTATEOE_ON_THE_PHONE	= 0x32,
	MSTATEOE_OUT_TO_LUNCH	= 0x42,
	MSTATEOE_LOCAL_FINDING_SERVER	= 0x100,
	MSTATEOE_LOCAL_CONNECTING_TO_SERVER	= 0x200,
	MSTATEOE_LOCAL_SYNCHRONIZING_WITH_SERVER	= 0x300,
	MSTATEOE_LOCAL_DISCONNECTING_FROM_SERVER	= 0x400
    }	MSTATEOE;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_mdisp_0000_0002
    {	MSGR_E_OE_CONNECT	= 0x81000300 + 0x1,
	MSGR_E_OE_INVALID_SERVER_NAME	= 0x81000300 + 0x2,
	MSGR_E_OE_INVALID_PASSWORD	= 0x81000300 + 0x3,
	MSGR_E_OE_ALREADY_LOGGED_ON	= 0x81000300 + 0x4,
	MSGR_E_OE_SERVER_VERSION	= 0x81000300 + 0x5,
	MSGR_E_OE_LOGON_TIMEOUT	= 0x81000300 + 0x6,
	MSGR_E_OE_LIST_FULL	= 0x81000300 + 0x7,
	MSGR_E_OE_AI_REJECT	= 0x81000300 + 0x8,
	MSGR_E_OE_AI_REJECT_NOT_INST	= 0x81000300 + 0x9,
	MSGR_E_OE_USER_NOT_FOUND	= 0x81000300 + 0xa,
	MSGR_E_OE_ALREADY_IN_LIST	= 0x81000300 + 0xb,
	MSGR_E_OE_DISCONNECTED	= 0x81000300 + 0xc,
	MSGR_E_OE_UNEXPECTED	= 0x81000300 + 0xd,
	MSGR_E_OE_SERVER_TOO_BUSY	= 0x81000300 + 0xe,
	MSGR_E_OE_INVALID_AUTH_PACKAGES	= 0x81000300 + 0xf,
	MSGR_E_OE_NEWER_CLIENT_AVAILABLE	= 0x81000300 + 0x10,
	MSGR_E_OE_AI_TIMEOUT	= 0x81000300 + 0x11,
	MSGR_E_OE_CANCEL	= 0x81000300 + 0x12,
	MSGR_E_OE_TOO_MANY_MATCHES	= 0x81000300 + 0x13,
	MSGR_E_OE_SERVER_UNAVAILABLE	= 0x81000300 + 0x14,
	MSGR_E_OE_LOGON_UI_ACTIVE	= 0x81000300 + 0x15,
	MSGR_E_OE_OPTION_UI_ACTIVE	= 0x81000300 + 0x16,
	MSGR_E_OE_CONTACT_UI_ACTIVE	= 0x81000300 + 0x17,
	MSGR_E_OE_FAIL	= 0x80004005,
	MSGR_S_OE_OK	= 0
    }	MSGR_OE_Constants;

typedef /* [public][public][public][public][public][public][public][public] */ 
enum __MIDL___MIDL_itf_mdisp_0000_0003
    {	MSTATE_UNKNOWN	= 0,
	MSTATE_OFFLINE	= 0x1,
	MSTATE_ONLINE	= 0x2,
	MSTATE_INVISIBLE	= 0x6,
	MSTATE_BUSY	= 0xa,
	MSTATE_BE_RIGHT_BACK	= 0xe,
	MSTATE_IDLE	= 0x12,
	MSTATE_AWAY	= 0x22,
	MSTATE_ON_THE_PHONE	= 0x32,
	MSTATE_OUT_TO_LUNCH	= 0x42,
	MSTATE_LOCAL_FINDING_SERVER	= 0x100,
	MSTATE_LOCAL_CONNECTING_TO_SERVER	= 0x200,
	MSTATE_LOCAL_SYNCHRONIZING_WITH_SERVER	= 0x300,
	MSTATE_LOCAL_DISCONNECTING_FROM_SERVER	= 0x400
    }	MSTATE;

typedef /* [public][public][public][public][public][public] */ 
enum __MIDL___MIDL_itf_mdisp_0000_0004
    {	MPROMPT_YES_IF_NOT_ALLOWED_OR_BLOCKED	= 0,
	MPROMPT_NO_ADD_TO_ALLOW	= 1
    }	MPROMPT;

typedef /* [public][public][public][public][public][public] */ 
enum __MIDL___MIDL_itf_mdisp_0000_0005
    {	MMSGPRIVACY_BLOCK_LIST_EXCLUDED	= 0,
	MMSGPRIVACY_ALLOW_LIST_ONLY	= 1
    }	MMSGPRIVACY;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_mdisp_0000_0006
    {	MUPDATECHOICE_OPTIONAL	= 0,
	MUPDATECHOICE_MANDATORY	= 1
    }	MUPDATECHOICE;

typedef /* [public][public][public][public] */ 
enum __MIDL___MIDL_itf_mdisp_0000_0007
    {	MURLTYPE_CHANGE_PASSWORD	= 0,
	MURLTYPE_CHANGE_INFO	= 1,
	MURLTYPE_COMPOSE_EMAIL	= 2,
	MURLTYPE_GO_TO_EMAIL_INBOX	= 3,
	MURLTYPE_GO_TO_EMAIL_FOLDERS	= 4,
	MURLTYPE_READ_EMAIL_MESSAGE	= 5,
	MURLTYPE_FAQ	= 6,
	MURLTYPE_GETTING_STARTED	= 7
    }	MURLTYPE;

typedef /* [public][public][public][public][public][public][public] */ 
enum __MIDL___MIDL_itf_mdisp_0000_0008
    {	MLIST_CONTACT	= 0,
	MLIST_ALLOW	= 1,
	MLIST_BLOCK	= 2,
	MLIST_REVERSE	= 3
    }	MLIST;

typedef /* [public][public][public][public][public][public] */ 
enum __MIDL___MIDL_itf_mdisp_0000_0009
    {	MMSGTYPE_NO_RESULT	= 0,
	MMSGTYPE_ERRORS_ONLY	= 1,
	MMSGTYPE_ALL_RESULTS	= 2
    }	MMSGTYPE;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_mdisp_0000_0010
    {	MPFLFIELD_COUNTRY	= 0,
	MPFLFIELD_POSTALCODE	= 1,
	MPFLFIELD_LANG_PREFERENCE	= 2,
	MPFLFIELD_GENDER	= 3,
	MPFLFIELD_PREFERRED_EMAIL	= 4,
	MPFLFIELD_NICKNAME	= 5,
	MPFLFIELD_ACCESSIBILITY	= 6,
	MPFLFIELD_WALLET	= 7,
	MPFLFIELD_DIRECTORY	= 8,
	MPFLFIELD_INETACCESS	= 9
    }	MPFLFIELD;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_mdisp_0000_0011
    {	MSGR_E_CONNECT	= 0x81000300 + 0x1,
	MSGR_E_INVALID_SERVER_NAME	= 0x81000300 + 0x2,
	MSGR_E_INVALID_PASSWORD	= 0x81000300 + 0x3,
	MSGR_E_ALREADY_LOGGED_ON	= 0x81000300 + 0x4,
	MSGR_E_SERVER_VERSION	= 0x81000300 + 0x5,
	MSGR_E_LOGON_TIMEOUT	= 0x81000300 + 0x6,
	MSGR_E_LIST_FULL	= 0x81000300 + 0x7,
	MSGR_E_AI_REJECT	= 0x81000300 + 0x8,
	MSGR_E_AI_REJECT_NOT_INST	= 0x81000300 + 0x9,
	MSGR_E_USER_NOT_FOUND	= 0x81000300 + 0xa,
	MSGR_E_ALREADY_IN_LIST	= 0x81000300 + 0xb,
	MSGR_E_DISCONNECTED	= 0x81000300 + 0xc,
	MSGR_E_UNEXPECTED	= 0x81000300 + 0xd,
	MSGR_E_SERVER_TOO_BUSY	= 0x81000300 + 0xe,
	MSGR_E_INVALID_AUTH_PACKAGES	= 0x81000300 + 0xf,
	MSGR_E_NEWER_CLIENT_AVAILABLE	= 0x81000300 + 0x10,
	MSGR_E_AI_TIMEOUT	= 0x81000300 + 0x11,
	MSGR_E_CANCEL	= 0x81000300 + 0x12,
	MSGR_E_TOO_MANY_MATCHES	= 0x81000300 + 0x13,
	MSGR_E_SERVER_UNAVAILABLE	= 0x81000300 + 0x14,
	MSGR_E_LOGON_UI_ACTIVE	= 0x81000300 + 0x15,
	MSGR_E_OPTION_UI_ACTIVE	= 0x81000300 + 0x16,
	MSGR_E_CONTACT_UI_ACTIVE	= 0x81000300 + 0x17,
	MSGR_E_PRIMARY_SERVICE_NOT_LOGGED_ON	= 0x81000300 + 0x18,
	MSGR_E_LOGGED_ON	= 0x81000300 + 0x19,
	MSGR_E_CONNECT_PROXY	= 0x81000300 + 0x1a,
	MSGR_E_PROXY_AUTH	= 0x81000300 + 0x1b,
	MSGR_E_PROXY_AUTH_TYPE	= 0x81000300 + 0x1c,
	MSGR_E_INVALID_PROXY_NAME	= 0x81000300 + 0x1d,
	MSGR_E_NOT_PRIMARY_SERVICE	= 0x81000300 + 0x20,
	MSGR_E_TOO_MANY_SESSIONS	= 0x81000300 + 0x21,
	MSGR_E_TOO_MANY_MESSAGES	= 0x81000300 + 0x22,
	MSGR_E_REMOTE_LOGIN	= 0x81000300 + 0x23,
	MSGR_E_INVALID_FRIENDLY_NAME	= 0x81000300 + 0x24,
	MSGR_E_SESSION_FULL	= 0x81000300 + 0x25,
	MSGR_E_NOT_ALLOWING_NEW_USERS	= 0x81000300 + 0x26,
	MSGR_S_ALREADY_IN_THE_MODE	= 0x1000300 + 0x1,
	MSGR_E_FAIL	= 0x80004005,
	MSGR_S_OK	= 0
    }	MSGRConstants;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_mdisp_0000_0012
    {	SSTATE_DISCONNECTED	= 0,
	SSTATE_CONNECTING	= 1,
	SSTATE_CONNECTED	= 2,
	SSTATE_DISCONNECTING	= 3
    }	SSTATE;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_mdisp_0000_0013
    {	MLOPT_PROXY_STATE	= 0,
	MLOPT_PROXY_TYPE	= 1,
	MLOPT_SOCKS4_SERVER	= 2,
	MLOPT_SOCKS5_SERVER	= 3,
	MLOPT_HTTPS_SERVER	= 4,
	MLOPT_SOCKS4_PORT	= 5,
	MLOPT_SOCKS5_PORT	= 6,
	MLOPT_HTTPS_PORT	= 7,
	MLOPT_SOCKS5_USERNAME	= 8,
	MLOPT_SOCKS5_PASSWORD	= 9,
	MLOPT_SERVER_NAME	= 10,
	MLOPT_ENABLE_IDLE_DETECT	= 11,
	MLOPT_IDLE_THRESHOLD	= 12,
	MLOPT_IDLE_DETECTABLE	= 13,
	MLOPT_SS_DETECTABLE	= 14
    }	MLOCALOPTION;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_mdisp_0000_0014
    {	MLOPT_MAX_SERVICE_STRING	= 255,
	MLOPT_MAX_PROXY_STRING	= 255,
	MLOPT_MAX_PORT_NUMBER	= 65535
    }	MLOCALOPTION_LIMITS;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_mdisp_0000_0015
    {	MPROXYTYPE_NO_PROXY	= 0,
	MPROXYTYPE_SOCKS4	= 1,
	MPROXYTYPE_SOCKS5	= 2,
	MPROXYTYPE_HTTPS	= 3
    }	MPROXYTYPE;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_mdisp_0000_0016
    {	MOPTDLG_GENERAL_PAGE	= 0,
	MOPTDLG_PRIVACY_PAGE	= 1,
	MOPTDLG_EXCHANGE_PAGE	= 2,
	MOPTDLG_ACCOUNTS_PAGE	= 3,
	MOPTDLG_CONNECTION_PAGE	= 4
    }	MOPTDLGPAGE;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_mdisp_0000_0017
    {	MSF_PRIMARY	= 0x1,
	MSF_APP_INVITE	= 0x2,
	MSF_MULTI_IM	= 0x4,
	MSF_BLOCKING	= 0x8,
	MSF_UNAME_IN_EMAIL_FMT	= 0x10,
	MSF_LOCAL_LISTS	= 0x20
    }	MSERVICE_FLAGS;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_mdisp_0000_0018
    {	MSS_LOGGED_ON	= 0,
	MSS_NOT_LOGGED_ON	= 1,
	MSS_LOGGING_ON	= 2,
	MSS_LOGGING_OFF	= 3
    }	MSVCSTATUS;


EXTERN_C const IID LIBID_Messenger;

#ifndef __IMsgrObject_INTERFACE_DEFINED__
#define __IMsgrObject_INTERFACE_DEFINED__

/* interface IMsgrObject */
/* [object][oleautomation][dual][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IMsgrObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("218CB451-20B6-11d2-8E17-0000F803A446")
    IMsgrObject : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateUser( 
            /* [in] */ BSTR bstrLogonName,
            /* [in] */ IMsgrService __RPC_FAR *pService,
            /* [retval][out] */ IMsgrUser __RPC_FAR *__RPC_FAR *ppUser) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Logon( 
            /* [in] */ BSTR bstrUser,
            /* [in] */ BSTR bstrPassword,
            /* [in] */ IMsgrService __RPC_FAR *pService) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Logoff( void) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_List( 
            /* [in] */ MLIST mList,
            /* [retval][out] */ IMsgrUsers __RPC_FAR *__RPC_FAR *ppUsers) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LocalLogonName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LocalFriendlyName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_LocalState( 
            /* [in] */ MSTATE mState) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LocalState( 
            /* [retval][out] */ MSTATE __RPC_FAR *pmState) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MessagePrivacy( 
            /* [in] */ MMSGPRIVACY mmpSetting) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MessagePrivacy( 
            /* [retval][out] */ MMSGPRIVACY __RPC_FAR *pmmpSetting) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Prompt( 
            /* [in] */ MPROMPT mpSetting) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Prompt( 
            /* [retval][out] */ MPROMPT __RPC_FAR *pmpSetting) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE SendAppInvite( 
            /* [in] */ IMsgrUser __RPC_FAR *pUser,
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR bstrAppGUID,
            /* [in] */ BSTR bstrAppName,
            /* [in] */ BSTR bstrAppURL,
            /* [in] */ MMSGTYPE mmtType,
            /* [out] */ LONG __RPC_FAR *plCookie) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE SendAppInviteAccept( 
            /* [in] */ IMsgrUser __RPC_FAR *pUser,
            /* [in] */ LONG lCookie,
            /* [in] */ MMSGTYPE mmtType,
            /* [out] */ LONG __RPC_FAR *plCookie) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE SendAppInviteCancel( 
            /* [in] */ IMsgrUser __RPC_FAR *pUser,
            /* [in] */ LONG lCookie,
            /* [in] */ LONG hrReason,
            /* [in] */ MMSGTYPE mmtType,
            /* [out] */ LONG __RPC_FAR *plCookie) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_LocalOption( 
            /* [in] */ MLOCALOPTION option,
            /* [in] */ VARIANT vSetting) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LocalOption( 
            /* [in] */ MLOCALOPTION option,
            /* [retval][out] */ VARIANT __RPC_FAR *pvSetting) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE FindUser( 
            /* [in] */ BSTR bstrFirstName,
            /* [in] */ BSTR bstrLastName,
            /* [in] */ BSTR bstrCity,
            /* [in] */ BSTR bstrState,
            /* [in] */ BSTR bstrCountry,
            /* [out] */ LONG __RPC_FAR *plCookie) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE SendInviteMail( 
            /* [in] */ BSTR bstrEmailAddress,
            /* [in] */ LONG lFindCookie,
            /* [in] */ LONG lFindIndex,
            /* [out] */ LONG __RPC_FAR *plCookie) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE RequestURL( 
            /* [in] */ MURLTYPE muType,
            /* [in] */ BSTR bstrAdditionalInfo,
            /* [out] */ LONG __RPC_FAR *plCookie) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IMSessions( 
            /* [retval][out] */ IMsgrIMSessions __RPC_FAR *__RPC_FAR *ppIMSessions) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateIMSession( 
            /* [in] */ VARIANT vUser,
            /* [retval][out] */ IMsgrIMSession __RPC_FAR *__RPC_FAR *ppIMSession) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE SessionRequestAccept( 
            /* [in] */ IMsgrIMSession __RPC_FAR *pIMsgrIMSession,
            /* [in] */ long hrReason) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE SessionRequestCancel( 
            /* [in] */ IMsgrIMSession __RPC_FAR *pIMsgrIMSession,
            /* [in] */ long hrReason) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Services( 
            /* [retval][out] */ IMsgrServices __RPC_FAR *__RPC_FAR *ppServices) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMsgrObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMsgrObject __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMsgrObject __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMsgrObject __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMsgrObject __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMsgrObject __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMsgrObject __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMsgrObject __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateUser )( 
            IMsgrObject __RPC_FAR * This,
            /* [in] */ BSTR bstrLogonName,
            /* [in] */ IMsgrService __RPC_FAR *pService,
            /* [retval][out] */ IMsgrUser __RPC_FAR *__RPC_FAR *ppUser);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Logon )( 
            IMsgrObject __RPC_FAR * This,
            /* [in] */ BSTR bstrUser,
            /* [in] */ BSTR bstrPassword,
            /* [in] */ IMsgrService __RPC_FAR *pService);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Logoff )( 
            IMsgrObject __RPC_FAR * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_List )( 
            IMsgrObject __RPC_FAR * This,
            /* [in] */ MLIST mList,
            /* [retval][out] */ IMsgrUsers __RPC_FAR *__RPC_FAR *ppUsers);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LocalLogonName )( 
            IMsgrObject __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LocalFriendlyName )( 
            IMsgrObject __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_LocalState )( 
            IMsgrObject __RPC_FAR * This,
            /* [in] */ MSTATE mState);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LocalState )( 
            IMsgrObject __RPC_FAR * This,
            /* [retval][out] */ MSTATE __RPC_FAR *pmState);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_MessagePrivacy )( 
            IMsgrObject __RPC_FAR * This,
            /* [in] */ MMSGPRIVACY mmpSetting);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MessagePrivacy )( 
            IMsgrObject __RPC_FAR * This,
            /* [retval][out] */ MMSGPRIVACY __RPC_FAR *pmmpSetting);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Prompt )( 
            IMsgrObject __RPC_FAR * This,
            /* [in] */ MPROMPT mpSetting);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Prompt )( 
            IMsgrObject __RPC_FAR * This,
            /* [retval][out] */ MPROMPT __RPC_FAR *pmpSetting);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SendAppInvite )( 
            IMsgrObject __RPC_FAR * This,
            /* [in] */ IMsgrUser __RPC_FAR *pUser,
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR bstrAppGUID,
            /* [in] */ BSTR bstrAppName,
            /* [in] */ BSTR bstrAppURL,
            /* [in] */ MMSGTYPE mmtType,
            /* [out] */ LONG __RPC_FAR *plCookie);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SendAppInviteAccept )( 
            IMsgrObject __RPC_FAR * This,
            /* [in] */ IMsgrUser __RPC_FAR *pUser,
            /* [in] */ LONG lCookie,
            /* [in] */ MMSGTYPE mmtType,
            /* [out] */ LONG __RPC_FAR *plCookie);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SendAppInviteCancel )( 
            IMsgrObject __RPC_FAR * This,
            /* [in] */ IMsgrUser __RPC_FAR *pUser,
            /* [in] */ LONG lCookie,
            /* [in] */ LONG hrReason,
            /* [in] */ MMSGTYPE mmtType,
            /* [out] */ LONG __RPC_FAR *plCookie);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_LocalOption )( 
            IMsgrObject __RPC_FAR * This,
            /* [in] */ MLOCALOPTION option,
            /* [in] */ VARIANT vSetting);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LocalOption )( 
            IMsgrObject __RPC_FAR * This,
            /* [in] */ MLOCALOPTION option,
            /* [retval][out] */ VARIANT __RPC_FAR *pvSetting);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindUser )( 
            IMsgrObject __RPC_FAR * This,
            /* [in] */ BSTR bstrFirstName,
            /* [in] */ BSTR bstrLastName,
            /* [in] */ BSTR bstrCity,
            /* [in] */ BSTR bstrState,
            /* [in] */ BSTR bstrCountry,
            /* [out] */ LONG __RPC_FAR *plCookie);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SendInviteMail )( 
            IMsgrObject __RPC_FAR * This,
            /* [in] */ BSTR bstrEmailAddress,
            /* [in] */ LONG lFindCookie,
            /* [in] */ LONG lFindIndex,
            /* [out] */ LONG __RPC_FAR *plCookie);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RequestURL )( 
            IMsgrObject __RPC_FAR * This,
            /* [in] */ MURLTYPE muType,
            /* [in] */ BSTR bstrAdditionalInfo,
            /* [out] */ LONG __RPC_FAR *plCookie);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IMSessions )( 
            IMsgrObject __RPC_FAR * This,
            /* [retval][out] */ IMsgrIMSessions __RPC_FAR *__RPC_FAR *ppIMSessions);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateIMSession )( 
            IMsgrObject __RPC_FAR * This,
            /* [in] */ VARIANT vUser,
            /* [retval][out] */ IMsgrIMSession __RPC_FAR *__RPC_FAR *ppIMSession);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SessionRequestAccept )( 
            IMsgrObject __RPC_FAR * This,
            /* [in] */ IMsgrIMSession __RPC_FAR *pIMsgrIMSession,
            /* [in] */ long hrReason);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SessionRequestCancel )( 
            IMsgrObject __RPC_FAR * This,
            /* [in] */ IMsgrIMSession __RPC_FAR *pIMsgrIMSession,
            /* [in] */ long hrReason);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Services )( 
            IMsgrObject __RPC_FAR * This,
            /* [retval][out] */ IMsgrServices __RPC_FAR *__RPC_FAR *ppServices);
        
        END_INTERFACE
    } IMsgrObjectVtbl;

    interface IMsgrObject
    {
        CONST_VTBL struct IMsgrObjectVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsgrObject_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMsgrObject_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMsgrObject_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMsgrObject_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMsgrObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMsgrObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMsgrObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMsgrObject_CreateUser(This,bstrLogonName,pService,ppUser)	\
    (This)->lpVtbl -> CreateUser(This,bstrLogonName,pService,ppUser)

#define IMsgrObject_Logon(This,bstrUser,bstrPassword,pService)	\
    (This)->lpVtbl -> Logon(This,bstrUser,bstrPassword,pService)

#define IMsgrObject_Logoff(This)	\
    (This)->lpVtbl -> Logoff(This)

#define IMsgrObject_get_List(This,mList,ppUsers)	\
    (This)->lpVtbl -> get_List(This,mList,ppUsers)

#define IMsgrObject_get_LocalLogonName(This,pbstrName)	\
    (This)->lpVtbl -> get_LocalLogonName(This,pbstrName)

#define IMsgrObject_get_LocalFriendlyName(This,pbstrName)	\
    (This)->lpVtbl -> get_LocalFriendlyName(This,pbstrName)

#define IMsgrObject_put_LocalState(This,mState)	\
    (This)->lpVtbl -> put_LocalState(This,mState)

#define IMsgrObject_get_LocalState(This,pmState)	\
    (This)->lpVtbl -> get_LocalState(This,pmState)

#define IMsgrObject_put_MessagePrivacy(This,mmpSetting)	\
    (This)->lpVtbl -> put_MessagePrivacy(This,mmpSetting)

#define IMsgrObject_get_MessagePrivacy(This,pmmpSetting)	\
    (This)->lpVtbl -> get_MessagePrivacy(This,pmmpSetting)

#define IMsgrObject_put_Prompt(This,mpSetting)	\
    (This)->lpVtbl -> put_Prompt(This,mpSetting)

#define IMsgrObject_get_Prompt(This,pmpSetting)	\
    (This)->lpVtbl -> get_Prompt(This,pmpSetting)

#define IMsgrObject_SendAppInvite(This,pUser,lCookie,bstrAppGUID,bstrAppName,bstrAppURL,mmtType,plCookie)	\
    (This)->lpVtbl -> SendAppInvite(This,pUser,lCookie,bstrAppGUID,bstrAppName,bstrAppURL,mmtType,plCookie)

#define IMsgrObject_SendAppInviteAccept(This,pUser,lCookie,mmtType,plCookie)	\
    (This)->lpVtbl -> SendAppInviteAccept(This,pUser,lCookie,mmtType,plCookie)

#define IMsgrObject_SendAppInviteCancel(This,pUser,lCookie,hrReason,mmtType,plCookie)	\
    (This)->lpVtbl -> SendAppInviteCancel(This,pUser,lCookie,hrReason,mmtType,plCookie)

#define IMsgrObject_put_LocalOption(This,option,vSetting)	\
    (This)->lpVtbl -> put_LocalOption(This,option,vSetting)

#define IMsgrObject_get_LocalOption(This,option,pvSetting)	\
    (This)->lpVtbl -> get_LocalOption(This,option,pvSetting)

#define IMsgrObject_FindUser(This,bstrFirstName,bstrLastName,bstrCity,bstrState,bstrCountry,plCookie)	\
    (This)->lpVtbl -> FindUser(This,bstrFirstName,bstrLastName,bstrCity,bstrState,bstrCountry,plCookie)

#define IMsgrObject_SendInviteMail(This,bstrEmailAddress,lFindCookie,lFindIndex,plCookie)	\
    (This)->lpVtbl -> SendInviteMail(This,bstrEmailAddress,lFindCookie,lFindIndex,plCookie)

#define IMsgrObject_RequestURL(This,muType,bstrAdditionalInfo,plCookie)	\
    (This)->lpVtbl -> RequestURL(This,muType,bstrAdditionalInfo,plCookie)

#define IMsgrObject_get_IMSessions(This,ppIMSessions)	\
    (This)->lpVtbl -> get_IMSessions(This,ppIMSessions)

#define IMsgrObject_CreateIMSession(This,vUser,ppIMSession)	\
    (This)->lpVtbl -> CreateIMSession(This,vUser,ppIMSession)

#define IMsgrObject_SessionRequestAccept(This,pIMsgrIMSession,hrReason)	\
    (This)->lpVtbl -> SessionRequestAccept(This,pIMsgrIMSession,hrReason)

#define IMsgrObject_SessionRequestCancel(This,pIMsgrIMSession,hrReason)	\
    (This)->lpVtbl -> SessionRequestCancel(This,pIMsgrIMSession,hrReason)

#define IMsgrObject_get_Services(This,ppServices)	\
    (This)->lpVtbl -> get_Services(This,ppServices)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrObject_CreateUser_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [in] */ BSTR bstrLogonName,
    /* [in] */ IMsgrService __RPC_FAR *pService,
    /* [retval][out] */ IMsgrUser __RPC_FAR *__RPC_FAR *ppUser);


void __RPC_STUB IMsgrObject_CreateUser_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrObject_Logon_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [in] */ BSTR bstrUser,
    /* [in] */ BSTR bstrPassword,
    /* [in] */ IMsgrService __RPC_FAR *pService);


void __RPC_STUB IMsgrObject_Logon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrObject_Logoff_Proxy( 
    IMsgrObject __RPC_FAR * This);


void __RPC_STUB IMsgrObject_Logoff_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrObject_get_List_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [in] */ MLIST mList,
    /* [retval][out] */ IMsgrUsers __RPC_FAR *__RPC_FAR *ppUsers);


void __RPC_STUB IMsgrObject_get_List_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrObject_get_LocalLogonName_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrName);


void __RPC_STUB IMsgrObject_get_LocalLogonName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrObject_get_LocalFriendlyName_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrName);


void __RPC_STUB IMsgrObject_get_LocalFriendlyName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE IMsgrObject_put_LocalState_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [in] */ MSTATE mState);


void __RPC_STUB IMsgrObject_put_LocalState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE IMsgrObject_get_LocalState_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [retval][out] */ MSTATE __RPC_FAR *pmState);


void __RPC_STUB IMsgrObject_get_LocalState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE IMsgrObject_put_MessagePrivacy_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [in] */ MMSGPRIVACY mmpSetting);


void __RPC_STUB IMsgrObject_put_MessagePrivacy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE IMsgrObject_get_MessagePrivacy_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [retval][out] */ MMSGPRIVACY __RPC_FAR *pmmpSetting);


void __RPC_STUB IMsgrObject_get_MessagePrivacy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE IMsgrObject_put_Prompt_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [in] */ MPROMPT mpSetting);


void __RPC_STUB IMsgrObject_put_Prompt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE IMsgrObject_get_Prompt_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [retval][out] */ MPROMPT __RPC_FAR *pmpSetting);


void __RPC_STUB IMsgrObject_get_Prompt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrObject_SendAppInvite_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [in] */ IMsgrUser __RPC_FAR *pUser,
    /* [in] */ LONG lCookie,
    /* [in] */ BSTR bstrAppGUID,
    /* [in] */ BSTR bstrAppName,
    /* [in] */ BSTR bstrAppURL,
    /* [in] */ MMSGTYPE mmtType,
    /* [out] */ LONG __RPC_FAR *plCookie);


void __RPC_STUB IMsgrObject_SendAppInvite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrObject_SendAppInviteAccept_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [in] */ IMsgrUser __RPC_FAR *pUser,
    /* [in] */ LONG lCookie,
    /* [in] */ MMSGTYPE mmtType,
    /* [out] */ LONG __RPC_FAR *plCookie);


void __RPC_STUB IMsgrObject_SendAppInviteAccept_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrObject_SendAppInviteCancel_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [in] */ IMsgrUser __RPC_FAR *pUser,
    /* [in] */ LONG lCookie,
    /* [in] */ LONG hrReason,
    /* [in] */ MMSGTYPE mmtType,
    /* [out] */ LONG __RPC_FAR *plCookie);


void __RPC_STUB IMsgrObject_SendAppInviteCancel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE IMsgrObject_put_LocalOption_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [in] */ MLOCALOPTION option,
    /* [in] */ VARIANT vSetting);


void __RPC_STUB IMsgrObject_put_LocalOption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE IMsgrObject_get_LocalOption_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [in] */ MLOCALOPTION option,
    /* [retval][out] */ VARIANT __RPC_FAR *pvSetting);


void __RPC_STUB IMsgrObject_get_LocalOption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrObject_FindUser_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [in] */ BSTR bstrFirstName,
    /* [in] */ BSTR bstrLastName,
    /* [in] */ BSTR bstrCity,
    /* [in] */ BSTR bstrState,
    /* [in] */ BSTR bstrCountry,
    /* [out] */ LONG __RPC_FAR *plCookie);


void __RPC_STUB IMsgrObject_FindUser_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrObject_SendInviteMail_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [in] */ BSTR bstrEmailAddress,
    /* [in] */ LONG lFindCookie,
    /* [in] */ LONG lFindIndex,
    /* [out] */ LONG __RPC_FAR *plCookie);


void __RPC_STUB IMsgrObject_SendInviteMail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrObject_RequestURL_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [in] */ MURLTYPE muType,
    /* [in] */ BSTR bstrAdditionalInfo,
    /* [out] */ LONG __RPC_FAR *plCookie);


void __RPC_STUB IMsgrObject_RequestURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrObject_get_IMSessions_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [retval][out] */ IMsgrIMSessions __RPC_FAR *__RPC_FAR *ppIMSessions);


void __RPC_STUB IMsgrObject_get_IMSessions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrObject_CreateIMSession_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [in] */ VARIANT vUser,
    /* [retval][out] */ IMsgrIMSession __RPC_FAR *__RPC_FAR *ppIMSession);


void __RPC_STUB IMsgrObject_CreateIMSession_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrObject_SessionRequestAccept_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [in] */ IMsgrIMSession __RPC_FAR *pIMsgrIMSession,
    /* [in] */ long hrReason);


void __RPC_STUB IMsgrObject_SessionRequestAccept_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrObject_SessionRequestCancel_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [in] */ IMsgrIMSession __RPC_FAR *pIMsgrIMSession,
    /* [in] */ long hrReason);


void __RPC_STUB IMsgrObject_SessionRequestCancel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrObject_get_Services_Proxy( 
    IMsgrObject __RPC_FAR * This,
    /* [retval][out] */ IMsgrServices __RPC_FAR *__RPC_FAR *ppServices);


void __RPC_STUB IMsgrObject_get_Services_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMsgrObject_INTERFACE_DEFINED__ */


#ifndef __IMsgrUser_INTERFACE_DEFINED__
#define __IMsgrUser_INTERFACE_DEFINED__

/* interface IMsgrUser */
/* [object][oleautomation][dual][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IMsgrUser;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("218CB453-20B6-11d2-8E17-0000F803A446")
    IMsgrUser : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FriendlyName( 
            /* [in] */ BSTR bstrFriendlyName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FriendlyName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrFriendlyName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EmailAddress( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrEmailAddress) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ MSTATE __RPC_FAR *pmState) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LogonName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrLogonName) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE SendText( 
            /* [in] */ BSTR bstrMsgHeader,
            /* [in] */ BSTR bstrMsgText,
            /* [in] */ MMSGTYPE mmtType,
            /* [out] */ LONG __RPC_FAR *plCookie) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Service( 
            /* [retval][out] */ IMsgrService __RPC_FAR *__RPC_FAR *ppService) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMsgrUserVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMsgrUser __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMsgrUser __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMsgrUser __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMsgrUser __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMsgrUser __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMsgrUser __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMsgrUser __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_FriendlyName )( 
            IMsgrUser __RPC_FAR * This,
            /* [in] */ BSTR bstrFriendlyName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_FriendlyName )( 
            IMsgrUser __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrFriendlyName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_EmailAddress )( 
            IMsgrUser __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrEmailAddress);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_State )( 
            IMsgrUser __RPC_FAR * This,
            /* [retval][out] */ MSTATE __RPC_FAR *pmState);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LogonName )( 
            IMsgrUser __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrLogonName);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SendText )( 
            IMsgrUser __RPC_FAR * This,
            /* [in] */ BSTR bstrMsgHeader,
            /* [in] */ BSTR bstrMsgText,
            /* [in] */ MMSGTYPE mmtType,
            /* [out] */ LONG __RPC_FAR *plCookie);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Service )( 
            IMsgrUser __RPC_FAR * This,
            /* [retval][out] */ IMsgrService __RPC_FAR *__RPC_FAR *ppService);
        
        END_INTERFACE
    } IMsgrUserVtbl;

    interface IMsgrUser
    {
        CONST_VTBL struct IMsgrUserVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsgrUser_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMsgrUser_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMsgrUser_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMsgrUser_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMsgrUser_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMsgrUser_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMsgrUser_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMsgrUser_put_FriendlyName(This,bstrFriendlyName)	\
    (This)->lpVtbl -> put_FriendlyName(This,bstrFriendlyName)

#define IMsgrUser_get_FriendlyName(This,pbstrFriendlyName)	\
    (This)->lpVtbl -> get_FriendlyName(This,pbstrFriendlyName)

#define IMsgrUser_get_EmailAddress(This,pbstrEmailAddress)	\
    (This)->lpVtbl -> get_EmailAddress(This,pbstrEmailAddress)

#define IMsgrUser_get_State(This,pmState)	\
    (This)->lpVtbl -> get_State(This,pmState)

#define IMsgrUser_get_LogonName(This,pbstrLogonName)	\
    (This)->lpVtbl -> get_LogonName(This,pbstrLogonName)

#define IMsgrUser_SendText(This,bstrMsgHeader,bstrMsgText,mmtType,plCookie)	\
    (This)->lpVtbl -> SendText(This,bstrMsgHeader,bstrMsgText,mmtType,plCookie)

#define IMsgrUser_get_Service(This,ppService)	\
    (This)->lpVtbl -> get_Service(This,ppService)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE IMsgrUser_put_FriendlyName_Proxy( 
    IMsgrUser __RPC_FAR * This,
    /* [in] */ BSTR bstrFriendlyName);


void __RPC_STUB IMsgrUser_put_FriendlyName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE IMsgrUser_get_FriendlyName_Proxy( 
    IMsgrUser __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrFriendlyName);


void __RPC_STUB IMsgrUser_get_FriendlyName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE IMsgrUser_get_EmailAddress_Proxy( 
    IMsgrUser __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrEmailAddress);


void __RPC_STUB IMsgrUser_get_EmailAddress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrUser_get_State_Proxy( 
    IMsgrUser __RPC_FAR * This,
    /* [retval][out] */ MSTATE __RPC_FAR *pmState);


void __RPC_STUB IMsgrUser_get_State_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrUser_get_LogonName_Proxy( 
    IMsgrUser __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrLogonName);


void __RPC_STUB IMsgrUser_get_LogonName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrUser_SendText_Proxy( 
    IMsgrUser __RPC_FAR * This,
    /* [in] */ BSTR bstrMsgHeader,
    /* [in] */ BSTR bstrMsgText,
    /* [in] */ MMSGTYPE mmtType,
    /* [out] */ LONG __RPC_FAR *plCookie);


void __RPC_STUB IMsgrUser_SendText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrUser_get_Service_Proxy( 
    IMsgrUser __RPC_FAR * This,
    /* [retval][out] */ IMsgrService __RPC_FAR *__RPC_FAR *ppService);


void __RPC_STUB IMsgrUser_get_Service_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMsgrUser_INTERFACE_DEFINED__ */


#ifndef __IMsgrUsers_INTERFACE_DEFINED__
#define __IMsgrUsers_INTERFACE_DEFINED__

/* interface IMsgrUsers */
/* [object][oleautomation][dual][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IMsgrUsers;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("218CB454-20B6-11d2-8E17-0000F803A446")
    IMsgrUsers : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long __RPC_FAR *pcUsers) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ long Index,
            /* [retval][out] */ IMsgrUser __RPC_FAR *__RPC_FAR *ppUser) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IMsgrUser __RPC_FAR *pUser) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ IMsgrUser __RPC_FAR *pUser) = 0;
        
        virtual /* [helpcontext][helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMsgrUsersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMsgrUsers __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMsgrUsers __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMsgrUsers __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMsgrUsers __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMsgrUsers __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMsgrUsers __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMsgrUsers __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )( 
            IMsgrUsers __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pcUsers);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Item )( 
            IMsgrUsers __RPC_FAR * This,
            /* [in] */ long Index,
            /* [retval][out] */ IMsgrUser __RPC_FAR *__RPC_FAR *ppUser);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Add )( 
            IMsgrUsers __RPC_FAR * This,
            /* [in] */ IMsgrUser __RPC_FAR *pUser);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Remove )( 
            IMsgrUsers __RPC_FAR * This,
            /* [in] */ IMsgrUser __RPC_FAR *pUser);
        
        /* [helpcontext][helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__NewEnum )( 
            IMsgrUsers __RPC_FAR * This,
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown);
        
        END_INTERFACE
    } IMsgrUsersVtbl;

    interface IMsgrUsers
    {
        CONST_VTBL struct IMsgrUsersVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsgrUsers_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMsgrUsers_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMsgrUsers_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMsgrUsers_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMsgrUsers_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMsgrUsers_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMsgrUsers_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMsgrUsers_get_Count(This,pcUsers)	\
    (This)->lpVtbl -> get_Count(This,pcUsers)

#define IMsgrUsers_Item(This,Index,ppUser)	\
    (This)->lpVtbl -> Item(This,Index,ppUser)

#define IMsgrUsers_Add(This,pUser)	\
    (This)->lpVtbl -> Add(This,pUser)

#define IMsgrUsers_Remove(This,pUser)	\
    (This)->lpVtbl -> Remove(This,pUser)

#define IMsgrUsers_get__NewEnum(This,ppUnknown)	\
    (This)->lpVtbl -> get__NewEnum(This,ppUnknown)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrUsers_get_Count_Proxy( 
    IMsgrUsers __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pcUsers);


void __RPC_STUB IMsgrUsers_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrUsers_Item_Proxy( 
    IMsgrUsers __RPC_FAR * This,
    /* [in] */ long Index,
    /* [retval][out] */ IMsgrUser __RPC_FAR *__RPC_FAR *ppUser);


void __RPC_STUB IMsgrUsers_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrUsers_Add_Proxy( 
    IMsgrUsers __RPC_FAR * This,
    /* [in] */ IMsgrUser __RPC_FAR *pUser);


void __RPC_STUB IMsgrUsers_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrUsers_Remove_Proxy( 
    IMsgrUsers __RPC_FAR * This,
    /* [in] */ IMsgrUser __RPC_FAR *pUser);


void __RPC_STUB IMsgrUsers_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE IMsgrUsers_get__NewEnum_Proxy( 
    IMsgrUsers __RPC_FAR * This,
    /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown);


void __RPC_STUB IMsgrUsers_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMsgrUsers_INTERFACE_DEFINED__ */


#ifndef __IMsgrIMSession_INTERFACE_DEFINED__
#define __IMsgrIMSession_INTERFACE_DEFINED__

/* interface IMsgrIMSession */
/* [object][oleautomation][dual][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IMsgrIMSession;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("82e11592-20f5-11d2-91ad-0000f81fefc9")
    IMsgrIMSession : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Members( 
            /* [retval][out] */ IMsgrUsers __RPC_FAR *__RPC_FAR *ppUsers) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ SSTATE __RPC_FAR *psState) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Service( 
            /* [retval][out] */ IMsgrService __RPC_FAR *__RPC_FAR *ppService) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Invitees( 
            /* [retval][out] */ IMsgrUsers __RPC_FAR *__RPC_FAR *ppUsers) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LeaveSession( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InviteUser( 
            /* [in] */ VARIANT vUser) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE SendText( 
            /* [in] */ BSTR bstrMsgHeader,
            /* [in] */ BSTR bstrMsgText,
            /* [in] */ MMSGTYPE mmtType,
            /* [out] */ LONG __RPC_FAR *plCookie) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMsgrIMSessionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMsgrIMSession __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMsgrIMSession __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMsgrIMSession __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMsgrIMSession __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMsgrIMSession __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMsgrIMSession __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMsgrIMSession __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Members )( 
            IMsgrIMSession __RPC_FAR * This,
            /* [retval][out] */ IMsgrUsers __RPC_FAR *__RPC_FAR *ppUsers);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_State )( 
            IMsgrIMSession __RPC_FAR * This,
            /* [retval][out] */ SSTATE __RPC_FAR *psState);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Service )( 
            IMsgrIMSession __RPC_FAR * This,
            /* [retval][out] */ IMsgrService __RPC_FAR *__RPC_FAR *ppService);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Invitees )( 
            IMsgrIMSession __RPC_FAR * This,
            /* [retval][out] */ IMsgrUsers __RPC_FAR *__RPC_FAR *ppUsers);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LeaveSession )( 
            IMsgrIMSession __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InviteUser )( 
            IMsgrIMSession __RPC_FAR * This,
            /* [in] */ VARIANT vUser);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SendText )( 
            IMsgrIMSession __RPC_FAR * This,
            /* [in] */ BSTR bstrMsgHeader,
            /* [in] */ BSTR bstrMsgText,
            /* [in] */ MMSGTYPE mmtType,
            /* [out] */ LONG __RPC_FAR *plCookie);
        
        END_INTERFACE
    } IMsgrIMSessionVtbl;

    interface IMsgrIMSession
    {
        CONST_VTBL struct IMsgrIMSessionVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsgrIMSession_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMsgrIMSession_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMsgrIMSession_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMsgrIMSession_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMsgrIMSession_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMsgrIMSession_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMsgrIMSession_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMsgrIMSession_get_Members(This,ppUsers)	\
    (This)->lpVtbl -> get_Members(This,ppUsers)

#define IMsgrIMSession_get_State(This,psState)	\
    (This)->lpVtbl -> get_State(This,psState)

#define IMsgrIMSession_get_Service(This,ppService)	\
    (This)->lpVtbl -> get_Service(This,ppService)

#define IMsgrIMSession_get_Invitees(This,ppUsers)	\
    (This)->lpVtbl -> get_Invitees(This,ppUsers)

#define IMsgrIMSession_LeaveSession(This)	\
    (This)->lpVtbl -> LeaveSession(This)

#define IMsgrIMSession_InviteUser(This,vUser)	\
    (This)->lpVtbl -> InviteUser(This,vUser)

#define IMsgrIMSession_SendText(This,bstrMsgHeader,bstrMsgText,mmtType,plCookie)	\
    (This)->lpVtbl -> SendText(This,bstrMsgHeader,bstrMsgText,mmtType,plCookie)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrIMSession_get_Members_Proxy( 
    IMsgrIMSession __RPC_FAR * This,
    /* [retval][out] */ IMsgrUsers __RPC_FAR *__RPC_FAR *ppUsers);


void __RPC_STUB IMsgrIMSession_get_Members_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrIMSession_get_State_Proxy( 
    IMsgrIMSession __RPC_FAR * This,
    /* [retval][out] */ SSTATE __RPC_FAR *psState);


void __RPC_STUB IMsgrIMSession_get_State_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrIMSession_get_Service_Proxy( 
    IMsgrIMSession __RPC_FAR * This,
    /* [retval][out] */ IMsgrService __RPC_FAR *__RPC_FAR *ppService);


void __RPC_STUB IMsgrIMSession_get_Service_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrIMSession_get_Invitees_Proxy( 
    IMsgrIMSession __RPC_FAR * This,
    /* [retval][out] */ IMsgrUsers __RPC_FAR *__RPC_FAR *ppUsers);


void __RPC_STUB IMsgrIMSession_get_Invitees_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrIMSession_LeaveSession_Proxy( 
    IMsgrIMSession __RPC_FAR * This);


void __RPC_STUB IMsgrIMSession_LeaveSession_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrIMSession_InviteUser_Proxy( 
    IMsgrIMSession __RPC_FAR * This,
    /* [in] */ VARIANT vUser);


void __RPC_STUB IMsgrIMSession_InviteUser_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrIMSession_SendText_Proxy( 
    IMsgrIMSession __RPC_FAR * This,
    /* [in] */ BSTR bstrMsgHeader,
    /* [in] */ BSTR bstrMsgText,
    /* [in] */ MMSGTYPE mmtType,
    /* [out] */ LONG __RPC_FAR *plCookie);


void __RPC_STUB IMsgrIMSession_SendText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMsgrIMSession_INTERFACE_DEFINED__ */


#ifndef __IMsgrIMSessions_INTERFACE_DEFINED__
#define __IMsgrIMSessions_INTERFACE_DEFINED__

/* interface IMsgrIMSessions */
/* [object][oleautomation][dual][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IMsgrIMSessions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6fd143e6-20a5-11d2-91ad-0000f81fefc9")
    IMsgrIMSessions : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long __RPC_FAR *pcSessions) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ long Index,
            /* [retval][out] */ IMsgrIMSession __RPC_FAR *__RPC_FAR *ppIMSession) = 0;
        
        virtual /* [helpcontext][helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMsgrIMSessionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMsgrIMSessions __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMsgrIMSessions __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMsgrIMSessions __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMsgrIMSessions __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMsgrIMSessions __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMsgrIMSessions __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMsgrIMSessions __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )( 
            IMsgrIMSessions __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pcSessions);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Item )( 
            IMsgrIMSessions __RPC_FAR * This,
            /* [in] */ long Index,
            /* [retval][out] */ IMsgrIMSession __RPC_FAR *__RPC_FAR *ppIMSession);
        
        /* [helpcontext][helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__NewEnum )( 
            IMsgrIMSessions __RPC_FAR * This,
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown);
        
        END_INTERFACE
    } IMsgrIMSessionsVtbl;

    interface IMsgrIMSessions
    {
        CONST_VTBL struct IMsgrIMSessionsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsgrIMSessions_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMsgrIMSessions_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMsgrIMSessions_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMsgrIMSessions_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMsgrIMSessions_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMsgrIMSessions_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMsgrIMSessions_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMsgrIMSessions_get_Count(This,pcSessions)	\
    (This)->lpVtbl -> get_Count(This,pcSessions)

#define IMsgrIMSessions_Item(This,Index,ppIMSession)	\
    (This)->lpVtbl -> Item(This,Index,ppIMSession)

#define IMsgrIMSessions_get__NewEnum(This,ppUnknown)	\
    (This)->lpVtbl -> get__NewEnum(This,ppUnknown)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrIMSessions_get_Count_Proxy( 
    IMsgrIMSessions __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pcSessions);


void __RPC_STUB IMsgrIMSessions_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrIMSessions_Item_Proxy( 
    IMsgrIMSessions __RPC_FAR * This,
    /* [in] */ long Index,
    /* [retval][out] */ IMsgrIMSession __RPC_FAR *__RPC_FAR *ppIMSession);


void __RPC_STUB IMsgrIMSessions_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE IMsgrIMSessions_get__NewEnum_Proxy( 
    IMsgrIMSessions __RPC_FAR * This,
    /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown);


void __RPC_STUB IMsgrIMSessions_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMsgrIMSessions_INTERFACE_DEFINED__ */


#ifndef __IMessengerApp_INTERFACE_DEFINED__
#define __IMessengerApp_INTERFACE_DEFINED__

/* interface IMessengerApp */
/* [object][oleautomation][dual][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IMessengerApp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F3A614DD-ABE0-11d2-A441-00C04F795683")
    IMessengerApp : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Quit( void) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FullName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrFullName) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrPath) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE LaunchLogonUI( void) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE LaunchOptionsUI( 
            /* [in] */ MOPTDLGPAGE mOptDlgPage) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE LaunchAddContactUI( 
            /* [in] */ BSTR bstrEMail) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE LaunchFindContactUI( 
            /* [in] */ BSTR bstrFirstName,
            /* [in] */ BSTR bstrLastName,
            /* [optional][in] */ VARIANT vbstrCity,
            /* [optional][in] */ VARIANT vbstrState,
            /* [optional][in] */ VARIANT vbstrCountry) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE LaunchIMUI( 
            /* [in] */ VARIANT vUser,
            /* [retval][out] */ IMessengerIMWindow __RPC_FAR *__RPC_FAR *ppIMWindow) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IMWindows( 
            /* [retval][out] */ IMessengerIMWindows __RPC_FAR *__RPC_FAR *ppIMWindows) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ToolBar( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolToolBar) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ToolBar( 
            /* [in] */ VARIANT_BOOL BoolToolBar) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StatusBar( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolStatusBar) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_StatusBar( 
            /* [in] */ VARIANT_BOOL BoolStatusBar) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StatusText( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrStatusText) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_StatusText( 
            /* [in] */ BSTR bstrStatusText) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HWND( 
            /* [retval][out] */ long __RPC_FAR *phWnd) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Left( 
            /* [retval][out] */ long __RPC_FAR *plLeft) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Left( 
            /* [in] */ long lLeft) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Top( 
            /* [retval][out] */ long __RPC_FAR *plTop) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Top( 
            /* [in] */ long lTop) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ long __RPC_FAR *plWidth) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ long lWidth) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Height( 
            /* [retval][out] */ long __RPC_FAR *plHeight) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Height( 
            /* [in] */ long lHeight) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Visible( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolVisible) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Visible( 
            /* [in] */ VARIANT_BOOL BoolVisible) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE AutoLogon( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMessengerAppVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMessengerApp __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMessengerApp __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMessengerApp __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMessengerApp __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMessengerApp __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMessengerApp __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMessengerApp __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Application )( 
            IMessengerApp __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Parent )( 
            IMessengerApp __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Quit )( 
            IMessengerApp __RPC_FAR * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )( 
            IMessengerApp __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_FullName )( 
            IMessengerApp __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrFullName);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Path )( 
            IMessengerApp __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrPath);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LaunchLogonUI )( 
            IMessengerApp __RPC_FAR * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LaunchOptionsUI )( 
            IMessengerApp __RPC_FAR * This,
            /* [in] */ MOPTDLGPAGE mOptDlgPage);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LaunchAddContactUI )( 
            IMessengerApp __RPC_FAR * This,
            /* [in] */ BSTR bstrEMail);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LaunchFindContactUI )( 
            IMessengerApp __RPC_FAR * This,
            /* [in] */ BSTR bstrFirstName,
            /* [in] */ BSTR bstrLastName,
            /* [optional][in] */ VARIANT vbstrCity,
            /* [optional][in] */ VARIANT vbstrState,
            /* [optional][in] */ VARIANT vbstrCountry);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LaunchIMUI )( 
            IMessengerApp __RPC_FAR * This,
            /* [in] */ VARIANT vUser,
            /* [retval][out] */ IMessengerIMWindow __RPC_FAR *__RPC_FAR *ppIMWindow);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IMWindows )( 
            IMessengerApp __RPC_FAR * This,
            /* [retval][out] */ IMessengerIMWindows __RPC_FAR *__RPC_FAR *ppIMWindows);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ToolBar )( 
            IMessengerApp __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolToolBar);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ToolBar )( 
            IMessengerApp __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL BoolToolBar);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StatusBar )( 
            IMessengerApp __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolStatusBar);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_StatusBar )( 
            IMessengerApp __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL BoolStatusBar);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StatusText )( 
            IMessengerApp __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrStatusText);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_StatusText )( 
            IMessengerApp __RPC_FAR * This,
            /* [in] */ BSTR bstrStatusText);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_HWND )( 
            IMessengerApp __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *phWnd);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Left )( 
            IMessengerApp __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *plLeft);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Left )( 
            IMessengerApp __RPC_FAR * This,
            /* [in] */ long lLeft);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Top )( 
            IMessengerApp __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *plTop);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Top )( 
            IMessengerApp __RPC_FAR * This,
            /* [in] */ long lTop);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Width )( 
            IMessengerApp __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *plWidth);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Width )( 
            IMessengerApp __RPC_FAR * This,
            /* [in] */ long lWidth);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Height )( 
            IMessengerApp __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *plHeight);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Height )( 
            IMessengerApp __RPC_FAR * This,
            /* [in] */ long lHeight);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Visible )( 
            IMessengerApp __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolVisible);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Visible )( 
            IMessengerApp __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL BoolVisible);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AutoLogon )( 
            IMessengerApp __RPC_FAR * This);
        
        END_INTERFACE
    } IMessengerAppVtbl;

    interface IMessengerApp
    {
        CONST_VTBL struct IMessengerAppVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessengerApp_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMessengerApp_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMessengerApp_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMessengerApp_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMessengerApp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMessengerApp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMessengerApp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMessengerApp_get_Application(This,ppDisp)	\
    (This)->lpVtbl -> get_Application(This,ppDisp)

#define IMessengerApp_get_Parent(This,ppDisp)	\
    (This)->lpVtbl -> get_Parent(This,ppDisp)

#define IMessengerApp_Quit(This)	\
    (This)->lpVtbl -> Quit(This)

#define IMessengerApp_get_Name(This,pbstrName)	\
    (This)->lpVtbl -> get_Name(This,pbstrName)

#define IMessengerApp_get_FullName(This,pbstrFullName)	\
    (This)->lpVtbl -> get_FullName(This,pbstrFullName)

#define IMessengerApp_get_Path(This,pbstrPath)	\
    (This)->lpVtbl -> get_Path(This,pbstrPath)

#define IMessengerApp_LaunchLogonUI(This)	\
    (This)->lpVtbl -> LaunchLogonUI(This)

#define IMessengerApp_LaunchOptionsUI(This,mOptDlgPage)	\
    (This)->lpVtbl -> LaunchOptionsUI(This,mOptDlgPage)

#define IMessengerApp_LaunchAddContactUI(This,bstrEMail)	\
    (This)->lpVtbl -> LaunchAddContactUI(This,bstrEMail)

#define IMessengerApp_LaunchFindContactUI(This,bstrFirstName,bstrLastName,vbstrCity,vbstrState,vbstrCountry)	\
    (This)->lpVtbl -> LaunchFindContactUI(This,bstrFirstName,bstrLastName,vbstrCity,vbstrState,vbstrCountry)

#define IMessengerApp_LaunchIMUI(This,vUser,ppIMWindow)	\
    (This)->lpVtbl -> LaunchIMUI(This,vUser,ppIMWindow)

#define IMessengerApp_get_IMWindows(This,ppIMWindows)	\
    (This)->lpVtbl -> get_IMWindows(This,ppIMWindows)

#define IMessengerApp_get_ToolBar(This,pBoolToolBar)	\
    (This)->lpVtbl -> get_ToolBar(This,pBoolToolBar)

#define IMessengerApp_put_ToolBar(This,BoolToolBar)	\
    (This)->lpVtbl -> put_ToolBar(This,BoolToolBar)

#define IMessengerApp_get_StatusBar(This,pBoolStatusBar)	\
    (This)->lpVtbl -> get_StatusBar(This,pBoolStatusBar)

#define IMessengerApp_put_StatusBar(This,BoolStatusBar)	\
    (This)->lpVtbl -> put_StatusBar(This,BoolStatusBar)

#define IMessengerApp_get_StatusText(This,pbstrStatusText)	\
    (This)->lpVtbl -> get_StatusText(This,pbstrStatusText)

#define IMessengerApp_put_StatusText(This,bstrStatusText)	\
    (This)->lpVtbl -> put_StatusText(This,bstrStatusText)

#define IMessengerApp_get_HWND(This,phWnd)	\
    (This)->lpVtbl -> get_HWND(This,phWnd)

#define IMessengerApp_get_Left(This,plLeft)	\
    (This)->lpVtbl -> get_Left(This,plLeft)

#define IMessengerApp_put_Left(This,lLeft)	\
    (This)->lpVtbl -> put_Left(This,lLeft)

#define IMessengerApp_get_Top(This,plTop)	\
    (This)->lpVtbl -> get_Top(This,plTop)

#define IMessengerApp_put_Top(This,lTop)	\
    (This)->lpVtbl -> put_Top(This,lTop)

#define IMessengerApp_get_Width(This,plWidth)	\
    (This)->lpVtbl -> get_Width(This,plWidth)

#define IMessengerApp_put_Width(This,lWidth)	\
    (This)->lpVtbl -> put_Width(This,lWidth)

#define IMessengerApp_get_Height(This,plHeight)	\
    (This)->lpVtbl -> get_Height(This,plHeight)

#define IMessengerApp_put_Height(This,lHeight)	\
    (This)->lpVtbl -> put_Height(This,lHeight)

#define IMessengerApp_get_Visible(This,pBoolVisible)	\
    (This)->lpVtbl -> get_Visible(This,pBoolVisible)

#define IMessengerApp_put_Visible(This,BoolVisible)	\
    (This)->lpVtbl -> put_Visible(This,BoolVisible)

#define IMessengerApp_AutoLogon(This)	\
    (This)->lpVtbl -> AutoLogon(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerApp_get_Application_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);


void __RPC_STUB IMessengerApp_get_Application_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerApp_get_Parent_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);


void __RPC_STUB IMessengerApp_get_Parent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessengerApp_Quit_Proxy( 
    IMessengerApp __RPC_FAR * This);


void __RPC_STUB IMessengerApp_Quit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerApp_get_Name_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrName);


void __RPC_STUB IMessengerApp_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerApp_get_FullName_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrFullName);


void __RPC_STUB IMessengerApp_get_FullName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerApp_get_Path_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrPath);


void __RPC_STUB IMessengerApp_get_Path_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessengerApp_LaunchLogonUI_Proxy( 
    IMessengerApp __RPC_FAR * This);


void __RPC_STUB IMessengerApp_LaunchLogonUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessengerApp_LaunchOptionsUI_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [in] */ MOPTDLGPAGE mOptDlgPage);


void __RPC_STUB IMessengerApp_LaunchOptionsUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessengerApp_LaunchAddContactUI_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [in] */ BSTR bstrEMail);


void __RPC_STUB IMessengerApp_LaunchAddContactUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessengerApp_LaunchFindContactUI_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [in] */ BSTR bstrFirstName,
    /* [in] */ BSTR bstrLastName,
    /* [optional][in] */ VARIANT vbstrCity,
    /* [optional][in] */ VARIANT vbstrState,
    /* [optional][in] */ VARIANT vbstrCountry);


void __RPC_STUB IMessengerApp_LaunchFindContactUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessengerApp_LaunchIMUI_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [in] */ VARIANT vUser,
    /* [retval][out] */ IMessengerIMWindow __RPC_FAR *__RPC_FAR *ppIMWindow);


void __RPC_STUB IMessengerApp_LaunchIMUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerApp_get_IMWindows_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [retval][out] */ IMessengerIMWindows __RPC_FAR *__RPC_FAR *ppIMWindows);


void __RPC_STUB IMessengerApp_get_IMWindows_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerApp_get_ToolBar_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolToolBar);


void __RPC_STUB IMessengerApp_get_ToolBar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE IMessengerApp_put_ToolBar_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL BoolToolBar);


void __RPC_STUB IMessengerApp_put_ToolBar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerApp_get_StatusBar_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolStatusBar);


void __RPC_STUB IMessengerApp_get_StatusBar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE IMessengerApp_put_StatusBar_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL BoolStatusBar);


void __RPC_STUB IMessengerApp_put_StatusBar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerApp_get_StatusText_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrStatusText);


void __RPC_STUB IMessengerApp_get_StatusText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE IMessengerApp_put_StatusText_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [in] */ BSTR bstrStatusText);


void __RPC_STUB IMessengerApp_put_StatusText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerApp_get_HWND_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *phWnd);


void __RPC_STUB IMessengerApp_get_HWND_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerApp_get_Left_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *plLeft);


void __RPC_STUB IMessengerApp_get_Left_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE IMessengerApp_put_Left_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [in] */ long lLeft);


void __RPC_STUB IMessengerApp_put_Left_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerApp_get_Top_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *plTop);


void __RPC_STUB IMessengerApp_get_Top_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE IMessengerApp_put_Top_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [in] */ long lTop);


void __RPC_STUB IMessengerApp_put_Top_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerApp_get_Width_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *plWidth);


void __RPC_STUB IMessengerApp_get_Width_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE IMessengerApp_put_Width_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [in] */ long lWidth);


void __RPC_STUB IMessengerApp_put_Width_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerApp_get_Height_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *plHeight);


void __RPC_STUB IMessengerApp_get_Height_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE IMessengerApp_put_Height_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [in] */ long lHeight);


void __RPC_STUB IMessengerApp_put_Height_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerApp_get_Visible_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolVisible);


void __RPC_STUB IMessengerApp_get_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE IMessengerApp_put_Visible_Proxy( 
    IMessengerApp __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL BoolVisible);


void __RPC_STUB IMessengerApp_put_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessengerApp_AutoLogon_Proxy( 
    IMessengerApp __RPC_FAR * This);


void __RPC_STUB IMessengerApp_AutoLogon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMessengerApp_INTERFACE_DEFINED__ */


#ifndef __IMessengerIMWindow_INTERFACE_DEFINED__
#define __IMessengerIMWindow_INTERFACE_DEFINED__

/* interface IMessengerIMWindow */
/* [object][oleautomation][dual][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IMessengerIMWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("35EDD1CD-1A8C-11d2-B49D-00C04FB90376")
    IMessengerIMWindow : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IMSession( 
            /* [retval][out] */ IMsgrIMSession __RPC_FAR *__RPC_FAR *ppIMSession) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_History( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrHistory) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE SendText( 
            /* [in] */ BSTR bstrSendText) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ToolBar( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolToolBar) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ToolBar( 
            /* [in] */ VARIANT_BOOL BoolToolBar) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StatusBar( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolStatusBar) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_StatusBar( 
            /* [in] */ VARIANT_BOOL BoolStatusBar) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StatusText( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrStatusText) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_StatusText( 
            /* [in] */ BSTR bstrStatusText) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HWND( 
            /* [retval][out] */ long __RPC_FAR *phWnd) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Left( 
            /* [retval][out] */ long __RPC_FAR *plLeft) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Left( 
            /* [in] */ long lLeft) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Top( 
            /* [retval][out] */ long __RPC_FAR *plTop) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Top( 
            /* [in] */ long lTop) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ long __RPC_FAR *plWidth) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ long lWidth) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Height( 
            /* [retval][out] */ long __RPC_FAR *plHeight) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Height( 
            /* [in] */ long lHeight) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Visible( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolVisible) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Visible( 
            /* [in] */ VARIANT_BOOL BoolVisible) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMessengerIMWindowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMessengerIMWindow __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMessengerIMWindow __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Application )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Parent )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IMSession )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [retval][out] */ IMsgrIMSession __RPC_FAR *__RPC_FAR *ppIMSession);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_History )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrHistory);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SendText )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [in] */ BSTR bstrSendText);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Close )( 
            IMessengerIMWindow __RPC_FAR * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ToolBar )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolToolBar);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ToolBar )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL BoolToolBar);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StatusBar )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolStatusBar);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_StatusBar )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL BoolStatusBar);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StatusText )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrStatusText);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_StatusText )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [in] */ BSTR bstrStatusText);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_HWND )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *phWnd);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Left )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *plLeft);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Left )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [in] */ long lLeft);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Top )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *plTop);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Top )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [in] */ long lTop);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Width )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *plWidth);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Width )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [in] */ long lWidth);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Height )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *plHeight);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Height )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [in] */ long lHeight);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Visible )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolVisible);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Visible )( 
            IMessengerIMWindow __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL BoolVisible);
        
        END_INTERFACE
    } IMessengerIMWindowVtbl;

    interface IMessengerIMWindow
    {
        CONST_VTBL struct IMessengerIMWindowVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessengerIMWindow_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMessengerIMWindow_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMessengerIMWindow_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMessengerIMWindow_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMessengerIMWindow_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMessengerIMWindow_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMessengerIMWindow_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMessengerIMWindow_get_Application(This,ppDisp)	\
    (This)->lpVtbl -> get_Application(This,ppDisp)

#define IMessengerIMWindow_get_Parent(This,ppDisp)	\
    (This)->lpVtbl -> get_Parent(This,ppDisp)

#define IMessengerIMWindow_get_IMSession(This,ppIMSession)	\
    (This)->lpVtbl -> get_IMSession(This,ppIMSession)

#define IMessengerIMWindow_get_History(This,pbstrHistory)	\
    (This)->lpVtbl -> get_History(This,pbstrHistory)

#define IMessengerIMWindow_SendText(This,bstrSendText)	\
    (This)->lpVtbl -> SendText(This,bstrSendText)

#define IMessengerIMWindow_Close(This)	\
    (This)->lpVtbl -> Close(This)

#define IMessengerIMWindow_get_ToolBar(This,pBoolToolBar)	\
    (This)->lpVtbl -> get_ToolBar(This,pBoolToolBar)

#define IMessengerIMWindow_put_ToolBar(This,BoolToolBar)	\
    (This)->lpVtbl -> put_ToolBar(This,BoolToolBar)

#define IMessengerIMWindow_get_StatusBar(This,pBoolStatusBar)	\
    (This)->lpVtbl -> get_StatusBar(This,pBoolStatusBar)

#define IMessengerIMWindow_put_StatusBar(This,BoolStatusBar)	\
    (This)->lpVtbl -> put_StatusBar(This,BoolStatusBar)

#define IMessengerIMWindow_get_StatusText(This,pbstrStatusText)	\
    (This)->lpVtbl -> get_StatusText(This,pbstrStatusText)

#define IMessengerIMWindow_put_StatusText(This,bstrStatusText)	\
    (This)->lpVtbl -> put_StatusText(This,bstrStatusText)

#define IMessengerIMWindow_get_HWND(This,phWnd)	\
    (This)->lpVtbl -> get_HWND(This,phWnd)

#define IMessengerIMWindow_get_Left(This,plLeft)	\
    (This)->lpVtbl -> get_Left(This,plLeft)

#define IMessengerIMWindow_put_Left(This,lLeft)	\
    (This)->lpVtbl -> put_Left(This,lLeft)

#define IMessengerIMWindow_get_Top(This,plTop)	\
    (This)->lpVtbl -> get_Top(This,plTop)

#define IMessengerIMWindow_put_Top(This,lTop)	\
    (This)->lpVtbl -> put_Top(This,lTop)

#define IMessengerIMWindow_get_Width(This,plWidth)	\
    (This)->lpVtbl -> get_Width(This,plWidth)

#define IMessengerIMWindow_put_Width(This,lWidth)	\
    (This)->lpVtbl -> put_Width(This,lWidth)

#define IMessengerIMWindow_get_Height(This,plHeight)	\
    (This)->lpVtbl -> get_Height(This,plHeight)

#define IMessengerIMWindow_put_Height(This,lHeight)	\
    (This)->lpVtbl -> put_Height(This,lHeight)

#define IMessengerIMWindow_get_Visible(This,pBoolVisible)	\
    (This)->lpVtbl -> get_Visible(This,pBoolVisible)

#define IMessengerIMWindow_put_Visible(This,BoolVisible)	\
    (This)->lpVtbl -> put_Visible(This,BoolVisible)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindow_get_Application_Proxy( 
    IMessengerIMWindow __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);


void __RPC_STUB IMessengerIMWindow_get_Application_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindow_get_Parent_Proxy( 
    IMessengerIMWindow __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);


void __RPC_STUB IMessengerIMWindow_get_Parent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindow_get_IMSession_Proxy( 
    IMessengerIMWindow __RPC_FAR * This,
    /* [retval][out] */ IMsgrIMSession __RPC_FAR *__RPC_FAR *ppIMSession);


void __RPC_STUB IMessengerIMWindow_get_IMSession_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindow_get_History_Proxy( 
    IMessengerIMWindow __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrHistory);


void __RPC_STUB IMessengerIMWindow_get_History_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindow_SendText_Proxy( 
    IMessengerIMWindow __RPC_FAR * This,
    /* [in] */ BSTR bstrSendText);


void __RPC_STUB IMessengerIMWindow_SendText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindow_Close_Proxy( 
    IMessengerIMWindow __RPC_FAR * This);


void __RPC_STUB IMessengerIMWindow_Close_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindow_get_ToolBar_Proxy( 
    IMessengerIMWindow __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolToolBar);


void __RPC_STUB IMessengerIMWindow_get_ToolBar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindow_put_ToolBar_Proxy( 
    IMessengerIMWindow __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL BoolToolBar);


void __RPC_STUB IMessengerIMWindow_put_ToolBar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindow_get_StatusBar_Proxy( 
    IMessengerIMWindow __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolStatusBar);


void __RPC_STUB IMessengerIMWindow_get_StatusBar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindow_put_StatusBar_Proxy( 
    IMessengerIMWindow __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL BoolStatusBar);


void __RPC_STUB IMessengerIMWindow_put_StatusBar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindow_get_StatusText_Proxy( 
    IMessengerIMWindow __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrStatusText);


void __RPC_STUB IMessengerIMWindow_get_StatusText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindow_put_StatusText_Proxy( 
    IMessengerIMWindow __RPC_FAR * This,
    /* [in] */ BSTR bstrStatusText);


void __RPC_STUB IMessengerIMWindow_put_StatusText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindow_get_HWND_Proxy( 
    IMessengerIMWindow __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *phWnd);


void __RPC_STUB IMessengerIMWindow_get_HWND_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindow_get_Left_Proxy( 
    IMessengerIMWindow __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *plLeft);


void __RPC_STUB IMessengerIMWindow_get_Left_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindow_put_Left_Proxy( 
    IMessengerIMWindow __RPC_FAR * This,
    /* [in] */ long lLeft);


void __RPC_STUB IMessengerIMWindow_put_Left_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindow_get_Top_Proxy( 
    IMessengerIMWindow __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *plTop);


void __RPC_STUB IMessengerIMWindow_get_Top_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindow_put_Top_Proxy( 
    IMessengerIMWindow __RPC_FAR * This,
    /* [in] */ long lTop);


void __RPC_STUB IMessengerIMWindow_put_Top_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindow_get_Width_Proxy( 
    IMessengerIMWindow __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *plWidth);


void __RPC_STUB IMessengerIMWindow_get_Width_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindow_put_Width_Proxy( 
    IMessengerIMWindow __RPC_FAR * This,
    /* [in] */ long lWidth);


void __RPC_STUB IMessengerIMWindow_put_Width_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindow_get_Height_Proxy( 
    IMessengerIMWindow __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *plHeight);


void __RPC_STUB IMessengerIMWindow_get_Height_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindow_put_Height_Proxy( 
    IMessengerIMWindow __RPC_FAR * This,
    /* [in] */ long lHeight);


void __RPC_STUB IMessengerIMWindow_put_Height_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindow_get_Visible_Proxy( 
    IMessengerIMWindow __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolVisible);


void __RPC_STUB IMessengerIMWindow_get_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindow_put_Visible_Proxy( 
    IMessengerIMWindow __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL BoolVisible);


void __RPC_STUB IMessengerIMWindow_put_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMessengerIMWindow_INTERFACE_DEFINED__ */


#ifndef __IMessengerIMWindows_INTERFACE_DEFINED__
#define __IMessengerIMWindows_INTERFACE_DEFINED__

/* interface IMessengerIMWindows */
/* [object][oleautomation][dual][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IMessengerIMWindows;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("35EDD1CC-1A8C-11d2-B49D-00C04FB90376")
    IMessengerIMWindows : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long __RPC_FAR *pcWindows) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ long Index,
            /* [retval][out] */ IMessengerIMWindow __RPC_FAR *__RPC_FAR *ppIMWindow) = 0;
        
        virtual /* [helpcontext][helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMessengerIMWindowsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMessengerIMWindows __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMessengerIMWindows __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMessengerIMWindows __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMessengerIMWindows __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMessengerIMWindows __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMessengerIMWindows __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMessengerIMWindows __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )( 
            IMessengerIMWindows __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pcWindows);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Item )( 
            IMessengerIMWindows __RPC_FAR * This,
            /* [in] */ long Index,
            /* [retval][out] */ IMessengerIMWindow __RPC_FAR *__RPC_FAR *ppIMWindow);
        
        /* [helpcontext][helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__NewEnum )( 
            IMessengerIMWindows __RPC_FAR * This,
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown);
        
        END_INTERFACE
    } IMessengerIMWindowsVtbl;

    interface IMessengerIMWindows
    {
        CONST_VTBL struct IMessengerIMWindowsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessengerIMWindows_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMessengerIMWindows_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMessengerIMWindows_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMessengerIMWindows_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMessengerIMWindows_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMessengerIMWindows_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMessengerIMWindows_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMessengerIMWindows_get_Count(This,pcWindows)	\
    (This)->lpVtbl -> get_Count(This,pcWindows)

#define IMessengerIMWindows_Item(This,Index,ppIMWindow)	\
    (This)->lpVtbl -> Item(This,Index,ppIMWindow)

#define IMessengerIMWindows_get__NewEnum(This,ppUnknown)	\
    (This)->lpVtbl -> get__NewEnum(This,ppUnknown)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindows_get_Count_Proxy( 
    IMessengerIMWindows __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pcWindows);


void __RPC_STUB IMessengerIMWindows_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindows_Item_Proxy( 
    IMessengerIMWindows __RPC_FAR * This,
    /* [in] */ long Index,
    /* [retval][out] */ IMessengerIMWindow __RPC_FAR *__RPC_FAR *ppIMWindow);


void __RPC_STUB IMessengerIMWindows_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE IMessengerIMWindows_get__NewEnum_Proxy( 
    IMessengerIMWindows __RPC_FAR * This,
    /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown);


void __RPC_STUB IMessengerIMWindows_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMessengerIMWindows_INTERFACE_DEFINED__ */


#ifndef __IMsgrOE_INTERFACE_DEFINED__
#define __IMsgrOE_INTERFACE_DEFINED__

/* interface IMsgrOE */
/* [object][oleautomation][hidden][helpstring][uuid] */ 


EXTERN_C const IID IID_IMsgrOE;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("59EC0340-7506-11d2-B05F-00C04F7F89FE")
    IMsgrOE : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateUser( 
            /* [in] */ BSTR bstrLogonName,
            /* [retval][out] */ IMsgrUserOE __RPC_FAR *__RPC_FAR *ppUserOE) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Logoff( void) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ContactList( 
            /* [retval][out] */ IMsgrUsersOE __RPC_FAR *__RPC_FAR *ppUsersOE) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LocalLogonName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_LocalState( 
            /* [in] */ MSTATEOE mStateOE) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LocalState( 
            /* [retval][out] */ MSTATEOE __RPC_FAR *pmStateOE) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AutoLogon( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LaunchLogonUI( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LaunchOptionsUI( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LaunchAddContactUI( 
            /* [in] */ BSTR bstrEMail) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LaunchIMUI( 
            /* [in] */ VARIANT vUser) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AdviseOE( 
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [out] */ long __RPC_FAR *plCookie) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnadviseOE( 
            /* [in] */ long lCookie) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMsgrOEVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMsgrOE __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMsgrOE __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMsgrOE __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateUser )( 
            IMsgrOE __RPC_FAR * This,
            /* [in] */ BSTR bstrLogonName,
            /* [retval][out] */ IMsgrUserOE __RPC_FAR *__RPC_FAR *ppUserOE);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Logoff )( 
            IMsgrOE __RPC_FAR * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ContactList )( 
            IMsgrOE __RPC_FAR * This,
            /* [retval][out] */ IMsgrUsersOE __RPC_FAR *__RPC_FAR *ppUsersOE);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LocalLogonName )( 
            IMsgrOE __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_LocalState )( 
            IMsgrOE __RPC_FAR * This,
            /* [in] */ MSTATEOE mStateOE);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LocalState )( 
            IMsgrOE __RPC_FAR * This,
            /* [retval][out] */ MSTATEOE __RPC_FAR *pmStateOE);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AutoLogon )( 
            IMsgrOE __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LaunchLogonUI )( 
            IMsgrOE __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LaunchOptionsUI )( 
            IMsgrOE __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LaunchAddContactUI )( 
            IMsgrOE __RPC_FAR * This,
            /* [in] */ BSTR bstrEMail);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LaunchIMUI )( 
            IMsgrOE __RPC_FAR * This,
            /* [in] */ VARIANT vUser);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AdviseOE )( 
            IMsgrOE __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [out] */ long __RPC_FAR *plCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *UnadviseOE )( 
            IMsgrOE __RPC_FAR * This,
            /* [in] */ long lCookie);
        
        END_INTERFACE
    } IMsgrOEVtbl;

    interface IMsgrOE
    {
        CONST_VTBL struct IMsgrOEVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsgrOE_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMsgrOE_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMsgrOE_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMsgrOE_CreateUser(This,bstrLogonName,ppUserOE)	\
    (This)->lpVtbl -> CreateUser(This,bstrLogonName,ppUserOE)

#define IMsgrOE_Logoff(This)	\
    (This)->lpVtbl -> Logoff(This)

#define IMsgrOE_get_ContactList(This,ppUsersOE)	\
    (This)->lpVtbl -> get_ContactList(This,ppUsersOE)

#define IMsgrOE_get_LocalLogonName(This,pbstrName)	\
    (This)->lpVtbl -> get_LocalLogonName(This,pbstrName)

#define IMsgrOE_put_LocalState(This,mStateOE)	\
    (This)->lpVtbl -> put_LocalState(This,mStateOE)

#define IMsgrOE_get_LocalState(This,pmStateOE)	\
    (This)->lpVtbl -> get_LocalState(This,pmStateOE)

#define IMsgrOE_AutoLogon(This)	\
    (This)->lpVtbl -> AutoLogon(This)

#define IMsgrOE_LaunchLogonUI(This)	\
    (This)->lpVtbl -> LaunchLogonUI(This)

#define IMsgrOE_LaunchOptionsUI(This)	\
    (This)->lpVtbl -> LaunchOptionsUI(This)

#define IMsgrOE_LaunchAddContactUI(This,bstrEMail)	\
    (This)->lpVtbl -> LaunchAddContactUI(This,bstrEMail)

#define IMsgrOE_LaunchIMUI(This,vUser)	\
    (This)->lpVtbl -> LaunchIMUI(This,vUser)

#define IMsgrOE_AdviseOE(This,pUnk,plCookie)	\
    (This)->lpVtbl -> AdviseOE(This,pUnk,plCookie)

#define IMsgrOE_UnadviseOE(This,lCookie)	\
    (This)->lpVtbl -> UnadviseOE(This,lCookie)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrOE_CreateUser_Proxy( 
    IMsgrOE __RPC_FAR * This,
    /* [in] */ BSTR bstrLogonName,
    /* [retval][out] */ IMsgrUserOE __RPC_FAR *__RPC_FAR *ppUserOE);


void __RPC_STUB IMsgrOE_CreateUser_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrOE_Logoff_Proxy( 
    IMsgrOE __RPC_FAR * This);


void __RPC_STUB IMsgrOE_Logoff_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrOE_get_ContactList_Proxy( 
    IMsgrOE __RPC_FAR * This,
    /* [retval][out] */ IMsgrUsersOE __RPC_FAR *__RPC_FAR *ppUsersOE);


void __RPC_STUB IMsgrOE_get_ContactList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrOE_get_LocalLogonName_Proxy( 
    IMsgrOE __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrName);


void __RPC_STUB IMsgrOE_get_LocalLogonName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IMsgrOE_put_LocalState_Proxy( 
    IMsgrOE __RPC_FAR * This,
    /* [in] */ MSTATEOE mStateOE);


void __RPC_STUB IMsgrOE_put_LocalState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE IMsgrOE_get_LocalState_Proxy( 
    IMsgrOE __RPC_FAR * This,
    /* [retval][out] */ MSTATEOE __RPC_FAR *pmStateOE);


void __RPC_STUB IMsgrOE_get_LocalState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrOE_AutoLogon_Proxy( 
    IMsgrOE __RPC_FAR * This);


void __RPC_STUB IMsgrOE_AutoLogon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrOE_LaunchLogonUI_Proxy( 
    IMsgrOE __RPC_FAR * This);


void __RPC_STUB IMsgrOE_LaunchLogonUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrOE_LaunchOptionsUI_Proxy( 
    IMsgrOE __RPC_FAR * This);


void __RPC_STUB IMsgrOE_LaunchOptionsUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrOE_LaunchAddContactUI_Proxy( 
    IMsgrOE __RPC_FAR * This,
    /* [in] */ BSTR bstrEMail);


void __RPC_STUB IMsgrOE_LaunchAddContactUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrOE_LaunchIMUI_Proxy( 
    IMsgrOE __RPC_FAR * This,
    /* [in] */ VARIANT vUser);


void __RPC_STUB IMsgrOE_LaunchIMUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrOE_AdviseOE_Proxy( 
    IMsgrOE __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pUnk,
    /* [out] */ long __RPC_FAR *plCookie);


void __RPC_STUB IMsgrOE_AdviseOE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrOE_UnadviseOE_Proxy( 
    IMsgrOE __RPC_FAR * This,
    /* [in] */ long lCookie);


void __RPC_STUB IMsgrOE_UnadviseOE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMsgrOE_INTERFACE_DEFINED__ */


#ifndef __IMsgrUserOE_INTERFACE_DEFINED__
#define __IMsgrUserOE_INTERFACE_DEFINED__

/* interface IMsgrUserOE */
/* [object][oleautomation][hidden][helpstring][uuid] */ 


EXTERN_C const IID IID_IMsgrUserOE;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("59EC0342-7506-11d2-B05F-00C04F7F89FE")
    IMsgrUserOE : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FriendlyName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrFriendlyName) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ MSTATEOE __RPC_FAR *pmStateOE) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LogonName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrLogonName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMsgrUserOEVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMsgrUserOE __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMsgrUserOE __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMsgrUserOE __RPC_FAR * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_FriendlyName )( 
            IMsgrUserOE __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrFriendlyName);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_State )( 
            IMsgrUserOE __RPC_FAR * This,
            /* [retval][out] */ MSTATEOE __RPC_FAR *pmStateOE);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LogonName )( 
            IMsgrUserOE __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrLogonName);
        
        END_INTERFACE
    } IMsgrUserOEVtbl;

    interface IMsgrUserOE
    {
        CONST_VTBL struct IMsgrUserOEVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsgrUserOE_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMsgrUserOE_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMsgrUserOE_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMsgrUserOE_get_FriendlyName(This,pbstrFriendlyName)	\
    (This)->lpVtbl -> get_FriendlyName(This,pbstrFriendlyName)

#define IMsgrUserOE_get_State(This,pmStateOE)	\
    (This)->lpVtbl -> get_State(This,pmStateOE)

#define IMsgrUserOE_get_LogonName(This,pbstrLogonName)	\
    (This)->lpVtbl -> get_LogonName(This,pbstrLogonName)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget] */ HRESULT STDMETHODCALLTYPE IMsgrUserOE_get_FriendlyName_Proxy( 
    IMsgrUserOE __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrFriendlyName);


void __RPC_STUB IMsgrUserOE_get_FriendlyName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrUserOE_get_State_Proxy( 
    IMsgrUserOE __RPC_FAR * This,
    /* [retval][out] */ MSTATEOE __RPC_FAR *pmStateOE);


void __RPC_STUB IMsgrUserOE_get_State_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrUserOE_get_LogonName_Proxy( 
    IMsgrUserOE __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrLogonName);


void __RPC_STUB IMsgrUserOE_get_LogonName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMsgrUserOE_INTERFACE_DEFINED__ */


#ifndef __IMsgrUsersOE_INTERFACE_DEFINED__
#define __IMsgrUsersOE_INTERFACE_DEFINED__

/* interface IMsgrUsersOE */
/* [object][oleautomation][hidden][helpstring][uuid] */ 


EXTERN_C const IID IID_IMsgrUsersOE;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("59EC0343-7506-11d2-B05F-00C04F7F89FE")
    IMsgrUsersOE : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long __RPC_FAR *pcUsers) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ long Index,
            /* [retval][out] */ IMsgrUserOE __RPC_FAR *__RPC_FAR *ppUserOE) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IMsgrUserOE __RPC_FAR *pUserOE) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ IMsgrUserOE __RPC_FAR *pUserOE) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMsgrUsersOEVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMsgrUsersOE __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMsgrUsersOE __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMsgrUsersOE __RPC_FAR * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )( 
            IMsgrUsersOE __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pcUsers);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Item )( 
            IMsgrUsersOE __RPC_FAR * This,
            /* [in] */ long Index,
            /* [retval][out] */ IMsgrUserOE __RPC_FAR *__RPC_FAR *ppUserOE);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Add )( 
            IMsgrUsersOE __RPC_FAR * This,
            /* [in] */ IMsgrUserOE __RPC_FAR *pUserOE);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Remove )( 
            IMsgrUsersOE __RPC_FAR * This,
            /* [in] */ IMsgrUserOE __RPC_FAR *pUserOE);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__NewEnum )( 
            IMsgrUsersOE __RPC_FAR * This,
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown);
        
        END_INTERFACE
    } IMsgrUsersOEVtbl;

    interface IMsgrUsersOE
    {
        CONST_VTBL struct IMsgrUsersOEVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsgrUsersOE_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMsgrUsersOE_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMsgrUsersOE_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMsgrUsersOE_get_Count(This,pcUsers)	\
    (This)->lpVtbl -> get_Count(This,pcUsers)

#define IMsgrUsersOE_Item(This,Index,ppUserOE)	\
    (This)->lpVtbl -> Item(This,Index,ppUserOE)

#define IMsgrUsersOE_Add(This,pUserOE)	\
    (This)->lpVtbl -> Add(This,pUserOE)

#define IMsgrUsersOE_Remove(This,pUserOE)	\
    (This)->lpVtbl -> Remove(This,pUserOE)

#define IMsgrUsersOE_get__NewEnum(This,ppUnknown)	\
    (This)->lpVtbl -> get__NewEnum(This,ppUnknown)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrUsersOE_get_Count_Proxy( 
    IMsgrUsersOE __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pcUsers);


void __RPC_STUB IMsgrUsersOE_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrUsersOE_Item_Proxy( 
    IMsgrUsersOE __RPC_FAR * This,
    /* [in] */ long Index,
    /* [retval][out] */ IMsgrUserOE __RPC_FAR *__RPC_FAR *ppUserOE);


void __RPC_STUB IMsgrUsersOE_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrUsersOE_Add_Proxy( 
    IMsgrUsersOE __RPC_FAR * This,
    /* [in] */ IMsgrUserOE __RPC_FAR *pUserOE);


void __RPC_STUB IMsgrUsersOE_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrUsersOE_Remove_Proxy( 
    IMsgrUsersOE __RPC_FAR * This,
    /* [in] */ IMsgrUserOE __RPC_FAR *pUserOE);


void __RPC_STUB IMsgrUsersOE_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE IMsgrUsersOE_get__NewEnum_Proxy( 
    IMsgrUsersOE __RPC_FAR * This,
    /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown);


void __RPC_STUB IMsgrUsersOE_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMsgrUsersOE_INTERFACE_DEFINED__ */


#ifndef __IMsgrServices_INTERFACE_DEFINED__
#define __IMsgrServices_INTERFACE_DEFINED__

/* interface IMsgrServices */
/* [object][oleautomation][dual][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IMsgrServices;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("659ECAD8-A5C0-11d2-A440-00C04F795683")
    IMsgrServices : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PrimaryService( 
            /* [in] */ IMsgrService __RPC_FAR *pService) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PrimaryService( 
            /* [retval][out] */ IMsgrService __RPC_FAR *__RPC_FAR *ppService) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long __RPC_FAR *pcServices) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ long Index,
            /* [retval][out] */ IMsgrService __RPC_FAR *__RPC_FAR *ppService) = 0;
        
        virtual /* [helpcontext][helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMsgrServicesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMsgrServices __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMsgrServices __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMsgrServices __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMsgrServices __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMsgrServices __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMsgrServices __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMsgrServices __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_PrimaryService )( 
            IMsgrServices __RPC_FAR * This,
            /* [in] */ IMsgrService __RPC_FAR *pService);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_PrimaryService )( 
            IMsgrServices __RPC_FAR * This,
            /* [retval][out] */ IMsgrService __RPC_FAR *__RPC_FAR *ppService);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )( 
            IMsgrServices __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pcServices);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Item )( 
            IMsgrServices __RPC_FAR * This,
            /* [in] */ long Index,
            /* [retval][out] */ IMsgrService __RPC_FAR *__RPC_FAR *ppService);
        
        /* [helpcontext][helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__NewEnum )( 
            IMsgrServices __RPC_FAR * This,
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown);
        
        END_INTERFACE
    } IMsgrServicesVtbl;

    interface IMsgrServices
    {
        CONST_VTBL struct IMsgrServicesVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsgrServices_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMsgrServices_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMsgrServices_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMsgrServices_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMsgrServices_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMsgrServices_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMsgrServices_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMsgrServices_put_PrimaryService(This,pService)	\
    (This)->lpVtbl -> put_PrimaryService(This,pService)

#define IMsgrServices_get_PrimaryService(This,ppService)	\
    (This)->lpVtbl -> get_PrimaryService(This,ppService)

#define IMsgrServices_get_Count(This,pcServices)	\
    (This)->lpVtbl -> get_Count(This,pcServices)

#define IMsgrServices_Item(This,Index,ppService)	\
    (This)->lpVtbl -> Item(This,Index,ppService)

#define IMsgrServices_get__NewEnum(This,ppUnknown)	\
    (This)->lpVtbl -> get__NewEnum(This,ppUnknown)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE IMsgrServices_put_PrimaryService_Proxy( 
    IMsgrServices __RPC_FAR * This,
    /* [in] */ IMsgrService __RPC_FAR *pService);


void __RPC_STUB IMsgrServices_put_PrimaryService_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE IMsgrServices_get_PrimaryService_Proxy( 
    IMsgrServices __RPC_FAR * This,
    /* [retval][out] */ IMsgrService __RPC_FAR *__RPC_FAR *ppService);


void __RPC_STUB IMsgrServices_get_PrimaryService_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrServices_get_Count_Proxy( 
    IMsgrServices __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pcServices);


void __RPC_STUB IMsgrServices_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMsgrServices_Item_Proxy( 
    IMsgrServices __RPC_FAR * This,
    /* [in] */ long Index,
    /* [retval][out] */ IMsgrService __RPC_FAR *__RPC_FAR *ppService);


void __RPC_STUB IMsgrServices_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE IMsgrServices_get__NewEnum_Proxy( 
    IMsgrServices __RPC_FAR * This,
    /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown);


void __RPC_STUB IMsgrServices_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMsgrServices_INTERFACE_DEFINED__ */


#ifndef __IMsgrService_INTERFACE_DEFINED__
#define __IMsgrService_INTERFACE_DEFINED__

/* interface IMsgrService */
/* [object][oleautomation][dual][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IMsgrService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("659ECAD9-A5C0-11d2-A440-00C04F795683")
    IMsgrService : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ServiceName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrServiceName) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LogonName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FriendlyName( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FriendlyName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Capabilities( 
            /* [retval][out] */ LONG __RPC_FAR *plCapabilities) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ MSVCSTATUS __RPC_FAR *pmStatus) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Logoff( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE FindUser( 
            /* [in] */ BSTR bstrFirstName,
            /* [in] */ BSTR bstrLastName,
            /* [in] */ BSTR bstrCity,
            /* [in] */ BSTR bstrState,
            /* [in] */ BSTR bstrCountry,
            /* [out] */ LONG __RPC_FAR *plCookie) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SendInviteMail( 
            /* [in] */ BSTR bstrEmailAddress,
            /* [in] */ LONG lFindCookie,
            /* [in] */ LONG lFindIndex,
            /* [out] */ LONG __RPC_FAR *plCookie) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE RequestURL( 
            /* [in] */ MURLTYPE muType,
            /* [in] */ BSTR bstrAdditionalInfo,
            /* [out] */ LONG __RPC_FAR *plCookie) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ProfileField( 
            /* [in] */ MPFLFIELD mpflField,
            /* [in] */ VARIANT vFieldValue) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ProfileField( 
            /* [in] */ MPFLFIELD mpflField,
            /* [retval][out] */ VARIANT __RPC_FAR *pvFieldValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMsgrServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMsgrService __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMsgrService __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMsgrService __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMsgrService __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMsgrService __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMsgrService __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMsgrService __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ServiceName )( 
            IMsgrService __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrServiceName);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LogonName )( 
            IMsgrService __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_FriendlyName )( 
            IMsgrService __RPC_FAR * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_FriendlyName )( 
            IMsgrService __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            IMsgrService __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *plCapabilities);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Status )( 
            IMsgrService __RPC_FAR * This,
            /* [retval][out] */ MSVCSTATUS __RPC_FAR *pmStatus);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Logoff )( 
            IMsgrService __RPC_FAR * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindUser )( 
            IMsgrService __RPC_FAR * This,
            /* [in] */ BSTR bstrFirstName,
            /* [in] */ BSTR bstrLastName,
            /* [in] */ BSTR bstrCity,
            /* [in] */ BSTR bstrState,
            /* [in] */ BSTR bstrCountry,
            /* [out] */ LONG __RPC_FAR *plCookie);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SendInviteMail )( 
            IMsgrService __RPC_FAR * This,
            /* [in] */ BSTR bstrEmailAddress,
            /* [in] */ LONG lFindCookie,
            /* [in] */ LONG lFindIndex,
            /* [out] */ LONG __RPC_FAR *plCookie);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RequestURL )( 
            IMsgrService __RPC_FAR * This,
            /* [in] */ MURLTYPE muType,
            /* [in] */ BSTR bstrAdditionalInfo,
            /* [out] */ LONG __RPC_FAR *plCookie);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ProfileField )( 
            IMsgrService __RPC_FAR * This,
            /* [in] */ MPFLFIELD mpflField,
            /* [in] */ VARIANT vFieldValue);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ProfileField )( 
            IMsgrService __RPC_FAR * This,
            /* [in] */ MPFLFIELD mpflField,
            /* [retval][out] */ VARIANT __RPC_FAR *pvFieldValue);
        
        END_INTERFACE
    } IMsgrServiceVtbl;

    interface IMsgrService
    {
        CONST_VTBL struct IMsgrServiceVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsgrService_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMsgrService_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMsgrService_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMsgrService_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMsgrService_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMsgrService_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMsgrService_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMsgrService_get_ServiceName(This,pbstrServiceName)	\
    (This)->lpVtbl -> get_ServiceName(This,pbstrServiceName)

#define IMsgrService_get_LogonName(This,pbstrName)	\
    (This)->lpVtbl -> get_LogonName(This,pbstrName)

#define IMsgrService_put_FriendlyName(This,bstrName)	\
    (This)->lpVtbl -> put_FriendlyName(This,bstrName)

#define IMsgrService_get_FriendlyName(This,pbstrName)	\
    (This)->lpVtbl -> get_FriendlyName(This,pbstrName)

#define IMsgrService_get_Capabilities(This,plCapabilities)	\
    (This)->lpVtbl -> get_Capabilities(This,plCapabilities)

#define IMsgrService_get_Status(This,pmStatus)	\
    (This)->lpVtbl -> get_Status(This,pmStatus)

#define IMsgrService_Logoff(This)	\
    (This)->lpVtbl -> Logoff(This)

#define IMsgrService_FindUser(This,bstrFirstName,bstrLastName,bstrCity,bstrState,bstrCountry,plCookie)	\
    (This)->lpVtbl -> FindUser(This,bstrFirstName,bstrLastName,bstrCity,bstrState,bstrCountry,plCookie)

#define IMsgrService_SendInviteMail(This,bstrEmailAddress,lFindCookie,lFindIndex,plCookie)	\
    (This)->lpVtbl -> SendInviteMail(This,bstrEmailAddress,lFindCookie,lFindIndex,plCookie)

#define IMsgrService_RequestURL(This,muType,bstrAdditionalInfo,plCookie)	\
    (This)->lpVtbl -> RequestURL(This,muType,bstrAdditionalInfo,plCookie)

#define IMsgrService_put_ProfileField(This,mpflField,vFieldValue)	\
    (This)->lpVtbl -> put_ProfileField(This,mpflField,vFieldValue)

#define IMsgrService_get_ProfileField(This,mpflField,pvFieldValue)	\
    (This)->lpVtbl -> get_ProfileField(This,mpflField,pvFieldValue)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrService_get_ServiceName_Proxy( 
    IMsgrService __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrServiceName);


void __RPC_STUB IMsgrService_get_ServiceName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrService_get_LogonName_Proxy( 
    IMsgrService __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrName);


void __RPC_STUB IMsgrService_get_LogonName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE IMsgrService_put_FriendlyName_Proxy( 
    IMsgrService __RPC_FAR * This,
    /* [in] */ BSTR bstrName);


void __RPC_STUB IMsgrService_put_FriendlyName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrService_get_FriendlyName_Proxy( 
    IMsgrService __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrName);


void __RPC_STUB IMsgrService_get_FriendlyName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrService_get_Capabilities_Proxy( 
    IMsgrService __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *plCapabilities);


void __RPC_STUB IMsgrService_get_Capabilities_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrService_get_Status_Proxy( 
    IMsgrService __RPC_FAR * This,
    /* [retval][out] */ MSVCSTATUS __RPC_FAR *pmStatus);


void __RPC_STUB IMsgrService_get_Status_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE IMsgrService_Logoff_Proxy( 
    IMsgrService __RPC_FAR * This);


void __RPC_STUB IMsgrService_Logoff_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE IMsgrService_FindUser_Proxy( 
    IMsgrService __RPC_FAR * This,
    /* [in] */ BSTR bstrFirstName,
    /* [in] */ BSTR bstrLastName,
    /* [in] */ BSTR bstrCity,
    /* [in] */ BSTR bstrState,
    /* [in] */ BSTR bstrCountry,
    /* [out] */ LONG __RPC_FAR *plCookie);


void __RPC_STUB IMsgrService_FindUser_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE IMsgrService_SendInviteMail_Proxy( 
    IMsgrService __RPC_FAR * This,
    /* [in] */ BSTR bstrEmailAddress,
    /* [in] */ LONG lFindCookie,
    /* [in] */ LONG lFindIndex,
    /* [out] */ LONG __RPC_FAR *plCookie);


void __RPC_STUB IMsgrService_SendInviteMail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE IMsgrService_RequestURL_Proxy( 
    IMsgrService __RPC_FAR * This,
    /* [in] */ MURLTYPE muType,
    /* [in] */ BSTR bstrAdditionalInfo,
    /* [out] */ LONG __RPC_FAR *plCookie);


void __RPC_STUB IMsgrService_RequestURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE IMsgrService_put_ProfileField_Proxy( 
    IMsgrService __RPC_FAR * This,
    /* [in] */ MPFLFIELD mpflField,
    /* [in] */ VARIANT vFieldValue);


void __RPC_STUB IMsgrService_put_ProfileField_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrService_get_ProfileField_Proxy( 
    IMsgrService __RPC_FAR * This,
    /* [in] */ MPFLFIELD mpflField,
    /* [retval][out] */ VARIANT __RPC_FAR *pvFieldValue);


void __RPC_STUB IMsgrService_get_ProfileField_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMsgrService_INTERFACE_DEFINED__ */


#ifndef __DMsgrObjectEvents_DISPINTERFACE_DEFINED__
#define __DMsgrObjectEvents_DISPINTERFACE_DEFINED__

/* dispinterface DMsgrObjectEvents */
/* [hidden][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID DIID_DMsgrObjectEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("218CB452-20B6-11d2-8E17-0000F803A446")
    DMsgrObjectEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DMsgrObjectEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            DMsgrObjectEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            DMsgrObjectEvents __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            DMsgrObjectEvents __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            DMsgrObjectEvents __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            DMsgrObjectEvents __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            DMsgrObjectEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            DMsgrObjectEvents __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } DMsgrObjectEventsVtbl;

    interface DMsgrObjectEvents
    {
        CONST_VTBL struct DMsgrObjectEventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DMsgrObjectEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define DMsgrObjectEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define DMsgrObjectEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define DMsgrObjectEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define DMsgrObjectEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define DMsgrObjectEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define DMsgrObjectEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DMsgrObjectEvents_DISPINTERFACE_DEFINED__ */


#ifndef __DMsgrOEEvents_DISPINTERFACE_DEFINED__
#define __DMsgrOEEvents_DISPINTERFACE_DEFINED__

/* dispinterface DMsgrOEEvents */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID_DMsgrOEEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("59EC0341-7506-11d2-B05F-00C04F7F89FE")
    DMsgrOEEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DMsgrOEEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            DMsgrOEEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            DMsgrOEEvents __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            DMsgrOEEvents __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            DMsgrOEEvents __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            DMsgrOEEvents __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            DMsgrOEEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            DMsgrOEEvents __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } DMsgrOEEventsVtbl;

    interface DMsgrOEEvents
    {
        CONST_VTBL struct DMsgrOEEventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DMsgrOEEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define DMsgrOEEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define DMsgrOEEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define DMsgrOEEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define DMsgrOEEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define DMsgrOEEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define DMsgrOEEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DMsgrOEEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IMsgrSP_INTERFACE_DEFINED__
#define __IMsgrSP_INTERFACE_DEFINED__

/* interface IMsgrSP */
/* [object][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IMsgrSP;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E5B42158-AF2C-11d2-8D9D-0000F875C541")
    IMsgrSP : public IMsgrService
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Logon( 
            /* [in] */ BSTR bstrUser,
            /* [in] */ BSTR bstrPassword) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE CreateUser( 
            /* [in] */ BSTR bstrLogonName,
            /* [retval][out] */ IMsgrUser __RPC_FAR *__RPC_FAR *ppUser) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_List( 
            /* [in] */ MLIST mList,
            /* [retval][out] */ IMsgrUsers __RPC_FAR *__RPC_FAR *ppUsers) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MessagePrivacy( 
            /* [in] */ MMSGPRIVACY mmpSetting) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MessagePrivacy( 
            /* [retval][out] */ MMSGPRIVACY __RPC_FAR *pmmpSetting) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Prompt( 
            /* [in] */ MPROMPT mpSetting) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Prompt( 
            /* [retval][out] */ MPROMPT __RPC_FAR *pmpSetting) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_LocalState( 
            /* [in] */ MSTATE mState) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LocalState( 
            /* [retval][out] */ MSTATE __RPC_FAR *pmState) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE AddBuddy( 
            /* [in] */ IMsgrUser __RPC_FAR *pBuddy,
            /* [in] */ MLIST mList) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE RemoveBuddy( 
            /* [in] */ IMsgrUser __RPC_FAR *pBuddy,
            /* [in] */ MLIST mList) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE CreateIMSession( 
            /* [in] */ IMsgrUser __RPC_FAR *pUser,
            /* [retval][out] */ IMsgrIMSession __RPC_FAR *__RPC_FAR *ppIMSession) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IMSessions( 
            /* [retval][out] */ IMsgrIMSessions __RPC_FAR *__RPC_FAR *ppIMSessions) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMsgrSPVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMsgrSP __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMsgrSP __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMsgrSP __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMsgrSP __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMsgrSP __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMsgrSP __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMsgrSP __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ServiceName )( 
            IMsgrSP __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrServiceName);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LogonName )( 
            IMsgrSP __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_FriendlyName )( 
            IMsgrSP __RPC_FAR * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_FriendlyName )( 
            IMsgrSP __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            IMsgrSP __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *plCapabilities);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Status )( 
            IMsgrSP __RPC_FAR * This,
            /* [retval][out] */ MSVCSTATUS __RPC_FAR *pmStatus);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Logoff )( 
            IMsgrSP __RPC_FAR * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindUser )( 
            IMsgrSP __RPC_FAR * This,
            /* [in] */ BSTR bstrFirstName,
            /* [in] */ BSTR bstrLastName,
            /* [in] */ BSTR bstrCity,
            /* [in] */ BSTR bstrState,
            /* [in] */ BSTR bstrCountry,
            /* [out] */ LONG __RPC_FAR *plCookie);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SendInviteMail )( 
            IMsgrSP __RPC_FAR * This,
            /* [in] */ BSTR bstrEmailAddress,
            /* [in] */ LONG lFindCookie,
            /* [in] */ LONG lFindIndex,
            /* [out] */ LONG __RPC_FAR *plCookie);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RequestURL )( 
            IMsgrSP __RPC_FAR * This,
            /* [in] */ MURLTYPE muType,
            /* [in] */ BSTR bstrAdditionalInfo,
            /* [out] */ LONG __RPC_FAR *plCookie);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ProfileField )( 
            IMsgrSP __RPC_FAR * This,
            /* [in] */ MPFLFIELD mpflField,
            /* [in] */ VARIANT vFieldValue);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ProfileField )( 
            IMsgrSP __RPC_FAR * This,
            /* [in] */ MPFLFIELD mpflField,
            /* [retval][out] */ VARIANT __RPC_FAR *pvFieldValue);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Logon )( 
            IMsgrSP __RPC_FAR * This,
            /* [in] */ BSTR bstrUser,
            /* [in] */ BSTR bstrPassword);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateUser )( 
            IMsgrSP __RPC_FAR * This,
            /* [in] */ BSTR bstrLogonName,
            /* [retval][out] */ IMsgrUser __RPC_FAR *__RPC_FAR *ppUser);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_List )( 
            IMsgrSP __RPC_FAR * This,
            /* [in] */ MLIST mList,
            /* [retval][out] */ IMsgrUsers __RPC_FAR *__RPC_FAR *ppUsers);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_MessagePrivacy )( 
            IMsgrSP __RPC_FAR * This,
            /* [in] */ MMSGPRIVACY mmpSetting);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MessagePrivacy )( 
            IMsgrSP __RPC_FAR * This,
            /* [retval][out] */ MMSGPRIVACY __RPC_FAR *pmmpSetting);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Prompt )( 
            IMsgrSP __RPC_FAR * This,
            /* [in] */ MPROMPT mpSetting);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Prompt )( 
            IMsgrSP __RPC_FAR * This,
            /* [retval][out] */ MPROMPT __RPC_FAR *pmpSetting);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_LocalState )( 
            IMsgrSP __RPC_FAR * This,
            /* [in] */ MSTATE mState);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LocalState )( 
            IMsgrSP __RPC_FAR * This,
            /* [retval][out] */ MSTATE __RPC_FAR *pmState);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddBuddy )( 
            IMsgrSP __RPC_FAR * This,
            /* [in] */ IMsgrUser __RPC_FAR *pBuddy,
            /* [in] */ MLIST mList);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RemoveBuddy )( 
            IMsgrSP __RPC_FAR * This,
            /* [in] */ IMsgrUser __RPC_FAR *pBuddy,
            /* [in] */ MLIST mList);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateIMSession )( 
            IMsgrSP __RPC_FAR * This,
            /* [in] */ IMsgrUser __RPC_FAR *pUser,
            /* [retval][out] */ IMsgrIMSession __RPC_FAR *__RPC_FAR *ppIMSession);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IMSessions )( 
            IMsgrSP __RPC_FAR * This,
            /* [retval][out] */ IMsgrIMSessions __RPC_FAR *__RPC_FAR *ppIMSessions);
        
        END_INTERFACE
    } IMsgrSPVtbl;

    interface IMsgrSP
    {
        CONST_VTBL struct IMsgrSPVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsgrSP_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMsgrSP_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMsgrSP_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMsgrSP_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMsgrSP_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMsgrSP_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMsgrSP_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMsgrSP_get_ServiceName(This,pbstrServiceName)	\
    (This)->lpVtbl -> get_ServiceName(This,pbstrServiceName)

#define IMsgrSP_get_LogonName(This,pbstrName)	\
    (This)->lpVtbl -> get_LogonName(This,pbstrName)

#define IMsgrSP_put_FriendlyName(This,bstrName)	\
    (This)->lpVtbl -> put_FriendlyName(This,bstrName)

#define IMsgrSP_get_FriendlyName(This,pbstrName)	\
    (This)->lpVtbl -> get_FriendlyName(This,pbstrName)

#define IMsgrSP_get_Capabilities(This,plCapabilities)	\
    (This)->lpVtbl -> get_Capabilities(This,plCapabilities)

#define IMsgrSP_get_Status(This,pmStatus)	\
    (This)->lpVtbl -> get_Status(This,pmStatus)

#define IMsgrSP_Logoff(This)	\
    (This)->lpVtbl -> Logoff(This)

#define IMsgrSP_FindUser(This,bstrFirstName,bstrLastName,bstrCity,bstrState,bstrCountry,plCookie)	\
    (This)->lpVtbl -> FindUser(This,bstrFirstName,bstrLastName,bstrCity,bstrState,bstrCountry,plCookie)

#define IMsgrSP_SendInviteMail(This,bstrEmailAddress,lFindCookie,lFindIndex,plCookie)	\
    (This)->lpVtbl -> SendInviteMail(This,bstrEmailAddress,lFindCookie,lFindIndex,plCookie)

#define IMsgrSP_RequestURL(This,muType,bstrAdditionalInfo,plCookie)	\
    (This)->lpVtbl -> RequestURL(This,muType,bstrAdditionalInfo,plCookie)

#define IMsgrSP_put_ProfileField(This,mpflField,vFieldValue)	\
    (This)->lpVtbl -> put_ProfileField(This,mpflField,vFieldValue)

#define IMsgrSP_get_ProfileField(This,mpflField,pvFieldValue)	\
    (This)->lpVtbl -> get_ProfileField(This,mpflField,pvFieldValue)


#define IMsgrSP_Logon(This,bstrUser,bstrPassword)	\
    (This)->lpVtbl -> Logon(This,bstrUser,bstrPassword)

#define IMsgrSP_CreateUser(This,bstrLogonName,ppUser)	\
    (This)->lpVtbl -> CreateUser(This,bstrLogonName,ppUser)

#define IMsgrSP_get_List(This,mList,ppUsers)	\
    (This)->lpVtbl -> get_List(This,mList,ppUsers)

#define IMsgrSP_put_MessagePrivacy(This,mmpSetting)	\
    (This)->lpVtbl -> put_MessagePrivacy(This,mmpSetting)

#define IMsgrSP_get_MessagePrivacy(This,pmmpSetting)	\
    (This)->lpVtbl -> get_MessagePrivacy(This,pmmpSetting)

#define IMsgrSP_put_Prompt(This,mpSetting)	\
    (This)->lpVtbl -> put_Prompt(This,mpSetting)

#define IMsgrSP_get_Prompt(This,pmpSetting)	\
    (This)->lpVtbl -> get_Prompt(This,pmpSetting)

#define IMsgrSP_put_LocalState(This,mState)	\
    (This)->lpVtbl -> put_LocalState(This,mState)

#define IMsgrSP_get_LocalState(This,pmState)	\
    (This)->lpVtbl -> get_LocalState(This,pmState)

#define IMsgrSP_AddBuddy(This,pBuddy,mList)	\
    (This)->lpVtbl -> AddBuddy(This,pBuddy,mList)

#define IMsgrSP_RemoveBuddy(This,pBuddy,mList)	\
    (This)->lpVtbl -> RemoveBuddy(This,pBuddy,mList)

#define IMsgrSP_CreateIMSession(This,pUser,ppIMSession)	\
    (This)->lpVtbl -> CreateIMSession(This,pUser,ppIMSession)

#define IMsgrSP_get_IMSessions(This,ppIMSessions)	\
    (This)->lpVtbl -> get_IMSessions(This,ppIMSessions)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE IMsgrSP_Logon_Proxy( 
    IMsgrSP __RPC_FAR * This,
    /* [in] */ BSTR bstrUser,
    /* [in] */ BSTR bstrPassword);


void __RPC_STUB IMsgrSP_Logon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE IMsgrSP_CreateUser_Proxy( 
    IMsgrSP __RPC_FAR * This,
    /* [in] */ BSTR bstrLogonName,
    /* [retval][out] */ IMsgrUser __RPC_FAR *__RPC_FAR *ppUser);


void __RPC_STUB IMsgrSP_CreateUser_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrSP_get_List_Proxy( 
    IMsgrSP __RPC_FAR * This,
    /* [in] */ MLIST mList,
    /* [retval][out] */ IMsgrUsers __RPC_FAR *__RPC_FAR *ppUsers);


void __RPC_STUB IMsgrSP_get_List_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE IMsgrSP_put_MessagePrivacy_Proxy( 
    IMsgrSP __RPC_FAR * This,
    /* [in] */ MMSGPRIVACY mmpSetting);


void __RPC_STUB IMsgrSP_put_MessagePrivacy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE IMsgrSP_get_MessagePrivacy_Proxy( 
    IMsgrSP __RPC_FAR * This,
    /* [retval][out] */ MMSGPRIVACY __RPC_FAR *pmmpSetting);


void __RPC_STUB IMsgrSP_get_MessagePrivacy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE IMsgrSP_put_Prompt_Proxy( 
    IMsgrSP __RPC_FAR * This,
    /* [in] */ MPROMPT mpSetting);


void __RPC_STUB IMsgrSP_put_Prompt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE IMsgrSP_get_Prompt_Proxy( 
    IMsgrSP __RPC_FAR * This,
    /* [retval][out] */ MPROMPT __RPC_FAR *pmpSetting);


void __RPC_STUB IMsgrSP_get_Prompt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE IMsgrSP_put_LocalState_Proxy( 
    IMsgrSP __RPC_FAR * This,
    /* [in] */ MSTATE mState);


void __RPC_STUB IMsgrSP_put_LocalState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrSP_get_LocalState_Proxy( 
    IMsgrSP __RPC_FAR * This,
    /* [retval][out] */ MSTATE __RPC_FAR *pmState);


void __RPC_STUB IMsgrSP_get_LocalState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE IMsgrSP_AddBuddy_Proxy( 
    IMsgrSP __RPC_FAR * This,
    /* [in] */ IMsgrUser __RPC_FAR *pBuddy,
    /* [in] */ MLIST mList);


void __RPC_STUB IMsgrSP_AddBuddy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE IMsgrSP_RemoveBuddy_Proxy( 
    IMsgrSP __RPC_FAR * This,
    /* [in] */ IMsgrUser __RPC_FAR *pBuddy,
    /* [in] */ MLIST mList);


void __RPC_STUB IMsgrSP_RemoveBuddy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE IMsgrSP_CreateIMSession_Proxy( 
    IMsgrSP __RPC_FAR * This,
    /* [in] */ IMsgrUser __RPC_FAR *pUser,
    /* [retval][out] */ IMsgrIMSession __RPC_FAR *__RPC_FAR *ppIMSession);


void __RPC_STUB IMsgrSP_CreateIMSession_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IMsgrSP_get_IMSessions_Proxy( 
    IMsgrSP __RPC_FAR * This,
    /* [retval][out] */ IMsgrIMSessions __RPC_FAR *__RPC_FAR *ppIMSessions);


void __RPC_STUB IMsgrSP_get_IMSessions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMsgrSP_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_MsgrObject;

#ifdef __cplusplus

class DECLSPEC_UUID("F3A614DC-ABE0-11d2-A441-00C04F795683")
MsgrObject;
#endif

EXTERN_C const CLSID CLSID_MessengerApp;

#ifdef __cplusplus

class DECLSPEC_UUID("FB7199AB-79BF-11d2-8D94-0000F875C541")
MessengerApp;
#endif
#endif /* __Messenger_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


