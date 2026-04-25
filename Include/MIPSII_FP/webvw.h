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
/* at Thu Jun 24 18:49:54 2004
 */
/* Compiler settings for .\webvw.idl:
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

#ifndef __webvw_h__
#define __webvw_h__

/* Forward Declarations */ 

#ifndef __IThumbCtl_FWD_DEFINED__
#define __IThumbCtl_FWD_DEFINED__
typedef interface IThumbCtl IThumbCtl;
#endif 	/* __IThumbCtl_FWD_DEFINED__ */


#ifndef __IWebView_FWD_DEFINED__
#define __IWebView_FWD_DEFINED__
typedef interface IWebView IWebView;
#endif 	/* __IWebView_FWD_DEFINED__ */


#ifndef __IWebViewFolderIcon_FWD_DEFINED__
#define __IWebViewFolderIcon_FWD_DEFINED__
typedef interface IWebViewFolderIcon IWebViewFolderIcon;
#endif 	/* __IWebViewFolderIcon_FWD_DEFINED__ */


#ifndef __IWebViewFolderIcon2_FWD_DEFINED__
#define __IWebViewFolderIcon2_FWD_DEFINED__
typedef interface IWebViewFolderIcon2 IWebViewFolderIcon2;
#endif 	/* __IWebViewFolderIcon2_FWD_DEFINED__ */


#ifndef __IWebViewFolderIcon3_FWD_DEFINED__
#define __IWebViewFolderIcon3_FWD_DEFINED__
typedef interface IWebViewFolderIcon3 IWebViewFolderIcon3;
#endif 	/* __IWebViewFolderIcon3_FWD_DEFINED__ */


#ifndef __DThumbCtlEvents_FWD_DEFINED__
#define __DThumbCtlEvents_FWD_DEFINED__
typedef interface DThumbCtlEvents DThumbCtlEvents;
#endif 	/* __DThumbCtlEvents_FWD_DEFINED__ */


#ifndef __ThumbCtl_FWD_DEFINED__
#define __ThumbCtl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ThumbCtl ThumbCtl;
#else
typedef struct ThumbCtl ThumbCtl;
#endif /* __cplusplus */

#endif 	/* __ThumbCtl_FWD_DEFINED__ */


#ifndef __WebView_FWD_DEFINED__
#define __WebView_FWD_DEFINED__

#ifdef __cplusplus
typedef class WebView WebView;
#else
typedef struct WebView WebView;
#endif /* __cplusplus */

#endif 	/* __WebView_FWD_DEFINED__ */


#ifndef __WebViewFolderIcon_FWD_DEFINED__
#define __WebViewFolderIcon_FWD_DEFINED__

#ifdef __cplusplus
typedef class WebViewFolderIcon WebViewFolderIcon;
#else
typedef struct WebViewFolderIcon WebViewFolderIcon;
#endif /* __cplusplus */

#endif 	/* __WebViewFolderIcon_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shldisp.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_webvw_0000 */
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
#ifndef _WEBVW_H_
#define _WEBVW_H_


extern RPC_IF_HANDLE __MIDL_itf_webvw_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_webvw_0000_v0_0_s_ifspec;

#ifndef __IThumbCtl_INTERFACE_DEFINED__
#define __IThumbCtl_INTERFACE_DEFINED__

/* interface IThumbCtl */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IThumbCtl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e8accae0-23e6-11d1-9e88-00c04fdcab92")
    IThumbCtl : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE displayFile( 
            BSTR bsFileName,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *__MIDL_0015) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE haveThumbnail( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *__MIDL_0016) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_freeSpace( 
            /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0017) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_usedSpace( 
            /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0018) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_totalSpace( 
            /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0019) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IThumbCtlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IThumbCtl __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IThumbCtl __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IThumbCtl __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IThumbCtl __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IThumbCtl __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IThumbCtl __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IThumbCtl __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *displayFile )( 
            IThumbCtl __RPC_FAR * This,
            BSTR bsFileName,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *__MIDL_0015);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *haveThumbnail )( 
            IThumbCtl __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *__MIDL_0016);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_freeSpace )( 
            IThumbCtl __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0017);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_usedSpace )( 
            IThumbCtl __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0018);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_totalSpace )( 
            IThumbCtl __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0019);
        
        END_INTERFACE
    } IThumbCtlVtbl;

    interface IThumbCtl
    {
        CONST_VTBL struct IThumbCtlVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IThumbCtl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IThumbCtl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IThumbCtl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IThumbCtl_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IThumbCtl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IThumbCtl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IThumbCtl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IThumbCtl_displayFile(This,bsFileName,__MIDL_0015)	\
    (This)->lpVtbl -> displayFile(This,bsFileName,__MIDL_0015)

#define IThumbCtl_haveThumbnail(This,__MIDL_0016)	\
    (This)->lpVtbl -> haveThumbnail(This,__MIDL_0016)

#define IThumbCtl_get_freeSpace(This,__MIDL_0017)	\
    (This)->lpVtbl -> get_freeSpace(This,__MIDL_0017)

#define IThumbCtl_get_usedSpace(This,__MIDL_0018)	\
    (This)->lpVtbl -> get_usedSpace(This,__MIDL_0018)

#define IThumbCtl_get_totalSpace(This,__MIDL_0019)	\
    (This)->lpVtbl -> get_totalSpace(This,__MIDL_0019)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IThumbCtl_displayFile_Proxy( 
    IThumbCtl __RPC_FAR * This,
    BSTR bsFileName,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *__MIDL_0015);


void __RPC_STUB IThumbCtl_displayFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IThumbCtl_haveThumbnail_Proxy( 
    IThumbCtl __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *__MIDL_0016);


void __RPC_STUB IThumbCtl_haveThumbnail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IThumbCtl_get_freeSpace_Proxy( 
    IThumbCtl __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0017);


void __RPC_STUB IThumbCtl_get_freeSpace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IThumbCtl_get_usedSpace_Proxy( 
    IThumbCtl __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0018);


void __RPC_STUB IThumbCtl_get_usedSpace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IThumbCtl_get_totalSpace_Proxy( 
    IThumbCtl __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0019);


void __RPC_STUB IThumbCtl_get_totalSpace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IThumbCtl_INTERFACE_DEFINED__ */


#ifndef __IWebView_INTERFACE_DEFINED__
#define __IWebView_INTERFACE_DEFINED__

/* interface IWebView */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWebView;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BCFD624C-705A-11d2-A2AF-00C04FC30871")
    IWebView : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnCSCClick( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CSCSynchronize( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnCSCMouseOver( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnCSCMouseOut( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWebViewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IWebView __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IWebView __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IWebView __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IWebView __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IWebView __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IWebView __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IWebView __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnCSCClick )( 
            IWebView __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CSCSynchronize )( 
            IWebView __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnCSCMouseOver )( 
            IWebView __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnCSCMouseOut )( 
            IWebView __RPC_FAR * This);
        
        END_INTERFACE
    } IWebViewVtbl;

    interface IWebView
    {
        CONST_VTBL struct IWebViewVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebView_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWebView_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWebView_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWebView_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWebView_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWebView_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWebView_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWebView_OnCSCClick(This)	\
    (This)->lpVtbl -> OnCSCClick(This)

#define IWebView_CSCSynchronize(This)	\
    (This)->lpVtbl -> CSCSynchronize(This)

#define IWebView_OnCSCMouseOver(This)	\
    (This)->lpVtbl -> OnCSCMouseOver(This)

#define IWebView_OnCSCMouseOut(This)	\
    (This)->lpVtbl -> OnCSCMouseOut(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWebView_OnCSCClick_Proxy( 
    IWebView __RPC_FAR * This);


void __RPC_STUB IWebView_OnCSCClick_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWebView_CSCSynchronize_Proxy( 
    IWebView __RPC_FAR * This);


void __RPC_STUB IWebView_CSCSynchronize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWebView_OnCSCMouseOver_Proxy( 
    IWebView __RPC_FAR * This);


void __RPC_STUB IWebView_OnCSCMouseOver_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWebView_OnCSCMouseOut_Proxy( 
    IWebView __RPC_FAR * This);


void __RPC_STUB IWebView_OnCSCMouseOut_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWebView_INTERFACE_DEFINED__ */


#ifndef __IWebViewFolderIcon_INTERFACE_DEFINED__
#define __IWebViewFolderIcon_INTERFACE_DEFINED__

/* interface IWebViewFolderIcon */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWebViewFolderIcon;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99DB2085-323A-11d2-A1D4-00A0C9A63FD0")
    IWebViewFolderIcon : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_scale( 
            /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0020) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_scale( 
            /* [in] */ BSTR __MIDL_0021) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_path( 
            /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0022) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_path( 
            /* [in] */ BSTR __MIDL_0023) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_view( 
            /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0024) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_view( 
            /* [in] */ BSTR __MIDL_0025) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_advproperty( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *__MIDL_0026) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_advproperty( 
            /* [in] */ VARIANT_BOOL __MIDL_0027) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWebViewFolderIconVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IWebViewFolderIcon __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IWebViewFolderIcon __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IWebViewFolderIcon __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IWebViewFolderIcon __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IWebViewFolderIcon __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IWebViewFolderIcon __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IWebViewFolderIcon __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_scale )( 
            IWebViewFolderIcon __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0020);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_scale )( 
            IWebViewFolderIcon __RPC_FAR * This,
            /* [in] */ BSTR __MIDL_0021);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_path )( 
            IWebViewFolderIcon __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0022);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_path )( 
            IWebViewFolderIcon __RPC_FAR * This,
            /* [in] */ BSTR __MIDL_0023);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_view )( 
            IWebViewFolderIcon __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0024);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_view )( 
            IWebViewFolderIcon __RPC_FAR * This,
            /* [in] */ BSTR __MIDL_0025);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_advproperty )( 
            IWebViewFolderIcon __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *__MIDL_0026);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_advproperty )( 
            IWebViewFolderIcon __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL __MIDL_0027);
        
        END_INTERFACE
    } IWebViewFolderIconVtbl;

    interface IWebViewFolderIcon
    {
        CONST_VTBL struct IWebViewFolderIconVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebViewFolderIcon_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWebViewFolderIcon_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWebViewFolderIcon_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWebViewFolderIcon_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWebViewFolderIcon_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWebViewFolderIcon_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWebViewFolderIcon_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWebViewFolderIcon_get_scale(This,__MIDL_0020)	\
    (This)->lpVtbl -> get_scale(This,__MIDL_0020)

#define IWebViewFolderIcon_put_scale(This,__MIDL_0021)	\
    (This)->lpVtbl -> put_scale(This,__MIDL_0021)

#define IWebViewFolderIcon_get_path(This,__MIDL_0022)	\
    (This)->lpVtbl -> get_path(This,__MIDL_0022)

#define IWebViewFolderIcon_put_path(This,__MIDL_0023)	\
    (This)->lpVtbl -> put_path(This,__MIDL_0023)

#define IWebViewFolderIcon_get_view(This,__MIDL_0024)	\
    (This)->lpVtbl -> get_view(This,__MIDL_0024)

#define IWebViewFolderIcon_put_view(This,__MIDL_0025)	\
    (This)->lpVtbl -> put_view(This,__MIDL_0025)

#define IWebViewFolderIcon_get_advproperty(This,__MIDL_0026)	\
    (This)->lpVtbl -> get_advproperty(This,__MIDL_0026)

#define IWebViewFolderIcon_put_advproperty(This,__MIDL_0027)	\
    (This)->lpVtbl -> put_advproperty(This,__MIDL_0027)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebViewFolderIcon_get_scale_Proxy( 
    IWebViewFolderIcon __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0020);


void __RPC_STUB IWebViewFolderIcon_get_scale_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IWebViewFolderIcon_put_scale_Proxy( 
    IWebViewFolderIcon __RPC_FAR * This,
    /* [in] */ BSTR __MIDL_0021);


void __RPC_STUB IWebViewFolderIcon_put_scale_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebViewFolderIcon_get_path_Proxy( 
    IWebViewFolderIcon __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0022);


void __RPC_STUB IWebViewFolderIcon_get_path_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IWebViewFolderIcon_put_path_Proxy( 
    IWebViewFolderIcon __RPC_FAR * This,
    /* [in] */ BSTR __MIDL_0023);


void __RPC_STUB IWebViewFolderIcon_put_path_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebViewFolderIcon_get_view_Proxy( 
    IWebViewFolderIcon __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0024);


void __RPC_STUB IWebViewFolderIcon_get_view_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IWebViewFolderIcon_put_view_Proxy( 
    IWebViewFolderIcon __RPC_FAR * This,
    /* [in] */ BSTR __MIDL_0025);


void __RPC_STUB IWebViewFolderIcon_put_view_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebViewFolderIcon_get_advproperty_Proxy( 
    IWebViewFolderIcon __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *__MIDL_0026);


void __RPC_STUB IWebViewFolderIcon_get_advproperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IWebViewFolderIcon_put_advproperty_Proxy( 
    IWebViewFolderIcon __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL __MIDL_0027);


void __RPC_STUB IWebViewFolderIcon_put_advproperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWebViewFolderIcon_INTERFACE_DEFINED__ */


#ifndef __IWebViewFolderIcon2_INTERFACE_DEFINED__
#define __IWebViewFolderIcon2_INTERFACE_DEFINED__

/* interface IWebViewFolderIcon2 */
/* [dual][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWebViewFolderIcon2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7E201149-7DB7-4e57-B03C-5CCB8C2B85E2")
    IWebViewFolderIcon2 : public IWebViewFolderIcon
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setSlice( 
            /* [in] */ int index,
            VARIANT varHiBytes,
            VARIANT varLoBytes,
            VARIANT varColorref) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWebViewFolderIcon2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IWebViewFolderIcon2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IWebViewFolderIcon2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IWebViewFolderIcon2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IWebViewFolderIcon2 __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IWebViewFolderIcon2 __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IWebViewFolderIcon2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IWebViewFolderIcon2 __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_scale )( 
            IWebViewFolderIcon2 __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0020);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_scale )( 
            IWebViewFolderIcon2 __RPC_FAR * This,
            /* [in] */ BSTR __MIDL_0021);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_path )( 
            IWebViewFolderIcon2 __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0022);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_path )( 
            IWebViewFolderIcon2 __RPC_FAR * This,
            /* [in] */ BSTR __MIDL_0023);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_view )( 
            IWebViewFolderIcon2 __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0024);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_view )( 
            IWebViewFolderIcon2 __RPC_FAR * This,
            /* [in] */ BSTR __MIDL_0025);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_advproperty )( 
            IWebViewFolderIcon2 __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *__MIDL_0026);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_advproperty )( 
            IWebViewFolderIcon2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL __MIDL_0027);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *setSlice )( 
            IWebViewFolderIcon2 __RPC_FAR * This,
            /* [in] */ int index,
            VARIANT varHiBytes,
            VARIANT varLoBytes,
            VARIANT varColorref);
        
        END_INTERFACE
    } IWebViewFolderIcon2Vtbl;

    interface IWebViewFolderIcon2
    {
        CONST_VTBL struct IWebViewFolderIcon2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebViewFolderIcon2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWebViewFolderIcon2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWebViewFolderIcon2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWebViewFolderIcon2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWebViewFolderIcon2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWebViewFolderIcon2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWebViewFolderIcon2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWebViewFolderIcon2_get_scale(This,__MIDL_0020)	\
    (This)->lpVtbl -> get_scale(This,__MIDL_0020)

#define IWebViewFolderIcon2_put_scale(This,__MIDL_0021)	\
    (This)->lpVtbl -> put_scale(This,__MIDL_0021)

#define IWebViewFolderIcon2_get_path(This,__MIDL_0022)	\
    (This)->lpVtbl -> get_path(This,__MIDL_0022)

#define IWebViewFolderIcon2_put_path(This,__MIDL_0023)	\
    (This)->lpVtbl -> put_path(This,__MIDL_0023)

#define IWebViewFolderIcon2_get_view(This,__MIDL_0024)	\
    (This)->lpVtbl -> get_view(This,__MIDL_0024)

#define IWebViewFolderIcon2_put_view(This,__MIDL_0025)	\
    (This)->lpVtbl -> put_view(This,__MIDL_0025)

#define IWebViewFolderIcon2_get_advproperty(This,__MIDL_0026)	\
    (This)->lpVtbl -> get_advproperty(This,__MIDL_0026)

#define IWebViewFolderIcon2_put_advproperty(This,__MIDL_0027)	\
    (This)->lpVtbl -> put_advproperty(This,__MIDL_0027)


#define IWebViewFolderIcon2_setSlice(This,index,varHiBytes,varLoBytes,varColorref)	\
    (This)->lpVtbl -> setSlice(This,index,varHiBytes,varLoBytes,varColorref)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWebViewFolderIcon2_setSlice_Proxy( 
    IWebViewFolderIcon2 __RPC_FAR * This,
    /* [in] */ int index,
    VARIANT varHiBytes,
    VARIANT varLoBytes,
    VARIANT varColorref);


void __RPC_STUB IWebViewFolderIcon2_setSlice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWebViewFolderIcon2_INTERFACE_DEFINED__ */


#ifndef __IWebViewFolderIcon3_INTERFACE_DEFINED__
#define __IWebViewFolderIcon3_INTERFACE_DEFINED__

/* interface IWebViewFolderIcon3 */
/* [dual][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWebViewFolderIcon3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7E20114A-7DB7-4e57-B03C-5CCB8C2B85E2")
    IWebViewFolderIcon3 : public IWebViewFolderIcon2
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_item( 
            /* [out][retval] */ FolderItem __RPC_FAR *__RPC_FAR *ppFolderItem) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_item( 
            /* [in] */ FolderItem __RPC_FAR *pFolderItem) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_clickStyle( 
            /* [out][retval] */ LONG __RPC_FAR *plClickStyle) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_clickStyle( 
            /* [in] */ LONG lClickStyle) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_labelGap( 
            /* [out][retval] */ LONG __RPC_FAR *plLabelGap) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_labelGap( 
            /* [in] */ LONG lLabelGap) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWebViewFolderIcon3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IWebViewFolderIcon3 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IWebViewFolderIcon3 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IWebViewFolderIcon3 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IWebViewFolderIcon3 __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IWebViewFolderIcon3 __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IWebViewFolderIcon3 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IWebViewFolderIcon3 __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_scale )( 
            IWebViewFolderIcon3 __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0020);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_scale )( 
            IWebViewFolderIcon3 __RPC_FAR * This,
            /* [in] */ BSTR __MIDL_0021);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_path )( 
            IWebViewFolderIcon3 __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0022);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_path )( 
            IWebViewFolderIcon3 __RPC_FAR * This,
            /* [in] */ BSTR __MIDL_0023);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_view )( 
            IWebViewFolderIcon3 __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *__MIDL_0024);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_view )( 
            IWebViewFolderIcon3 __RPC_FAR * This,
            /* [in] */ BSTR __MIDL_0025);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_advproperty )( 
            IWebViewFolderIcon3 __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *__MIDL_0026);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_advproperty )( 
            IWebViewFolderIcon3 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL __MIDL_0027);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *setSlice )( 
            IWebViewFolderIcon3 __RPC_FAR * This,
            /* [in] */ int index,
            VARIANT varHiBytes,
            VARIANT varLoBytes,
            VARIANT varColorref);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_item )( 
            IWebViewFolderIcon3 __RPC_FAR * This,
            /* [out][retval] */ FolderItem __RPC_FAR *__RPC_FAR *ppFolderItem);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_item )( 
            IWebViewFolderIcon3 __RPC_FAR * This,
            /* [in] */ FolderItem __RPC_FAR *pFolderItem);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_clickStyle )( 
            IWebViewFolderIcon3 __RPC_FAR * This,
            /* [out][retval] */ LONG __RPC_FAR *plClickStyle);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_clickStyle )( 
            IWebViewFolderIcon3 __RPC_FAR * This,
            /* [in] */ LONG lClickStyle);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_labelGap )( 
            IWebViewFolderIcon3 __RPC_FAR * This,
            /* [out][retval] */ LONG __RPC_FAR *plLabelGap);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_labelGap )( 
            IWebViewFolderIcon3 __RPC_FAR * This,
            /* [in] */ LONG lLabelGap);
        
        END_INTERFACE
    } IWebViewFolderIcon3Vtbl;

    interface IWebViewFolderIcon3
    {
        CONST_VTBL struct IWebViewFolderIcon3Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebViewFolderIcon3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWebViewFolderIcon3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWebViewFolderIcon3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWebViewFolderIcon3_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWebViewFolderIcon3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWebViewFolderIcon3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWebViewFolderIcon3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWebViewFolderIcon3_get_scale(This,__MIDL_0020)	\
    (This)->lpVtbl -> get_scale(This,__MIDL_0020)

#define IWebViewFolderIcon3_put_scale(This,__MIDL_0021)	\
    (This)->lpVtbl -> put_scale(This,__MIDL_0021)

#define IWebViewFolderIcon3_get_path(This,__MIDL_0022)	\
    (This)->lpVtbl -> get_path(This,__MIDL_0022)

#define IWebViewFolderIcon3_put_path(This,__MIDL_0023)	\
    (This)->lpVtbl -> put_path(This,__MIDL_0023)

#define IWebViewFolderIcon3_get_view(This,__MIDL_0024)	\
    (This)->lpVtbl -> get_view(This,__MIDL_0024)

#define IWebViewFolderIcon3_put_view(This,__MIDL_0025)	\
    (This)->lpVtbl -> put_view(This,__MIDL_0025)

#define IWebViewFolderIcon3_get_advproperty(This,__MIDL_0026)	\
    (This)->lpVtbl -> get_advproperty(This,__MIDL_0026)

#define IWebViewFolderIcon3_put_advproperty(This,__MIDL_0027)	\
    (This)->lpVtbl -> put_advproperty(This,__MIDL_0027)


#define IWebViewFolderIcon3_setSlice(This,index,varHiBytes,varLoBytes,varColorref)	\
    (This)->lpVtbl -> setSlice(This,index,varHiBytes,varLoBytes,varColorref)


#define IWebViewFolderIcon3_get_item(This,ppFolderItem)	\
    (This)->lpVtbl -> get_item(This,ppFolderItem)

#define IWebViewFolderIcon3_put_item(This,pFolderItem)	\
    (This)->lpVtbl -> put_item(This,pFolderItem)

#define IWebViewFolderIcon3_get_clickStyle(This,plClickStyle)	\
    (This)->lpVtbl -> get_clickStyle(This,plClickStyle)

#define IWebViewFolderIcon3_put_clickStyle(This,lClickStyle)	\
    (This)->lpVtbl -> put_clickStyle(This,lClickStyle)

#define IWebViewFolderIcon3_get_labelGap(This,plLabelGap)	\
    (This)->lpVtbl -> get_labelGap(This,plLabelGap)

#define IWebViewFolderIcon3_put_labelGap(This,lLabelGap)	\
    (This)->lpVtbl -> put_labelGap(This,lLabelGap)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebViewFolderIcon3_get_item_Proxy( 
    IWebViewFolderIcon3 __RPC_FAR * This,
    /* [out][retval] */ FolderItem __RPC_FAR *__RPC_FAR *ppFolderItem);


void __RPC_STUB IWebViewFolderIcon3_get_item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IWebViewFolderIcon3_put_item_Proxy( 
    IWebViewFolderIcon3 __RPC_FAR * This,
    /* [in] */ FolderItem __RPC_FAR *pFolderItem);


void __RPC_STUB IWebViewFolderIcon3_put_item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebViewFolderIcon3_get_clickStyle_Proxy( 
    IWebViewFolderIcon3 __RPC_FAR * This,
    /* [out][retval] */ LONG __RPC_FAR *plClickStyle);


void __RPC_STUB IWebViewFolderIcon3_get_clickStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IWebViewFolderIcon3_put_clickStyle_Proxy( 
    IWebViewFolderIcon3 __RPC_FAR * This,
    /* [in] */ LONG lClickStyle);


void __RPC_STUB IWebViewFolderIcon3_put_clickStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebViewFolderIcon3_get_labelGap_Proxy( 
    IWebViewFolderIcon3 __RPC_FAR * This,
    /* [out][retval] */ LONG __RPC_FAR *plLabelGap);


void __RPC_STUB IWebViewFolderIcon3_get_labelGap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IWebViewFolderIcon3_put_labelGap_Proxy( 
    IWebViewFolderIcon3 __RPC_FAR * This,
    /* [in] */ LONG lLabelGap);


void __RPC_STUB IWebViewFolderIcon3_put_labelGap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWebViewFolderIcon3_INTERFACE_DEFINED__ */



#ifndef __WEBVWLib_LIBRARY_DEFINED__
#define __WEBVWLib_LIBRARY_DEFINED__

/* library WEBVWLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_WEBVWLib;

#ifndef __DThumbCtlEvents_DISPINTERFACE_DEFINED__
#define __DThumbCtlEvents_DISPINTERFACE_DEFINED__

/* dispinterface DThumbCtlEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_DThumbCtlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("58d6f4b0-181d-11d1-9e88-00c04fdcab92")
    DThumbCtlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DThumbCtlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            DThumbCtlEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            DThumbCtlEvents __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            DThumbCtlEvents __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            DThumbCtlEvents __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            DThumbCtlEvents __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            DThumbCtlEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            DThumbCtlEvents __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } DThumbCtlEventsVtbl;

    interface DThumbCtlEvents
    {
        CONST_VTBL struct DThumbCtlEventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DThumbCtlEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define DThumbCtlEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define DThumbCtlEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define DThumbCtlEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define DThumbCtlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define DThumbCtlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define DThumbCtlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DThumbCtlEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ThumbCtl;

#ifdef __cplusplus

class DECLSPEC_UUID("71650000-E8A8-11d2-9652-00C04FC30871")
ThumbCtl;
#endif

EXTERN_C const CLSID CLSID_WebView;

#ifdef __cplusplus

class DECLSPEC_UUID("BCFD624E-705A-11d2-A2AF-00C04FC30871")
WebView;
#endif

EXTERN_C const CLSID CLSID_WebViewFolderIcon;

#ifdef __cplusplus

class DECLSPEC_UUID("844F4806-E8A8-11d2-9652-00C04FC30871")
WebViewFolderIcon;
#endif
#endif /* __WEBVWLib_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_webvw_0181 */
/* [local] */ 

#endif // _WEBVW_H_


extern RPC_IF_HANDLE __MIDL_itf_webvw_0181_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_webvw_0181_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long __RPC_FAR *, unsigned long            , VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long __RPC_FAR *, VARIANT __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


