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
/* at Thu Jun 24 18:48:41 2004
 */
/* Compiler settings for .\htiframe.idl:
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

#ifndef __htiframe_h__
#define __htiframe_h__

/* Forward Declarations */ 

#ifndef __ITargetNotify_FWD_DEFINED__
#define __ITargetNotify_FWD_DEFINED__
typedef interface ITargetNotify ITargetNotify;
#endif 	/* __ITargetNotify_FWD_DEFINED__ */


#ifndef __ITargetNotify2_FWD_DEFINED__
#define __ITargetNotify2_FWD_DEFINED__
typedef interface ITargetNotify2 ITargetNotify2;
#endif 	/* __ITargetNotify2_FWD_DEFINED__ */


#ifndef __ITargetFrame2_FWD_DEFINED__
#define __ITargetFrame2_FWD_DEFINED__
typedef interface ITargetFrame2 ITargetFrame2;
#endif 	/* __ITargetFrame2_FWD_DEFINED__ */


#ifndef __ITargetContainer_FWD_DEFINED__
#define __ITargetContainer_FWD_DEFINED__
typedef interface ITargetContainer ITargetContainer;
#endif 	/* __ITargetContainer_FWD_DEFINED__ */


/* header files for imported files */
#include "objidl.h"
#include "oleidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_htiframe_0000 */
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

//--------------------------------------------------------------------------
// OLE Hyperlinking ITargetFrame2 Interfaces.



EXTERN_C const IID IID_ITargetFrame2;
EXTERN_C const IID IID_ITargetContainer;
#ifndef _LPTARGETFRAME2_DEFINED
#define _LPTARGETFRAME2_DEFINED
#define TF_NAVIGATE 0x7FAEABAC
#define TARGET_NOTIFY_OBJECT_NAME L"863a99a0-21bc-11d0-82b4-00a0c90c29c5"


extern RPC_IF_HANDLE __MIDL_itf_htiframe_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_htiframe_0000_v0_0_s_ifspec;

#ifndef __ITargetNotify_INTERFACE_DEFINED__
#define __ITargetNotify_INTERFACE_DEFINED__

/* interface ITargetNotify */
/* [unique][uuid][object] */ 

typedef /* [unique] */ ITargetNotify __RPC_FAR *LPTARGETNOTIFY;


EXTERN_C const IID IID_ITargetNotify;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("863a99a0-21bc-11d0-82b4-00a0c90c29c5")
    ITargetNotify : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnCreate( 
            /* [in] */ IUnknown __RPC_FAR *pUnkDestination,
            /* [in] */ ULONG cbCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnReuse( 
            /* [in] */ IUnknown __RPC_FAR *pUnkDestination) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITargetNotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITargetNotify __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITargetNotify __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITargetNotify __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnCreate )( 
            ITargetNotify __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pUnkDestination,
            /* [in] */ ULONG cbCookie);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnReuse )( 
            ITargetNotify __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pUnkDestination);
        
        END_INTERFACE
    } ITargetNotifyVtbl;

    interface ITargetNotify
    {
        CONST_VTBL struct ITargetNotifyVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITargetNotify_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITargetNotify_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITargetNotify_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITargetNotify_OnCreate(This,pUnkDestination,cbCookie)	\
    (This)->lpVtbl -> OnCreate(This,pUnkDestination,cbCookie)

#define ITargetNotify_OnReuse(This,pUnkDestination)	\
    (This)->lpVtbl -> OnReuse(This,pUnkDestination)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITargetNotify_OnCreate_Proxy( 
    ITargetNotify __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pUnkDestination,
    /* [in] */ ULONG cbCookie);


void __RPC_STUB ITargetNotify_OnCreate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITargetNotify_OnReuse_Proxy( 
    ITargetNotify __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pUnkDestination);


void __RPC_STUB ITargetNotify_OnReuse_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITargetNotify_INTERFACE_DEFINED__ */


#ifndef __ITargetNotify2_INTERFACE_DEFINED__
#define __ITargetNotify2_INTERFACE_DEFINED__

/* interface ITargetNotify2 */
/* [unique][uuid][object] */ 

typedef /* [unique] */ ITargetNotify2 __RPC_FAR *LPTARGETNOTIFY2;


EXTERN_C const IID IID_ITargetNotify2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f6b1-98b5-11cf-bb82-00aa00bdce0b")
    ITargetNotify2 : public ITargetNotify
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetOptionString( 
            /* [out][in] */ BSTR __RPC_FAR *pbstrOptions) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITargetNotify2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITargetNotify2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITargetNotify2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITargetNotify2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnCreate )( 
            ITargetNotify2 __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pUnkDestination,
            /* [in] */ ULONG cbCookie);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnReuse )( 
            ITargetNotify2 __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pUnkDestination);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetOptionString )( 
            ITargetNotify2 __RPC_FAR * This,
            /* [out][in] */ BSTR __RPC_FAR *pbstrOptions);
        
        END_INTERFACE
    } ITargetNotify2Vtbl;

    interface ITargetNotify2
    {
        CONST_VTBL struct ITargetNotify2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITargetNotify2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITargetNotify2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITargetNotify2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITargetNotify2_OnCreate(This,pUnkDestination,cbCookie)	\
    (This)->lpVtbl -> OnCreate(This,pUnkDestination,cbCookie)

#define ITargetNotify2_OnReuse(This,pUnkDestination)	\
    (This)->lpVtbl -> OnReuse(This,pUnkDestination)


#define ITargetNotify2_GetOptionString(This,pbstrOptions)	\
    (This)->lpVtbl -> GetOptionString(This,pbstrOptions)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITargetNotify2_GetOptionString_Proxy( 
    ITargetNotify2 __RPC_FAR * This,
    /* [out][in] */ BSTR __RPC_FAR *pbstrOptions);


void __RPC_STUB ITargetNotify2_GetOptionString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITargetNotify2_INTERFACE_DEFINED__ */


#ifndef __ITargetFrame2_INTERFACE_DEFINED__
#define __ITargetFrame2_INTERFACE_DEFINED__

/* interface ITargetFrame2 */
/* [unique][uuid][object] */ 

typedef /* [unique] */ ITargetFrame2 __RPC_FAR *LPTARGETFRAME2;

typedef /* [public] */ 
enum __MIDL_ITargetFrame2_0001
    {	FINDFRAME_NONE	= 0,
	FINDFRAME_JUSTTESTEXISTENCE	= 1,
	FINDFRAME_INTERNAL	= 0x80000000
    }	FINDFRAME_FLAGS;

typedef /* [public] */ 
enum __MIDL_ITargetFrame2_0002
    {	FRAMEOPTIONS_SCROLL_YES	= 0x1,
	FRAMEOPTIONS_SCROLL_NO	= 0x2,
	FRAMEOPTIONS_SCROLL_AUTO	= 0x4,
	FRAMEOPTIONS_NORESIZE	= 0x8,
	FRAMEOPTIONS_NO3DBORDER	= 0x10,
	FRAMEOPTIONS_DESKTOP	= 0x20,
	FRAMEOPTIONS_BROWSERBAND	= 0x40
    }	FRAMEOPTIONS_FLAGS;


EXTERN_C const IID IID_ITargetFrame2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("86D52E11-94A8-11d0-82AF-00C04FD5AE38")
    ITargetFrame2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFrameName( 
            /* [in] */ LPCWSTR pszFrameName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFrameName( 
            /* [out] */ LPWSTR __RPC_FAR *ppszFrameName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParentFrame( 
            /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppunkParent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFrameSrc( 
            /* [in] */ LPCWSTR pszFrameSrc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFrameSrc( 
            /* [out] */ LPWSTR __RPC_FAR *ppszFrameSrc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFramesContainer( 
            /* [out] */ IOleContainer __RPC_FAR *__RPC_FAR *ppContainer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFrameOptions( 
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFrameOptions( 
            /* [out] */ DWORD __RPC_FAR *pdwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFrameMargins( 
            /* [in] */ DWORD dwWidth,
            /* [in] */ DWORD dwHeight) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFrameMargins( 
            /* [out] */ DWORD __RPC_FAR *pdwWidth,
            /* [out] */ DWORD __RPC_FAR *pdwHeight) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindFrame( 
            /* [unique][in] */ LPCWSTR pszTargetName,
            /* [in] */ DWORD dwFlags,
            /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppunkTargetFrame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTargetAlias( 
            /* [unique][in] */ LPCWSTR pszTargetName,
            /* [out] */ LPWSTR __RPC_FAR *ppszTargetAlias) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITargetFrame2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITargetFrame2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITargetFrame2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITargetFrame2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetFrameName )( 
            ITargetFrame2 __RPC_FAR * This,
            /* [in] */ LPCWSTR pszFrameName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFrameName )( 
            ITargetFrame2 __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszFrameName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetParentFrame )( 
            ITargetFrame2 __RPC_FAR * This,
            /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppunkParent);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetFrameSrc )( 
            ITargetFrame2 __RPC_FAR * This,
            /* [in] */ LPCWSTR pszFrameSrc);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFrameSrc )( 
            ITargetFrame2 __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszFrameSrc);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFramesContainer )( 
            ITargetFrame2 __RPC_FAR * This,
            /* [out] */ IOleContainer __RPC_FAR *__RPC_FAR *ppContainer);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetFrameOptions )( 
            ITargetFrame2 __RPC_FAR * This,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFrameOptions )( 
            ITargetFrame2 __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *pdwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetFrameMargins )( 
            ITargetFrame2 __RPC_FAR * This,
            /* [in] */ DWORD dwWidth,
            /* [in] */ DWORD dwHeight);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFrameMargins )( 
            ITargetFrame2 __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *pdwWidth,
            /* [out] */ DWORD __RPC_FAR *pdwHeight);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindFrame )( 
            ITargetFrame2 __RPC_FAR * This,
            /* [unique][in] */ LPCWSTR pszTargetName,
            /* [in] */ DWORD dwFlags,
            /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppunkTargetFrame);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTargetAlias )( 
            ITargetFrame2 __RPC_FAR * This,
            /* [unique][in] */ LPCWSTR pszTargetName,
            /* [out] */ LPWSTR __RPC_FAR *ppszTargetAlias);
        
        END_INTERFACE
    } ITargetFrame2Vtbl;

    interface ITargetFrame2
    {
        CONST_VTBL struct ITargetFrame2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITargetFrame2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITargetFrame2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITargetFrame2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITargetFrame2_SetFrameName(This,pszFrameName)	\
    (This)->lpVtbl -> SetFrameName(This,pszFrameName)

#define ITargetFrame2_GetFrameName(This,ppszFrameName)	\
    (This)->lpVtbl -> GetFrameName(This,ppszFrameName)

#define ITargetFrame2_GetParentFrame(This,ppunkParent)	\
    (This)->lpVtbl -> GetParentFrame(This,ppunkParent)

#define ITargetFrame2_SetFrameSrc(This,pszFrameSrc)	\
    (This)->lpVtbl -> SetFrameSrc(This,pszFrameSrc)

#define ITargetFrame2_GetFrameSrc(This,ppszFrameSrc)	\
    (This)->lpVtbl -> GetFrameSrc(This,ppszFrameSrc)

#define ITargetFrame2_GetFramesContainer(This,ppContainer)	\
    (This)->lpVtbl -> GetFramesContainer(This,ppContainer)

#define ITargetFrame2_SetFrameOptions(This,dwFlags)	\
    (This)->lpVtbl -> SetFrameOptions(This,dwFlags)

#define ITargetFrame2_GetFrameOptions(This,pdwFlags)	\
    (This)->lpVtbl -> GetFrameOptions(This,pdwFlags)

#define ITargetFrame2_SetFrameMargins(This,dwWidth,dwHeight)	\
    (This)->lpVtbl -> SetFrameMargins(This,dwWidth,dwHeight)

#define ITargetFrame2_GetFrameMargins(This,pdwWidth,pdwHeight)	\
    (This)->lpVtbl -> GetFrameMargins(This,pdwWidth,pdwHeight)

#define ITargetFrame2_FindFrame(This,pszTargetName,dwFlags,ppunkTargetFrame)	\
    (This)->lpVtbl -> FindFrame(This,pszTargetName,dwFlags,ppunkTargetFrame)

#define ITargetFrame2_GetTargetAlias(This,pszTargetName,ppszTargetAlias)	\
    (This)->lpVtbl -> GetTargetAlias(This,pszTargetName,ppszTargetAlias)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITargetFrame2_SetFrameName_Proxy( 
    ITargetFrame2 __RPC_FAR * This,
    /* [in] */ LPCWSTR pszFrameName);


void __RPC_STUB ITargetFrame2_SetFrameName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITargetFrame2_GetFrameName_Proxy( 
    ITargetFrame2 __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszFrameName);


void __RPC_STUB ITargetFrame2_GetFrameName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITargetFrame2_GetParentFrame_Proxy( 
    ITargetFrame2 __RPC_FAR * This,
    /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppunkParent);


void __RPC_STUB ITargetFrame2_GetParentFrame_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITargetFrame2_SetFrameSrc_Proxy( 
    ITargetFrame2 __RPC_FAR * This,
    /* [in] */ LPCWSTR pszFrameSrc);


void __RPC_STUB ITargetFrame2_SetFrameSrc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITargetFrame2_GetFrameSrc_Proxy( 
    ITargetFrame2 __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszFrameSrc);


void __RPC_STUB ITargetFrame2_GetFrameSrc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITargetFrame2_GetFramesContainer_Proxy( 
    ITargetFrame2 __RPC_FAR * This,
    /* [out] */ IOleContainer __RPC_FAR *__RPC_FAR *ppContainer);


void __RPC_STUB ITargetFrame2_GetFramesContainer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITargetFrame2_SetFrameOptions_Proxy( 
    ITargetFrame2 __RPC_FAR * This,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB ITargetFrame2_SetFrameOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITargetFrame2_GetFrameOptions_Proxy( 
    ITargetFrame2 __RPC_FAR * This,
    /* [out] */ DWORD __RPC_FAR *pdwFlags);


void __RPC_STUB ITargetFrame2_GetFrameOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITargetFrame2_SetFrameMargins_Proxy( 
    ITargetFrame2 __RPC_FAR * This,
    /* [in] */ DWORD dwWidth,
    /* [in] */ DWORD dwHeight);


void __RPC_STUB ITargetFrame2_SetFrameMargins_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITargetFrame2_GetFrameMargins_Proxy( 
    ITargetFrame2 __RPC_FAR * This,
    /* [out] */ DWORD __RPC_FAR *pdwWidth,
    /* [out] */ DWORD __RPC_FAR *pdwHeight);


void __RPC_STUB ITargetFrame2_GetFrameMargins_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITargetFrame2_FindFrame_Proxy( 
    ITargetFrame2 __RPC_FAR * This,
    /* [unique][in] */ LPCWSTR pszTargetName,
    /* [in] */ DWORD dwFlags,
    /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppunkTargetFrame);


void __RPC_STUB ITargetFrame2_FindFrame_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITargetFrame2_GetTargetAlias_Proxy( 
    ITargetFrame2 __RPC_FAR * This,
    /* [unique][in] */ LPCWSTR pszTargetName,
    /* [out] */ LPWSTR __RPC_FAR *ppszTargetAlias);


void __RPC_STUB ITargetFrame2_GetTargetAlias_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITargetFrame2_INTERFACE_DEFINED__ */


#ifndef __ITargetContainer_INTERFACE_DEFINED__
#define __ITargetContainer_INTERFACE_DEFINED__

/* interface ITargetContainer */
/* [unique][uuid][object] */ 

typedef /* [unique] */ ITargetContainer __RPC_FAR *LPTARGETCONTAINER;


EXTERN_C const IID IID_ITargetContainer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7847EC01-2BEC-11d0-82B4-00A0C90C29C5")
    ITargetContainer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFrameUrl( 
            /* [out] */ LPWSTR __RPC_FAR *ppszFrameSrc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFramesContainer( 
            /* [out] */ IOleContainer __RPC_FAR *__RPC_FAR *ppContainer) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITargetContainerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITargetContainer __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITargetContainer __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITargetContainer __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFrameUrl )( 
            ITargetContainer __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszFrameSrc);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFramesContainer )( 
            ITargetContainer __RPC_FAR * This,
            /* [out] */ IOleContainer __RPC_FAR *__RPC_FAR *ppContainer);
        
        END_INTERFACE
    } ITargetContainerVtbl;

    interface ITargetContainer
    {
        CONST_VTBL struct ITargetContainerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITargetContainer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITargetContainer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITargetContainer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITargetContainer_GetFrameUrl(This,ppszFrameSrc)	\
    (This)->lpVtbl -> GetFrameUrl(This,ppszFrameSrc)

#define ITargetContainer_GetFramesContainer(This,ppContainer)	\
    (This)->lpVtbl -> GetFramesContainer(This,ppContainer)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITargetContainer_GetFrameUrl_Proxy( 
    ITargetContainer __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszFrameSrc);


void __RPC_STUB ITargetContainer_GetFrameUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITargetContainer_GetFramesContainer_Proxy( 
    ITargetContainer __RPC_FAR * This,
    /* [out] */ IOleContainer __RPC_FAR *__RPC_FAR *ppContainer);


void __RPC_STUB ITargetContainer_GetFramesContainer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITargetContainer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_htiframe_0088 */
/* [local] */ 

#endif


extern RPC_IF_HANDLE __MIDL_itf_htiframe_0088_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_htiframe_0088_v0_0_s_ifspec;

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


