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
/* at Thu Jun 24 18:49:43 2004
 */
/* Compiler settings for .\safeocx.idl:
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

#ifndef __safeocx_h__
#define __safeocx_h__

/* Forward Declarations */ 

#ifndef __IActiveXSafetyProvider_FWD_DEFINED__
#define __IActiveXSafetyProvider_FWD_DEFINED__
typedef interface IActiveXSafetyProvider IActiveXSafetyProvider;
#endif 	/* __IActiveXSafetyProvider_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "urlmon.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_safeocx_0000 */
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

#pragma comment(lib,"uuid.lib")

DEFINE_GUID(CLSID_IActiveXSafetyProvider, 0xaaf8c6ce, 0xf972, 0x11d0, 0x97, 0xeb, 0x00, 0xaa, 0x00, 0x61, 0x53, 0x33);
DEFINE_GUID(IID_IActiveXSafetyProvider,   0x69ff5101, 0xfc63, 0x11d0, 0x97, 0xeb, 0x00, 0xaa, 0x00, 0x61, 0x53, 0x33);


extern RPC_IF_HANDLE __MIDL_itf_safeocx_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_safeocx_0000_v0_0_s_ifspec;

#ifndef __IActiveXSafetyProvider_INTERFACE_DEFINED__
#define __IActiveXSafetyProvider_INTERFACE_DEFINED__

/* interface IActiveXSafetyProvider */
/* [local][unique][uuid][object] */ 

typedef /* [unique] */ IActiveXSafetyProvider __RPC_FAR *LPACTIVEXSAFETYPROVIDER;


EXTERN_C const IID IID_IActiveXSafetyProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("69ff5101-fc63-11d0-97eb-00aa00615333")
    IActiveXSafetyProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TreatControlAsUntrusted( 
            /* [in] */ BOOL fTreatAsTUntrusted) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsControlUntrusted( 
            /* [out] */ BOOL __RPC_FAR *pfIsUntrusted) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSecurityManager( 
            /* [in] */ IInternetSecurityManager __RPC_FAR *pSecurityManager) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDocumentURLA( 
            /* [in] */ LPCSTR szDocumentURL) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDocumentURLW( 
            /* [in] */ LPCWSTR szDocumentURL) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetToDefaults( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SafeDllRegisterServerA( 
            /* [in] */ LPCSTR szServerName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SafeDllRegisterServerW( 
            /* [in] */ LPCWSTR szServerName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SafeDllUnregisterServerA( 
            /* [in] */ LPCSTR szServerName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SafeDllUnregisterServerW( 
            /* [in] */ LPCWSTR szServerName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SafeGetClassObject( 
            /* [in] */ REFCLSID rclsid,
            /* [in] */ DWORD dwClsContext,
            /* [in] */ LPVOID reserved,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppObj) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SafeCreateInstance( 
            /* [in] */ REFCLSID rclsid,
            /* [in] */ LPUNKNOWN pUnkOuter,
            /* [in] */ DWORD dwClsContext,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *pObj) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IActiveXSafetyProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IActiveXSafetyProvider __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IActiveXSafetyProvider __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IActiveXSafetyProvider __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *TreatControlAsUntrusted )( 
            IActiveXSafetyProvider __RPC_FAR * This,
            /* [in] */ BOOL fTreatAsTUntrusted);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsControlUntrusted )( 
            IActiveXSafetyProvider __RPC_FAR * This,
            /* [out] */ BOOL __RPC_FAR *pfIsUntrusted);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetSecurityManager )( 
            IActiveXSafetyProvider __RPC_FAR * This,
            /* [in] */ IInternetSecurityManager __RPC_FAR *pSecurityManager);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetDocumentURLA )( 
            IActiveXSafetyProvider __RPC_FAR * This,
            /* [in] */ LPCSTR szDocumentURL);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetDocumentURLW )( 
            IActiveXSafetyProvider __RPC_FAR * This,
            /* [in] */ LPCWSTR szDocumentURL);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ResetToDefaults )( 
            IActiveXSafetyProvider __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SafeDllRegisterServerA )( 
            IActiveXSafetyProvider __RPC_FAR * This,
            /* [in] */ LPCSTR szServerName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SafeDllRegisterServerW )( 
            IActiveXSafetyProvider __RPC_FAR * This,
            /* [in] */ LPCWSTR szServerName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SafeDllUnregisterServerA )( 
            IActiveXSafetyProvider __RPC_FAR * This,
            /* [in] */ LPCSTR szServerName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SafeDllUnregisterServerW )( 
            IActiveXSafetyProvider __RPC_FAR * This,
            /* [in] */ LPCWSTR szServerName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SafeGetClassObject )( 
            IActiveXSafetyProvider __RPC_FAR * This,
            /* [in] */ REFCLSID rclsid,
            /* [in] */ DWORD dwClsContext,
            /* [in] */ LPVOID reserved,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppObj);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SafeCreateInstance )( 
            IActiveXSafetyProvider __RPC_FAR * This,
            /* [in] */ REFCLSID rclsid,
            /* [in] */ LPUNKNOWN pUnkOuter,
            /* [in] */ DWORD dwClsContext,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *pObj);
        
        END_INTERFACE
    } IActiveXSafetyProviderVtbl;

    interface IActiveXSafetyProvider
    {
        CONST_VTBL struct IActiveXSafetyProviderVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IActiveXSafetyProvider_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IActiveXSafetyProvider_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IActiveXSafetyProvider_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IActiveXSafetyProvider_TreatControlAsUntrusted(This,fTreatAsTUntrusted)	\
    (This)->lpVtbl -> TreatControlAsUntrusted(This,fTreatAsTUntrusted)

#define IActiveXSafetyProvider_IsControlUntrusted(This,pfIsUntrusted)	\
    (This)->lpVtbl -> IsControlUntrusted(This,pfIsUntrusted)

#define IActiveXSafetyProvider_SetSecurityManager(This,pSecurityManager)	\
    (This)->lpVtbl -> SetSecurityManager(This,pSecurityManager)

#define IActiveXSafetyProvider_SetDocumentURLA(This,szDocumentURL)	\
    (This)->lpVtbl -> SetDocumentURLA(This,szDocumentURL)

#define IActiveXSafetyProvider_SetDocumentURLW(This,szDocumentURL)	\
    (This)->lpVtbl -> SetDocumentURLW(This,szDocumentURL)

#define IActiveXSafetyProvider_ResetToDefaults(This)	\
    (This)->lpVtbl -> ResetToDefaults(This)

#define IActiveXSafetyProvider_SafeDllRegisterServerA(This,szServerName)	\
    (This)->lpVtbl -> SafeDllRegisterServerA(This,szServerName)

#define IActiveXSafetyProvider_SafeDllRegisterServerW(This,szServerName)	\
    (This)->lpVtbl -> SafeDllRegisterServerW(This,szServerName)

#define IActiveXSafetyProvider_SafeDllUnregisterServerA(This,szServerName)	\
    (This)->lpVtbl -> SafeDllUnregisterServerA(This,szServerName)

#define IActiveXSafetyProvider_SafeDllUnregisterServerW(This,szServerName)	\
    (This)->lpVtbl -> SafeDllUnregisterServerW(This,szServerName)

#define IActiveXSafetyProvider_SafeGetClassObject(This,rclsid,dwClsContext,reserved,riid,ppObj)	\
    (This)->lpVtbl -> SafeGetClassObject(This,rclsid,dwClsContext,reserved,riid,ppObj)

#define IActiveXSafetyProvider_SafeCreateInstance(This,rclsid,pUnkOuter,dwClsContext,riid,pObj)	\
    (This)->lpVtbl -> SafeCreateInstance(This,rclsid,pUnkOuter,dwClsContext,riid,pObj)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IActiveXSafetyProvider_TreatControlAsUntrusted_Proxy( 
    IActiveXSafetyProvider __RPC_FAR * This,
    /* [in] */ BOOL fTreatAsTUntrusted);


void __RPC_STUB IActiveXSafetyProvider_TreatControlAsUntrusted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveXSafetyProvider_IsControlUntrusted_Proxy( 
    IActiveXSafetyProvider __RPC_FAR * This,
    /* [out] */ BOOL __RPC_FAR *pfIsUntrusted);


void __RPC_STUB IActiveXSafetyProvider_IsControlUntrusted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveXSafetyProvider_SetSecurityManager_Proxy( 
    IActiveXSafetyProvider __RPC_FAR * This,
    /* [in] */ IInternetSecurityManager __RPC_FAR *pSecurityManager);


void __RPC_STUB IActiveXSafetyProvider_SetSecurityManager_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveXSafetyProvider_SetDocumentURLA_Proxy( 
    IActiveXSafetyProvider __RPC_FAR * This,
    /* [in] */ LPCSTR szDocumentURL);


void __RPC_STUB IActiveXSafetyProvider_SetDocumentURLA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveXSafetyProvider_SetDocumentURLW_Proxy( 
    IActiveXSafetyProvider __RPC_FAR * This,
    /* [in] */ LPCWSTR szDocumentURL);


void __RPC_STUB IActiveXSafetyProvider_SetDocumentURLW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveXSafetyProvider_ResetToDefaults_Proxy( 
    IActiveXSafetyProvider __RPC_FAR * This);


void __RPC_STUB IActiveXSafetyProvider_ResetToDefaults_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveXSafetyProvider_SafeDllRegisterServerA_Proxy( 
    IActiveXSafetyProvider __RPC_FAR * This,
    /* [in] */ LPCSTR szServerName);


void __RPC_STUB IActiveXSafetyProvider_SafeDllRegisterServerA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveXSafetyProvider_SafeDllRegisterServerW_Proxy( 
    IActiveXSafetyProvider __RPC_FAR * This,
    /* [in] */ LPCWSTR szServerName);


void __RPC_STUB IActiveXSafetyProvider_SafeDllRegisterServerW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveXSafetyProvider_SafeDllUnregisterServerA_Proxy( 
    IActiveXSafetyProvider __RPC_FAR * This,
    /* [in] */ LPCSTR szServerName);


void __RPC_STUB IActiveXSafetyProvider_SafeDllUnregisterServerA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveXSafetyProvider_SafeDllUnregisterServerW_Proxy( 
    IActiveXSafetyProvider __RPC_FAR * This,
    /* [in] */ LPCWSTR szServerName);


void __RPC_STUB IActiveXSafetyProvider_SafeDllUnregisterServerW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveXSafetyProvider_SafeGetClassObject_Proxy( 
    IActiveXSafetyProvider __RPC_FAR * This,
    /* [in] */ REFCLSID rclsid,
    /* [in] */ DWORD dwClsContext,
    /* [in] */ LPVOID reserved,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppObj);


void __RPC_STUB IActiveXSafetyProvider_SafeGetClassObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveXSafetyProvider_SafeCreateInstance_Proxy( 
    IActiveXSafetyProvider __RPC_FAR * This,
    /* [in] */ REFCLSID rclsid,
    /* [in] */ LPUNKNOWN pUnkOuter,
    /* [in] */ DWORD dwClsContext,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *pObj);


void __RPC_STUB IActiveXSafetyProvider_SafeCreateInstance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IActiveXSafetyProvider_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


