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
/* at Thu Jun 24 19:10:14 2004
 */
/* Compiler settings for .\isaresponse.idl:
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

#ifndef __isaresponse_h__
#define __isaresponse_h__

/* Forward Declarations */ 

#ifndef __ISOAPIsapiResponse_FWD_DEFINED__
#define __ISOAPIsapiResponse_FWD_DEFINED__
typedef interface ISOAPIsapiResponse ISOAPIsapiResponse;
#endif 	/* __ISOAPIsapiResponse_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_isaresponse_0000 */
/* [local] */ 

#pragma once


extern RPC_IF_HANDLE __MIDL_itf_isaresponse_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_isaresponse_0000_v0_0_s_ifspec;

#ifndef __ISOAPIsapiResponse_INTERFACE_DEFINED__
#define __ISOAPIsapiResponse_INTERFACE_DEFINED__

/* interface ISOAPIsapiResponse */
/* [helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISOAPIsapiResponse;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("714C6C40-4531-442E-A498-3AC614200295")
    ISOAPIsapiResponse : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HTTPStatus( 
            BSTR __RPC_FAR *pbstrStatus) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_HTTPStatus( 
            BSTR bstrStatus) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HTTPCharset( 
            BSTR __RPC_FAR *pbstrCharset) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_HTTPCharset( 
            BSTR bstrCharset) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISOAPIsapiResponseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISOAPIsapiResponse __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISOAPIsapiResponse __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISOAPIsapiResponse __RPC_FAR * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_HTTPStatus )( 
            ISOAPIsapiResponse __RPC_FAR * This,
            BSTR __RPC_FAR *pbstrStatus);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_HTTPStatus )( 
            ISOAPIsapiResponse __RPC_FAR * This,
            BSTR bstrStatus);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_HTTPCharset )( 
            ISOAPIsapiResponse __RPC_FAR * This,
            BSTR __RPC_FAR *pbstrCharset);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_HTTPCharset )( 
            ISOAPIsapiResponse __RPC_FAR * This,
            BSTR bstrCharset);
        
        END_INTERFACE
    } ISOAPIsapiResponseVtbl;

    interface ISOAPIsapiResponse
    {
        CONST_VTBL struct ISOAPIsapiResponseVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISOAPIsapiResponse_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISOAPIsapiResponse_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISOAPIsapiResponse_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISOAPIsapiResponse_get_HTTPStatus(This,pbstrStatus)	\
    (This)->lpVtbl -> get_HTTPStatus(This,pbstrStatus)

#define ISOAPIsapiResponse_put_HTTPStatus(This,bstrStatus)	\
    (This)->lpVtbl -> put_HTTPStatus(This,bstrStatus)

#define ISOAPIsapiResponse_get_HTTPCharset(This,pbstrCharset)	\
    (This)->lpVtbl -> get_HTTPCharset(This,pbstrCharset)

#define ISOAPIsapiResponse_put_HTTPCharset(This,bstrCharset)	\
    (This)->lpVtbl -> put_HTTPCharset(This,bstrCharset)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISOAPIsapiResponse_get_HTTPStatus_Proxy( 
    ISOAPIsapiResponse __RPC_FAR * This,
    BSTR __RPC_FAR *pbstrStatus);


void __RPC_STUB ISOAPIsapiResponse_get_HTTPStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISOAPIsapiResponse_put_HTTPStatus_Proxy( 
    ISOAPIsapiResponse __RPC_FAR * This,
    BSTR bstrStatus);


void __RPC_STUB ISOAPIsapiResponse_put_HTTPStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISOAPIsapiResponse_get_HTTPCharset_Proxy( 
    ISOAPIsapiResponse __RPC_FAR * This,
    BSTR __RPC_FAR *pbstrCharset);


void __RPC_STUB ISOAPIsapiResponse_get_HTTPCharset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISOAPIsapiResponse_put_HTTPCharset_Proxy( 
    ISOAPIsapiResponse __RPC_FAR * This,
    BSTR bstrCharset);


void __RPC_STUB ISOAPIsapiResponse_put_HTTPCharset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISOAPIsapiResponse_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


