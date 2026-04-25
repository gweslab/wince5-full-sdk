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
/* at Thu Jun 24 18:49:53 2004
 */
/* Compiler settings for .\urltrack.idl:
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

#ifndef __urltrack_h__
#define __urltrack_h__

/* Forward Declarations */ 

#ifndef __IUrlTrackingStg_FWD_DEFINED__
#define __IUrlTrackingStg_FWD_DEFINED__
typedef interface IUrlTrackingStg IUrlTrackingStg;
#endif 	/* __IUrlTrackingStg_FWD_DEFINED__ */


/* header files for imported files */
#include "oleidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_urltrack_0000 */
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


////////////////////////////////////////////////////////////////////////////
//  User click stream tracking object

EXTERN_C const GUID CLSID_CUrlTrackingStg          ;

//  IUrlTrackingStg Interface Definitions
#ifndef _LPURLTRACKSTG
#define _LPURLTRACKSTG
typedef 
enum tagBRMODE
    {	BM_NORMAL	= 0,
	BM_SCREENSAVER	= 1,
	BM_DESKTOP	= 2,
	BM_THEATER	= 3,
	BM_UNKNOWN	= 4
    }	BRMODE;



extern RPC_IF_HANDLE __MIDL_itf_urltrack_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urltrack_0000_v0_0_s_ifspec;

#ifndef __IUrlTrackingStg_INTERFACE_DEFINED__
#define __IUrlTrackingStg_INTERFACE_DEFINED__

/* interface IUrlTrackingStg */
/* [object][uuid][local] */ 


EXTERN_C const IID IID_IUrlTrackingStg;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f2f8cbb3-b040-11d0-bb16-00c04fb66f63")
    IUrlTrackingStg : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnLoad( 
            /* [in] */ LPCTSTR lpszUrl,
            /* [in] */ BRMODE ContextMode,
            /* [in] */ BOOL fUseCache) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnUnload( 
            /* [in] */ LPCTSTR lpszUrl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUrlTrackingStgVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IUrlTrackingStg __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IUrlTrackingStg __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IUrlTrackingStg __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnLoad )( 
            IUrlTrackingStg __RPC_FAR * This,
            /* [in] */ LPCTSTR lpszUrl,
            /* [in] */ BRMODE ContextMode,
            /* [in] */ BOOL fUseCache);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnUnload )( 
            IUrlTrackingStg __RPC_FAR * This,
            /* [in] */ LPCTSTR lpszUrl);
        
        END_INTERFACE
    } IUrlTrackingStgVtbl;

    interface IUrlTrackingStg
    {
        CONST_VTBL struct IUrlTrackingStgVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUrlTrackingStg_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IUrlTrackingStg_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IUrlTrackingStg_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IUrlTrackingStg_OnLoad(This,lpszUrl,ContextMode,fUseCache)	\
    (This)->lpVtbl -> OnLoad(This,lpszUrl,ContextMode,fUseCache)

#define IUrlTrackingStg_OnUnload(This,lpszUrl)	\
    (This)->lpVtbl -> OnUnload(This,lpszUrl)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IUrlTrackingStg_OnLoad_Proxy( 
    IUrlTrackingStg __RPC_FAR * This,
    /* [in] */ LPCTSTR lpszUrl,
    /* [in] */ BRMODE ContextMode,
    /* [in] */ BOOL fUseCache);


void __RPC_STUB IUrlTrackingStg_OnLoad_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IUrlTrackingStg_OnUnload_Proxy( 
    IUrlTrackingStg __RPC_FAR * This,
    /* [in] */ LPCTSTR lpszUrl);


void __RPC_STUB IUrlTrackingStg_OnUnload_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IUrlTrackingStg_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_urltrack_0084 */
/* [local] */ 

#endif


extern RPC_IF_HANDLE __MIDL_itf_urltrack_0084_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urltrack_0084_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


