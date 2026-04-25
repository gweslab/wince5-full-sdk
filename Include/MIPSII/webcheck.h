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


 /* File created by MIDL compiler version 5.03.0279 */
/* at Tue Feb 05 14:32:54 2002
 */
/* Compiler settings for .\webcheck.idl:
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

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __webcheck_h__
#define __webcheck_h__

/* Forward Declarations */ 

#ifndef __ISubscriptionThrottler_FWD_DEFINED__
#define __ISubscriptionThrottler_FWD_DEFINED__
typedef interface ISubscriptionThrottler ISubscriptionThrottler;
#endif 	/* __ISubscriptionThrottler_FWD_DEFINED__ */


#ifndef __ISubscriptionAgentControl_FWD_DEFINED__
#define __ISubscriptionAgentControl_FWD_DEFINED__
typedef interface ISubscriptionAgentControl ISubscriptionAgentControl;
#endif 	/* __ISubscriptionAgentControl_FWD_DEFINED__ */


#ifndef __ISubscriptionAgentShellExt_FWD_DEFINED__
#define __ISubscriptionAgentShellExt_FWD_DEFINED__
typedef interface ISubscriptionAgentShellExt ISubscriptionAgentShellExt;
#endif 	/* __ISubscriptionAgentShellExt_FWD_DEFINED__ */


#ifndef __ISubscriptionAgentEvents_FWD_DEFINED__
#define __ISubscriptionAgentEvents_FWD_DEFINED__
typedef interface ISubscriptionAgentEvents ISubscriptionAgentEvents;
#endif 	/* __ISubscriptionAgentEvents_FWD_DEFINED__ */


#ifndef __ISubscriptionMgrPriv_FWD_DEFINED__
#define __ISubscriptionMgrPriv_FWD_DEFINED__
typedef interface ISubscriptionMgrPriv ISubscriptionMgrPriv;
#endif 	/* __ISubscriptionMgrPriv_FWD_DEFINED__ */


#ifndef __WebCheck_FWD_DEFINED__
#define __WebCheck_FWD_DEFINED__

#ifdef __cplusplus
typedef class WebCheck WebCheck;
#else
typedef struct WebCheck WebCheck;
#endif /* __cplusplus */

#endif 	/* __WebCheck_FWD_DEFINED__ */


#ifndef __WebCrawlerAgent_FWD_DEFINED__
#define __WebCrawlerAgent_FWD_DEFINED__

#ifdef __cplusplus
typedef class WebCrawlerAgent WebCrawlerAgent;
#else
typedef struct WebCrawlerAgent WebCrawlerAgent;
#endif /* __cplusplus */

#endif 	/* __WebCrawlerAgent_FWD_DEFINED__ */


#ifndef __ChannelAgent_FWD_DEFINED__
#define __ChannelAgent_FWD_DEFINED__

#ifdef __cplusplus
typedef class ChannelAgent ChannelAgent;
#else
typedef struct ChannelAgent ChannelAgent;
#endif /* __cplusplus */

#endif 	/* __ChannelAgent_FWD_DEFINED__ */


#ifndef __WebCheckOfflineSync_FWD_DEFINED__
#define __WebCheckOfflineSync_FWD_DEFINED__

#ifdef __cplusplus
typedef class WebCheckOfflineSync WebCheckOfflineSync;
#else
typedef struct WebCheckOfflineSync WebCheckOfflineSync;
#endif /* __cplusplus */

#endif 	/* __WebCheckOfflineSync_FWD_DEFINED__ */


#ifndef __PostAgent_FWD_DEFINED__
#define __PostAgent_FWD_DEFINED__

#ifdef __cplusplus
typedef class PostAgent PostAgent;
#else
typedef struct PostAgent PostAgent;
#endif /* __cplusplus */

#endif 	/* __PostAgent_FWD_DEFINED__ */


#ifndef __CDLAgent_FWD_DEFINED__
#define __CDLAgent_FWD_DEFINED__

#ifdef __cplusplus
typedef class CDLAgent CDLAgent;
#else
typedef struct CDLAgent CDLAgent;
#endif /* __cplusplus */

#endif 	/* __CDLAgent_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "subsmgr.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_webcheck_0000 */
/* [local] */ 

//
//
//
// Use of this source code is subject to the terms of the Microsoft end-user
// license agreement (EULA) under which you licensed this SOFTWARE PRODUCT.
// If you did not accept the terms of the EULA, you are not authorized to use
// this source code. For a copy of the EULA, please see the LICENSE.RTF on your
// install media.
//
// Private File
// This file is not included in the Internet SDK
// Use subsmgr headers for public interfaces
extern const GUID CLSID_SubscriptionThrottler;


extern RPC_IF_HANDLE __MIDL_itf_webcheck_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_webcheck_0000_v0_0_s_ifspec;

#ifndef __ISubscriptionThrottler_INTERFACE_DEFINED__
#define __ISubscriptionThrottler_INTERFACE_DEFINED__

/* interface ISubscriptionThrottler */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISubscriptionThrottler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1E9B00E4-9846-11d1-A1EE-00C04FC2FBE1")
    ISubscriptionThrottler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSubscriptionRunState( 
            /* [in] */ DWORD dwNumCookies,
            /* [size_is][in] */ const SUBSCRIPTIONCOOKIE __RPC_FAR *pCookies,
            /* [size_is][out] */ DWORD __RPC_FAR *pdwRunState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AbortItems( 
            /* [in] */ DWORD dwNumCookies,
            /* [size_is][in] */ const SUBSCRIPTIONCOOKIE __RPC_FAR *pCookies) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AbortAll( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISubscriptionThrottlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISubscriptionThrottler __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISubscriptionThrottler __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISubscriptionThrottler __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSubscriptionRunState )( 
            ISubscriptionThrottler __RPC_FAR * This,
            /* [in] */ DWORD dwNumCookies,
            /* [size_is][in] */ const SUBSCRIPTIONCOOKIE __RPC_FAR *pCookies,
            /* [size_is][out] */ DWORD __RPC_FAR *pdwRunState);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AbortItems )( 
            ISubscriptionThrottler __RPC_FAR * This,
            /* [in] */ DWORD dwNumCookies,
            /* [size_is][in] */ const SUBSCRIPTIONCOOKIE __RPC_FAR *pCookies);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AbortAll )( 
            ISubscriptionThrottler __RPC_FAR * This);
        
        END_INTERFACE
    } ISubscriptionThrottlerVtbl;

    interface ISubscriptionThrottler
    {
        CONST_VTBL struct ISubscriptionThrottlerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISubscriptionThrottler_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISubscriptionThrottler_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISubscriptionThrottler_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISubscriptionThrottler_GetSubscriptionRunState(This,dwNumCookies,pCookies,pdwRunState)	\
    (This)->lpVtbl -> GetSubscriptionRunState(This,dwNumCookies,pCookies,pdwRunState)

#define ISubscriptionThrottler_AbortItems(This,dwNumCookies,pCookies)	\
    (This)->lpVtbl -> AbortItems(This,dwNumCookies,pCookies)

#define ISubscriptionThrottler_AbortAll(This)	\
    (This)->lpVtbl -> AbortAll(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISubscriptionThrottler_GetSubscriptionRunState_Proxy( 
    ISubscriptionThrottler __RPC_FAR * This,
    /* [in] */ DWORD dwNumCookies,
    /* [size_is][in] */ const SUBSCRIPTIONCOOKIE __RPC_FAR *pCookies,
    /* [size_is][out] */ DWORD __RPC_FAR *pdwRunState);


void __RPC_STUB ISubscriptionThrottler_GetSubscriptionRunState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISubscriptionThrottler_AbortItems_Proxy( 
    ISubscriptionThrottler __RPC_FAR * This,
    /* [in] */ DWORD dwNumCookies,
    /* [size_is][in] */ const SUBSCRIPTIONCOOKIE __RPC_FAR *pCookies);


void __RPC_STUB ISubscriptionThrottler_AbortItems_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISubscriptionThrottler_AbortAll_Proxy( 
    ISubscriptionThrottler __RPC_FAR * This);


void __RPC_STUB ISubscriptionThrottler_AbortAll_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISubscriptionThrottler_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_webcheck_0156 */
/* [local] */ 

extern const IID CLSID_WebCheckDefaultProcess;               
// Subscription Notifications                                                    
// To register your IOleCommandTarget for notifications:                         
//                                                                               
// Add your handler under:                                                       
// HKLM\Software\Microsoft\Windows\CurrentVersion\Webcheck\Notification Handlers 
// as DWORD values with a mask specifying which SUBSNOTF_*                       
// events you care about.                                                        
//                                                                               
// So the Exec call will look like:                                              
//                                                                               
// pCmdTarget->Exec(&CLSID_SubscriptionMgr,                                      
//                  nCmdID,                                                      
//                  0,                                                           
//                  &varSubsCookie,                                              
//                  NULL);                                                       
//                                                                               
//                                                                               
#define SUBSNOTF_CREATE      0x00000001
#define SUBSNOTF_DELETE      0x00000002
#define SUBSNOTF_SYNC_START  0x00000004
#define SUBSNOTF_SYNC_STOP   0x00000008


extern RPC_IF_HANDLE __MIDL_itf_webcheck_0156_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_webcheck_0156_v0_0_s_ifspec;


#ifndef __WebCheck_LIBRARY_DEFINED__
#define __WebCheck_LIBRARY_DEFINED__

/* library WebCheck */
/* [version][lcid][helpstring][uuid] */ 


EXTERN_C const IID LIBID_WebCheck;

#ifndef __ISubscriptionAgentControl_INTERFACE_DEFINED__
#define __ISubscriptionAgentControl_INTERFACE_DEFINED__

/* interface ISubscriptionAgentControl */
/* [object][uuid] */ 


enum SUBSCRIPTION_AGENT_CONTROL
    {	SUBSCRIPTION_AGENT_DELETE	= 0x1
    };

enum SUBSCRIPTION_AGENT_RESUME_FLAGS
    {	SUBSCRIPTION_AGENT_RESUME_INCREASED_CACHE	= 0x80
    };

EXTERN_C const IID IID_ISubscriptionAgentControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A89E8FF0-70F4-11d1-BC7F-00C04FD929DB")
    ISubscriptionAgentControl : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE StartUpdate( 
            IUnknown __RPC_FAR *pItem,
            IUnknown __RPC_FAR *punkAdvise) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PauseUpdate( 
            DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResumeUpdate( 
            DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AbortUpdate( 
            DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SubscriptionControl( 
            IUnknown __RPC_FAR *pItem,
            DWORD dwControl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISubscriptionAgentControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISubscriptionAgentControl __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISubscriptionAgentControl __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISubscriptionAgentControl __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *StartUpdate )( 
            ISubscriptionAgentControl __RPC_FAR * This,
            IUnknown __RPC_FAR *pItem,
            IUnknown __RPC_FAR *punkAdvise);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *PauseUpdate )( 
            ISubscriptionAgentControl __RPC_FAR * This,
            DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ResumeUpdate )( 
            ISubscriptionAgentControl __RPC_FAR * This,
            DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AbortUpdate )( 
            ISubscriptionAgentControl __RPC_FAR * This,
            DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SubscriptionControl )( 
            ISubscriptionAgentControl __RPC_FAR * This,
            IUnknown __RPC_FAR *pItem,
            DWORD dwControl);
        
        END_INTERFACE
    } ISubscriptionAgentControlVtbl;

    interface ISubscriptionAgentControl
    {
        CONST_VTBL struct ISubscriptionAgentControlVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISubscriptionAgentControl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISubscriptionAgentControl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISubscriptionAgentControl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISubscriptionAgentControl_StartUpdate(This,pItem,punkAdvise)	\
    (This)->lpVtbl -> StartUpdate(This,pItem,punkAdvise)

#define ISubscriptionAgentControl_PauseUpdate(This,dwFlags)	\
    (This)->lpVtbl -> PauseUpdate(This,dwFlags)

#define ISubscriptionAgentControl_ResumeUpdate(This,dwFlags)	\
    (This)->lpVtbl -> ResumeUpdate(This,dwFlags)

#define ISubscriptionAgentControl_AbortUpdate(This,dwFlags)	\
    (This)->lpVtbl -> AbortUpdate(This,dwFlags)

#define ISubscriptionAgentControl_SubscriptionControl(This,pItem,dwControl)	\
    (This)->lpVtbl -> SubscriptionControl(This,pItem,dwControl)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISubscriptionAgentControl_StartUpdate_Proxy( 
    ISubscriptionAgentControl __RPC_FAR * This,
    IUnknown __RPC_FAR *pItem,
    IUnknown __RPC_FAR *punkAdvise);


void __RPC_STUB ISubscriptionAgentControl_StartUpdate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISubscriptionAgentControl_PauseUpdate_Proxy( 
    ISubscriptionAgentControl __RPC_FAR * This,
    DWORD dwFlags);


void __RPC_STUB ISubscriptionAgentControl_PauseUpdate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISubscriptionAgentControl_ResumeUpdate_Proxy( 
    ISubscriptionAgentControl __RPC_FAR * This,
    DWORD dwFlags);


void __RPC_STUB ISubscriptionAgentControl_ResumeUpdate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISubscriptionAgentControl_AbortUpdate_Proxy( 
    ISubscriptionAgentControl __RPC_FAR * This,
    DWORD dwFlags);


void __RPC_STUB ISubscriptionAgentControl_AbortUpdate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISubscriptionAgentControl_SubscriptionControl_Proxy( 
    ISubscriptionAgentControl __RPC_FAR * This,
    IUnknown __RPC_FAR *pItem,
    DWORD dwControl);


void __RPC_STUB ISubscriptionAgentControl_SubscriptionControl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISubscriptionAgentControl_INTERFACE_DEFINED__ */


#ifndef __ISubscriptionAgentShellExt_INTERFACE_DEFINED__
#define __ISubscriptionAgentShellExt_INTERFACE_DEFINED__

/* interface ISubscriptionAgentShellExt */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISubscriptionAgentShellExt;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("81B184BA-B302-11d1-8552-00C04FA35C89")
    ISubscriptionAgentShellExt : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ SUBSCRIPTIONCOOKIE __RPC_FAR *pSubscriptionCookie,
            /* [in] */ LPCWSTR pwszURL,
            /* [in] */ LPCWSTR pwszName,
            /* [in] */ SUBSCRIPTIONTYPE subsType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemovePages( 
            /* [in] */ HWND hdlg) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveSubscription( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE URLChange( 
            /* [in] */ LPCWSTR pwszNewURL) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISubscriptionAgentShellExtVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISubscriptionAgentShellExt __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISubscriptionAgentShellExt __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISubscriptionAgentShellExt __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Initialize )( 
            ISubscriptionAgentShellExt __RPC_FAR * This,
            /* [in] */ SUBSCRIPTIONCOOKIE __RPC_FAR *pSubscriptionCookie,
            /* [in] */ LPCWSTR pwszURL,
            /* [in] */ LPCWSTR pwszName,
            /* [in] */ SUBSCRIPTIONTYPE subsType);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RemovePages )( 
            ISubscriptionAgentShellExt __RPC_FAR * This,
            /* [in] */ HWND hdlg);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SaveSubscription )( 
            ISubscriptionAgentShellExt __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *URLChange )( 
            ISubscriptionAgentShellExt __RPC_FAR * This,
            /* [in] */ LPCWSTR pwszNewURL);
        
        END_INTERFACE
    } ISubscriptionAgentShellExtVtbl;

    interface ISubscriptionAgentShellExt
    {
        CONST_VTBL struct ISubscriptionAgentShellExtVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISubscriptionAgentShellExt_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISubscriptionAgentShellExt_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISubscriptionAgentShellExt_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISubscriptionAgentShellExt_Initialize(This,pSubscriptionCookie,pwszURL,pwszName,subsType)	\
    (This)->lpVtbl -> Initialize(This,pSubscriptionCookie,pwszURL,pwszName,subsType)

#define ISubscriptionAgentShellExt_RemovePages(This,hdlg)	\
    (This)->lpVtbl -> RemovePages(This,hdlg)

#define ISubscriptionAgentShellExt_SaveSubscription(This)	\
    (This)->lpVtbl -> SaveSubscription(This)

#define ISubscriptionAgentShellExt_URLChange(This,pwszNewURL)	\
    (This)->lpVtbl -> URLChange(This,pwszNewURL)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISubscriptionAgentShellExt_Initialize_Proxy( 
    ISubscriptionAgentShellExt __RPC_FAR * This,
    /* [in] */ SUBSCRIPTIONCOOKIE __RPC_FAR *pSubscriptionCookie,
    /* [in] */ LPCWSTR pwszURL,
    /* [in] */ LPCWSTR pwszName,
    /* [in] */ SUBSCRIPTIONTYPE subsType);


void __RPC_STUB ISubscriptionAgentShellExt_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISubscriptionAgentShellExt_RemovePages_Proxy( 
    ISubscriptionAgentShellExt __RPC_FAR * This,
    /* [in] */ HWND hdlg);


void __RPC_STUB ISubscriptionAgentShellExt_RemovePages_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISubscriptionAgentShellExt_SaveSubscription_Proxy( 
    ISubscriptionAgentShellExt __RPC_FAR * This);


void __RPC_STUB ISubscriptionAgentShellExt_SaveSubscription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISubscriptionAgentShellExt_URLChange_Proxy( 
    ISubscriptionAgentShellExt __RPC_FAR * This,
    /* [in] */ LPCWSTR pwszNewURL);


void __RPC_STUB ISubscriptionAgentShellExt_URLChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISubscriptionAgentShellExt_INTERFACE_DEFINED__ */


#ifndef __ISubscriptionAgentEvents_INTERFACE_DEFINED__
#define __ISubscriptionAgentEvents_INTERFACE_DEFINED__

/* interface ISubscriptionAgentEvents */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISubscriptionAgentEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A89E8FF1-70F4-11d1-BC7F-00C04FD929DB")
    ISubscriptionAgentEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE UpdateBegin( 
            const SUBSCRIPTIONCOOKIE __RPC_FAR *pSubscriptionCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateProgress( 
            const SUBSCRIPTIONCOOKIE __RPC_FAR *pSubscriptionCookie,
            long lSizeDownloaded,
            long lProgressCurrent,
            long lProgressMax,
            HRESULT hrStatus,
            LPCWSTR wszStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateEnd( 
            const SUBSCRIPTIONCOOKIE __RPC_FAR *pSubscriptionCookie,
            long lSizeDownloaded,
            HRESULT hrResult,
            LPCWSTR wszResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportError( 
            const SUBSCRIPTIONCOOKIE __RPC_FAR *pSubscriptionCookie,
            HRESULT hrError,
            LPCWSTR wszError) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISubscriptionAgentEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISubscriptionAgentEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISubscriptionAgentEvents __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISubscriptionAgentEvents __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *UpdateBegin )( 
            ISubscriptionAgentEvents __RPC_FAR * This,
            const SUBSCRIPTIONCOOKIE __RPC_FAR *pSubscriptionCookie);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *UpdateProgress )( 
            ISubscriptionAgentEvents __RPC_FAR * This,
            const SUBSCRIPTIONCOOKIE __RPC_FAR *pSubscriptionCookie,
            long lSizeDownloaded,
            long lProgressCurrent,
            long lProgressMax,
            HRESULT hrStatus,
            LPCWSTR wszStatus);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *UpdateEnd )( 
            ISubscriptionAgentEvents __RPC_FAR * This,
            const SUBSCRIPTIONCOOKIE __RPC_FAR *pSubscriptionCookie,
            long lSizeDownloaded,
            HRESULT hrResult,
            LPCWSTR wszResult);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ReportError )( 
            ISubscriptionAgentEvents __RPC_FAR * This,
            const SUBSCRIPTIONCOOKIE __RPC_FAR *pSubscriptionCookie,
            HRESULT hrError,
            LPCWSTR wszError);
        
        END_INTERFACE
    } ISubscriptionAgentEventsVtbl;

    interface ISubscriptionAgentEvents
    {
        CONST_VTBL struct ISubscriptionAgentEventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISubscriptionAgentEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISubscriptionAgentEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISubscriptionAgentEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISubscriptionAgentEvents_UpdateBegin(This,pSubscriptionCookie)	\
    (This)->lpVtbl -> UpdateBegin(This,pSubscriptionCookie)

#define ISubscriptionAgentEvents_UpdateProgress(This,pSubscriptionCookie,lSizeDownloaded,lProgressCurrent,lProgressMax,hrStatus,wszStatus)	\
    (This)->lpVtbl -> UpdateProgress(This,pSubscriptionCookie,lSizeDownloaded,lProgressCurrent,lProgressMax,hrStatus,wszStatus)

#define ISubscriptionAgentEvents_UpdateEnd(This,pSubscriptionCookie,lSizeDownloaded,hrResult,wszResult)	\
    (This)->lpVtbl -> UpdateEnd(This,pSubscriptionCookie,lSizeDownloaded,hrResult,wszResult)

#define ISubscriptionAgentEvents_ReportError(This,pSubscriptionCookie,hrError,wszError)	\
    (This)->lpVtbl -> ReportError(This,pSubscriptionCookie,hrError,wszError)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISubscriptionAgentEvents_UpdateBegin_Proxy( 
    ISubscriptionAgentEvents __RPC_FAR * This,
    const SUBSCRIPTIONCOOKIE __RPC_FAR *pSubscriptionCookie);


void __RPC_STUB ISubscriptionAgentEvents_UpdateBegin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISubscriptionAgentEvents_UpdateProgress_Proxy( 
    ISubscriptionAgentEvents __RPC_FAR * This,
    const SUBSCRIPTIONCOOKIE __RPC_FAR *pSubscriptionCookie,
    long lSizeDownloaded,
    long lProgressCurrent,
    long lProgressMax,
    HRESULT hrStatus,
    LPCWSTR wszStatus);


void __RPC_STUB ISubscriptionAgentEvents_UpdateProgress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISubscriptionAgentEvents_UpdateEnd_Proxy( 
    ISubscriptionAgentEvents __RPC_FAR * This,
    const SUBSCRIPTIONCOOKIE __RPC_FAR *pSubscriptionCookie,
    long lSizeDownloaded,
    HRESULT hrResult,
    LPCWSTR wszResult);


void __RPC_STUB ISubscriptionAgentEvents_UpdateEnd_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISubscriptionAgentEvents_ReportError_Proxy( 
    ISubscriptionAgentEvents __RPC_FAR * This,
    const SUBSCRIPTIONCOOKIE __RPC_FAR *pSubscriptionCookie,
    HRESULT hrError,
    LPCWSTR wszError);


void __RPC_STUB ISubscriptionAgentEvents_ReportError_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISubscriptionAgentEvents_INTERFACE_DEFINED__ */


#ifndef __ISubscriptionMgrPriv_INTERFACE_DEFINED__
#define __ISubscriptionMgrPriv_INTERFACE_DEFINED__

/* interface ISubscriptionMgrPriv */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISubscriptionMgrPriv;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D66B399E-AF1D-11d1-A1F9-00C04FC2FBE1")
    ISubscriptionMgrPriv : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateSubscriptionItem( 
            /* [in] */ const SUBSCRIPTIONITEMINFO __RPC_FAR *pSubscriptionItemInfo,
            /* [out] */ SUBSCRIPTIONCOOKIE __RPC_FAR *pNewCookie,
            /* [out] */ ISubscriptionItem __RPC_FAR *__RPC_FAR *ppSubscriptionItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CloneSubscriptionItem( 
            /* [in] */ ISubscriptionItem __RPC_FAR *pSubscriptionItem,
            /* [out] */ SUBSCRIPTIONCOOKIE __RPC_FAR *pNewCookie,
            /* [out] */ ISubscriptionItem __RPC_FAR *__RPC_FAR *ppSubscriptionItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteSubscriptionItem( 
            /* [in] */ const SUBSCRIPTIONCOOKIE __RPC_FAR *pCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemovePages( 
            /* [in] */ HWND hdlg) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveSubscription( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE URLChange( 
            LPCWSTR pwszNewURL) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISubscriptionMgrPrivVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISubscriptionMgrPriv __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISubscriptionMgrPriv __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISubscriptionMgrPriv __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateSubscriptionItem )( 
            ISubscriptionMgrPriv __RPC_FAR * This,
            /* [in] */ const SUBSCRIPTIONITEMINFO __RPC_FAR *pSubscriptionItemInfo,
            /* [out] */ SUBSCRIPTIONCOOKIE __RPC_FAR *pNewCookie,
            /* [out] */ ISubscriptionItem __RPC_FAR *__RPC_FAR *ppSubscriptionItem);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CloneSubscriptionItem )( 
            ISubscriptionMgrPriv __RPC_FAR * This,
            /* [in] */ ISubscriptionItem __RPC_FAR *pSubscriptionItem,
            /* [out] */ SUBSCRIPTIONCOOKIE __RPC_FAR *pNewCookie,
            /* [out] */ ISubscriptionItem __RPC_FAR *__RPC_FAR *ppSubscriptionItem);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DeleteSubscriptionItem )( 
            ISubscriptionMgrPriv __RPC_FAR * This,
            /* [in] */ const SUBSCRIPTIONCOOKIE __RPC_FAR *pCookie);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RemovePages )( 
            ISubscriptionMgrPriv __RPC_FAR * This,
            /* [in] */ HWND hdlg);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SaveSubscription )( 
            ISubscriptionMgrPriv __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *URLChange )( 
            ISubscriptionMgrPriv __RPC_FAR * This,
            LPCWSTR pwszNewURL);
        
        END_INTERFACE
    } ISubscriptionMgrPrivVtbl;

    interface ISubscriptionMgrPriv
    {
        CONST_VTBL struct ISubscriptionMgrPrivVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISubscriptionMgrPriv_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISubscriptionMgrPriv_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISubscriptionMgrPriv_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISubscriptionMgrPriv_CreateSubscriptionItem(This,pSubscriptionItemInfo,pNewCookie,ppSubscriptionItem)	\
    (This)->lpVtbl -> CreateSubscriptionItem(This,pSubscriptionItemInfo,pNewCookie,ppSubscriptionItem)

#define ISubscriptionMgrPriv_CloneSubscriptionItem(This,pSubscriptionItem,pNewCookie,ppSubscriptionItem)	\
    (This)->lpVtbl -> CloneSubscriptionItem(This,pSubscriptionItem,pNewCookie,ppSubscriptionItem)

#define ISubscriptionMgrPriv_DeleteSubscriptionItem(This,pCookie)	\
    (This)->lpVtbl -> DeleteSubscriptionItem(This,pCookie)

#define ISubscriptionMgrPriv_RemovePages(This,hdlg)	\
    (This)->lpVtbl -> RemovePages(This,hdlg)

#define ISubscriptionMgrPriv_SaveSubscription(This)	\
    (This)->lpVtbl -> SaveSubscription(This)

#define ISubscriptionMgrPriv_URLChange(This,pwszNewURL)	\
    (This)->lpVtbl -> URLChange(This,pwszNewURL)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISubscriptionMgrPriv_CreateSubscriptionItem_Proxy( 
    ISubscriptionMgrPriv __RPC_FAR * This,
    /* [in] */ const SUBSCRIPTIONITEMINFO __RPC_FAR *pSubscriptionItemInfo,
    /* [out] */ SUBSCRIPTIONCOOKIE __RPC_FAR *pNewCookie,
    /* [out] */ ISubscriptionItem __RPC_FAR *__RPC_FAR *ppSubscriptionItem);


void __RPC_STUB ISubscriptionMgrPriv_CreateSubscriptionItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISubscriptionMgrPriv_CloneSubscriptionItem_Proxy( 
    ISubscriptionMgrPriv __RPC_FAR * This,
    /* [in] */ ISubscriptionItem __RPC_FAR *pSubscriptionItem,
    /* [out] */ SUBSCRIPTIONCOOKIE __RPC_FAR *pNewCookie,
    /* [out] */ ISubscriptionItem __RPC_FAR *__RPC_FAR *ppSubscriptionItem);


void __RPC_STUB ISubscriptionMgrPriv_CloneSubscriptionItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISubscriptionMgrPriv_DeleteSubscriptionItem_Proxy( 
    ISubscriptionMgrPriv __RPC_FAR * This,
    /* [in] */ const SUBSCRIPTIONCOOKIE __RPC_FAR *pCookie);


void __RPC_STUB ISubscriptionMgrPriv_DeleteSubscriptionItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISubscriptionMgrPriv_RemovePages_Proxy( 
    ISubscriptionMgrPriv __RPC_FAR * This,
    /* [in] */ HWND hdlg);


void __RPC_STUB ISubscriptionMgrPriv_RemovePages_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISubscriptionMgrPriv_SaveSubscription_Proxy( 
    ISubscriptionMgrPriv __RPC_FAR * This);


void __RPC_STUB ISubscriptionMgrPriv_SaveSubscription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISubscriptionMgrPriv_URLChange_Proxy( 
    ISubscriptionMgrPriv __RPC_FAR * This,
    LPCWSTR pwszNewURL);


void __RPC_STUB ISubscriptionMgrPriv_URLChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISubscriptionMgrPriv_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_WebCheck;

#ifdef __cplusplus

class DECLSPEC_UUID("E6FB5E20-DE35-11CF-9C87-00AA005127ED")
WebCheck;
#endif

EXTERN_C const CLSID CLSID_WebCrawlerAgent;

#ifdef __cplusplus

class DECLSPEC_UUID("08165EA0-E946-11CF-9C87-00AA005127ED")
WebCrawlerAgent;
#endif

EXTERN_C const CLSID CLSID_ChannelAgent;

#ifdef __cplusplus

class DECLSPEC_UUID("E3A8BDE6-ABCE-11d0-BC4B-00C04FD929DB")
ChannelAgent;
#endif

EXTERN_C const CLSID CLSID_WebCheckOfflineSync;

#ifdef __cplusplus

class DECLSPEC_UUID("7FC0B86E-5FA7-11d1-BC7C-00C04FD929DB")
WebCheckOfflineSync;
#endif

EXTERN_C const CLSID CLSID_PostAgent;

#ifdef __cplusplus

class DECLSPEC_UUID("d8bd2030-6fC9-11d0-864f-00aa006809d9")
PostAgent;
#endif

EXTERN_C const CLSID CLSID_CDLAgent;

#ifdef __cplusplus

class DECLSPEC_UUID("7D559C10-9FE9-11d0-93F7-00AA0059CE02")
CDLAgent;
#endif
#endif /* __WebCheck_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


