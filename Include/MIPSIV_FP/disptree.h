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
/* at Thu Jun 24 18:48:28 2004
 */
/* Compiler settings for .\disptree.idl:
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

#ifndef __disptree_h__
#define __disptree_h__

/* Forward Declarations */ 

#ifndef __IDispClient_FWD_DEFINED__
#define __IDispClient_FWD_DEFINED__
typedef interface IDispClient IDispClient;
#endif 	/* __IDispClient_FWD_DEFINED__ */


#ifndef __IDispClientDebug_FWD_DEFINED__
#define __IDispClientDebug_FWD_DEFINED__
typedef interface IDispClientDebug IDispClientDebug;
#endif 	/* __IDispClientDebug_FWD_DEFINED__ */


#ifndef __IDispObserver_FWD_DEFINED__
#define __IDispObserver_FWD_DEFINED__
typedef interface IDispObserver IDispObserver;
#endif 	/* __IDispObserver_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_disptree_0000 */
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


class CDispNode;
class CDispSurface;


extern RPC_IF_HANDLE __MIDL_itf_disptree_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_disptree_0000_v0_0_s_ifspec;

#ifndef __IDispClient_INTERFACE_DEFINED__
#define __IDispClient_INTERFACE_DEFINED__

/* interface IDispClient */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IDispClient;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f437-98b5-11cf-bb82-00aa00bdce0b")
    IDispClient : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE DrawClient( 
            /* [in] */ const RECT __RPC_FAR *prcBounds,
            /* [in] */ const RECT __RPC_FAR *prcRedraw,
            /* [in] */ CDispSurface __RPC_FAR *pSurface,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ void __RPC_FAR *cookie,
            /* [in] */ void __RPC_FAR *pClientData,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual void STDMETHODCALLTYPE DrawClientBackground( 
            /* [in] */ const RECT __RPC_FAR *prcBounds,
            /* [in] */ const RECT __RPC_FAR *prcRedraw,
            /* [in] */ CDispSurface __RPC_FAR *pSurface,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ void __RPC_FAR *pClientData,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual void STDMETHODCALLTYPE DrawClientBorder( 
            /* [in] */ const RECT __RPC_FAR *prcBounds,
            /* [in] */ const RECT __RPC_FAR *prcRedraw,
            /* [in] */ CDispSurface __RPC_FAR *pSurface,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ void __RPC_FAR *pClientData,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual void STDMETHODCALLTYPE DrawClientVScrollbar( 
            /* [in] */ const RECT __RPC_FAR *prcBounds,
            /* [in] */ const RECT __RPC_FAR *prcRedraw,
            /* [in] */ LONG contentSize,
            /* [in] */ LONG containerSize,
            /* [in] */ LONG scrollAmount,
            /* [in] */ CDispSurface __RPC_FAR *pSurface,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ void __RPC_FAR *pClientData,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual void STDMETHODCALLTYPE DrawClientHScrollbar( 
            /* [in] */ const RECT __RPC_FAR *prcBounds,
            /* [in] */ const RECT __RPC_FAR *prcRedraw,
            /* [in] */ LONG contentSize,
            /* [in] */ LONG containerSize,
            /* [in] */ LONG scrollAmount,
            /* [in] */ CDispSurface __RPC_FAR *pSurface,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ void __RPC_FAR *pClientData,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual void STDMETHODCALLTYPE DrawClientScrollbarFiller( 
            /* [in] */ const RECT __RPC_FAR *prcBounds,
            /* [in] */ const RECT __RPC_FAR *prcRedraw,
            /* [in] */ CDispSurface __RPC_FAR *pSurface,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ void __RPC_FAR *pClientData,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual BOOL STDMETHODCALLTYPE HitTestPoint( 
            /* [in] */ const POINT __RPC_FAR *pptHit,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ void __RPC_FAR *pClientData) = 0;
        
        virtual BOOL STDMETHODCALLTYPE HitTestRect( 
            /* [in] */ const RECT __RPC_FAR *prcHit,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ void __RPC_FAR *pClientData) = 0;
        
        virtual BOOL STDMETHODCALLTYPE HitVScrollbar( 
            /* [in] */ const POINT __RPC_FAR *pptHit,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ void __RPC_FAR *pClientData) = 0;
        
        virtual BOOL STDMETHODCALLTYPE HitHScrollbar( 
            /* [in] */ const POINT __RPC_FAR *pptHit,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ void __RPC_FAR *pClientData) = 0;
        
        virtual LONG STDMETHODCALLTYPE GetZOrderForSelf( void) = 0;
        
        virtual LONG STDMETHODCALLTYPE GetZOrderForChild( 
            /* [in] */ void __RPC_FAR *cookie) = 0;
        
        virtual void STDMETHODCALLTYPE PositionChanged( 
            /* [in] */ const SIZE __RPC_FAR *pOffset,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ BOOL fDidScrollDC) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDispClientVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDispClient __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDispClient __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDispClient __RPC_FAR * This);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *DrawClient )( 
            IDispClient __RPC_FAR * This,
            /* [in] */ const RECT __RPC_FAR *prcBounds,
            /* [in] */ const RECT __RPC_FAR *prcRedraw,
            /* [in] */ CDispSurface __RPC_FAR *pSurface,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ void __RPC_FAR *cookie,
            /* [in] */ void __RPC_FAR *pClientData,
            /* [in] */ DWORD dwFlags);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *DrawClientBackground )( 
            IDispClient __RPC_FAR * This,
            /* [in] */ const RECT __RPC_FAR *prcBounds,
            /* [in] */ const RECT __RPC_FAR *prcRedraw,
            /* [in] */ CDispSurface __RPC_FAR *pSurface,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ void __RPC_FAR *pClientData,
            /* [in] */ DWORD dwFlags);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *DrawClientBorder )( 
            IDispClient __RPC_FAR * This,
            /* [in] */ const RECT __RPC_FAR *prcBounds,
            /* [in] */ const RECT __RPC_FAR *prcRedraw,
            /* [in] */ CDispSurface __RPC_FAR *pSurface,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ void __RPC_FAR *pClientData,
            /* [in] */ DWORD dwFlags);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *DrawClientVScrollbar )( 
            IDispClient __RPC_FAR * This,
            /* [in] */ const RECT __RPC_FAR *prcBounds,
            /* [in] */ const RECT __RPC_FAR *prcRedraw,
            /* [in] */ LONG contentSize,
            /* [in] */ LONG containerSize,
            /* [in] */ LONG scrollAmount,
            /* [in] */ CDispSurface __RPC_FAR *pSurface,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ void __RPC_FAR *pClientData,
            /* [in] */ DWORD dwFlags);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *DrawClientHScrollbar )( 
            IDispClient __RPC_FAR * This,
            /* [in] */ const RECT __RPC_FAR *prcBounds,
            /* [in] */ const RECT __RPC_FAR *prcRedraw,
            /* [in] */ LONG contentSize,
            /* [in] */ LONG containerSize,
            /* [in] */ LONG scrollAmount,
            /* [in] */ CDispSurface __RPC_FAR *pSurface,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ void __RPC_FAR *pClientData,
            /* [in] */ DWORD dwFlags);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *DrawClientScrollbarFiller )( 
            IDispClient __RPC_FAR * This,
            /* [in] */ const RECT __RPC_FAR *prcBounds,
            /* [in] */ const RECT __RPC_FAR *prcRedraw,
            /* [in] */ CDispSurface __RPC_FAR *pSurface,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ void __RPC_FAR *pClientData,
            /* [in] */ DWORD dwFlags);
        
        BOOL ( STDMETHODCALLTYPE __RPC_FAR *HitTestPoint )( 
            IDispClient __RPC_FAR * This,
            /* [in] */ const POINT __RPC_FAR *pptHit,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ void __RPC_FAR *pClientData);
        
        BOOL ( STDMETHODCALLTYPE __RPC_FAR *HitTestRect )( 
            IDispClient __RPC_FAR * This,
            /* [in] */ const RECT __RPC_FAR *prcHit,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ void __RPC_FAR *pClientData);
        
        BOOL ( STDMETHODCALLTYPE __RPC_FAR *HitVScrollbar )( 
            IDispClient __RPC_FAR * This,
            /* [in] */ const POINT __RPC_FAR *pptHit,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ void __RPC_FAR *pClientData);
        
        BOOL ( STDMETHODCALLTYPE __RPC_FAR *HitHScrollbar )( 
            IDispClient __RPC_FAR * This,
            /* [in] */ const POINT __RPC_FAR *pptHit,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ void __RPC_FAR *pClientData);
        
        LONG ( STDMETHODCALLTYPE __RPC_FAR *GetZOrderForSelf )( 
            IDispClient __RPC_FAR * This);
        
        LONG ( STDMETHODCALLTYPE __RPC_FAR *GetZOrderForChild )( 
            IDispClient __RPC_FAR * This,
            /* [in] */ void __RPC_FAR *cookie);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *PositionChanged )( 
            IDispClient __RPC_FAR * This,
            /* [in] */ const SIZE __RPC_FAR *pOffset,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ BOOL fDidScrollDC);
        
        END_INTERFACE
    } IDispClientVtbl;

    interface IDispClient
    {
        CONST_VTBL struct IDispClientVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispClient_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDispClient_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDispClient_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDispClient_DrawClient(This,prcBounds,prcRedraw,pSurface,pDispNode,cookie,pClientData,dwFlags)	\
    (This)->lpVtbl -> DrawClient(This,prcBounds,prcRedraw,pSurface,pDispNode,cookie,pClientData,dwFlags)

#define IDispClient_DrawClientBackground(This,prcBounds,prcRedraw,pSurface,pDispNode,pClientData,dwFlags)	\
    (This)->lpVtbl -> DrawClientBackground(This,prcBounds,prcRedraw,pSurface,pDispNode,pClientData,dwFlags)

#define IDispClient_DrawClientBorder(This,prcBounds,prcRedraw,pSurface,pDispNode,pClientData,dwFlags)	\
    (This)->lpVtbl -> DrawClientBorder(This,prcBounds,prcRedraw,pSurface,pDispNode,pClientData,dwFlags)

#define IDispClient_DrawClientVScrollbar(This,prcBounds,prcRedraw,contentSize,containerSize,scrollAmount,pSurface,pDispNode,pClientData,dwFlags)	\
    (This)->lpVtbl -> DrawClientVScrollbar(This,prcBounds,prcRedraw,contentSize,containerSize,scrollAmount,pSurface,pDispNode,pClientData,dwFlags)

#define IDispClient_DrawClientHScrollbar(This,prcBounds,prcRedraw,contentSize,containerSize,scrollAmount,pSurface,pDispNode,pClientData,dwFlags)	\
    (This)->lpVtbl -> DrawClientHScrollbar(This,prcBounds,prcRedraw,contentSize,containerSize,scrollAmount,pSurface,pDispNode,pClientData,dwFlags)

#define IDispClient_DrawClientScrollbarFiller(This,prcBounds,prcRedraw,pSurface,pDispNode,pClientData,dwFlags)	\
    (This)->lpVtbl -> DrawClientScrollbarFiller(This,prcBounds,prcRedraw,pSurface,pDispNode,pClientData,dwFlags)

#define IDispClient_HitTestPoint(This,pptHit,pDispNode,pClientData)	\
    (This)->lpVtbl -> HitTestPoint(This,pptHit,pDispNode,pClientData)

#define IDispClient_HitTestRect(This,prcHit,pDispNode,pClientData)	\
    (This)->lpVtbl -> HitTestRect(This,prcHit,pDispNode,pClientData)

#define IDispClient_HitVScrollbar(This,pptHit,pDispNode,pClientData)	\
    (This)->lpVtbl -> HitVScrollbar(This,pptHit,pDispNode,pClientData)

#define IDispClient_HitHScrollbar(This,pptHit,pDispNode,pClientData)	\
    (This)->lpVtbl -> HitHScrollbar(This,pptHit,pDispNode,pClientData)

#define IDispClient_GetZOrderForSelf(This)	\
    (This)->lpVtbl -> GetZOrderForSelf(This)

#define IDispClient_GetZOrderForChild(This,cookie)	\
    (This)->lpVtbl -> GetZOrderForChild(This,cookie)

#define IDispClient_PositionChanged(This,pOffset,pDispNode,fDidScrollDC)	\
    (This)->lpVtbl -> PositionChanged(This,pOffset,pDispNode,fDidScrollDC)

#endif /* COBJMACROS */


#endif 	/* C style interface */



void STDMETHODCALLTYPE IDispClient_DrawClient_Proxy( 
    IDispClient __RPC_FAR * This,
    /* [in] */ const RECT __RPC_FAR *prcBounds,
    /* [in] */ const RECT __RPC_FAR *prcRedraw,
    /* [in] */ CDispSurface __RPC_FAR *pSurface,
    /* [in] */ CDispNode __RPC_FAR *pDispNode,
    /* [in] */ void __RPC_FAR *cookie,
    /* [in] */ void __RPC_FAR *pClientData,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB IDispClient_DrawClient_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


void STDMETHODCALLTYPE IDispClient_DrawClientBackground_Proxy( 
    IDispClient __RPC_FAR * This,
    /* [in] */ const RECT __RPC_FAR *prcBounds,
    /* [in] */ const RECT __RPC_FAR *prcRedraw,
    /* [in] */ CDispSurface __RPC_FAR *pSurface,
    /* [in] */ CDispNode __RPC_FAR *pDispNode,
    /* [in] */ void __RPC_FAR *pClientData,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB IDispClient_DrawClientBackground_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


void STDMETHODCALLTYPE IDispClient_DrawClientBorder_Proxy( 
    IDispClient __RPC_FAR * This,
    /* [in] */ const RECT __RPC_FAR *prcBounds,
    /* [in] */ const RECT __RPC_FAR *prcRedraw,
    /* [in] */ CDispSurface __RPC_FAR *pSurface,
    /* [in] */ CDispNode __RPC_FAR *pDispNode,
    /* [in] */ void __RPC_FAR *pClientData,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB IDispClient_DrawClientBorder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


void STDMETHODCALLTYPE IDispClient_DrawClientVScrollbar_Proxy( 
    IDispClient __RPC_FAR * This,
    /* [in] */ const RECT __RPC_FAR *prcBounds,
    /* [in] */ const RECT __RPC_FAR *prcRedraw,
    /* [in] */ LONG contentSize,
    /* [in] */ LONG containerSize,
    /* [in] */ LONG scrollAmount,
    /* [in] */ CDispSurface __RPC_FAR *pSurface,
    /* [in] */ CDispNode __RPC_FAR *pDispNode,
    /* [in] */ void __RPC_FAR *pClientData,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB IDispClient_DrawClientVScrollbar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


void STDMETHODCALLTYPE IDispClient_DrawClientHScrollbar_Proxy( 
    IDispClient __RPC_FAR * This,
    /* [in] */ const RECT __RPC_FAR *prcBounds,
    /* [in] */ const RECT __RPC_FAR *prcRedraw,
    /* [in] */ LONG contentSize,
    /* [in] */ LONG containerSize,
    /* [in] */ LONG scrollAmount,
    /* [in] */ CDispSurface __RPC_FAR *pSurface,
    /* [in] */ CDispNode __RPC_FAR *pDispNode,
    /* [in] */ void __RPC_FAR *pClientData,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB IDispClient_DrawClientHScrollbar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


void STDMETHODCALLTYPE IDispClient_DrawClientScrollbarFiller_Proxy( 
    IDispClient __RPC_FAR * This,
    /* [in] */ const RECT __RPC_FAR *prcBounds,
    /* [in] */ const RECT __RPC_FAR *prcRedraw,
    /* [in] */ CDispSurface __RPC_FAR *pSurface,
    /* [in] */ CDispNode __RPC_FAR *pDispNode,
    /* [in] */ void __RPC_FAR *pClientData,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB IDispClient_DrawClientScrollbarFiller_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


BOOL STDMETHODCALLTYPE IDispClient_HitTestPoint_Proxy( 
    IDispClient __RPC_FAR * This,
    /* [in] */ const POINT __RPC_FAR *pptHit,
    /* [in] */ CDispNode __RPC_FAR *pDispNode,
    /* [in] */ void __RPC_FAR *pClientData);


void __RPC_STUB IDispClient_HitTestPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


BOOL STDMETHODCALLTYPE IDispClient_HitTestRect_Proxy( 
    IDispClient __RPC_FAR * This,
    /* [in] */ const RECT __RPC_FAR *prcHit,
    /* [in] */ CDispNode __RPC_FAR *pDispNode,
    /* [in] */ void __RPC_FAR *pClientData);


void __RPC_STUB IDispClient_HitTestRect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


BOOL STDMETHODCALLTYPE IDispClient_HitVScrollbar_Proxy( 
    IDispClient __RPC_FAR * This,
    /* [in] */ const POINT __RPC_FAR *pptHit,
    /* [in] */ CDispNode __RPC_FAR *pDispNode,
    /* [in] */ void __RPC_FAR *pClientData);


void __RPC_STUB IDispClient_HitVScrollbar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


BOOL STDMETHODCALLTYPE IDispClient_HitHScrollbar_Proxy( 
    IDispClient __RPC_FAR * This,
    /* [in] */ const POINT __RPC_FAR *pptHit,
    /* [in] */ CDispNode __RPC_FAR *pDispNode,
    /* [in] */ void __RPC_FAR *pClientData);


void __RPC_STUB IDispClient_HitHScrollbar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


LONG STDMETHODCALLTYPE IDispClient_GetZOrderForSelf_Proxy( 
    IDispClient __RPC_FAR * This);


void __RPC_STUB IDispClient_GetZOrderForSelf_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


LONG STDMETHODCALLTYPE IDispClient_GetZOrderForChild_Proxy( 
    IDispClient __RPC_FAR * This,
    /* [in] */ void __RPC_FAR *cookie);


void __RPC_STUB IDispClient_GetZOrderForChild_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


void STDMETHODCALLTYPE IDispClient_PositionChanged_Proxy( 
    IDispClient __RPC_FAR * This,
    /* [in] */ const SIZE __RPC_FAR *pOffset,
    /* [in] */ CDispNode __RPC_FAR *pDispNode,
    /* [in] */ BOOL fDidScrollDC);


void __RPC_STUB IDispClient_PositionChanged_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDispClient_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_disptree_0080 */
/* [local] */ 


class CDispNode;


extern RPC_IF_HANDLE __MIDL_itf_disptree_0080_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_disptree_0080_v0_0_s_ifspec;

#ifndef __IDispClientDebug_INTERFACE_DEFINED__
#define __IDispClientDebug_INTERFACE_DEFINED__

/* interface IDispClientDebug */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IDispClientDebug;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f442-98b5-11cf-bb82-00aa00bdce0b")
    IDispClientDebug : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE DumpDebugInfo( 
            /* [in] */ HANDLE hFile,
            /* [in] */ long level,
            /* [in] */ long childNumber,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ void __RPC_FAR *cookie) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDispClientDebugVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDispClientDebug __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDispClientDebug __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDispClientDebug __RPC_FAR * This);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *DumpDebugInfo )( 
            IDispClientDebug __RPC_FAR * This,
            /* [in] */ HANDLE hFile,
            /* [in] */ long level,
            /* [in] */ long childNumber,
            /* [in] */ CDispNode __RPC_FAR *pDispNode,
            /* [in] */ void __RPC_FAR *cookie);
        
        END_INTERFACE
    } IDispClientDebugVtbl;

    interface IDispClientDebug
    {
        CONST_VTBL struct IDispClientDebugVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispClientDebug_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDispClientDebug_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDispClientDebug_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDispClientDebug_DumpDebugInfo(This,hFile,level,childNumber,pDispNode,cookie)	\
    (This)->lpVtbl -> DumpDebugInfo(This,hFile,level,childNumber,pDispNode,cookie)

#endif /* COBJMACROS */


#endif 	/* C style interface */



void STDMETHODCALLTYPE IDispClientDebug_DumpDebugInfo_Proxy( 
    IDispClientDebug __RPC_FAR * This,
    /* [in] */ HANDLE hFile,
    /* [in] */ long level,
    /* [in] */ long childNumber,
    /* [in] */ CDispNode __RPC_FAR *pDispNode,
    /* [in] */ void __RPC_FAR *cookie);


void __RPC_STUB IDispClientDebug_DumpDebugInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDispClientDebug_INTERFACE_DEFINED__ */


#ifndef __IDispObserver_INTERFACE_DEFINED__
#define __IDispObserver_INTERFACE_DEFINED__

/* interface IDispObserver */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IDispObserver;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f43d-98b5-11cf-bb82-00aa00bdce0b")
    IDispObserver : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE Invalidate( 
            /* [in] */ const RECT __RPC_FAR *prcInvalid,
            /* [in] */ HRGN rgnInvalid,
            /* [in] */ DWORD flags) = 0;
        
        virtual HDC STDMETHODCALLTYPE GetClientDC( 
            /* [in] */ const RECT __RPC_FAR *prc) = 0;
        
        virtual void STDMETHODCALLTYPE ReleaseClientDC( 
            /* [in] */ HDC hdc) = 0;
        
        virtual void STDMETHODCALLTYPE DrawSynchronous( 
            /* [in] */ HRGN hrgn,
            /* [in] */ HDC hdc,
            /* [in] */ const RECT __RPC_FAR *prcClip) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDispObserverVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDispObserver __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDispObserver __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDispObserver __RPC_FAR * This);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *Invalidate )( 
            IDispObserver __RPC_FAR * This,
            /* [in] */ const RECT __RPC_FAR *prcInvalid,
            /* [in] */ HRGN rgnInvalid,
            /* [in] */ DWORD flags);
        
        HDC ( STDMETHODCALLTYPE __RPC_FAR *GetClientDC )( 
            IDispObserver __RPC_FAR * This,
            /* [in] */ const RECT __RPC_FAR *prc);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *ReleaseClientDC )( 
            IDispObserver __RPC_FAR * This,
            /* [in] */ HDC hdc);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *DrawSynchronous )( 
            IDispObserver __RPC_FAR * This,
            /* [in] */ HRGN hrgn,
            /* [in] */ HDC hdc,
            /* [in] */ const RECT __RPC_FAR *prcClip);
        
        END_INTERFACE
    } IDispObserverVtbl;

    interface IDispObserver
    {
        CONST_VTBL struct IDispObserverVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispObserver_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDispObserver_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDispObserver_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDispObserver_Invalidate(This,prcInvalid,rgnInvalid,flags)	\
    (This)->lpVtbl -> Invalidate(This,prcInvalid,rgnInvalid,flags)

#define IDispObserver_GetClientDC(This,prc)	\
    (This)->lpVtbl -> GetClientDC(This,prc)

#define IDispObserver_ReleaseClientDC(This,hdc)	\
    (This)->lpVtbl -> ReleaseClientDC(This,hdc)

#define IDispObserver_DrawSynchronous(This,hrgn,hdc,prcClip)	\
    (This)->lpVtbl -> DrawSynchronous(This,hrgn,hdc,prcClip)

#endif /* COBJMACROS */


#endif 	/* C style interface */



void STDMETHODCALLTYPE IDispObserver_Invalidate_Proxy( 
    IDispObserver __RPC_FAR * This,
    /* [in] */ const RECT __RPC_FAR *prcInvalid,
    /* [in] */ HRGN rgnInvalid,
    /* [in] */ DWORD flags);


void __RPC_STUB IDispObserver_Invalidate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HDC STDMETHODCALLTYPE IDispObserver_GetClientDC_Proxy( 
    IDispObserver __RPC_FAR * This,
    /* [in] */ const RECT __RPC_FAR *prc);


void __RPC_STUB IDispObserver_GetClientDC_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


void STDMETHODCALLTYPE IDispObserver_ReleaseClientDC_Proxy( 
    IDispObserver __RPC_FAR * This,
    /* [in] */ HDC hdc);


void __RPC_STUB IDispObserver_ReleaseClientDC_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


void STDMETHODCALLTYPE IDispObserver_DrawSynchronous_Proxy( 
    IDispObserver __RPC_FAR * This,
    /* [in] */ HRGN hrgn,
    /* [in] */ HDC hdc,
    /* [in] */ const RECT __RPC_FAR *prcClip);


void __RPC_STUB IDispObserver_DrawSynchronous_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDispObserver_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


