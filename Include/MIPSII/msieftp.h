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
/* at Tue Feb 05 14:31:32 2002
 */
/* Compiler settings for .\msieftp.idl:
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

#ifndef __msieftp_h__
#define __msieftp_h__

/* Forward Declarations */ 

#ifndef __IFtpWebView_FWD_DEFINED__
#define __IFtpWebView_FWD_DEFINED__
typedef interface IFtpWebView IFtpWebView;
#endif 	/* __IFtpWebView_FWD_DEFINED__ */


#ifndef __FtpWebView_FWD_DEFINED__
#define __FtpWebView_FWD_DEFINED__

#ifdef __cplusplus
typedef class FtpWebView FtpWebView;
#else
typedef struct FtpWebView FtpWebView;
#endif /* __cplusplus */

#endif 	/* __FtpWebView_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_msieftp_0000 */
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


extern RPC_IF_HANDLE __MIDL_itf_msieftp_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msieftp_0000_v0_0_s_ifspec;


#ifndef __MSIEFTPLib_LIBRARY_DEFINED__
#define __MSIEFTPLib_LIBRARY_DEFINED__

/* library MSIEFTPLib */
/* [version][lcid][helpstring][uuid] */ 


EXTERN_C const IID LIBID_MSIEFTPLib;

#ifndef __IFtpWebView_INTERFACE_DEFINED__
#define __IFtpWebView_INTERFACE_DEFINED__

/* interface IFtpWebView */
/* [oleautomation][helpstring][hidden][dual][uuid][object] */ 


EXTERN_C const IID IID_IFtpWebView;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("21DCE770-ABD0-11d2-A32B-006097DF5BD4")
    IFtpWebView : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Server( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstr) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Directory( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstr) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_UserName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstr) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PasswordLength( 
            /* [retval][out] */ long __RPC_FAR *plLength) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_EmailAddress( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstr) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_EmailAddress( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CurrentLoginAnonymous( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfAnonymousLogin) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MessageOfTheDay( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstr) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LoginAnonymously( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LoginWithPassword( 
            /* [in] */ BSTR bUserName,
            /* [in] */ BSTR bPassword) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LoginWithoutPassword( 
            /* [in] */ BSTR bUserName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InvokeHelp( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFtpWebViewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IFtpWebView __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IFtpWebView __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IFtpWebView __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IFtpWebView __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IFtpWebView __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IFtpWebView __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IFtpWebView __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Server )( 
            IFtpWebView __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstr);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Directory )( 
            IFtpWebView __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstr);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_UserName )( 
            IFtpWebView __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstr);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_PasswordLength )( 
            IFtpWebView __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *plLength);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_EmailAddress )( 
            IFtpWebView __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstr);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_EmailAddress )( 
            IFtpWebView __RPC_FAR * This,
            /* [in] */ BSTR bstr);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_CurrentLoginAnonymous )( 
            IFtpWebView __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfAnonymousLogin);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MessageOfTheDay )( 
            IFtpWebView __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LoginAnonymously )( 
            IFtpWebView __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LoginWithPassword )( 
            IFtpWebView __RPC_FAR * This,
            /* [in] */ BSTR bUserName,
            /* [in] */ BSTR bPassword);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LoginWithoutPassword )( 
            IFtpWebView __RPC_FAR * This,
            /* [in] */ BSTR bUserName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InvokeHelp )( 
            IFtpWebView __RPC_FAR * This);
        
        END_INTERFACE
    } IFtpWebViewVtbl;

    interface IFtpWebView
    {
        CONST_VTBL struct IFtpWebViewVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFtpWebView_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFtpWebView_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFtpWebView_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFtpWebView_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IFtpWebView_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IFtpWebView_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IFtpWebView_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IFtpWebView_get_Server(This,pbstr)	\
    (This)->lpVtbl -> get_Server(This,pbstr)

#define IFtpWebView_get_Directory(This,pbstr)	\
    (This)->lpVtbl -> get_Directory(This,pbstr)

#define IFtpWebView_get_UserName(This,pbstr)	\
    (This)->lpVtbl -> get_UserName(This,pbstr)

#define IFtpWebView_get_PasswordLength(This,plLength)	\
    (This)->lpVtbl -> get_PasswordLength(This,plLength)

#define IFtpWebView_get_EmailAddress(This,pbstr)	\
    (This)->lpVtbl -> get_EmailAddress(This,pbstr)

#define IFtpWebView_put_EmailAddress(This,bstr)	\
    (This)->lpVtbl -> put_EmailAddress(This,bstr)

#define IFtpWebView_get_CurrentLoginAnonymous(This,pfAnonymousLogin)	\
    (This)->lpVtbl -> get_CurrentLoginAnonymous(This,pfAnonymousLogin)

#define IFtpWebView_get_MessageOfTheDay(This,pbstr)	\
    (This)->lpVtbl -> get_MessageOfTheDay(This,pbstr)

#define IFtpWebView_LoginAnonymously(This)	\
    (This)->lpVtbl -> LoginAnonymously(This)

#define IFtpWebView_LoginWithPassword(This,bUserName,bPassword)	\
    (This)->lpVtbl -> LoginWithPassword(This,bUserName,bPassword)

#define IFtpWebView_LoginWithoutPassword(This,bUserName)	\
    (This)->lpVtbl -> LoginWithoutPassword(This,bUserName)

#define IFtpWebView_InvokeHelp(This)	\
    (This)->lpVtbl -> InvokeHelp(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFtpWebView_get_Server_Proxy( 
    IFtpWebView __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstr);


void __RPC_STUB IFtpWebView_get_Server_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFtpWebView_get_Directory_Proxy( 
    IFtpWebView __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstr);


void __RPC_STUB IFtpWebView_get_Directory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFtpWebView_get_UserName_Proxy( 
    IFtpWebView __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstr);


void __RPC_STUB IFtpWebView_get_UserName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFtpWebView_get_PasswordLength_Proxy( 
    IFtpWebView __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *plLength);


void __RPC_STUB IFtpWebView_get_PasswordLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFtpWebView_get_EmailAddress_Proxy( 
    IFtpWebView __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstr);


void __RPC_STUB IFtpWebView_get_EmailAddress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IFtpWebView_put_EmailAddress_Proxy( 
    IFtpWebView __RPC_FAR * This,
    /* [in] */ BSTR bstr);


void __RPC_STUB IFtpWebView_put_EmailAddress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFtpWebView_get_CurrentLoginAnonymous_Proxy( 
    IFtpWebView __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfAnonymousLogin);


void __RPC_STUB IFtpWebView_get_CurrentLoginAnonymous_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFtpWebView_get_MessageOfTheDay_Proxy( 
    IFtpWebView __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstr);


void __RPC_STUB IFtpWebView_get_MessageOfTheDay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IFtpWebView_LoginAnonymously_Proxy( 
    IFtpWebView __RPC_FAR * This);


void __RPC_STUB IFtpWebView_LoginAnonymously_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IFtpWebView_LoginWithPassword_Proxy( 
    IFtpWebView __RPC_FAR * This,
    /* [in] */ BSTR bUserName,
    /* [in] */ BSTR bPassword);


void __RPC_STUB IFtpWebView_LoginWithPassword_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IFtpWebView_LoginWithoutPassword_Proxy( 
    IFtpWebView __RPC_FAR * This,
    /* [in] */ BSTR bUserName);


void __RPC_STUB IFtpWebView_LoginWithoutPassword_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IFtpWebView_InvokeHelp_Proxy( 
    IFtpWebView __RPC_FAR * This);


void __RPC_STUB IFtpWebView_InvokeHelp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFtpWebView_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_FtpWebView;

#ifdef __cplusplus

class DECLSPEC_UUID("210DA8A2-7445-11d1-91F7-006097DF5BD4")
FtpWebView;
#endif
#endif /* __MSIEFTPLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


