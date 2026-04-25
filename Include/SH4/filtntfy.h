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
/* at Tue Feb 05 14:33:31 2002
 */
/* Compiler settings for .\filtntfy.idl:
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

#ifndef __filtntfy_h__
#define __filtntfy_h__

/* Forward Declarations */ 

#ifndef __IFilterStatus_FWD_DEFINED__
#define __IFilterStatus_FWD_DEFINED__
typedef interface IFilterStatus IFilterStatus;
#endif 	/* __IFilterStatus_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_filtntfy_0000 */
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


extern RPC_IF_HANDLE __MIDL_itf_filtntfy_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_filtntfy_0000_v0_0_s_ifspec;

#ifndef __IFilterStatus_INTERFACE_DEFINED__
#define __IFilterStatus_INTERFACE_DEFINED__

/* interface IFilterStatus */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IFilterStatus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F4EB8260-8DDA-11D1-B3AA-00A0C9063796")
    IFilterStatus : public IUnknown
    {
    public:
        virtual SCODE STDMETHODCALLTYPE Initialize( 
            /* [string][in] */ const WCHAR __RPC_FAR *pwszCatalogName,
            /* [string][in] */ const WCHAR __RPC_FAR *pwszCatalogPath) = 0;
        
        virtual SCODE STDMETHODCALLTYPE PreFilter( 
            /* [string][in] */ const WCHAR __RPC_FAR *pwszPath) = 0;
        
        virtual SCODE STDMETHODCALLTYPE FilterLoad( 
            /* [string][in] */ const WCHAR __RPC_FAR *pwszPath,
            /* [in] */ SCODE scFilterStatus) = 0;
        
        virtual SCODE STDMETHODCALLTYPE PostFilter( 
            /* [string][in] */ const WCHAR __RPC_FAR *pwszPath,
            /* [in] */ SCODE scFilterStatus) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFilterStatusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IFilterStatus __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IFilterStatus __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IFilterStatus __RPC_FAR * This);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *Initialize )( 
            IFilterStatus __RPC_FAR * This,
            /* [string][in] */ const WCHAR __RPC_FAR *pwszCatalogName,
            /* [string][in] */ const WCHAR __RPC_FAR *pwszCatalogPath);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *PreFilter )( 
            IFilterStatus __RPC_FAR * This,
            /* [string][in] */ const WCHAR __RPC_FAR *pwszPath);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *FilterLoad )( 
            IFilterStatus __RPC_FAR * This,
            /* [string][in] */ const WCHAR __RPC_FAR *pwszPath,
            /* [in] */ SCODE scFilterStatus);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *PostFilter )( 
            IFilterStatus __RPC_FAR * This,
            /* [string][in] */ const WCHAR __RPC_FAR *pwszPath,
            /* [in] */ SCODE scFilterStatus);
        
        END_INTERFACE
    } IFilterStatusVtbl;

    interface IFilterStatus
    {
        CONST_VTBL struct IFilterStatusVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFilterStatus_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFilterStatus_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFilterStatus_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFilterStatus_Initialize(This,pwszCatalogName,pwszCatalogPath)	\
    (This)->lpVtbl -> Initialize(This,pwszCatalogName,pwszCatalogPath)

#define IFilterStatus_PreFilter(This,pwszPath)	\
    (This)->lpVtbl -> PreFilter(This,pwszPath)

#define IFilterStatus_FilterLoad(This,pwszPath,scFilterStatus)	\
    (This)->lpVtbl -> FilterLoad(This,pwszPath,scFilterStatus)

#define IFilterStatus_PostFilter(This,pwszPath,scFilterStatus)	\
    (This)->lpVtbl -> PostFilter(This,pwszPath,scFilterStatus)

#endif /* COBJMACROS */


#endif 	/* C style interface */



SCODE STDMETHODCALLTYPE IFilterStatus_Initialize_Proxy( 
    IFilterStatus __RPC_FAR * This,
    /* [string][in] */ const WCHAR __RPC_FAR *pwszCatalogName,
    /* [string][in] */ const WCHAR __RPC_FAR *pwszCatalogPath);


void __RPC_STUB IFilterStatus_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE IFilterStatus_PreFilter_Proxy( 
    IFilterStatus __RPC_FAR * This,
    /* [string][in] */ const WCHAR __RPC_FAR *pwszPath);


void __RPC_STUB IFilterStatus_PreFilter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE IFilterStatus_FilterLoad_Proxy( 
    IFilterStatus __RPC_FAR * This,
    /* [string][in] */ const WCHAR __RPC_FAR *pwszPath,
    /* [in] */ SCODE scFilterStatus);


void __RPC_STUB IFilterStatus_FilterLoad_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE IFilterStatus_PostFilter_Proxy( 
    IFilterStatus __RPC_FAR * This,
    /* [string][in] */ const WCHAR __RPC_FAR *pwszPath,
    /* [in] */ SCODE scFilterStatus);


void __RPC_STUB IFilterStatus_PostFilter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFilterStatus_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


