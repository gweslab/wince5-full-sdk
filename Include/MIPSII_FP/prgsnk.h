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
/* at Thu Jun 24 18:49:40 2004
 */
/* Compiler settings for .\prgsnk.idl:
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

#ifndef __prgsnk_h__
#define __prgsnk_h__

/* Forward Declarations */ 

#ifndef __IProgSink_FWD_DEFINED__
#define __IProgSink_FWD_DEFINED__
typedef interface IProgSink IProgSink;
#endif 	/* __IProgSink_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "oleidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_prgsnk_0000 */
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


extern RPC_IF_HANDLE __MIDL_itf_prgsnk_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_prgsnk_0000_v0_0_s_ifspec;

#ifndef __IProgSink_INTERFACE_DEFINED__
#define __IProgSink_INTERFACE_DEFINED__

/* interface IProgSink */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IProgSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f371-98b5-11cf-bb82-00aa00bdce0b")
    IProgSink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddProgress( 
            /* [in] */ DWORD dwClass,
            /* [out] */ DWORD __RPC_FAR *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProgress( 
            /* [in] */ DWORD dwCookie,
            /* [in] */ DWORD dwFlags,
            /* [in] */ DWORD dwState,
            /* [in] */ LPCTSTR pchText,
            /* [in] */ DWORD dwIds,
            /* [in] */ DWORD dwPos,
            /* [in] */ DWORD dwMax) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DelProgress( 
            /* [in] */ DWORD dwCookie) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IProgSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IProgSink __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IProgSink __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IProgSink __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddProgress )( 
            IProgSink __RPC_FAR * This,
            /* [in] */ DWORD dwClass,
            /* [out] */ DWORD __RPC_FAR *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetProgress )( 
            IProgSink __RPC_FAR * This,
            /* [in] */ DWORD dwCookie,
            /* [in] */ DWORD dwFlags,
            /* [in] */ DWORD dwState,
            /* [in] */ LPCTSTR pchText,
            /* [in] */ DWORD dwIds,
            /* [in] */ DWORD dwPos,
            /* [in] */ DWORD dwMax);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DelProgress )( 
            IProgSink __RPC_FAR * This,
            /* [in] */ DWORD dwCookie);
        
        END_INTERFACE
    } IProgSinkVtbl;

    interface IProgSink
    {
        CONST_VTBL struct IProgSinkVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IProgSink_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IProgSink_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IProgSink_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IProgSink_AddProgress(This,dwClass,pdwCookie)	\
    (This)->lpVtbl -> AddProgress(This,dwClass,pdwCookie)

#define IProgSink_SetProgress(This,dwCookie,dwFlags,dwState,pchText,dwIds,dwPos,dwMax)	\
    (This)->lpVtbl -> SetProgress(This,dwCookie,dwFlags,dwState,pchText,dwIds,dwPos,dwMax)

#define IProgSink_DelProgress(This,dwCookie)	\
    (This)->lpVtbl -> DelProgress(This,dwCookie)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IProgSink_AddProgress_Proxy( 
    IProgSink __RPC_FAR * This,
    /* [in] */ DWORD dwClass,
    /* [out] */ DWORD __RPC_FAR *pdwCookie);


void __RPC_STUB IProgSink_AddProgress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IProgSink_SetProgress_Proxy( 
    IProgSink __RPC_FAR * This,
    /* [in] */ DWORD dwCookie,
    /* [in] */ DWORD dwFlags,
    /* [in] */ DWORD dwState,
    /* [in] */ LPCTSTR pchText,
    /* [in] */ DWORD dwIds,
    /* [in] */ DWORD dwPos,
    /* [in] */ DWORD dwMax);


void __RPC_STUB IProgSink_SetProgress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IProgSink_DelProgress_Proxy( 
    IProgSink __RPC_FAR * This,
    /* [in] */ DWORD dwCookie);


void __RPC_STUB IProgSink_DelProgress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IProgSink_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_prgsnk_0105 */
/* [local] */ 

#define PROGSINK_CLASS_FORWARDED    0x80000000
#define PROGSINK_CLASS_NOSPIN       0x40000000
#define PROGSINK_CLASS_HTML         0x00000000
#define PROGSINK_CLASS_MULTIMEDIA   0x00000001
#define PROGSINK_CLASS_CONTROL      0x00000002
#define PROGSINK_CLASS_DATABIND     0x00000003
#define PROGSINK_CLASS_OTHER        0x00000004
#define PROGSINK_CLASS_NOREMAIN     0x00000005
#define PROGSINK_CLASS_FRAME        0x00000006

#define PROGSINK_STATE_IDLE         0x00000000
#define PROGSINK_STATE_FINISHING    0x00000001
#define PROGSINK_STATE_CONNECTING   0x00000002
#define PROGSINK_STATE_LOADING      0x00000003

#define PROGSINK_SET_STATE          0x00000001
#define PROGSINK_SET_TEXT           0x00000002
#define PROGSINK_SET_IDS            0x00000004
#define PROGSINK_SET_POS            0x00000008
#define PROGSINK_SET_MAX            0x00000010



extern RPC_IF_HANDLE __MIDL_itf_prgsnk_0105_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_prgsnk_0105_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


