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
/* at Tue Feb 05 14:30:18 2002
 */
/* Compiler settings for .\callback.idl:
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

#ifndef __callback_h__
#define __callback_h__

/* Forward Declarations */ 

#ifndef __ISynchronizedCallBack_FWD_DEFINED__
#define __ISynchronizedCallBack_FWD_DEFINED__
typedef interface ISynchronizedCallBack ISynchronizedCallBack;
#endif 	/* __ISynchronizedCallBack_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_callback_0000 */
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
#ifndef _SYNCHRONIZED_CALLBACK_H_
#define _SYNCHRONIZED_CALLBACK_H_


extern RPC_IF_HANDLE __MIDL_itf_callback_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_callback_0000_v0_0_s_ifspec;

#ifndef __ISynchronizedCallBack_INTERFACE_DEFINED__
#define __ISynchronizedCallBack_INTERFACE_DEFINED__

/* interface ISynchronizedCallBack */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ISynchronizedCallBack;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("74C26041-70D1-11d1-B75A-00A0C90564FE")
    ISynchronizedCallBack : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CallBack( 
            /* [size_is][in] */ BYTE __RPC_FAR *pParams,
            /* [in] */ ULONG uSize) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISynchronizedCallBackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISynchronizedCallBack __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISynchronizedCallBack __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISynchronizedCallBack __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CallBack )( 
            ISynchronizedCallBack __RPC_FAR * This,
            /* [size_is][in] */ BYTE __RPC_FAR *pParams,
            /* [in] */ ULONG uSize);
        
        END_INTERFACE
    } ISynchronizedCallBackVtbl;

    interface ISynchronizedCallBack
    {
        CONST_VTBL struct ISynchronizedCallBackVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISynchronizedCallBack_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISynchronizedCallBack_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISynchronizedCallBack_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISynchronizedCallBack_CallBack(This,pParams,uSize)	\
    (This)->lpVtbl -> CallBack(This,pParams,uSize)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISynchronizedCallBack_CallBack_Proxy( 
    ISynchronizedCallBack __RPC_FAR * This,
    /* [size_is][in] */ BYTE __RPC_FAR *pParams,
    /* [in] */ ULONG uSize);


void __RPC_STUB ISynchronizedCallBack_CallBack_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISynchronizedCallBack_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_callback_0007 */
/* [local] */ 

#endif


extern RPC_IF_HANDLE __MIDL_itf_callback_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_callback_0007_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


