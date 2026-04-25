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
/* at Thu Jun 24 18:48:32 2004
 */
/* Compiler settings for .\dwnnot.idl:
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

#ifndef __dwnnot_h__
#define __dwnnot_h__

/* Forward Declarations */ 

#ifndef __IDownloadNotify_FWD_DEFINED__
#define __IDownloadNotify_FWD_DEFINED__
typedef interface IDownloadNotify IDownloadNotify;
#endif 	/* __IDownloadNotify_FWD_DEFINED__ */


/* header files for imported files */
#include "objidl.h"
#include "oleidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_dwnnot_0000 */
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

//---------------------------------------------------------------------------=
// IDownloadNotify Interface.


EXTERN_C const GUID CGID_DownloadHost;
#ifndef _LPDOWNLOADHOST_CMDID_DEFINED
#define _LPDOWNLOADHOST_CMDID_DEFINED
#define DWNHCMDID_SETDOWNLOADNOTIFY (0)
#endif
#ifndef _LPDOWNLOADNOTIFY_DEFINED
#define _LPDOWNLOADNOTIFY_DEFINED
#define DWNTYPE_HTM     0
#define DWNTYPE_IMG     1
#define DWNTYPE_BITS    2
#define DWNTYPE_FILE    3


extern RPC_IF_HANDLE __MIDL_itf_dwnnot_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dwnnot_0000_v0_0_s_ifspec;

#ifndef __IDownloadNotify_INTERFACE_DEFINED__
#define __IDownloadNotify_INTERFACE_DEFINED__

/* interface IDownloadNotify */
/* [unique][uuid][object][local] */ 

typedef /* [unique] */ IDownloadNotify __RPC_FAR *LPDOWNLOADNOTIFY;


EXTERN_C const IID IID_IDownloadNotify;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("caeb5d28-ae4c-11d1-ba40-00c04fb92d79")
    IDownloadNotify : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DownloadStart( 
            /* [in] */ LPCWSTR pchUrl,
            /* [in] */ DWORD dwDownloadId,
            /* [in] */ DWORD dwType,
            /* [in] */ DWORD dwReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DownloadComplete( 
            /* [in] */ DWORD dwDownloadId,
            /* [in] */ HRESULT hrNotify,
            /* [in] */ DWORD dwReserved) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDownloadNotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDownloadNotify __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDownloadNotify __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDownloadNotify __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DownloadStart )( 
            IDownloadNotify __RPC_FAR * This,
            /* [in] */ LPCWSTR pchUrl,
            /* [in] */ DWORD dwDownloadId,
            /* [in] */ DWORD dwType,
            /* [in] */ DWORD dwReserved);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DownloadComplete )( 
            IDownloadNotify __RPC_FAR * This,
            /* [in] */ DWORD dwDownloadId,
            /* [in] */ HRESULT hrNotify,
            /* [in] */ DWORD dwReserved);
        
        END_INTERFACE
    } IDownloadNotifyVtbl;

    interface IDownloadNotify
    {
        CONST_VTBL struct IDownloadNotifyVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDownloadNotify_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDownloadNotify_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDownloadNotify_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDownloadNotify_DownloadStart(This,pchUrl,dwDownloadId,dwType,dwReserved)	\
    (This)->lpVtbl -> DownloadStart(This,pchUrl,dwDownloadId,dwType,dwReserved)

#define IDownloadNotify_DownloadComplete(This,dwDownloadId,hrNotify,dwReserved)	\
    (This)->lpVtbl -> DownloadComplete(This,dwDownloadId,hrNotify,dwReserved)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDownloadNotify_DownloadStart_Proxy( 
    IDownloadNotify __RPC_FAR * This,
    /* [in] */ LPCWSTR pchUrl,
    /* [in] */ DWORD dwDownloadId,
    /* [in] */ DWORD dwType,
    /* [in] */ DWORD dwReserved);


void __RPC_STUB IDownloadNotify_DownloadStart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDownloadNotify_DownloadComplete_Proxy( 
    IDownloadNotify __RPC_FAR * This,
    /* [in] */ DWORD dwDownloadId,
    /* [in] */ HRESULT hrNotify,
    /* [in] */ DWORD dwReserved);


void __RPC_STUB IDownloadNotify_DownloadComplete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDownloadNotify_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dwnnot_0085 */
/* [local] */ 

#endif


extern RPC_IF_HANDLE __MIDL_itf_dwnnot_0085_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dwnnot_0085_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


