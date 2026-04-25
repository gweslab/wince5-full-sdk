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
/* at Thu Jun 24 18:48:38 2004
 */
/* Compiler settings for .\fontlink.idl:
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

#ifndef __fontlink_h__
#define __fontlink_h__

/* Forward Declarations */ 

#ifndef __CMSHTMLFontLink_FWD_DEFINED__
#define __CMSHTMLFontLink_FWD_DEFINED__

#ifdef __cplusplus
typedef class CMSHTMLFontLink CMSHTMLFontLink;
#else
typedef struct CMSHTMLFontLink CMSHTMLFontLink;
#endif /* __cplusplus */

#endif 	/* __CMSHTMLFontLink_FWD_DEFINED__ */


#ifndef __IUnicodeScriptMapper_FWD_DEFINED__
#define __IUnicodeScriptMapper_FWD_DEFINED__
typedef interface IUnicodeScriptMapper IUnicodeScriptMapper;
#endif 	/* __IUnicodeScriptMapper_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_fontlink_0000 */
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
#define USM_AVAILABLESIDONLY 0x01


extern RPC_IF_HANDLE __MIDL_itf_fontlink_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fontlink_0000_v0_0_s_ifspec;


#ifndef __MSHTMLFontLink_LIBRARY_DEFINED__
#define __MSHTMLFontLink_LIBRARY_DEFINED__

/* library MSHTMLFontLink */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_MSHTMLFontLink;

EXTERN_C const CLSID CLSID_CMSHTMLFontLink;

#ifdef __cplusplus

class DECLSPEC_UUID("3145d001-89c0-48eb-9e01-7b0107e422a0")
CMSHTMLFontLink;
#endif

#ifndef __IUnicodeScriptMapper_INTERFACE_DEFINED__
#define __IUnicodeScriptMapper_INTERFACE_DEFINED__

/* interface IUnicodeScriptMapper */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IUnicodeScriptMapper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3145d002-89c0-48eb-9e01-7b0107e422a0")
    IUnicodeScriptMapper : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetScriptId( 
            /* [in] */ wchar_t ch,
            /* [out] */ byte __RPC_FAR *pScriptId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetScriptIdMulti( 
            /* [size_is][in] */ const wchar_t __RPC_FAR *pch,
            /* [in] */ long cch,
            /* [out] */ long __RPC_FAR *pcchSplit,
            /* [out] */ byte __RPC_FAR *pScriptId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UnunifyHanScript( 
            /* [in] */ wchar_t ch,
            /* [in] */ byte sidPrefered,
            /* [in] */ hyper sidsAvailable,
            /* [in] */ byte flags,
            /* [out] */ byte __RPC_FAR *pScriptId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UnunifyHanScriptMulti( 
            /* [size_is][in] */ const wchar_t __RPC_FAR *pch,
            /* [in] */ long cch,
            /* [in] */ byte sidPrefered,
            /* [in] */ hyper sidsAvailable,
            /* [in] */ byte flags,
            /* [out] */ long __RPC_FAR *pcchSplit,
            /* [out] */ byte __RPC_FAR *pScriptId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DisambiguateScript( 
            /* [in] */ wchar_t ch,
            /* [in] */ byte sidPrefered,
            /* [in] */ hyper sidsAvailable,
            /* [in] */ byte flags,
            /* [out] */ byte __RPC_FAR *pScriptId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DisambiguateScriptMulti( 
            /* [size_is][in] */ const wchar_t __RPC_FAR *pch,
            /* [in] */ long cch,
            /* [in] */ byte sidPrefered,
            /* [in] */ hyper sidsAvailable,
            /* [in] */ byte flags,
            /* [out] */ long __RPC_FAR *pcchSplit,
            /* [out] */ byte __RPC_FAR *pScriptId) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUnicodeScriptMapperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IUnicodeScriptMapper __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IUnicodeScriptMapper __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IUnicodeScriptMapper __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetScriptId )( 
            IUnicodeScriptMapper __RPC_FAR * This,
            /* [in] */ wchar_t ch,
            /* [out] */ byte __RPC_FAR *pScriptId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetScriptIdMulti )( 
            IUnicodeScriptMapper __RPC_FAR * This,
            /* [size_is][in] */ const wchar_t __RPC_FAR *pch,
            /* [in] */ long cch,
            /* [out] */ long __RPC_FAR *pcchSplit,
            /* [out] */ byte __RPC_FAR *pScriptId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *UnunifyHanScript )( 
            IUnicodeScriptMapper __RPC_FAR * This,
            /* [in] */ wchar_t ch,
            /* [in] */ byte sidPrefered,
            /* [in] */ hyper sidsAvailable,
            /* [in] */ byte flags,
            /* [out] */ byte __RPC_FAR *pScriptId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *UnunifyHanScriptMulti )( 
            IUnicodeScriptMapper __RPC_FAR * This,
            /* [size_is][in] */ const wchar_t __RPC_FAR *pch,
            /* [in] */ long cch,
            /* [in] */ byte sidPrefered,
            /* [in] */ hyper sidsAvailable,
            /* [in] */ byte flags,
            /* [out] */ long __RPC_FAR *pcchSplit,
            /* [out] */ byte __RPC_FAR *pScriptId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DisambiguateScript )( 
            IUnicodeScriptMapper __RPC_FAR * This,
            /* [in] */ wchar_t ch,
            /* [in] */ byte sidPrefered,
            /* [in] */ hyper sidsAvailable,
            /* [in] */ byte flags,
            /* [out] */ byte __RPC_FAR *pScriptId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DisambiguateScriptMulti )( 
            IUnicodeScriptMapper __RPC_FAR * This,
            /* [size_is][in] */ const wchar_t __RPC_FAR *pch,
            /* [in] */ long cch,
            /* [in] */ byte sidPrefered,
            /* [in] */ hyper sidsAvailable,
            /* [in] */ byte flags,
            /* [out] */ long __RPC_FAR *pcchSplit,
            /* [out] */ byte __RPC_FAR *pScriptId);
        
        END_INTERFACE
    } IUnicodeScriptMapperVtbl;

    interface IUnicodeScriptMapper
    {
        CONST_VTBL struct IUnicodeScriptMapperVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUnicodeScriptMapper_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IUnicodeScriptMapper_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IUnicodeScriptMapper_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IUnicodeScriptMapper_GetScriptId(This,ch,pScriptId)	\
    (This)->lpVtbl -> GetScriptId(This,ch,pScriptId)

#define IUnicodeScriptMapper_GetScriptIdMulti(This,pch,cch,pcchSplit,pScriptId)	\
    (This)->lpVtbl -> GetScriptIdMulti(This,pch,cch,pcchSplit,pScriptId)

#define IUnicodeScriptMapper_UnunifyHanScript(This,ch,sidPrefered,sidsAvailable,flags,pScriptId)	\
    (This)->lpVtbl -> UnunifyHanScript(This,ch,sidPrefered,sidsAvailable,flags,pScriptId)

#define IUnicodeScriptMapper_UnunifyHanScriptMulti(This,pch,cch,sidPrefered,sidsAvailable,flags,pcchSplit,pScriptId)	\
    (This)->lpVtbl -> UnunifyHanScriptMulti(This,pch,cch,sidPrefered,sidsAvailable,flags,pcchSplit,pScriptId)

#define IUnicodeScriptMapper_DisambiguateScript(This,ch,sidPrefered,sidsAvailable,flags,pScriptId)	\
    (This)->lpVtbl -> DisambiguateScript(This,ch,sidPrefered,sidsAvailable,flags,pScriptId)

#define IUnicodeScriptMapper_DisambiguateScriptMulti(This,pch,cch,sidPrefered,sidsAvailable,flags,pcchSplit,pScriptId)	\
    (This)->lpVtbl -> DisambiguateScriptMulti(This,pch,cch,sidPrefered,sidsAvailable,flags,pcchSplit,pScriptId)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IUnicodeScriptMapper_GetScriptId_Proxy( 
    IUnicodeScriptMapper __RPC_FAR * This,
    /* [in] */ wchar_t ch,
    /* [out] */ byte __RPC_FAR *pScriptId);


void __RPC_STUB IUnicodeScriptMapper_GetScriptId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IUnicodeScriptMapper_GetScriptIdMulti_Proxy( 
    IUnicodeScriptMapper __RPC_FAR * This,
    /* [size_is][in] */ const wchar_t __RPC_FAR *pch,
    /* [in] */ long cch,
    /* [out] */ long __RPC_FAR *pcchSplit,
    /* [out] */ byte __RPC_FAR *pScriptId);


void __RPC_STUB IUnicodeScriptMapper_GetScriptIdMulti_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IUnicodeScriptMapper_UnunifyHanScript_Proxy( 
    IUnicodeScriptMapper __RPC_FAR * This,
    /* [in] */ wchar_t ch,
    /* [in] */ byte sidPrefered,
    /* [in] */ hyper sidsAvailable,
    /* [in] */ byte flags,
    /* [out] */ byte __RPC_FAR *pScriptId);


void __RPC_STUB IUnicodeScriptMapper_UnunifyHanScript_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IUnicodeScriptMapper_UnunifyHanScriptMulti_Proxy( 
    IUnicodeScriptMapper __RPC_FAR * This,
    /* [size_is][in] */ const wchar_t __RPC_FAR *pch,
    /* [in] */ long cch,
    /* [in] */ byte sidPrefered,
    /* [in] */ hyper sidsAvailable,
    /* [in] */ byte flags,
    /* [out] */ long __RPC_FAR *pcchSplit,
    /* [out] */ byte __RPC_FAR *pScriptId);


void __RPC_STUB IUnicodeScriptMapper_UnunifyHanScriptMulti_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IUnicodeScriptMapper_DisambiguateScript_Proxy( 
    IUnicodeScriptMapper __RPC_FAR * This,
    /* [in] */ wchar_t ch,
    /* [in] */ byte sidPrefered,
    /* [in] */ hyper sidsAvailable,
    /* [in] */ byte flags,
    /* [out] */ byte __RPC_FAR *pScriptId);


void __RPC_STUB IUnicodeScriptMapper_DisambiguateScript_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IUnicodeScriptMapper_DisambiguateScriptMulti_Proxy( 
    IUnicodeScriptMapper __RPC_FAR * This,
    /* [size_is][in] */ const wchar_t __RPC_FAR *pch,
    /* [in] */ long cch,
    /* [in] */ byte sidPrefered,
    /* [in] */ hyper sidsAvailable,
    /* [in] */ byte flags,
    /* [out] */ long __RPC_FAR *pcchSplit,
    /* [out] */ byte __RPC_FAR *pScriptId);


void __RPC_STUB IUnicodeScriptMapper_DisambiguateScriptMulti_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IUnicodeScriptMapper_INTERFACE_DEFINED__ */

#endif /* __MSHTMLFontLink_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


