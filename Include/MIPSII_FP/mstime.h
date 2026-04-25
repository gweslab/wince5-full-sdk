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
/* at Tue Feb 05 14:31:37 2002
 */
/* Compiler settings for .\mstime.idl:
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

#ifndef __mstime_h__
#define __mstime_h__

/* Forward Declarations */ 

#ifndef __ITIMEActiveElementCollection_FWD_DEFINED__
#define __ITIMEActiveElementCollection_FWD_DEFINED__
typedef interface ITIMEActiveElementCollection ITIMEActiveElementCollection;
#endif 	/* __ITIMEActiveElementCollection_FWD_DEFINED__ */


#ifndef __ITIMEElement_FWD_DEFINED__
#define __ITIMEElement_FWD_DEFINED__
typedef interface ITIMEElement ITIMEElement;
#endif 	/* __ITIMEElement_FWD_DEFINED__ */


#ifndef __ITIMEBodyElement_FWD_DEFINED__
#define __ITIMEBodyElement_FWD_DEFINED__
typedef interface ITIMEBodyElement ITIMEBodyElement;
#endif 	/* __ITIMEBodyElement_FWD_DEFINED__ */


#ifndef __ITIMEMediaElement_FWD_DEFINED__
#define __ITIMEMediaElement_FWD_DEFINED__
typedef interface ITIMEMediaElement ITIMEMediaElement;
#endif 	/* __ITIMEMediaElement_FWD_DEFINED__ */


#ifndef __ITIMEAnimationElement_FWD_DEFINED__
#define __ITIMEAnimationElement_FWD_DEFINED__
typedef interface ITIMEAnimationElement ITIMEAnimationElement;
#endif 	/* __ITIMEAnimationElement_FWD_DEFINED__ */


#ifndef __IAnimationComposer_FWD_DEFINED__
#define __IAnimationComposer_FWD_DEFINED__
typedef interface IAnimationComposer IAnimationComposer;
#endif 	/* __IAnimationComposer_FWD_DEFINED__ */


#ifndef __IAnimationComposerSite_FWD_DEFINED__
#define __IAnimationComposerSite_FWD_DEFINED__
typedef interface IAnimationComposerSite IAnimationComposerSite;
#endif 	/* __IAnimationComposerSite_FWD_DEFINED__ */


#ifndef __IAnimationComposerSiteSink_FWD_DEFINED__
#define __IAnimationComposerSiteSink_FWD_DEFINED__
typedef interface IAnimationComposerSiteSink IAnimationComposerSiteSink;
#endif 	/* __IAnimationComposerSiteSink_FWD_DEFINED__ */


#ifndef __IAnimationRoot_FWD_DEFINED__
#define __IAnimationRoot_FWD_DEFINED__
typedef interface IAnimationRoot IAnimationRoot;
#endif 	/* __IAnimationRoot_FWD_DEFINED__ */


#ifndef __IAnimationFragment_FWD_DEFINED__
#define __IAnimationFragment_FWD_DEFINED__
typedef interface IAnimationFragment IAnimationFragment;
#endif 	/* __IAnimationFragment_FWD_DEFINED__ */


#ifndef __ITIMEElementCollection_FWD_DEFINED__
#define __ITIMEElementCollection_FWD_DEFINED__
typedef interface ITIMEElementCollection ITIMEElementCollection;
#endif 	/* __ITIMEElementCollection_FWD_DEFINED__ */


#ifndef __ITIMEState_FWD_DEFINED__
#define __ITIMEState_FWD_DEFINED__
typedef interface ITIMEState ITIMEState;
#endif 	/* __ITIMEState_FWD_DEFINED__ */


#ifndef __ITIMEPlayItem_FWD_DEFINED__
#define __ITIMEPlayItem_FWD_DEFINED__
typedef interface ITIMEPlayItem ITIMEPlayItem;
#endif 	/* __ITIMEPlayItem_FWD_DEFINED__ */


#ifndef __ITIMEPlayList_FWD_DEFINED__
#define __ITIMEPlayList_FWD_DEFINED__
typedef interface ITIMEPlayList ITIMEPlayList;
#endif 	/* __ITIMEPlayList_FWD_DEFINED__ */


#ifndef __ITIMEDVDPlayerObject_FWD_DEFINED__
#define __ITIMEDVDPlayerObject_FWD_DEFINED__
typedef interface ITIMEDVDPlayerObject ITIMEDVDPlayerObject;
#endif 	/* __ITIMEDVDPlayerObject_FWD_DEFINED__ */


#ifndef __ITIMEDMusicPlayerObject_FWD_DEFINED__
#define __ITIMEDMusicPlayerObject_FWD_DEFINED__
typedef interface ITIMEDMusicPlayerObject ITIMEDMusicPlayerObject;
#endif 	/* __ITIMEDMusicPlayerObject_FWD_DEFINED__ */


#ifndef __ITIMEFactory_FWD_DEFINED__
#define __ITIMEFactory_FWD_DEFINED__
typedef interface ITIMEFactory ITIMEFactory;
#endif 	/* __ITIMEFactory_FWD_DEFINED__ */


#ifndef __TIMEFactory_FWD_DEFINED__
#define __TIMEFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class TIMEFactory TIMEFactory;
#else
typedef struct TIMEFactory TIMEFactory;
#endif /* __cplusplus */

#endif 	/* __TIMEFactory_FWD_DEFINED__ */


#ifndef __TIME_FWD_DEFINED__
#define __TIME_FWD_DEFINED__

#ifdef __cplusplus
typedef class TIME TIME;
#else
typedef struct TIME TIME;
#endif /* __cplusplus */

#endif 	/* __TIME_FWD_DEFINED__ */


#ifndef __TIMEAnimation_FWD_DEFINED__
#define __TIMEAnimation_FWD_DEFINED__

#ifdef __cplusplus
typedef class TIMEAnimation TIMEAnimation;
#else
typedef struct TIMEAnimation TIMEAnimation;
#endif /* __cplusplus */

#endif 	/* __TIMEAnimation_FWD_DEFINED__ */


#ifndef __TIMESetAnimation_FWD_DEFINED__
#define __TIMESetAnimation_FWD_DEFINED__

#ifdef __cplusplus
typedef class TIMESetAnimation TIMESetAnimation;
#else
typedef struct TIMESetAnimation TIMESetAnimation;
#endif /* __cplusplus */

#endif 	/* __TIMESetAnimation_FWD_DEFINED__ */


#ifndef __TIMEMotionAnimation_FWD_DEFINED__
#define __TIMEMotionAnimation_FWD_DEFINED__

#ifdef __cplusplus
typedef class TIMEMotionAnimation TIMEMotionAnimation;
#else
typedef struct TIMEMotionAnimation TIMEMotionAnimation;
#endif /* __cplusplus */

#endif 	/* __TIMEMotionAnimation_FWD_DEFINED__ */


#ifndef __TIMEColorAnimation_FWD_DEFINED__
#define __TIMEColorAnimation_FWD_DEFINED__

#ifdef __cplusplus
typedef class TIMEColorAnimation TIMEColorAnimation;
#else
typedef struct TIMEColorAnimation TIMEColorAnimation;
#endif /* __cplusplus */

#endif 	/* __TIMEColorAnimation_FWD_DEFINED__ */


#ifndef __IAnimationComposerFactory_FWD_DEFINED__
#define __IAnimationComposerFactory_FWD_DEFINED__
typedef interface IAnimationComposerFactory IAnimationComposerFactory;
#endif 	/* __IAnimationComposerFactory_FWD_DEFINED__ */


#ifndef __AnimationComposerFactory_FWD_DEFINED__
#define __AnimationComposerFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class AnimationComposerFactory AnimationComposerFactory;
#else
typedef struct AnimationComposerFactory AnimationComposerFactory;
#endif /* __cplusplus */

#endif 	/* __AnimationComposerFactory_FWD_DEFINED__ */


#ifndef __IAnimationComposerSiteFactory_FWD_DEFINED__
#define __IAnimationComposerSiteFactory_FWD_DEFINED__
typedef interface IAnimationComposerSiteFactory IAnimationComposerSiteFactory;
#endif 	/* __IAnimationComposerSiteFactory_FWD_DEFINED__ */


#ifndef __AnimationComposerSiteFactory_FWD_DEFINED__
#define __AnimationComposerSiteFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class AnimationComposerSiteFactory AnimationComposerSiteFactory;
#else
typedef struct AnimationComposerSiteFactory AnimationComposerSiteFactory;
#endif /* __cplusplus */

#endif 	/* __AnimationComposerSiteFactory_FWD_DEFINED__ */


#ifndef __ITIMEMediaPlayerSite_FWD_DEFINED__
#define __ITIMEMediaPlayerSite_FWD_DEFINED__
typedef interface ITIMEMediaPlayerSite ITIMEMediaPlayerSite;
#endif 	/* __ITIMEMediaPlayerSite_FWD_DEFINED__ */


#ifndef __ITIMEMediaPlayer_FWD_DEFINED__
#define __ITIMEMediaPlayer_FWD_DEFINED__
typedef interface ITIMEMediaPlayer ITIMEMediaPlayer;
#endif 	/* __ITIMEMediaPlayer_FWD_DEFINED__ */


#ifndef __ITIMEMediaPlayerControl_FWD_DEFINED__
#define __ITIMEMediaPlayerControl_FWD_DEFINED__
typedef interface ITIMEMediaPlayerControl ITIMEMediaPlayerControl;
#endif 	/* __ITIMEMediaPlayerControl_FWD_DEFINED__ */


/* header files for imported files */
#include "servprov.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_mstime_0000 */
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
#include <olectl.h>
#include <mstimeid.h>





extern RPC_IF_HANDLE __MIDL_itf_mstime_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mstime_0000_v0_0_s_ifspec;


#ifndef __MSTIME_LIBRARY_DEFINED__
#define __MSTIME_LIBRARY_DEFINED__

/* library MSTIME */
/* [version][lcid][uuid] */ 

typedef 
enum _TimeState
    {	TS_Inactive	= 0,
	TS_Active	= 1,
	TS_Cueing	= 2,
	TS_Seeking	= 3,
	TS_Holding	= 4
    }	TimeState;


EXTERN_C const IID LIBID_MSTIME;

#ifndef __ITIMEActiveElementCollection_INTERFACE_DEFINED__
#define __ITIMEActiveElementCollection_INTERFACE_DEFINED__

/* interface ITIMEActiveElementCollection */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ITIMEActiveElementCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("403E2540-4520-11D3-93AB-00A0C967A438")
    ITIMEActiveElementCollection : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_length( 
            /* [retval][out] */ long __RPC_FAR *p) = 0;
        
        virtual /* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__newEnum( 
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *p) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE item( 
            /* [in][defaultvalue] */ VARIANT varIndex,
            /* [retval][out] */ VARIANT __RPC_FAR *pvarResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITIMEActiveElementCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITIMEActiveElementCollection __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITIMEActiveElementCollection __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITIMEActiveElementCollection __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ITIMEActiveElementCollection __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ITIMEActiveElementCollection __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ITIMEActiveElementCollection __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ITIMEActiveElementCollection __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_length )( 
            ITIMEActiveElementCollection __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *p);
        
        /* [hidden][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__newEnum )( 
            ITIMEActiveElementCollection __RPC_FAR * This,
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *p);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *item )( 
            ITIMEActiveElementCollection __RPC_FAR * This,
            /* [in][defaultvalue] */ VARIANT varIndex,
            /* [retval][out] */ VARIANT __RPC_FAR *pvarResult);
        
        END_INTERFACE
    } ITIMEActiveElementCollectionVtbl;

    interface ITIMEActiveElementCollection
    {
        CONST_VTBL struct ITIMEActiveElementCollectionVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITIMEActiveElementCollection_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITIMEActiveElementCollection_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITIMEActiveElementCollection_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITIMEActiveElementCollection_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ITIMEActiveElementCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ITIMEActiveElementCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ITIMEActiveElementCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ITIMEActiveElementCollection_get_length(This,p)	\
    (This)->lpVtbl -> get_length(This,p)

#define ITIMEActiveElementCollection_get__newEnum(This,p)	\
    (This)->lpVtbl -> get__newEnum(This,p)

#define ITIMEActiveElementCollection_item(This,varIndex,pvarResult)	\
    (This)->lpVtbl -> item(This,varIndex,pvarResult)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget][id] */ HRESULT STDMETHODCALLTYPE ITIMEActiveElementCollection_get_length_Proxy( 
    ITIMEActiveElementCollection __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *p);


void __RPC_STUB ITIMEActiveElementCollection_get_length_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE ITIMEActiveElementCollection_get__newEnum_Proxy( 
    ITIMEActiveElementCollection __RPC_FAR * This,
    /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *p);


void __RPC_STUB ITIMEActiveElementCollection_get__newEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEActiveElementCollection_item_Proxy( 
    ITIMEActiveElementCollection __RPC_FAR * This,
    /* [in][defaultvalue] */ VARIANT varIndex,
    /* [retval][out] */ VARIANT __RPC_FAR *pvarResult);


void __RPC_STUB ITIMEActiveElementCollection_item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITIMEActiveElementCollection_INTERFACE_DEFINED__ */


#ifndef __ITIMEElement_INTERFACE_DEFINED__
#define __ITIMEElement_INTERFACE_DEFINED__

/* interface ITIMEElement */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ITIMEElement;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1C2EF64E-F07D-4338-9771-9154491CD8B9")
    ITIMEElement : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_accelerate( 
            /* [retval][out] */ VARIANT __RPC_FAR *__MIDL_0014) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_accelerate( 
            /* [in] */ VARIANT __MIDL_0015) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_autoReverse( 
            /* [retval][out] */ VARIANT __RPC_FAR *__MIDL_0016) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_autoReverse( 
            /* [in] */ VARIANT __MIDL_0017) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_begin( 
            /* [retval][out] */ VARIANT __RPC_FAR *time) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_begin( 
            /* [in] */ VARIANT time) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_decelerate( 
            /* [retval][out] */ VARIANT __RPC_FAR *__MIDL_0018) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_decelerate( 
            /* [in] */ VARIANT __MIDL_0019) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_dur( 
            /* [retval][out] */ VARIANT __RPC_FAR *time) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_dur( 
            /* [in] */ VARIANT time) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_end( 
            /* [retval][out] */ VARIANT __RPC_FAR *time) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_end( 
            /* [in] */ VARIANT time) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_fill( 
            /* [retval][out] */ BSTR __RPC_FAR *f) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_fill( 
            /* [in] */ BSTR f) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_mute( 
            /* [retval][out] */ VARIANT __RPC_FAR *b) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_mute( 
            /* [in] */ VARIANT b) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_repeatCount( 
            /* [retval][out] */ VARIANT __RPC_FAR *c) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_repeatCount( 
            /* [in] */ VARIANT c) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_repeatDur( 
            /* [retval][out] */ VARIANT __RPC_FAR *time) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_repeatDur( 
            /* [in] */ VARIANT time) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_restart( 
            /* [retval][out] */ BSTR __RPC_FAR *__MIDL_0020) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_restart( 
            /* [in] */ BSTR __MIDL_0021) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_speed( 
            /* [retval][out] */ VARIANT __RPC_FAR *speed) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_speed( 
            /* [in] */ VARIANT speed) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_syncBehavior( 
            /* [retval][out] */ BSTR __RPC_FAR *sync) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_syncBehavior( 
            /* [in] */ BSTR sync) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_syncTolerance( 
            /* [retval][out] */ VARIANT __RPC_FAR *tol) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_syncTolerance( 
            /* [in] */ VARIANT tol) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_syncMaster( 
            /* [retval][out] */ VARIANT __RPC_FAR *b) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_syncMaster( 
            /* [in] */ VARIANT b) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_timeAction( 
            /* [retval][out] */ BSTR __RPC_FAR *time) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_timeAction( 
            /* [in] */ BSTR time) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_timeContainer( 
            /* [retval][out] */ BSTR __RPC_FAR *__MIDL_0022) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_volume( 
            /* [retval][out] */ VARIANT __RPC_FAR *val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_volume( 
            /* [in] */ VARIANT val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_currTimeState( 
            /* [retval][out] */ ITIMEState __RPC_FAR *__RPC_FAR *TimeState) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_timeAll( 
            /* [retval][out] */ ITIMEElementCollection __RPC_FAR *__RPC_FAR *allColl) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_timeChildren( 
            /* [retval][out] */ ITIMEElementCollection __RPC_FAR *__RPC_FAR *childColl) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_timeParent( 
            /* [retval][out] */ ITIMEElement __RPC_FAR *__RPC_FAR *parent) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_isPaused( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *b) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE beginElement( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE beginElementAt( 
            /* [in] */ double parentTime) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE endElement( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE endElementAt( 
            /* [in] */ double parentTime) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE pauseElement( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE resetElement( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE resumeElement( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE seekActiveTime( 
            /* [in] */ double activeTime) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE seekSegmentTime( 
            /* [in] */ double segmentTime) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE seekTo( 
            /* [in] */ LONG repeatCount,
            /* [in] */ double segmentTime) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE documentTimeToParentTime( 
            /* [in] */ double documentTime,
            /* [retval][out] */ double __RPC_FAR *parentTime) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE parentTimeToDocumentTime( 
            /* [in] */ double parentTime,
            /* [retval][out] */ double __RPC_FAR *documentTime) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE parentTimeToActiveTime( 
            /* [in] */ double parentTime,
            /* [retval][out] */ double __RPC_FAR *activeTime) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE activeTimeToParentTime( 
            /* [in] */ double activeTime,
            /* [retval][out] */ double __RPC_FAR *parentTime) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE activeTimeToSegmentTime( 
            /* [in] */ double activeTime,
            /* [retval][out] */ double __RPC_FAR *segmentTime) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE segmentTimeToActiveTime( 
            /* [in] */ double segmentTime,
            /* [retval][out] */ double __RPC_FAR *activeTime) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE segmentTimeToSimpleTime( 
            /* [in] */ double segmentTime,
            /* [retval][out] */ double __RPC_FAR *simpleTime) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE simpleTimeToSegmentTime( 
            /* [in] */ double simpleTime,
            /* [retval][out] */ double __RPC_FAR *segmentTime) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_endSync( 
            /* [retval][out] */ BSTR __RPC_FAR *es) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_endSync( 
            /* [in] */ BSTR es) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_activeElements( 
            /* [retval][out] */ ITIMEActiveElementCollection __RPC_FAR *__RPC_FAR *activeColl) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_hasMedia( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *flag) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE nextElement( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE prevElement( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_updateMode( 
            /* [retval][out] */ BSTR __RPC_FAR *updateMode) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_updateMode( 
            /* [in] */ BSTR updateMode) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITIMEElementVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITIMEElement __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITIMEElement __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ITIMEElement __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_accelerate )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *__MIDL_0014);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_accelerate )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ VARIANT __MIDL_0015);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_autoReverse )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *__MIDL_0016);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_autoReverse )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ VARIANT __MIDL_0017);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_begin )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *time);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_begin )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ VARIANT time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_decelerate )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *__MIDL_0018);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_decelerate )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ VARIANT __MIDL_0019);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_dur )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *time);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_dur )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ VARIANT time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_end )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *time);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_end )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ VARIANT time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_fill )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *f);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_fill )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ BSTR f);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_mute )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *b);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_mute )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ VARIANT b);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_repeatCount )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *c);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_repeatCount )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ VARIANT c);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_repeatDur )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *time);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_repeatDur )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ VARIANT time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_restart )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *__MIDL_0020);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_restart )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ BSTR __MIDL_0021);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_speed )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *speed);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_speed )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ VARIANT speed);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_syncBehavior )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *sync);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_syncBehavior )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ BSTR sync);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_syncTolerance )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *tol);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_syncTolerance )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ VARIANT tol);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_syncMaster )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *b);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_syncMaster )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ VARIANT b);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeAction )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *time);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_timeAction )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ BSTR time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeContainer )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *__MIDL_0022);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_volume )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_volume )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ VARIANT val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_currTimeState )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ ITIMEState __RPC_FAR *__RPC_FAR *TimeState);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeAll )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ ITIMEElementCollection __RPC_FAR *__RPC_FAR *allColl);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeChildren )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ ITIMEElementCollection __RPC_FAR *__RPC_FAR *childColl);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeParent )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ ITIMEElement __RPC_FAR *__RPC_FAR *parent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_isPaused )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *b);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *beginElement )( 
            ITIMEElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *beginElementAt )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ double parentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *endElement )( 
            ITIMEElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *endElementAt )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ double parentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *pauseElement )( 
            ITIMEElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *resetElement )( 
            ITIMEElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *resumeElement )( 
            ITIMEElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *seekActiveTime )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ double activeTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *seekSegmentTime )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ double segmentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *seekTo )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ LONG repeatCount,
            /* [in] */ double segmentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *documentTimeToParentTime )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ double documentTime,
            /* [retval][out] */ double __RPC_FAR *parentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *parentTimeToDocumentTime )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ double parentTime,
            /* [retval][out] */ double __RPC_FAR *documentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *parentTimeToActiveTime )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ double parentTime,
            /* [retval][out] */ double __RPC_FAR *activeTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *activeTimeToParentTime )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ double activeTime,
            /* [retval][out] */ double __RPC_FAR *parentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *activeTimeToSegmentTime )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ double activeTime,
            /* [retval][out] */ double __RPC_FAR *segmentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *segmentTimeToActiveTime )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ double segmentTime,
            /* [retval][out] */ double __RPC_FAR *activeTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *segmentTimeToSimpleTime )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ double segmentTime,
            /* [retval][out] */ double __RPC_FAR *simpleTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *simpleTimeToSegmentTime )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ double simpleTime,
            /* [retval][out] */ double __RPC_FAR *segmentTime);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_endSync )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *es);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_endSync )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ BSTR es);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_activeElements )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ ITIMEActiveElementCollection __RPC_FAR *__RPC_FAR *activeColl);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_hasMedia )( 
            ITIMEElement __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *flag);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *nextElement )( 
            ITIMEElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *prevElement )( 
            ITIMEElement __RPC_FAR * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_updateMode )( 
            ITIMEElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *updateMode);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_updateMode )( 
            ITIMEElement __RPC_FAR * This,
            /* [in] */ BSTR updateMode);
        
        END_INTERFACE
    } ITIMEElementVtbl;

    interface ITIMEElement
    {
        CONST_VTBL struct ITIMEElementVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITIMEElement_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITIMEElement_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITIMEElement_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITIMEElement_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ITIMEElement_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ITIMEElement_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ITIMEElement_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ITIMEElement_get_accelerate(This,__MIDL_0014)	\
    (This)->lpVtbl -> get_accelerate(This,__MIDL_0014)

#define ITIMEElement_put_accelerate(This,__MIDL_0015)	\
    (This)->lpVtbl -> put_accelerate(This,__MIDL_0015)

#define ITIMEElement_get_autoReverse(This,__MIDL_0016)	\
    (This)->lpVtbl -> get_autoReverse(This,__MIDL_0016)

#define ITIMEElement_put_autoReverse(This,__MIDL_0017)	\
    (This)->lpVtbl -> put_autoReverse(This,__MIDL_0017)

#define ITIMEElement_get_begin(This,time)	\
    (This)->lpVtbl -> get_begin(This,time)

#define ITIMEElement_put_begin(This,time)	\
    (This)->lpVtbl -> put_begin(This,time)

#define ITIMEElement_get_decelerate(This,__MIDL_0018)	\
    (This)->lpVtbl -> get_decelerate(This,__MIDL_0018)

#define ITIMEElement_put_decelerate(This,__MIDL_0019)	\
    (This)->lpVtbl -> put_decelerate(This,__MIDL_0019)

#define ITIMEElement_get_dur(This,time)	\
    (This)->lpVtbl -> get_dur(This,time)

#define ITIMEElement_put_dur(This,time)	\
    (This)->lpVtbl -> put_dur(This,time)

#define ITIMEElement_get_end(This,time)	\
    (This)->lpVtbl -> get_end(This,time)

#define ITIMEElement_put_end(This,time)	\
    (This)->lpVtbl -> put_end(This,time)

#define ITIMEElement_get_fill(This,f)	\
    (This)->lpVtbl -> get_fill(This,f)

#define ITIMEElement_put_fill(This,f)	\
    (This)->lpVtbl -> put_fill(This,f)

#define ITIMEElement_get_mute(This,b)	\
    (This)->lpVtbl -> get_mute(This,b)

#define ITIMEElement_put_mute(This,b)	\
    (This)->lpVtbl -> put_mute(This,b)

#define ITIMEElement_get_repeatCount(This,c)	\
    (This)->lpVtbl -> get_repeatCount(This,c)

#define ITIMEElement_put_repeatCount(This,c)	\
    (This)->lpVtbl -> put_repeatCount(This,c)

#define ITIMEElement_get_repeatDur(This,time)	\
    (This)->lpVtbl -> get_repeatDur(This,time)

#define ITIMEElement_put_repeatDur(This,time)	\
    (This)->lpVtbl -> put_repeatDur(This,time)

#define ITIMEElement_get_restart(This,__MIDL_0020)	\
    (This)->lpVtbl -> get_restart(This,__MIDL_0020)

#define ITIMEElement_put_restart(This,__MIDL_0021)	\
    (This)->lpVtbl -> put_restart(This,__MIDL_0021)

#define ITIMEElement_get_speed(This,speed)	\
    (This)->lpVtbl -> get_speed(This,speed)

#define ITIMEElement_put_speed(This,speed)	\
    (This)->lpVtbl -> put_speed(This,speed)

#define ITIMEElement_get_syncBehavior(This,sync)	\
    (This)->lpVtbl -> get_syncBehavior(This,sync)

#define ITIMEElement_put_syncBehavior(This,sync)	\
    (This)->lpVtbl -> put_syncBehavior(This,sync)

#define ITIMEElement_get_syncTolerance(This,tol)	\
    (This)->lpVtbl -> get_syncTolerance(This,tol)

#define ITIMEElement_put_syncTolerance(This,tol)	\
    (This)->lpVtbl -> put_syncTolerance(This,tol)

#define ITIMEElement_get_syncMaster(This,b)	\
    (This)->lpVtbl -> get_syncMaster(This,b)

#define ITIMEElement_put_syncMaster(This,b)	\
    (This)->lpVtbl -> put_syncMaster(This,b)

#define ITIMEElement_get_timeAction(This,time)	\
    (This)->lpVtbl -> get_timeAction(This,time)

#define ITIMEElement_put_timeAction(This,time)	\
    (This)->lpVtbl -> put_timeAction(This,time)

#define ITIMEElement_get_timeContainer(This,__MIDL_0022)	\
    (This)->lpVtbl -> get_timeContainer(This,__MIDL_0022)

#define ITIMEElement_get_volume(This,val)	\
    (This)->lpVtbl -> get_volume(This,val)

#define ITIMEElement_put_volume(This,val)	\
    (This)->lpVtbl -> put_volume(This,val)

#define ITIMEElement_get_currTimeState(This,TimeState)	\
    (This)->lpVtbl -> get_currTimeState(This,TimeState)

#define ITIMEElement_get_timeAll(This,allColl)	\
    (This)->lpVtbl -> get_timeAll(This,allColl)

#define ITIMEElement_get_timeChildren(This,childColl)	\
    (This)->lpVtbl -> get_timeChildren(This,childColl)

#define ITIMEElement_get_timeParent(This,parent)	\
    (This)->lpVtbl -> get_timeParent(This,parent)

#define ITIMEElement_get_isPaused(This,b)	\
    (This)->lpVtbl -> get_isPaused(This,b)

#define ITIMEElement_beginElement(This)	\
    (This)->lpVtbl -> beginElement(This)

#define ITIMEElement_beginElementAt(This,parentTime)	\
    (This)->lpVtbl -> beginElementAt(This,parentTime)

#define ITIMEElement_endElement(This)	\
    (This)->lpVtbl -> endElement(This)

#define ITIMEElement_endElementAt(This,parentTime)	\
    (This)->lpVtbl -> endElementAt(This,parentTime)

#define ITIMEElement_pauseElement(This)	\
    (This)->lpVtbl -> pauseElement(This)

#define ITIMEElement_resetElement(This)	\
    (This)->lpVtbl -> resetElement(This)

#define ITIMEElement_resumeElement(This)	\
    (This)->lpVtbl -> resumeElement(This)

#define ITIMEElement_seekActiveTime(This,activeTime)	\
    (This)->lpVtbl -> seekActiveTime(This,activeTime)

#define ITIMEElement_seekSegmentTime(This,segmentTime)	\
    (This)->lpVtbl -> seekSegmentTime(This,segmentTime)

#define ITIMEElement_seekTo(This,repeatCount,segmentTime)	\
    (This)->lpVtbl -> seekTo(This,repeatCount,segmentTime)

#define ITIMEElement_documentTimeToParentTime(This,documentTime,parentTime)	\
    (This)->lpVtbl -> documentTimeToParentTime(This,documentTime,parentTime)

#define ITIMEElement_parentTimeToDocumentTime(This,parentTime,documentTime)	\
    (This)->lpVtbl -> parentTimeToDocumentTime(This,parentTime,documentTime)

#define ITIMEElement_parentTimeToActiveTime(This,parentTime,activeTime)	\
    (This)->lpVtbl -> parentTimeToActiveTime(This,parentTime,activeTime)

#define ITIMEElement_activeTimeToParentTime(This,activeTime,parentTime)	\
    (This)->lpVtbl -> activeTimeToParentTime(This,activeTime,parentTime)

#define ITIMEElement_activeTimeToSegmentTime(This,activeTime,segmentTime)	\
    (This)->lpVtbl -> activeTimeToSegmentTime(This,activeTime,segmentTime)

#define ITIMEElement_segmentTimeToActiveTime(This,segmentTime,activeTime)	\
    (This)->lpVtbl -> segmentTimeToActiveTime(This,segmentTime,activeTime)

#define ITIMEElement_segmentTimeToSimpleTime(This,segmentTime,simpleTime)	\
    (This)->lpVtbl -> segmentTimeToSimpleTime(This,segmentTime,simpleTime)

#define ITIMEElement_simpleTimeToSegmentTime(This,simpleTime,segmentTime)	\
    (This)->lpVtbl -> simpleTimeToSegmentTime(This,simpleTime,segmentTime)

#define ITIMEElement_get_endSync(This,es)	\
    (This)->lpVtbl -> get_endSync(This,es)

#define ITIMEElement_put_endSync(This,es)	\
    (This)->lpVtbl -> put_endSync(This,es)

#define ITIMEElement_get_activeElements(This,activeColl)	\
    (This)->lpVtbl -> get_activeElements(This,activeColl)

#define ITIMEElement_get_hasMedia(This,flag)	\
    (This)->lpVtbl -> get_hasMedia(This,flag)

#define ITIMEElement_nextElement(This)	\
    (This)->lpVtbl -> nextElement(This)

#define ITIMEElement_prevElement(This)	\
    (This)->lpVtbl -> prevElement(This)

#define ITIMEElement_get_updateMode(This,updateMode)	\
    (This)->lpVtbl -> get_updateMode(This,updateMode)

#define ITIMEElement_put_updateMode(This,updateMode)	\
    (This)->lpVtbl -> put_updateMode(This,updateMode)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_accelerate_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *__MIDL_0014);


void __RPC_STUB ITIMEElement_get_accelerate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEElement_put_accelerate_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ VARIANT __MIDL_0015);


void __RPC_STUB ITIMEElement_put_accelerate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_autoReverse_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *__MIDL_0016);


void __RPC_STUB ITIMEElement_get_autoReverse_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEElement_put_autoReverse_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ VARIANT __MIDL_0017);


void __RPC_STUB ITIMEElement_put_autoReverse_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_begin_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *time);


void __RPC_STUB ITIMEElement_get_begin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEElement_put_begin_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ VARIANT time);


void __RPC_STUB ITIMEElement_put_begin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_decelerate_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *__MIDL_0018);


void __RPC_STUB ITIMEElement_get_decelerate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEElement_put_decelerate_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ VARIANT __MIDL_0019);


void __RPC_STUB ITIMEElement_put_decelerate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_dur_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *time);


void __RPC_STUB ITIMEElement_get_dur_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEElement_put_dur_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ VARIANT time);


void __RPC_STUB ITIMEElement_put_dur_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_end_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *time);


void __RPC_STUB ITIMEElement_get_end_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEElement_put_end_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ VARIANT time);


void __RPC_STUB ITIMEElement_put_end_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_fill_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *f);


void __RPC_STUB ITIMEElement_get_fill_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEElement_put_fill_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ BSTR f);


void __RPC_STUB ITIMEElement_put_fill_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_mute_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *b);


void __RPC_STUB ITIMEElement_get_mute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEElement_put_mute_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ VARIANT b);


void __RPC_STUB ITIMEElement_put_mute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_repeatCount_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *c);


void __RPC_STUB ITIMEElement_get_repeatCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEElement_put_repeatCount_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ VARIANT c);


void __RPC_STUB ITIMEElement_put_repeatCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_repeatDur_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *time);


void __RPC_STUB ITIMEElement_get_repeatDur_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEElement_put_repeatDur_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ VARIANT time);


void __RPC_STUB ITIMEElement_put_repeatDur_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_restart_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *__MIDL_0020);


void __RPC_STUB ITIMEElement_get_restart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEElement_put_restart_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ BSTR __MIDL_0021);


void __RPC_STUB ITIMEElement_put_restart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_speed_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *speed);


void __RPC_STUB ITIMEElement_get_speed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEElement_put_speed_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ VARIANT speed);


void __RPC_STUB ITIMEElement_put_speed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_syncBehavior_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *sync);


void __RPC_STUB ITIMEElement_get_syncBehavior_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEElement_put_syncBehavior_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ BSTR sync);


void __RPC_STUB ITIMEElement_put_syncBehavior_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_syncTolerance_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *tol);


void __RPC_STUB ITIMEElement_get_syncTolerance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEElement_put_syncTolerance_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ VARIANT tol);


void __RPC_STUB ITIMEElement_put_syncTolerance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_syncMaster_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *b);


void __RPC_STUB ITIMEElement_get_syncMaster_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEElement_put_syncMaster_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ VARIANT b);


void __RPC_STUB ITIMEElement_put_syncMaster_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_timeAction_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *time);


void __RPC_STUB ITIMEElement_get_timeAction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEElement_put_timeAction_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ BSTR time);


void __RPC_STUB ITIMEElement_put_timeAction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_timeContainer_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *__MIDL_0022);


void __RPC_STUB ITIMEElement_get_timeContainer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_volume_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *val);


void __RPC_STUB ITIMEElement_get_volume_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEElement_put_volume_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ VARIANT val);


void __RPC_STUB ITIMEElement_put_volume_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_currTimeState_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ ITIMEState __RPC_FAR *__RPC_FAR *TimeState);


void __RPC_STUB ITIMEElement_get_currTimeState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_timeAll_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ ITIMEElementCollection __RPC_FAR *__RPC_FAR *allColl);


void __RPC_STUB ITIMEElement_get_timeAll_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_timeChildren_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ ITIMEElementCollection __RPC_FAR *__RPC_FAR *childColl);


void __RPC_STUB ITIMEElement_get_timeChildren_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_timeParent_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ ITIMEElement __RPC_FAR *__RPC_FAR *parent);


void __RPC_STUB ITIMEElement_get_timeParent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_isPaused_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *b);


void __RPC_STUB ITIMEElement_get_isPaused_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEElement_beginElement_Proxy( 
    ITIMEElement __RPC_FAR * This);


void __RPC_STUB ITIMEElement_beginElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEElement_beginElementAt_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ double parentTime);


void __RPC_STUB ITIMEElement_beginElementAt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEElement_endElement_Proxy( 
    ITIMEElement __RPC_FAR * This);


void __RPC_STUB ITIMEElement_endElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEElement_endElementAt_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ double parentTime);


void __RPC_STUB ITIMEElement_endElementAt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEElement_pauseElement_Proxy( 
    ITIMEElement __RPC_FAR * This);


void __RPC_STUB ITIMEElement_pauseElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEElement_resetElement_Proxy( 
    ITIMEElement __RPC_FAR * This);


void __RPC_STUB ITIMEElement_resetElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEElement_resumeElement_Proxy( 
    ITIMEElement __RPC_FAR * This);


void __RPC_STUB ITIMEElement_resumeElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEElement_seekActiveTime_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ double activeTime);


void __RPC_STUB ITIMEElement_seekActiveTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEElement_seekSegmentTime_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ double segmentTime);


void __RPC_STUB ITIMEElement_seekSegmentTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEElement_seekTo_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ LONG repeatCount,
    /* [in] */ double segmentTime);


void __RPC_STUB ITIMEElement_seekTo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEElement_documentTimeToParentTime_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ double documentTime,
    /* [retval][out] */ double __RPC_FAR *parentTime);


void __RPC_STUB ITIMEElement_documentTimeToParentTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEElement_parentTimeToDocumentTime_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ double parentTime,
    /* [retval][out] */ double __RPC_FAR *documentTime);


void __RPC_STUB ITIMEElement_parentTimeToDocumentTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEElement_parentTimeToActiveTime_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ double parentTime,
    /* [retval][out] */ double __RPC_FAR *activeTime);


void __RPC_STUB ITIMEElement_parentTimeToActiveTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEElement_activeTimeToParentTime_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ double activeTime,
    /* [retval][out] */ double __RPC_FAR *parentTime);


void __RPC_STUB ITIMEElement_activeTimeToParentTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEElement_activeTimeToSegmentTime_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ double activeTime,
    /* [retval][out] */ double __RPC_FAR *segmentTime);


void __RPC_STUB ITIMEElement_activeTimeToSegmentTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEElement_segmentTimeToActiveTime_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ double segmentTime,
    /* [retval][out] */ double __RPC_FAR *activeTime);


void __RPC_STUB ITIMEElement_segmentTimeToActiveTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEElement_segmentTimeToSimpleTime_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ double segmentTime,
    /* [retval][out] */ double __RPC_FAR *simpleTime);


void __RPC_STUB ITIMEElement_segmentTimeToSimpleTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEElement_simpleTimeToSegmentTime_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ double simpleTime,
    /* [retval][out] */ double __RPC_FAR *segmentTime);


void __RPC_STUB ITIMEElement_simpleTimeToSegmentTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_endSync_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *es);


void __RPC_STUB ITIMEElement_get_endSync_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEElement_put_endSync_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ BSTR es);


void __RPC_STUB ITIMEElement_put_endSync_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_activeElements_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ ITIMEActiveElementCollection __RPC_FAR *__RPC_FAR *activeColl);


void __RPC_STUB ITIMEElement_get_activeElements_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_hasMedia_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *flag);


void __RPC_STUB ITIMEElement_get_hasMedia_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEElement_nextElement_Proxy( 
    ITIMEElement __RPC_FAR * This);


void __RPC_STUB ITIMEElement_nextElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEElement_prevElement_Proxy( 
    ITIMEElement __RPC_FAR * This);


void __RPC_STUB ITIMEElement_prevElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElement_get_updateMode_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *updateMode);


void __RPC_STUB ITIMEElement_get_updateMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEElement_put_updateMode_Proxy( 
    ITIMEElement __RPC_FAR * This,
    /* [in] */ BSTR updateMode);


void __RPC_STUB ITIMEElement_put_updateMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITIMEElement_INTERFACE_DEFINED__ */


#ifndef __ITIMEBodyElement_INTERFACE_DEFINED__
#define __ITIMEBodyElement_INTERFACE_DEFINED__

/* interface ITIMEBodyElement */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ITIMEBodyElement;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8c90e348-ec0a-4229-90b0-e57d2ca45ccb")
    ITIMEBodyElement : public ITIMEElement
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITIMEBodyElementVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITIMEBodyElement __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITIMEBodyElement __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_accelerate )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *__MIDL_0014);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_accelerate )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ VARIANT __MIDL_0015);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_autoReverse )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *__MIDL_0016);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_autoReverse )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ VARIANT __MIDL_0017);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_begin )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *time);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_begin )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ VARIANT time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_decelerate )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *__MIDL_0018);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_decelerate )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ VARIANT __MIDL_0019);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_dur )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *time);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_dur )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ VARIANT time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_end )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *time);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_end )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ VARIANT time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_fill )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *f);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_fill )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ BSTR f);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_mute )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *b);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_mute )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ VARIANT b);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_repeatCount )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *c);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_repeatCount )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ VARIANT c);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_repeatDur )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *time);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_repeatDur )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ VARIANT time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_restart )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *__MIDL_0020);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_restart )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ BSTR __MIDL_0021);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_speed )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *speed);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_speed )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ VARIANT speed);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_syncBehavior )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *sync);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_syncBehavior )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ BSTR sync);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_syncTolerance )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *tol);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_syncTolerance )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ VARIANT tol);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_syncMaster )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *b);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_syncMaster )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ VARIANT b);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeAction )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *time);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_timeAction )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ BSTR time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeContainer )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *__MIDL_0022);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_volume )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_volume )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ VARIANT val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_currTimeState )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ ITIMEState __RPC_FAR *__RPC_FAR *TimeState);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeAll )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ ITIMEElementCollection __RPC_FAR *__RPC_FAR *allColl);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeChildren )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ ITIMEElementCollection __RPC_FAR *__RPC_FAR *childColl);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeParent )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ ITIMEElement __RPC_FAR *__RPC_FAR *parent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_isPaused )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *b);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *beginElement )( 
            ITIMEBodyElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *beginElementAt )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ double parentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *endElement )( 
            ITIMEBodyElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *endElementAt )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ double parentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *pauseElement )( 
            ITIMEBodyElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *resetElement )( 
            ITIMEBodyElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *resumeElement )( 
            ITIMEBodyElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *seekActiveTime )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ double activeTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *seekSegmentTime )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ double segmentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *seekTo )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ LONG repeatCount,
            /* [in] */ double segmentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *documentTimeToParentTime )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ double documentTime,
            /* [retval][out] */ double __RPC_FAR *parentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *parentTimeToDocumentTime )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ double parentTime,
            /* [retval][out] */ double __RPC_FAR *documentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *parentTimeToActiveTime )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ double parentTime,
            /* [retval][out] */ double __RPC_FAR *activeTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *activeTimeToParentTime )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ double activeTime,
            /* [retval][out] */ double __RPC_FAR *parentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *activeTimeToSegmentTime )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ double activeTime,
            /* [retval][out] */ double __RPC_FAR *segmentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *segmentTimeToActiveTime )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ double segmentTime,
            /* [retval][out] */ double __RPC_FAR *activeTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *segmentTimeToSimpleTime )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ double segmentTime,
            /* [retval][out] */ double __RPC_FAR *simpleTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *simpleTimeToSegmentTime )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ double simpleTime,
            /* [retval][out] */ double __RPC_FAR *segmentTime);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_endSync )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *es);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_endSync )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ BSTR es);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_activeElements )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ ITIMEActiveElementCollection __RPC_FAR *__RPC_FAR *activeColl);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_hasMedia )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *flag);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *nextElement )( 
            ITIMEBodyElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *prevElement )( 
            ITIMEBodyElement __RPC_FAR * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_updateMode )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *updateMode);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_updateMode )( 
            ITIMEBodyElement __RPC_FAR * This,
            /* [in] */ BSTR updateMode);
        
        END_INTERFACE
    } ITIMEBodyElementVtbl;

    interface ITIMEBodyElement
    {
        CONST_VTBL struct ITIMEBodyElementVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITIMEBodyElement_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITIMEBodyElement_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITIMEBodyElement_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITIMEBodyElement_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ITIMEBodyElement_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ITIMEBodyElement_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ITIMEBodyElement_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ITIMEBodyElement_get_accelerate(This,__MIDL_0014)	\
    (This)->lpVtbl -> get_accelerate(This,__MIDL_0014)

#define ITIMEBodyElement_put_accelerate(This,__MIDL_0015)	\
    (This)->lpVtbl -> put_accelerate(This,__MIDL_0015)

#define ITIMEBodyElement_get_autoReverse(This,__MIDL_0016)	\
    (This)->lpVtbl -> get_autoReverse(This,__MIDL_0016)

#define ITIMEBodyElement_put_autoReverse(This,__MIDL_0017)	\
    (This)->lpVtbl -> put_autoReverse(This,__MIDL_0017)

#define ITIMEBodyElement_get_begin(This,time)	\
    (This)->lpVtbl -> get_begin(This,time)

#define ITIMEBodyElement_put_begin(This,time)	\
    (This)->lpVtbl -> put_begin(This,time)

#define ITIMEBodyElement_get_decelerate(This,__MIDL_0018)	\
    (This)->lpVtbl -> get_decelerate(This,__MIDL_0018)

#define ITIMEBodyElement_put_decelerate(This,__MIDL_0019)	\
    (This)->lpVtbl -> put_decelerate(This,__MIDL_0019)

#define ITIMEBodyElement_get_dur(This,time)	\
    (This)->lpVtbl -> get_dur(This,time)

#define ITIMEBodyElement_put_dur(This,time)	\
    (This)->lpVtbl -> put_dur(This,time)

#define ITIMEBodyElement_get_end(This,time)	\
    (This)->lpVtbl -> get_end(This,time)

#define ITIMEBodyElement_put_end(This,time)	\
    (This)->lpVtbl -> put_end(This,time)

#define ITIMEBodyElement_get_fill(This,f)	\
    (This)->lpVtbl -> get_fill(This,f)

#define ITIMEBodyElement_put_fill(This,f)	\
    (This)->lpVtbl -> put_fill(This,f)

#define ITIMEBodyElement_get_mute(This,b)	\
    (This)->lpVtbl -> get_mute(This,b)

#define ITIMEBodyElement_put_mute(This,b)	\
    (This)->lpVtbl -> put_mute(This,b)

#define ITIMEBodyElement_get_repeatCount(This,c)	\
    (This)->lpVtbl -> get_repeatCount(This,c)

#define ITIMEBodyElement_put_repeatCount(This,c)	\
    (This)->lpVtbl -> put_repeatCount(This,c)

#define ITIMEBodyElement_get_repeatDur(This,time)	\
    (This)->lpVtbl -> get_repeatDur(This,time)

#define ITIMEBodyElement_put_repeatDur(This,time)	\
    (This)->lpVtbl -> put_repeatDur(This,time)

#define ITIMEBodyElement_get_restart(This,__MIDL_0020)	\
    (This)->lpVtbl -> get_restart(This,__MIDL_0020)

#define ITIMEBodyElement_put_restart(This,__MIDL_0021)	\
    (This)->lpVtbl -> put_restart(This,__MIDL_0021)

#define ITIMEBodyElement_get_speed(This,speed)	\
    (This)->lpVtbl -> get_speed(This,speed)

#define ITIMEBodyElement_put_speed(This,speed)	\
    (This)->lpVtbl -> put_speed(This,speed)

#define ITIMEBodyElement_get_syncBehavior(This,sync)	\
    (This)->lpVtbl -> get_syncBehavior(This,sync)

#define ITIMEBodyElement_put_syncBehavior(This,sync)	\
    (This)->lpVtbl -> put_syncBehavior(This,sync)

#define ITIMEBodyElement_get_syncTolerance(This,tol)	\
    (This)->lpVtbl -> get_syncTolerance(This,tol)

#define ITIMEBodyElement_put_syncTolerance(This,tol)	\
    (This)->lpVtbl -> put_syncTolerance(This,tol)

#define ITIMEBodyElement_get_syncMaster(This,b)	\
    (This)->lpVtbl -> get_syncMaster(This,b)

#define ITIMEBodyElement_put_syncMaster(This,b)	\
    (This)->lpVtbl -> put_syncMaster(This,b)

#define ITIMEBodyElement_get_timeAction(This,time)	\
    (This)->lpVtbl -> get_timeAction(This,time)

#define ITIMEBodyElement_put_timeAction(This,time)	\
    (This)->lpVtbl -> put_timeAction(This,time)

#define ITIMEBodyElement_get_timeContainer(This,__MIDL_0022)	\
    (This)->lpVtbl -> get_timeContainer(This,__MIDL_0022)

#define ITIMEBodyElement_get_volume(This,val)	\
    (This)->lpVtbl -> get_volume(This,val)

#define ITIMEBodyElement_put_volume(This,val)	\
    (This)->lpVtbl -> put_volume(This,val)

#define ITIMEBodyElement_get_currTimeState(This,TimeState)	\
    (This)->lpVtbl -> get_currTimeState(This,TimeState)

#define ITIMEBodyElement_get_timeAll(This,allColl)	\
    (This)->lpVtbl -> get_timeAll(This,allColl)

#define ITIMEBodyElement_get_timeChildren(This,childColl)	\
    (This)->lpVtbl -> get_timeChildren(This,childColl)

#define ITIMEBodyElement_get_timeParent(This,parent)	\
    (This)->lpVtbl -> get_timeParent(This,parent)

#define ITIMEBodyElement_get_isPaused(This,b)	\
    (This)->lpVtbl -> get_isPaused(This,b)

#define ITIMEBodyElement_beginElement(This)	\
    (This)->lpVtbl -> beginElement(This)

#define ITIMEBodyElement_beginElementAt(This,parentTime)	\
    (This)->lpVtbl -> beginElementAt(This,parentTime)

#define ITIMEBodyElement_endElement(This)	\
    (This)->lpVtbl -> endElement(This)

#define ITIMEBodyElement_endElementAt(This,parentTime)	\
    (This)->lpVtbl -> endElementAt(This,parentTime)

#define ITIMEBodyElement_pauseElement(This)	\
    (This)->lpVtbl -> pauseElement(This)

#define ITIMEBodyElement_resetElement(This)	\
    (This)->lpVtbl -> resetElement(This)

#define ITIMEBodyElement_resumeElement(This)	\
    (This)->lpVtbl -> resumeElement(This)

#define ITIMEBodyElement_seekActiveTime(This,activeTime)	\
    (This)->lpVtbl -> seekActiveTime(This,activeTime)

#define ITIMEBodyElement_seekSegmentTime(This,segmentTime)	\
    (This)->lpVtbl -> seekSegmentTime(This,segmentTime)

#define ITIMEBodyElement_seekTo(This,repeatCount,segmentTime)	\
    (This)->lpVtbl -> seekTo(This,repeatCount,segmentTime)

#define ITIMEBodyElement_documentTimeToParentTime(This,documentTime,parentTime)	\
    (This)->lpVtbl -> documentTimeToParentTime(This,documentTime,parentTime)

#define ITIMEBodyElement_parentTimeToDocumentTime(This,parentTime,documentTime)	\
    (This)->lpVtbl -> parentTimeToDocumentTime(This,parentTime,documentTime)

#define ITIMEBodyElement_parentTimeToActiveTime(This,parentTime,activeTime)	\
    (This)->lpVtbl -> parentTimeToActiveTime(This,parentTime,activeTime)

#define ITIMEBodyElement_activeTimeToParentTime(This,activeTime,parentTime)	\
    (This)->lpVtbl -> activeTimeToParentTime(This,activeTime,parentTime)

#define ITIMEBodyElement_activeTimeToSegmentTime(This,activeTime,segmentTime)	\
    (This)->lpVtbl -> activeTimeToSegmentTime(This,activeTime,segmentTime)

#define ITIMEBodyElement_segmentTimeToActiveTime(This,segmentTime,activeTime)	\
    (This)->lpVtbl -> segmentTimeToActiveTime(This,segmentTime,activeTime)

#define ITIMEBodyElement_segmentTimeToSimpleTime(This,segmentTime,simpleTime)	\
    (This)->lpVtbl -> segmentTimeToSimpleTime(This,segmentTime,simpleTime)

#define ITIMEBodyElement_simpleTimeToSegmentTime(This,simpleTime,segmentTime)	\
    (This)->lpVtbl -> simpleTimeToSegmentTime(This,simpleTime,segmentTime)

#define ITIMEBodyElement_get_endSync(This,es)	\
    (This)->lpVtbl -> get_endSync(This,es)

#define ITIMEBodyElement_put_endSync(This,es)	\
    (This)->lpVtbl -> put_endSync(This,es)

#define ITIMEBodyElement_get_activeElements(This,activeColl)	\
    (This)->lpVtbl -> get_activeElements(This,activeColl)

#define ITIMEBodyElement_get_hasMedia(This,flag)	\
    (This)->lpVtbl -> get_hasMedia(This,flag)

#define ITIMEBodyElement_nextElement(This)	\
    (This)->lpVtbl -> nextElement(This)

#define ITIMEBodyElement_prevElement(This)	\
    (This)->lpVtbl -> prevElement(This)

#define ITIMEBodyElement_get_updateMode(This,updateMode)	\
    (This)->lpVtbl -> get_updateMode(This,updateMode)

#define ITIMEBodyElement_put_updateMode(This,updateMode)	\
    (This)->lpVtbl -> put_updateMode(This,updateMode)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITIMEBodyElement_INTERFACE_DEFINED__ */


#ifndef __ITIMEMediaElement_INTERFACE_DEFINED__
#define __ITIMEMediaElement_INTERFACE_DEFINED__

/* interface ITIMEMediaElement */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ITIMEMediaElement;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47a6972f-ae65-4a6b-ae63-d0c1d5307b58")
    ITIMEMediaElement : public ITIMEElement
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_clipBegin( 
            /* [retval][out] */ VARIANT __RPC_FAR *time) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_clipBegin( 
            /* [in] */ VARIANT time) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_clipEnd( 
            /* [retval][out] */ VARIANT __RPC_FAR *time) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_clipEnd( 
            /* [in] */ VARIANT time) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_player( 
            /* [retval][out] */ VARIANT __RPC_FAR *id) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_player( 
            /* [in] */ VARIANT id) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_src( 
            /* [retval][out] */ VARIANT __RPC_FAR *url) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_src( 
            /* [in] */ VARIANT url) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_type( 
            /* [retval][out] */ VARIANT __RPC_FAR *mimetype) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_type( 
            /* [in] */ VARIANT mimetype) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_abstract( 
            /* [retval][out] */ BSTR __RPC_FAR *abs) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_author( 
            /* [retval][out] */ BSTR __RPC_FAR *auth) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_copyright( 
            /* [retval][out] */ BSTR __RPC_FAR *cpyrght) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_hasAudio( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_hasVisual( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_mediaDur( 
            /* [retval][out] */ double __RPC_FAR *dur) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_mediaHeight( 
            /* [retval][out] */ long __RPC_FAR *height) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_mediaWidth( 
            /* [retval][out] */ long __RPC_FAR *width) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_playerObject( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_playList( 
            /* [retval][out] */ ITIMEPlayList __RPC_FAR *__RPC_FAR *pPlayList) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_rating( 
            /* [retval][out] */ BSTR __RPC_FAR *rate) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_title( 
            /* [retval][out] */ BSTR __RPC_FAR *name) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_hasPlayList( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *b) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_canPause( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_canSeek( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITIMEMediaElementVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITIMEMediaElement __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITIMEMediaElement __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_accelerate )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *__MIDL_0014);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_accelerate )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ VARIANT __MIDL_0015);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_autoReverse )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *__MIDL_0016);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_autoReverse )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ VARIANT __MIDL_0017);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_begin )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *time);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_begin )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ VARIANT time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_decelerate )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *__MIDL_0018);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_decelerate )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ VARIANT __MIDL_0019);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_dur )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *time);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_dur )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ VARIANT time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_end )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *time);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_end )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ VARIANT time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_fill )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *f);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_fill )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ BSTR f);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_mute )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *b);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_mute )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ VARIANT b);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_repeatCount )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *c);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_repeatCount )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ VARIANT c);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_repeatDur )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *time);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_repeatDur )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ VARIANT time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_restart )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *__MIDL_0020);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_restart )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ BSTR __MIDL_0021);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_speed )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *speed);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_speed )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ VARIANT speed);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_syncBehavior )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *sync);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_syncBehavior )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ BSTR sync);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_syncTolerance )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *tol);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_syncTolerance )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ VARIANT tol);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_syncMaster )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *b);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_syncMaster )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ VARIANT b);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeAction )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *time);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_timeAction )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ BSTR time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeContainer )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *__MIDL_0022);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_volume )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_volume )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ VARIANT val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_currTimeState )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ ITIMEState __RPC_FAR *__RPC_FAR *TimeState);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeAll )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ ITIMEElementCollection __RPC_FAR *__RPC_FAR *allColl);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeChildren )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ ITIMEElementCollection __RPC_FAR *__RPC_FAR *childColl);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeParent )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ ITIMEElement __RPC_FAR *__RPC_FAR *parent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_isPaused )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *b);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *beginElement )( 
            ITIMEMediaElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *beginElementAt )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ double parentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *endElement )( 
            ITIMEMediaElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *endElementAt )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ double parentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *pauseElement )( 
            ITIMEMediaElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *resetElement )( 
            ITIMEMediaElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *resumeElement )( 
            ITIMEMediaElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *seekActiveTime )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ double activeTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *seekSegmentTime )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ double segmentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *seekTo )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ LONG repeatCount,
            /* [in] */ double segmentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *documentTimeToParentTime )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ double documentTime,
            /* [retval][out] */ double __RPC_FAR *parentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *parentTimeToDocumentTime )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ double parentTime,
            /* [retval][out] */ double __RPC_FAR *documentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *parentTimeToActiveTime )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ double parentTime,
            /* [retval][out] */ double __RPC_FAR *activeTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *activeTimeToParentTime )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ double activeTime,
            /* [retval][out] */ double __RPC_FAR *parentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *activeTimeToSegmentTime )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ double activeTime,
            /* [retval][out] */ double __RPC_FAR *segmentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *segmentTimeToActiveTime )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ double segmentTime,
            /* [retval][out] */ double __RPC_FAR *activeTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *segmentTimeToSimpleTime )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ double segmentTime,
            /* [retval][out] */ double __RPC_FAR *simpleTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *simpleTimeToSegmentTime )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ double simpleTime,
            /* [retval][out] */ double __RPC_FAR *segmentTime);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_endSync )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *es);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_endSync )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ BSTR es);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_activeElements )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ ITIMEActiveElementCollection __RPC_FAR *__RPC_FAR *activeColl);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_hasMedia )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *flag);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *nextElement )( 
            ITIMEMediaElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *prevElement )( 
            ITIMEMediaElement __RPC_FAR * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_updateMode )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *updateMode);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_updateMode )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ BSTR updateMode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_clipBegin )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *time);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_clipBegin )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ VARIANT time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_clipEnd )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *time);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_clipEnd )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ VARIANT time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_player )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *id);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_player )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ VARIANT id);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_src )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *url);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_src )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ VARIANT url);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_type )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *mimetype);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_type )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [in] */ VARIANT mimetype);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_abstract )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *abs);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_author )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *auth);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_copyright )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *cpyrght);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_hasAudio )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_hasVisual )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_mediaDur )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ double __RPC_FAR *dur);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_mediaHeight )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *height);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_mediaWidth )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *width);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_playerObject )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_playList )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ ITIMEPlayList __RPC_FAR *__RPC_FAR *pPlayList);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_rating )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *rate);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_title )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *name);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_hasPlayList )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *b);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_canPause )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_canSeek )( 
            ITIMEMediaElement __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b);
        
        END_INTERFACE
    } ITIMEMediaElementVtbl;

    interface ITIMEMediaElement
    {
        CONST_VTBL struct ITIMEMediaElementVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITIMEMediaElement_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITIMEMediaElement_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITIMEMediaElement_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITIMEMediaElement_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ITIMEMediaElement_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ITIMEMediaElement_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ITIMEMediaElement_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ITIMEMediaElement_get_accelerate(This,__MIDL_0014)	\
    (This)->lpVtbl -> get_accelerate(This,__MIDL_0014)

#define ITIMEMediaElement_put_accelerate(This,__MIDL_0015)	\
    (This)->lpVtbl -> put_accelerate(This,__MIDL_0015)

#define ITIMEMediaElement_get_autoReverse(This,__MIDL_0016)	\
    (This)->lpVtbl -> get_autoReverse(This,__MIDL_0016)

#define ITIMEMediaElement_put_autoReverse(This,__MIDL_0017)	\
    (This)->lpVtbl -> put_autoReverse(This,__MIDL_0017)

#define ITIMEMediaElement_get_begin(This,time)	\
    (This)->lpVtbl -> get_begin(This,time)

#define ITIMEMediaElement_put_begin(This,time)	\
    (This)->lpVtbl -> put_begin(This,time)

#define ITIMEMediaElement_get_decelerate(This,__MIDL_0018)	\
    (This)->lpVtbl -> get_decelerate(This,__MIDL_0018)

#define ITIMEMediaElement_put_decelerate(This,__MIDL_0019)	\
    (This)->lpVtbl -> put_decelerate(This,__MIDL_0019)

#define ITIMEMediaElement_get_dur(This,time)	\
    (This)->lpVtbl -> get_dur(This,time)

#define ITIMEMediaElement_put_dur(This,time)	\
    (This)->lpVtbl -> put_dur(This,time)

#define ITIMEMediaElement_get_end(This,time)	\
    (This)->lpVtbl -> get_end(This,time)

#define ITIMEMediaElement_put_end(This,time)	\
    (This)->lpVtbl -> put_end(This,time)

#define ITIMEMediaElement_get_fill(This,f)	\
    (This)->lpVtbl -> get_fill(This,f)

#define ITIMEMediaElement_put_fill(This,f)	\
    (This)->lpVtbl -> put_fill(This,f)

#define ITIMEMediaElement_get_mute(This,b)	\
    (This)->lpVtbl -> get_mute(This,b)

#define ITIMEMediaElement_put_mute(This,b)	\
    (This)->lpVtbl -> put_mute(This,b)

#define ITIMEMediaElement_get_repeatCount(This,c)	\
    (This)->lpVtbl -> get_repeatCount(This,c)

#define ITIMEMediaElement_put_repeatCount(This,c)	\
    (This)->lpVtbl -> put_repeatCount(This,c)

#define ITIMEMediaElement_get_repeatDur(This,time)	\
    (This)->lpVtbl -> get_repeatDur(This,time)

#define ITIMEMediaElement_put_repeatDur(This,time)	\
    (This)->lpVtbl -> put_repeatDur(This,time)

#define ITIMEMediaElement_get_restart(This,__MIDL_0020)	\
    (This)->lpVtbl -> get_restart(This,__MIDL_0020)

#define ITIMEMediaElement_put_restart(This,__MIDL_0021)	\
    (This)->lpVtbl -> put_restart(This,__MIDL_0021)

#define ITIMEMediaElement_get_speed(This,speed)	\
    (This)->lpVtbl -> get_speed(This,speed)

#define ITIMEMediaElement_put_speed(This,speed)	\
    (This)->lpVtbl -> put_speed(This,speed)

#define ITIMEMediaElement_get_syncBehavior(This,sync)	\
    (This)->lpVtbl -> get_syncBehavior(This,sync)

#define ITIMEMediaElement_put_syncBehavior(This,sync)	\
    (This)->lpVtbl -> put_syncBehavior(This,sync)

#define ITIMEMediaElement_get_syncTolerance(This,tol)	\
    (This)->lpVtbl -> get_syncTolerance(This,tol)

#define ITIMEMediaElement_put_syncTolerance(This,tol)	\
    (This)->lpVtbl -> put_syncTolerance(This,tol)

#define ITIMEMediaElement_get_syncMaster(This,b)	\
    (This)->lpVtbl -> get_syncMaster(This,b)

#define ITIMEMediaElement_put_syncMaster(This,b)	\
    (This)->lpVtbl -> put_syncMaster(This,b)

#define ITIMEMediaElement_get_timeAction(This,time)	\
    (This)->lpVtbl -> get_timeAction(This,time)

#define ITIMEMediaElement_put_timeAction(This,time)	\
    (This)->lpVtbl -> put_timeAction(This,time)

#define ITIMEMediaElement_get_timeContainer(This,__MIDL_0022)	\
    (This)->lpVtbl -> get_timeContainer(This,__MIDL_0022)

#define ITIMEMediaElement_get_volume(This,val)	\
    (This)->lpVtbl -> get_volume(This,val)

#define ITIMEMediaElement_put_volume(This,val)	\
    (This)->lpVtbl -> put_volume(This,val)

#define ITIMEMediaElement_get_currTimeState(This,TimeState)	\
    (This)->lpVtbl -> get_currTimeState(This,TimeState)

#define ITIMEMediaElement_get_timeAll(This,allColl)	\
    (This)->lpVtbl -> get_timeAll(This,allColl)

#define ITIMEMediaElement_get_timeChildren(This,childColl)	\
    (This)->lpVtbl -> get_timeChildren(This,childColl)

#define ITIMEMediaElement_get_timeParent(This,parent)	\
    (This)->lpVtbl -> get_timeParent(This,parent)

#define ITIMEMediaElement_get_isPaused(This,b)	\
    (This)->lpVtbl -> get_isPaused(This,b)

#define ITIMEMediaElement_beginElement(This)	\
    (This)->lpVtbl -> beginElement(This)

#define ITIMEMediaElement_beginElementAt(This,parentTime)	\
    (This)->lpVtbl -> beginElementAt(This,parentTime)

#define ITIMEMediaElement_endElement(This)	\
    (This)->lpVtbl -> endElement(This)

#define ITIMEMediaElement_endElementAt(This,parentTime)	\
    (This)->lpVtbl -> endElementAt(This,parentTime)

#define ITIMEMediaElement_pauseElement(This)	\
    (This)->lpVtbl -> pauseElement(This)

#define ITIMEMediaElement_resetElement(This)	\
    (This)->lpVtbl -> resetElement(This)

#define ITIMEMediaElement_resumeElement(This)	\
    (This)->lpVtbl -> resumeElement(This)

#define ITIMEMediaElement_seekActiveTime(This,activeTime)	\
    (This)->lpVtbl -> seekActiveTime(This,activeTime)

#define ITIMEMediaElement_seekSegmentTime(This,segmentTime)	\
    (This)->lpVtbl -> seekSegmentTime(This,segmentTime)

#define ITIMEMediaElement_seekTo(This,repeatCount,segmentTime)	\
    (This)->lpVtbl -> seekTo(This,repeatCount,segmentTime)

#define ITIMEMediaElement_documentTimeToParentTime(This,documentTime,parentTime)	\
    (This)->lpVtbl -> documentTimeToParentTime(This,documentTime,parentTime)

#define ITIMEMediaElement_parentTimeToDocumentTime(This,parentTime,documentTime)	\
    (This)->lpVtbl -> parentTimeToDocumentTime(This,parentTime,documentTime)

#define ITIMEMediaElement_parentTimeToActiveTime(This,parentTime,activeTime)	\
    (This)->lpVtbl -> parentTimeToActiveTime(This,parentTime,activeTime)

#define ITIMEMediaElement_activeTimeToParentTime(This,activeTime,parentTime)	\
    (This)->lpVtbl -> activeTimeToParentTime(This,activeTime,parentTime)

#define ITIMEMediaElement_activeTimeToSegmentTime(This,activeTime,segmentTime)	\
    (This)->lpVtbl -> activeTimeToSegmentTime(This,activeTime,segmentTime)

#define ITIMEMediaElement_segmentTimeToActiveTime(This,segmentTime,activeTime)	\
    (This)->lpVtbl -> segmentTimeToActiveTime(This,segmentTime,activeTime)

#define ITIMEMediaElement_segmentTimeToSimpleTime(This,segmentTime,simpleTime)	\
    (This)->lpVtbl -> segmentTimeToSimpleTime(This,segmentTime,simpleTime)

#define ITIMEMediaElement_simpleTimeToSegmentTime(This,simpleTime,segmentTime)	\
    (This)->lpVtbl -> simpleTimeToSegmentTime(This,simpleTime,segmentTime)

#define ITIMEMediaElement_get_endSync(This,es)	\
    (This)->lpVtbl -> get_endSync(This,es)

#define ITIMEMediaElement_put_endSync(This,es)	\
    (This)->lpVtbl -> put_endSync(This,es)

#define ITIMEMediaElement_get_activeElements(This,activeColl)	\
    (This)->lpVtbl -> get_activeElements(This,activeColl)

#define ITIMEMediaElement_get_hasMedia(This,flag)	\
    (This)->lpVtbl -> get_hasMedia(This,flag)

#define ITIMEMediaElement_nextElement(This)	\
    (This)->lpVtbl -> nextElement(This)

#define ITIMEMediaElement_prevElement(This)	\
    (This)->lpVtbl -> prevElement(This)

#define ITIMEMediaElement_get_updateMode(This,updateMode)	\
    (This)->lpVtbl -> get_updateMode(This,updateMode)

#define ITIMEMediaElement_put_updateMode(This,updateMode)	\
    (This)->lpVtbl -> put_updateMode(This,updateMode)


#define ITIMEMediaElement_get_clipBegin(This,time)	\
    (This)->lpVtbl -> get_clipBegin(This,time)

#define ITIMEMediaElement_put_clipBegin(This,time)	\
    (This)->lpVtbl -> put_clipBegin(This,time)

#define ITIMEMediaElement_get_clipEnd(This,time)	\
    (This)->lpVtbl -> get_clipEnd(This,time)

#define ITIMEMediaElement_put_clipEnd(This,time)	\
    (This)->lpVtbl -> put_clipEnd(This,time)

#define ITIMEMediaElement_get_player(This,id)	\
    (This)->lpVtbl -> get_player(This,id)

#define ITIMEMediaElement_put_player(This,id)	\
    (This)->lpVtbl -> put_player(This,id)

#define ITIMEMediaElement_get_src(This,url)	\
    (This)->lpVtbl -> get_src(This,url)

#define ITIMEMediaElement_put_src(This,url)	\
    (This)->lpVtbl -> put_src(This,url)

#define ITIMEMediaElement_get_type(This,mimetype)	\
    (This)->lpVtbl -> get_type(This,mimetype)

#define ITIMEMediaElement_put_type(This,mimetype)	\
    (This)->lpVtbl -> put_type(This,mimetype)

#define ITIMEMediaElement_get_abstract(This,abs)	\
    (This)->lpVtbl -> get_abstract(This,abs)

#define ITIMEMediaElement_get_author(This,auth)	\
    (This)->lpVtbl -> get_author(This,auth)

#define ITIMEMediaElement_get_copyright(This,cpyrght)	\
    (This)->lpVtbl -> get_copyright(This,cpyrght)

#define ITIMEMediaElement_get_hasAudio(This,b)	\
    (This)->lpVtbl -> get_hasAudio(This,b)

#define ITIMEMediaElement_get_hasVisual(This,b)	\
    (This)->lpVtbl -> get_hasVisual(This,b)

#define ITIMEMediaElement_get_mediaDur(This,dur)	\
    (This)->lpVtbl -> get_mediaDur(This,dur)

#define ITIMEMediaElement_get_mediaHeight(This,height)	\
    (This)->lpVtbl -> get_mediaHeight(This,height)

#define ITIMEMediaElement_get_mediaWidth(This,width)	\
    (This)->lpVtbl -> get_mediaWidth(This,width)

#define ITIMEMediaElement_get_playerObject(This,ppDisp)	\
    (This)->lpVtbl -> get_playerObject(This,ppDisp)

#define ITIMEMediaElement_get_playList(This,pPlayList)	\
    (This)->lpVtbl -> get_playList(This,pPlayList)

#define ITIMEMediaElement_get_rating(This,rate)	\
    (This)->lpVtbl -> get_rating(This,rate)

#define ITIMEMediaElement_get_title(This,name)	\
    (This)->lpVtbl -> get_title(This,name)

#define ITIMEMediaElement_get_hasPlayList(This,b)	\
    (This)->lpVtbl -> get_hasPlayList(This,b)

#define ITIMEMediaElement_get_canPause(This,b)	\
    (This)->lpVtbl -> get_canPause(This,b)

#define ITIMEMediaElement_get_canSeek(This,b)	\
    (This)->lpVtbl -> get_canSeek(This,b)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_get_clipBegin_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *time);


void __RPC_STUB ITIMEMediaElement_get_clipBegin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_put_clipBegin_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [in] */ VARIANT time);


void __RPC_STUB ITIMEMediaElement_put_clipBegin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_get_clipEnd_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *time);


void __RPC_STUB ITIMEMediaElement_get_clipEnd_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_put_clipEnd_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [in] */ VARIANT time);


void __RPC_STUB ITIMEMediaElement_put_clipEnd_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_get_player_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *id);


void __RPC_STUB ITIMEMediaElement_get_player_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_put_player_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [in] */ VARIANT id);


void __RPC_STUB ITIMEMediaElement_put_player_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_get_src_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *url);


void __RPC_STUB ITIMEMediaElement_get_src_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_put_src_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [in] */ VARIANT url);


void __RPC_STUB ITIMEMediaElement_put_src_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_get_type_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *mimetype);


void __RPC_STUB ITIMEMediaElement_get_type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_put_type_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [in] */ VARIANT mimetype);


void __RPC_STUB ITIMEMediaElement_put_type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_get_abstract_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *abs);


void __RPC_STUB ITIMEMediaElement_get_abstract_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_get_author_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *auth);


void __RPC_STUB ITIMEMediaElement_get_author_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_get_copyright_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *cpyrght);


void __RPC_STUB ITIMEMediaElement_get_copyright_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_get_hasAudio_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b);


void __RPC_STUB ITIMEMediaElement_get_hasAudio_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_get_hasVisual_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b);


void __RPC_STUB ITIMEMediaElement_get_hasVisual_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_get_mediaDur_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [retval][out] */ double __RPC_FAR *dur);


void __RPC_STUB ITIMEMediaElement_get_mediaDur_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_get_mediaHeight_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *height);


void __RPC_STUB ITIMEMediaElement_get_mediaHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_get_mediaWidth_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *width);


void __RPC_STUB ITIMEMediaElement_get_mediaWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_get_playerObject_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);


void __RPC_STUB ITIMEMediaElement_get_playerObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_get_playList_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [retval][out] */ ITIMEPlayList __RPC_FAR *__RPC_FAR *pPlayList);


void __RPC_STUB ITIMEMediaElement_get_playList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_get_rating_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *rate);


void __RPC_STUB ITIMEMediaElement_get_rating_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_get_title_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *name);


void __RPC_STUB ITIMEMediaElement_get_title_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_get_hasPlayList_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *b);


void __RPC_STUB ITIMEMediaElement_get_hasPlayList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_get_canPause_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b);


void __RPC_STUB ITIMEMediaElement_get_canPause_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaElement_get_canSeek_Proxy( 
    ITIMEMediaElement __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b);


void __RPC_STUB ITIMEMediaElement_get_canSeek_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITIMEMediaElement_INTERFACE_DEFINED__ */


#ifndef __ITIMEAnimationElement_INTERFACE_DEFINED__
#define __ITIMEAnimationElement_INTERFACE_DEFINED__

/* interface ITIMEAnimationElement */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ITIMEAnimationElement;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a74f14b1-b6a2-430a-a5e8-1f4e53f710fe")
    ITIMEAnimationElement : public ITIMEElement
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_attributeName( 
            /* [retval][out] */ BSTR __RPC_FAR *attrib) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_attributeName( 
            /* [in] */ BSTR attrib) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_by( 
            /* [retval][out] */ VARIANT __RPC_FAR *val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_by( 
            /* [in] */ VARIANT val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_calcMode( 
            /* [retval][out] */ BSTR __RPC_FAR *calcmode) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_calcMode( 
            /* [in] */ BSTR calcmode) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_from( 
            /* [retval][out] */ VARIANT __RPC_FAR *val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_from( 
            /* [in] */ VARIANT val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_keySplines( 
            /* [retval][out] */ BSTR __RPC_FAR *val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_keySplines( 
            /* [in] */ BSTR val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_keyTimes( 
            /* [retval][out] */ BSTR __RPC_FAR *val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_keyTimes( 
            /* [in] */ BSTR val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_targetElement( 
            /* [retval][out] */ BSTR __RPC_FAR *target) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_targetElement( 
            /* [in] */ BSTR target) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_to( 
            /* [retval][out] */ VARIANT __RPC_FAR *val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_to( 
            /* [in] */ VARIANT val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_values( 
            /* [retval][out] */ VARIANT __RPC_FAR *val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_values( 
            /* [in] */ VARIANT val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_origin( 
            /* [retval][out] */ BSTR __RPC_FAR *val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_origin( 
            /* [in] */ BSTR val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_path( 
            /* [retval][out] */ VARIANT __RPC_FAR *val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_path( 
            /* [in] */ VARIANT val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_additive( 
            /* [retval][out] */ BSTR __RPC_FAR *val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_additive( 
            /* [in] */ BSTR val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_accumulate( 
            /* [retval][out] */ BSTR __RPC_FAR *val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_accumulate( 
            /* [in] */ BSTR val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITIMEAnimationElementVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITIMEAnimationElement __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITIMEAnimationElement __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_accelerate )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *__MIDL_0014);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_accelerate )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ VARIANT __MIDL_0015);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_autoReverse )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *__MIDL_0016);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_autoReverse )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ VARIANT __MIDL_0017);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_begin )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *time);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_begin )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ VARIANT time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_decelerate )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *__MIDL_0018);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_decelerate )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ VARIANT __MIDL_0019);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_dur )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *time);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_dur )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ VARIANT time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_end )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *time);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_end )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ VARIANT time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_fill )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *f);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_fill )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ BSTR f);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_mute )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *b);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_mute )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ VARIANT b);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_repeatCount )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *c);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_repeatCount )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ VARIANT c);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_repeatDur )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *time);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_repeatDur )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ VARIANT time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_restart )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *__MIDL_0020);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_restart )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ BSTR __MIDL_0021);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_speed )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *speed);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_speed )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ VARIANT speed);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_syncBehavior )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *sync);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_syncBehavior )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ BSTR sync);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_syncTolerance )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *tol);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_syncTolerance )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ VARIANT tol);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_syncMaster )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *b);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_syncMaster )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ VARIANT b);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeAction )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *time);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_timeAction )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ BSTR time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeContainer )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *__MIDL_0022);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_volume )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_volume )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ VARIANT val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_currTimeState )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ ITIMEState __RPC_FAR *__RPC_FAR *TimeState);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeAll )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ ITIMEElementCollection __RPC_FAR *__RPC_FAR *allColl);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeChildren )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ ITIMEElementCollection __RPC_FAR *__RPC_FAR *childColl);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeParent )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ ITIMEElement __RPC_FAR *__RPC_FAR *parent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_isPaused )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *b);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *beginElement )( 
            ITIMEAnimationElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *beginElementAt )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ double parentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *endElement )( 
            ITIMEAnimationElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *endElementAt )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ double parentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *pauseElement )( 
            ITIMEAnimationElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *resetElement )( 
            ITIMEAnimationElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *resumeElement )( 
            ITIMEAnimationElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *seekActiveTime )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ double activeTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *seekSegmentTime )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ double segmentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *seekTo )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ LONG repeatCount,
            /* [in] */ double segmentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *documentTimeToParentTime )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ double documentTime,
            /* [retval][out] */ double __RPC_FAR *parentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *parentTimeToDocumentTime )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ double parentTime,
            /* [retval][out] */ double __RPC_FAR *documentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *parentTimeToActiveTime )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ double parentTime,
            /* [retval][out] */ double __RPC_FAR *activeTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *activeTimeToParentTime )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ double activeTime,
            /* [retval][out] */ double __RPC_FAR *parentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *activeTimeToSegmentTime )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ double activeTime,
            /* [retval][out] */ double __RPC_FAR *segmentTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *segmentTimeToActiveTime )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ double segmentTime,
            /* [retval][out] */ double __RPC_FAR *activeTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *segmentTimeToSimpleTime )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ double segmentTime,
            /* [retval][out] */ double __RPC_FAR *simpleTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *simpleTimeToSegmentTime )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ double simpleTime,
            /* [retval][out] */ double __RPC_FAR *segmentTime);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_endSync )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *es);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_endSync )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ BSTR es);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_activeElements )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ ITIMEActiveElementCollection __RPC_FAR *__RPC_FAR *activeColl);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_hasMedia )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *flag);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *nextElement )( 
            ITIMEAnimationElement __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *prevElement )( 
            ITIMEAnimationElement __RPC_FAR * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_updateMode )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *updateMode);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_updateMode )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ BSTR updateMode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_attributeName )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *attrib);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_attributeName )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ BSTR attrib);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_by )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_by )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ VARIANT val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_calcMode )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *calcmode);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_calcMode )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ BSTR calcmode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_from )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_from )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ VARIANT val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_keySplines )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_keySplines )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ BSTR val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_keyTimes )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_keyTimes )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ BSTR val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_targetElement )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *target);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_targetElement )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ BSTR target);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_to )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_to )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ VARIANT val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_values )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_values )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ VARIANT val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_origin )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_origin )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ BSTR val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_path )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_path )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ VARIANT val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_additive )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_additive )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ BSTR val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_accumulate )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_accumulate )( 
            ITIMEAnimationElement __RPC_FAR * This,
            /* [in] */ BSTR val);
        
        END_INTERFACE
    } ITIMEAnimationElementVtbl;

    interface ITIMEAnimationElement
    {
        CONST_VTBL struct ITIMEAnimationElementVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITIMEAnimationElement_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITIMEAnimationElement_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITIMEAnimationElement_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITIMEAnimationElement_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ITIMEAnimationElement_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ITIMEAnimationElement_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ITIMEAnimationElement_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ITIMEAnimationElement_get_accelerate(This,__MIDL_0014)	\
    (This)->lpVtbl -> get_accelerate(This,__MIDL_0014)

#define ITIMEAnimationElement_put_accelerate(This,__MIDL_0015)	\
    (This)->lpVtbl -> put_accelerate(This,__MIDL_0015)

#define ITIMEAnimationElement_get_autoReverse(This,__MIDL_0016)	\
    (This)->lpVtbl -> get_autoReverse(This,__MIDL_0016)

#define ITIMEAnimationElement_put_autoReverse(This,__MIDL_0017)	\
    (This)->lpVtbl -> put_autoReverse(This,__MIDL_0017)

#define ITIMEAnimationElement_get_begin(This,time)	\
    (This)->lpVtbl -> get_begin(This,time)

#define ITIMEAnimationElement_put_begin(This,time)	\
    (This)->lpVtbl -> put_begin(This,time)

#define ITIMEAnimationElement_get_decelerate(This,__MIDL_0018)	\
    (This)->lpVtbl -> get_decelerate(This,__MIDL_0018)

#define ITIMEAnimationElement_put_decelerate(This,__MIDL_0019)	\
    (This)->lpVtbl -> put_decelerate(This,__MIDL_0019)

#define ITIMEAnimationElement_get_dur(This,time)	\
    (This)->lpVtbl -> get_dur(This,time)

#define ITIMEAnimationElement_put_dur(This,time)	\
    (This)->lpVtbl -> put_dur(This,time)

#define ITIMEAnimationElement_get_end(This,time)	\
    (This)->lpVtbl -> get_end(This,time)

#define ITIMEAnimationElement_put_end(This,time)	\
    (This)->lpVtbl -> put_end(This,time)

#define ITIMEAnimationElement_get_fill(This,f)	\
    (This)->lpVtbl -> get_fill(This,f)

#define ITIMEAnimationElement_put_fill(This,f)	\
    (This)->lpVtbl -> put_fill(This,f)

#define ITIMEAnimationElement_get_mute(This,b)	\
    (This)->lpVtbl -> get_mute(This,b)

#define ITIMEAnimationElement_put_mute(This,b)	\
    (This)->lpVtbl -> put_mute(This,b)

#define ITIMEAnimationElement_get_repeatCount(This,c)	\
    (This)->lpVtbl -> get_repeatCount(This,c)

#define ITIMEAnimationElement_put_repeatCount(This,c)	\
    (This)->lpVtbl -> put_repeatCount(This,c)

#define ITIMEAnimationElement_get_repeatDur(This,time)	\
    (This)->lpVtbl -> get_repeatDur(This,time)

#define ITIMEAnimationElement_put_repeatDur(This,time)	\
    (This)->lpVtbl -> put_repeatDur(This,time)

#define ITIMEAnimationElement_get_restart(This,__MIDL_0020)	\
    (This)->lpVtbl -> get_restart(This,__MIDL_0020)

#define ITIMEAnimationElement_put_restart(This,__MIDL_0021)	\
    (This)->lpVtbl -> put_restart(This,__MIDL_0021)

#define ITIMEAnimationElement_get_speed(This,speed)	\
    (This)->lpVtbl -> get_speed(This,speed)

#define ITIMEAnimationElement_put_speed(This,speed)	\
    (This)->lpVtbl -> put_speed(This,speed)

#define ITIMEAnimationElement_get_syncBehavior(This,sync)	\
    (This)->lpVtbl -> get_syncBehavior(This,sync)

#define ITIMEAnimationElement_put_syncBehavior(This,sync)	\
    (This)->lpVtbl -> put_syncBehavior(This,sync)

#define ITIMEAnimationElement_get_syncTolerance(This,tol)	\
    (This)->lpVtbl -> get_syncTolerance(This,tol)

#define ITIMEAnimationElement_put_syncTolerance(This,tol)	\
    (This)->lpVtbl -> put_syncTolerance(This,tol)

#define ITIMEAnimationElement_get_syncMaster(This,b)	\
    (This)->lpVtbl -> get_syncMaster(This,b)

#define ITIMEAnimationElement_put_syncMaster(This,b)	\
    (This)->lpVtbl -> put_syncMaster(This,b)

#define ITIMEAnimationElement_get_timeAction(This,time)	\
    (This)->lpVtbl -> get_timeAction(This,time)

#define ITIMEAnimationElement_put_timeAction(This,time)	\
    (This)->lpVtbl -> put_timeAction(This,time)

#define ITIMEAnimationElement_get_timeContainer(This,__MIDL_0022)	\
    (This)->lpVtbl -> get_timeContainer(This,__MIDL_0022)

#define ITIMEAnimationElement_get_volume(This,val)	\
    (This)->lpVtbl -> get_volume(This,val)

#define ITIMEAnimationElement_put_volume(This,val)	\
    (This)->lpVtbl -> put_volume(This,val)

#define ITIMEAnimationElement_get_currTimeState(This,TimeState)	\
    (This)->lpVtbl -> get_currTimeState(This,TimeState)

#define ITIMEAnimationElement_get_timeAll(This,allColl)	\
    (This)->lpVtbl -> get_timeAll(This,allColl)

#define ITIMEAnimationElement_get_timeChildren(This,childColl)	\
    (This)->lpVtbl -> get_timeChildren(This,childColl)

#define ITIMEAnimationElement_get_timeParent(This,parent)	\
    (This)->lpVtbl -> get_timeParent(This,parent)

#define ITIMEAnimationElement_get_isPaused(This,b)	\
    (This)->lpVtbl -> get_isPaused(This,b)

#define ITIMEAnimationElement_beginElement(This)	\
    (This)->lpVtbl -> beginElement(This)

#define ITIMEAnimationElement_beginElementAt(This,parentTime)	\
    (This)->lpVtbl -> beginElementAt(This,parentTime)

#define ITIMEAnimationElement_endElement(This)	\
    (This)->lpVtbl -> endElement(This)

#define ITIMEAnimationElement_endElementAt(This,parentTime)	\
    (This)->lpVtbl -> endElementAt(This,parentTime)

#define ITIMEAnimationElement_pauseElement(This)	\
    (This)->lpVtbl -> pauseElement(This)

#define ITIMEAnimationElement_resetElement(This)	\
    (This)->lpVtbl -> resetElement(This)

#define ITIMEAnimationElement_resumeElement(This)	\
    (This)->lpVtbl -> resumeElement(This)

#define ITIMEAnimationElement_seekActiveTime(This,activeTime)	\
    (This)->lpVtbl -> seekActiveTime(This,activeTime)

#define ITIMEAnimationElement_seekSegmentTime(This,segmentTime)	\
    (This)->lpVtbl -> seekSegmentTime(This,segmentTime)

#define ITIMEAnimationElement_seekTo(This,repeatCount,segmentTime)	\
    (This)->lpVtbl -> seekTo(This,repeatCount,segmentTime)

#define ITIMEAnimationElement_documentTimeToParentTime(This,documentTime,parentTime)	\
    (This)->lpVtbl -> documentTimeToParentTime(This,documentTime,parentTime)

#define ITIMEAnimationElement_parentTimeToDocumentTime(This,parentTime,documentTime)	\
    (This)->lpVtbl -> parentTimeToDocumentTime(This,parentTime,documentTime)

#define ITIMEAnimationElement_parentTimeToActiveTime(This,parentTime,activeTime)	\
    (This)->lpVtbl -> parentTimeToActiveTime(This,parentTime,activeTime)

#define ITIMEAnimationElement_activeTimeToParentTime(This,activeTime,parentTime)	\
    (This)->lpVtbl -> activeTimeToParentTime(This,activeTime,parentTime)

#define ITIMEAnimationElement_activeTimeToSegmentTime(This,activeTime,segmentTime)	\
    (This)->lpVtbl -> activeTimeToSegmentTime(This,activeTime,segmentTime)

#define ITIMEAnimationElement_segmentTimeToActiveTime(This,segmentTime,activeTime)	\
    (This)->lpVtbl -> segmentTimeToActiveTime(This,segmentTime,activeTime)

#define ITIMEAnimationElement_segmentTimeToSimpleTime(This,segmentTime,simpleTime)	\
    (This)->lpVtbl -> segmentTimeToSimpleTime(This,segmentTime,simpleTime)

#define ITIMEAnimationElement_simpleTimeToSegmentTime(This,simpleTime,segmentTime)	\
    (This)->lpVtbl -> simpleTimeToSegmentTime(This,simpleTime,segmentTime)

#define ITIMEAnimationElement_get_endSync(This,es)	\
    (This)->lpVtbl -> get_endSync(This,es)

#define ITIMEAnimationElement_put_endSync(This,es)	\
    (This)->lpVtbl -> put_endSync(This,es)

#define ITIMEAnimationElement_get_activeElements(This,activeColl)	\
    (This)->lpVtbl -> get_activeElements(This,activeColl)

#define ITIMEAnimationElement_get_hasMedia(This,flag)	\
    (This)->lpVtbl -> get_hasMedia(This,flag)

#define ITIMEAnimationElement_nextElement(This)	\
    (This)->lpVtbl -> nextElement(This)

#define ITIMEAnimationElement_prevElement(This)	\
    (This)->lpVtbl -> prevElement(This)

#define ITIMEAnimationElement_get_updateMode(This,updateMode)	\
    (This)->lpVtbl -> get_updateMode(This,updateMode)

#define ITIMEAnimationElement_put_updateMode(This,updateMode)	\
    (This)->lpVtbl -> put_updateMode(This,updateMode)


#define ITIMEAnimationElement_get_attributeName(This,attrib)	\
    (This)->lpVtbl -> get_attributeName(This,attrib)

#define ITIMEAnimationElement_put_attributeName(This,attrib)	\
    (This)->lpVtbl -> put_attributeName(This,attrib)

#define ITIMEAnimationElement_get_by(This,val)	\
    (This)->lpVtbl -> get_by(This,val)

#define ITIMEAnimationElement_put_by(This,val)	\
    (This)->lpVtbl -> put_by(This,val)

#define ITIMEAnimationElement_get_calcMode(This,calcmode)	\
    (This)->lpVtbl -> get_calcMode(This,calcmode)

#define ITIMEAnimationElement_put_calcMode(This,calcmode)	\
    (This)->lpVtbl -> put_calcMode(This,calcmode)

#define ITIMEAnimationElement_get_from(This,val)	\
    (This)->lpVtbl -> get_from(This,val)

#define ITIMEAnimationElement_put_from(This,val)	\
    (This)->lpVtbl -> put_from(This,val)

#define ITIMEAnimationElement_get_keySplines(This,val)	\
    (This)->lpVtbl -> get_keySplines(This,val)

#define ITIMEAnimationElement_put_keySplines(This,val)	\
    (This)->lpVtbl -> put_keySplines(This,val)

#define ITIMEAnimationElement_get_keyTimes(This,val)	\
    (This)->lpVtbl -> get_keyTimes(This,val)

#define ITIMEAnimationElement_put_keyTimes(This,val)	\
    (This)->lpVtbl -> put_keyTimes(This,val)

#define ITIMEAnimationElement_get_targetElement(This,target)	\
    (This)->lpVtbl -> get_targetElement(This,target)

#define ITIMEAnimationElement_put_targetElement(This,target)	\
    (This)->lpVtbl -> put_targetElement(This,target)

#define ITIMEAnimationElement_get_to(This,val)	\
    (This)->lpVtbl -> get_to(This,val)

#define ITIMEAnimationElement_put_to(This,val)	\
    (This)->lpVtbl -> put_to(This,val)

#define ITIMEAnimationElement_get_values(This,val)	\
    (This)->lpVtbl -> get_values(This,val)

#define ITIMEAnimationElement_put_values(This,val)	\
    (This)->lpVtbl -> put_values(This,val)

#define ITIMEAnimationElement_get_origin(This,val)	\
    (This)->lpVtbl -> get_origin(This,val)

#define ITIMEAnimationElement_put_origin(This,val)	\
    (This)->lpVtbl -> put_origin(This,val)

#define ITIMEAnimationElement_get_path(This,val)	\
    (This)->lpVtbl -> get_path(This,val)

#define ITIMEAnimationElement_put_path(This,val)	\
    (This)->lpVtbl -> put_path(This,val)

#define ITIMEAnimationElement_get_additive(This,val)	\
    (This)->lpVtbl -> get_additive(This,val)

#define ITIMEAnimationElement_put_additive(This,val)	\
    (This)->lpVtbl -> put_additive(This,val)

#define ITIMEAnimationElement_get_accumulate(This,val)	\
    (This)->lpVtbl -> get_accumulate(This,val)

#define ITIMEAnimationElement_put_accumulate(This,val)	\
    (This)->lpVtbl -> put_accumulate(This,val)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_get_attributeName_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *attrib);


void __RPC_STUB ITIMEAnimationElement_get_attributeName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_put_attributeName_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [in] */ BSTR attrib);


void __RPC_STUB ITIMEAnimationElement_put_attributeName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_get_by_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *val);


void __RPC_STUB ITIMEAnimationElement_get_by_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_put_by_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [in] */ VARIANT val);


void __RPC_STUB ITIMEAnimationElement_put_by_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_get_calcMode_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *calcmode);


void __RPC_STUB ITIMEAnimationElement_get_calcMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_put_calcMode_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [in] */ BSTR calcmode);


void __RPC_STUB ITIMEAnimationElement_put_calcMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_get_from_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *val);


void __RPC_STUB ITIMEAnimationElement_get_from_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_put_from_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [in] */ VARIANT val);


void __RPC_STUB ITIMEAnimationElement_put_from_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_get_keySplines_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *val);


void __RPC_STUB ITIMEAnimationElement_get_keySplines_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_put_keySplines_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [in] */ BSTR val);


void __RPC_STUB ITIMEAnimationElement_put_keySplines_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_get_keyTimes_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *val);


void __RPC_STUB ITIMEAnimationElement_get_keyTimes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_put_keyTimes_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [in] */ BSTR val);


void __RPC_STUB ITIMEAnimationElement_put_keyTimes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_get_targetElement_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *target);


void __RPC_STUB ITIMEAnimationElement_get_targetElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_put_targetElement_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [in] */ BSTR target);


void __RPC_STUB ITIMEAnimationElement_put_targetElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_get_to_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *val);


void __RPC_STUB ITIMEAnimationElement_get_to_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_put_to_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [in] */ VARIANT val);


void __RPC_STUB ITIMEAnimationElement_put_to_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_get_values_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *val);


void __RPC_STUB ITIMEAnimationElement_get_values_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_put_values_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [in] */ VARIANT val);


void __RPC_STUB ITIMEAnimationElement_put_values_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_get_origin_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *val);


void __RPC_STUB ITIMEAnimationElement_get_origin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_put_origin_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [in] */ BSTR val);


void __RPC_STUB ITIMEAnimationElement_put_origin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_get_path_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *val);


void __RPC_STUB ITIMEAnimationElement_get_path_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_put_path_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [in] */ VARIANT val);


void __RPC_STUB ITIMEAnimationElement_put_path_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_get_additive_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *val);


void __RPC_STUB ITIMEAnimationElement_get_additive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_put_additive_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [in] */ BSTR val);


void __RPC_STUB ITIMEAnimationElement_put_additive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_get_accumulate_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *val);


void __RPC_STUB ITIMEAnimationElement_get_accumulate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEAnimationElement_put_accumulate_Proxy( 
    ITIMEAnimationElement __RPC_FAR * This,
    /* [in] */ BSTR val);


void __RPC_STUB ITIMEAnimationElement_put_accumulate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITIMEAnimationElement_INTERFACE_DEFINED__ */


#ifndef __IAnimationComposer_INTERFACE_DEFINED__
#define __IAnimationComposer_INTERFACE_DEFINED__

/* interface IAnimationComposer */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAnimationComposer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5459C83D-322B-44b3-8DAA-24C947E7B275")
    IAnimationComposer : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_attribute( 
            /* [retval][out] */ BSTR __RPC_FAR *attributeName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ComposerInit( 
            IDispatch __RPC_FAR *composerSite,
            BSTR attributeName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ComposerDetach( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateFragments( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddFragment( 
            IDispatch __RPC_FAR *newAnimationFragment) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InsertFragment( 
            IDispatch __RPC_FAR *newAnimationFragment,
            VARIANT index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveFragment( 
            IDispatch __RPC_FAR *oldAnimationFragment) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumerateFragments( 
            IEnumVARIANT __RPC_FAR *__RPC_FAR *fragments) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNumFragments( 
            long __RPC_FAR *fragmentCount) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAnimationComposerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IAnimationComposer __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IAnimationComposer __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IAnimationComposer __RPC_FAR * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_attribute )( 
            IAnimationComposer __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *attributeName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ComposerInit )( 
            IAnimationComposer __RPC_FAR * This,
            IDispatch __RPC_FAR *composerSite,
            BSTR attributeName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ComposerDetach )( 
            IAnimationComposer __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *UpdateFragments )( 
            IAnimationComposer __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddFragment )( 
            IAnimationComposer __RPC_FAR * This,
            IDispatch __RPC_FAR *newAnimationFragment);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InsertFragment )( 
            IAnimationComposer __RPC_FAR * This,
            IDispatch __RPC_FAR *newAnimationFragment,
            VARIANT index);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RemoveFragment )( 
            IAnimationComposer __RPC_FAR * This,
            IDispatch __RPC_FAR *oldAnimationFragment);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnumerateFragments )( 
            IAnimationComposer __RPC_FAR * This,
            IEnumVARIANT __RPC_FAR *__RPC_FAR *fragments);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetNumFragments )( 
            IAnimationComposer __RPC_FAR * This,
            long __RPC_FAR *fragmentCount);
        
        END_INTERFACE
    } IAnimationComposerVtbl;

    interface IAnimationComposer
    {
        CONST_VTBL struct IAnimationComposerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAnimationComposer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAnimationComposer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAnimationComposer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAnimationComposer_get_attribute(This,attributeName)	\
    (This)->lpVtbl -> get_attribute(This,attributeName)

#define IAnimationComposer_ComposerInit(This,composerSite,attributeName)	\
    (This)->lpVtbl -> ComposerInit(This,composerSite,attributeName)

#define IAnimationComposer_ComposerDetach(This)	\
    (This)->lpVtbl -> ComposerDetach(This)

#define IAnimationComposer_UpdateFragments(This)	\
    (This)->lpVtbl -> UpdateFragments(This)

#define IAnimationComposer_AddFragment(This,newAnimationFragment)	\
    (This)->lpVtbl -> AddFragment(This,newAnimationFragment)

#define IAnimationComposer_InsertFragment(This,newAnimationFragment,index)	\
    (This)->lpVtbl -> InsertFragment(This,newAnimationFragment,index)

#define IAnimationComposer_RemoveFragment(This,oldAnimationFragment)	\
    (This)->lpVtbl -> RemoveFragment(This,oldAnimationFragment)

#define IAnimationComposer_EnumerateFragments(This,fragments)	\
    (This)->lpVtbl -> EnumerateFragments(This,fragments)

#define IAnimationComposer_GetNumFragments(This,fragmentCount)	\
    (This)->lpVtbl -> GetNumFragments(This,fragmentCount)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget] */ HRESULT STDMETHODCALLTYPE IAnimationComposer_get_attribute_Proxy( 
    IAnimationComposer __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *attributeName);


void __RPC_STUB IAnimationComposer_get_attribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IAnimationComposer_ComposerInit_Proxy( 
    IAnimationComposer __RPC_FAR * This,
    IDispatch __RPC_FAR *composerSite,
    BSTR attributeName);


void __RPC_STUB IAnimationComposer_ComposerInit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IAnimationComposer_ComposerDetach_Proxy( 
    IAnimationComposer __RPC_FAR * This);


void __RPC_STUB IAnimationComposer_ComposerDetach_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IAnimationComposer_UpdateFragments_Proxy( 
    IAnimationComposer __RPC_FAR * This);


void __RPC_STUB IAnimationComposer_UpdateFragments_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IAnimationComposer_AddFragment_Proxy( 
    IAnimationComposer __RPC_FAR * This,
    IDispatch __RPC_FAR *newAnimationFragment);


void __RPC_STUB IAnimationComposer_AddFragment_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IAnimationComposer_InsertFragment_Proxy( 
    IAnimationComposer __RPC_FAR * This,
    IDispatch __RPC_FAR *newAnimationFragment,
    VARIANT index);


void __RPC_STUB IAnimationComposer_InsertFragment_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IAnimationComposer_RemoveFragment_Proxy( 
    IAnimationComposer __RPC_FAR * This,
    IDispatch __RPC_FAR *oldAnimationFragment);


void __RPC_STUB IAnimationComposer_RemoveFragment_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IAnimationComposer_EnumerateFragments_Proxy( 
    IAnimationComposer __RPC_FAR * This,
    IEnumVARIANT __RPC_FAR *__RPC_FAR *fragments);


void __RPC_STUB IAnimationComposer_EnumerateFragments_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IAnimationComposer_GetNumFragments_Proxy( 
    IAnimationComposer __RPC_FAR * This,
    long __RPC_FAR *fragmentCount);


void __RPC_STUB IAnimationComposer_GetNumFragments_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAnimationComposer_INTERFACE_DEFINED__ */


#ifndef __IAnimationComposerSite_INTERFACE_DEFINED__
#define __IAnimationComposerSite_INTERFACE_DEFINED__

/* interface IAnimationComposerSite */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IAnimationComposerSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("488FCB56-8FD6-4cda-A06A-5BB232930ECA")
    IAnimationComposerSite : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddFragment( 
            BSTR attributeName,
            IDispatch __RPC_FAR *fragment) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RemoveFragment( 
            BSTR attributeName,
            IDispatch __RPC_FAR *fragment) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE InsertFragment( 
            BSTR attributeName,
            IDispatch __RPC_FAR *fragment,
            VARIANT index) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EnumerateFragments( 
            BSTR attributeName,
            IEnumVARIANT __RPC_FAR *__RPC_FAR *fragments) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RegisterComposerFactory( 
            VARIANT __RPC_FAR *factory) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE UnregisterComposerFactory( 
            VARIANT __RPC_FAR *factory) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAnimationComposerSiteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IAnimationComposerSite __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IAnimationComposerSite __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IAnimationComposerSite __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IAnimationComposerSite __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IAnimationComposerSite __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IAnimationComposerSite __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IAnimationComposerSite __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddFragment )( 
            IAnimationComposerSite __RPC_FAR * This,
            BSTR attributeName,
            IDispatch __RPC_FAR *fragment);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RemoveFragment )( 
            IAnimationComposerSite __RPC_FAR * This,
            BSTR attributeName,
            IDispatch __RPC_FAR *fragment);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InsertFragment )( 
            IAnimationComposerSite __RPC_FAR * This,
            BSTR attributeName,
            IDispatch __RPC_FAR *fragment,
            VARIANT index);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnumerateFragments )( 
            IAnimationComposerSite __RPC_FAR * This,
            BSTR attributeName,
            IEnumVARIANT __RPC_FAR *__RPC_FAR *fragments);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RegisterComposerFactory )( 
            IAnimationComposerSite __RPC_FAR * This,
            VARIANT __RPC_FAR *factory);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *UnregisterComposerFactory )( 
            IAnimationComposerSite __RPC_FAR * This,
            VARIANT __RPC_FAR *factory);
        
        END_INTERFACE
    } IAnimationComposerSiteVtbl;

    interface IAnimationComposerSite
    {
        CONST_VTBL struct IAnimationComposerSiteVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAnimationComposerSite_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAnimationComposerSite_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAnimationComposerSite_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAnimationComposerSite_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAnimationComposerSite_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAnimationComposerSite_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAnimationComposerSite_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAnimationComposerSite_AddFragment(This,attributeName,fragment)	\
    (This)->lpVtbl -> AddFragment(This,attributeName,fragment)

#define IAnimationComposerSite_RemoveFragment(This,attributeName,fragment)	\
    (This)->lpVtbl -> RemoveFragment(This,attributeName,fragment)

#define IAnimationComposerSite_InsertFragment(This,attributeName,fragment,index)	\
    (This)->lpVtbl -> InsertFragment(This,attributeName,fragment,index)

#define IAnimationComposerSite_EnumerateFragments(This,attributeName,fragments)	\
    (This)->lpVtbl -> EnumerateFragments(This,attributeName,fragments)

#define IAnimationComposerSite_RegisterComposerFactory(This,factory)	\
    (This)->lpVtbl -> RegisterComposerFactory(This,factory)

#define IAnimationComposerSite_UnregisterComposerFactory(This,factory)	\
    (This)->lpVtbl -> UnregisterComposerFactory(This,factory)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE IAnimationComposerSite_AddFragment_Proxy( 
    IAnimationComposerSite __RPC_FAR * This,
    BSTR attributeName,
    IDispatch __RPC_FAR *fragment);


void __RPC_STUB IAnimationComposerSite_AddFragment_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IAnimationComposerSite_RemoveFragment_Proxy( 
    IAnimationComposerSite __RPC_FAR * This,
    BSTR attributeName,
    IDispatch __RPC_FAR *fragment);


void __RPC_STUB IAnimationComposerSite_RemoveFragment_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IAnimationComposerSite_InsertFragment_Proxy( 
    IAnimationComposerSite __RPC_FAR * This,
    BSTR attributeName,
    IDispatch __RPC_FAR *fragment,
    VARIANT index);


void __RPC_STUB IAnimationComposerSite_InsertFragment_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IAnimationComposerSite_EnumerateFragments_Proxy( 
    IAnimationComposerSite __RPC_FAR * This,
    BSTR attributeName,
    IEnumVARIANT __RPC_FAR *__RPC_FAR *fragments);


void __RPC_STUB IAnimationComposerSite_EnumerateFragments_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IAnimationComposerSite_RegisterComposerFactory_Proxy( 
    IAnimationComposerSite __RPC_FAR * This,
    VARIANT __RPC_FAR *factory);


void __RPC_STUB IAnimationComposerSite_RegisterComposerFactory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IAnimationComposerSite_UnregisterComposerFactory_Proxy( 
    IAnimationComposerSite __RPC_FAR * This,
    VARIANT __RPC_FAR *factory);


void __RPC_STUB IAnimationComposerSite_UnregisterComposerFactory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAnimationComposerSite_INTERFACE_DEFINED__ */


#ifndef __IAnimationComposerSiteSink_INTERFACE_DEFINED__
#define __IAnimationComposerSiteSink_INTERFACE_DEFINED__

/* interface IAnimationComposerSiteSink */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAnimationComposerSiteSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8EF76C64-71CD-480f-96FC-BA2696E659BE")
    IAnimationComposerSiteSink : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE UpdateAnimations( void) = 0;
        
        virtual void STDMETHODCALLTYPE ComposerSiteDetach( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAnimationComposerSiteSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IAnimationComposerSiteSink __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IAnimationComposerSiteSink __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IAnimationComposerSiteSink __RPC_FAR * This);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *UpdateAnimations )( 
            IAnimationComposerSiteSink __RPC_FAR * This);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *ComposerSiteDetach )( 
            IAnimationComposerSiteSink __RPC_FAR * This);
        
        END_INTERFACE
    } IAnimationComposerSiteSinkVtbl;

    interface IAnimationComposerSiteSink
    {
        CONST_VTBL struct IAnimationComposerSiteSinkVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAnimationComposerSiteSink_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAnimationComposerSiteSink_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAnimationComposerSiteSink_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAnimationComposerSiteSink_UpdateAnimations(This)	\
    (This)->lpVtbl -> UpdateAnimations(This)

#define IAnimationComposerSiteSink_ComposerSiteDetach(This)	\
    (This)->lpVtbl -> ComposerSiteDetach(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



void STDMETHODCALLTYPE IAnimationComposerSiteSink_UpdateAnimations_Proxy( 
    IAnimationComposerSiteSink __RPC_FAR * This);


void __RPC_STUB IAnimationComposerSiteSink_UpdateAnimations_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


void STDMETHODCALLTYPE IAnimationComposerSiteSink_ComposerSiteDetach_Proxy( 
    IAnimationComposerSiteSink __RPC_FAR * This);


void __RPC_STUB IAnimationComposerSiteSink_ComposerSiteDetach_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAnimationComposerSiteSink_INTERFACE_DEFINED__ */


#ifndef __IAnimationRoot_INTERFACE_DEFINED__
#define __IAnimationRoot_INTERFACE_DEFINED__

/* interface IAnimationRoot */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAnimationRoot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("29DF6387-30B4-4a62-891B-A9C5BE37BE88")
    IAnimationRoot : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RegisterComposerSite( 
            IUnknown __RPC_FAR *composerSite) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterComposerSite( 
            IUnknown __RPC_FAR *composerSite) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAnimationRootVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IAnimationRoot __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IAnimationRoot __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IAnimationRoot __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RegisterComposerSite )( 
            IAnimationRoot __RPC_FAR * This,
            IUnknown __RPC_FAR *composerSite);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *UnregisterComposerSite )( 
            IAnimationRoot __RPC_FAR * This,
            IUnknown __RPC_FAR *composerSite);
        
        END_INTERFACE
    } IAnimationRootVtbl;

    interface IAnimationRoot
    {
        CONST_VTBL struct IAnimationRootVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAnimationRoot_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAnimationRoot_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAnimationRoot_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAnimationRoot_RegisterComposerSite(This,composerSite)	\
    (This)->lpVtbl -> RegisterComposerSite(This,composerSite)

#define IAnimationRoot_UnregisterComposerSite(This,composerSite)	\
    (This)->lpVtbl -> UnregisterComposerSite(This,composerSite)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IAnimationRoot_RegisterComposerSite_Proxy( 
    IAnimationRoot __RPC_FAR * This,
    IUnknown __RPC_FAR *composerSite);


void __RPC_STUB IAnimationRoot_RegisterComposerSite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IAnimationRoot_UnregisterComposerSite_Proxy( 
    IAnimationRoot __RPC_FAR * This,
    IUnknown __RPC_FAR *composerSite);


void __RPC_STUB IAnimationRoot_UnregisterComposerSite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAnimationRoot_INTERFACE_DEFINED__ */


#ifndef __IAnimationFragment_INTERFACE_DEFINED__
#define __IAnimationFragment_INTERFACE_DEFINED__

/* interface IAnimationFragment */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IAnimationFragment;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("319DFD88-0AC6-4ab1-A19F-90223BA2DA16")
    IAnimationFragment : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_element( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *htmlElement) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE get_value( 
            /* [in] */ BSTR attributeName,
            /* [in] */ VARIANT origvalue,
            /* [in] */ VARIANT currentvalue,
            /* [retval][out] */ VARIANT __RPC_FAR *newvalue) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DetachFromComposer( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAnimationFragmentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IAnimationFragment __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IAnimationFragment __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IAnimationFragment __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IAnimationFragment __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IAnimationFragment __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IAnimationFragment __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IAnimationFragment __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_element )( 
            IAnimationFragment __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *htmlElement);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_value )( 
            IAnimationFragment __RPC_FAR * This,
            /* [in] */ BSTR attributeName,
            /* [in] */ VARIANT origvalue,
            /* [in] */ VARIANT currentvalue,
            /* [retval][out] */ VARIANT __RPC_FAR *newvalue);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DetachFromComposer )( 
            IAnimationFragment __RPC_FAR * This);
        
        END_INTERFACE
    } IAnimationFragmentVtbl;

    interface IAnimationFragment
    {
        CONST_VTBL struct IAnimationFragmentVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAnimationFragment_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAnimationFragment_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAnimationFragment_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAnimationFragment_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAnimationFragment_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAnimationFragment_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAnimationFragment_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAnimationFragment_get_element(This,htmlElement)	\
    (This)->lpVtbl -> get_element(This,htmlElement)

#define IAnimationFragment_get_value(This,attributeName,origvalue,currentvalue,newvalue)	\
    (This)->lpVtbl -> get_value(This,attributeName,origvalue,currentvalue,newvalue)

#define IAnimationFragment_DetachFromComposer(This)	\
    (This)->lpVtbl -> DetachFromComposer(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IAnimationFragment_get_element_Proxy( 
    IAnimationFragment __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *htmlElement);


void __RPC_STUB IAnimationFragment_get_element_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IAnimationFragment_get_value_Proxy( 
    IAnimationFragment __RPC_FAR * This,
    /* [in] */ BSTR attributeName,
    /* [in] */ VARIANT origvalue,
    /* [in] */ VARIANT currentvalue,
    /* [retval][out] */ VARIANT __RPC_FAR *newvalue);


void __RPC_STUB IAnimationFragment_get_value_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IAnimationFragment_DetachFromComposer_Proxy( 
    IAnimationFragment __RPC_FAR * This);


void __RPC_STUB IAnimationFragment_DetachFromComposer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAnimationFragment_INTERFACE_DEFINED__ */


#ifndef __ITIMEElementCollection_INTERFACE_DEFINED__
#define __ITIMEElementCollection_INTERFACE_DEFINED__

/* interface ITIMEElementCollection */
/* [object][uuid][dual][oleautomation] */ 


EXTERN_C const IID IID_ITIMEElementCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("50abc224-6d53-4f83-9135-2440a41b7bc8")
    ITIMEElementCollection : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_length( 
            /* [in] */ long v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_length( 
            /* [out][retval] */ long __RPC_FAR *p) = 0;
        
        virtual /* [hidden][restricted][id][propget] */ HRESULT STDMETHODCALLTYPE get__newEnum( 
            /* [out][retval] */ IUnknown __RPC_FAR *__RPC_FAR *ppIUnknown) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE item( 
            /* [in][optional] */ VARIANT varName,
            /* [in][optional] */ VARIANT varIndex,
            /* [out][retval] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE tags( 
            /* [in] */ VARIANT varName,
            /* [out][retval] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITIMEElementCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITIMEElementCollection __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITIMEElementCollection __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITIMEElementCollection __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ITIMEElementCollection __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ITIMEElementCollection __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ITIMEElementCollection __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ITIMEElementCollection __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_length )( 
            ITIMEElementCollection __RPC_FAR * This,
            /* [in] */ long v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_length )( 
            ITIMEElementCollection __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [hidden][restricted][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__newEnum )( 
            ITIMEElementCollection __RPC_FAR * This,
            /* [out][retval] */ IUnknown __RPC_FAR *__RPC_FAR *ppIUnknown);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *item )( 
            ITIMEElementCollection __RPC_FAR * This,
            /* [in][optional] */ VARIANT varName,
            /* [in][optional] */ VARIANT varIndex,
            /* [out][retval] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *tags )( 
            ITIMEElementCollection __RPC_FAR * This,
            /* [in] */ VARIANT varName,
            /* [out][retval] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);
        
        END_INTERFACE
    } ITIMEElementCollectionVtbl;

    interface ITIMEElementCollection
    {
        CONST_VTBL struct ITIMEElementCollectionVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITIMEElementCollection_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITIMEElementCollection_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITIMEElementCollection_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITIMEElementCollection_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ITIMEElementCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ITIMEElementCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ITIMEElementCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ITIMEElementCollection_put_length(This,v)	\
    (This)->lpVtbl -> put_length(This,v)

#define ITIMEElementCollection_get_length(This,p)	\
    (This)->lpVtbl -> get_length(This,p)

#define ITIMEElementCollection_get__newEnum(This,ppIUnknown)	\
    (This)->lpVtbl -> get__newEnum(This,ppIUnknown)

#define ITIMEElementCollection_item(This,varName,varIndex,ppDisp)	\
    (This)->lpVtbl -> item(This,varName,varIndex,ppDisp)

#define ITIMEElementCollection_tags(This,varName,ppDisp)	\
    (This)->lpVtbl -> tags(This,varName,ppDisp)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEElementCollection_put_length_Proxy( 
    ITIMEElementCollection __RPC_FAR * This,
    /* [in] */ long v);


void __RPC_STUB ITIMEElementCollection_put_length_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElementCollection_get_length_Proxy( 
    ITIMEElementCollection __RPC_FAR * This,
    /* [out][retval] */ long __RPC_FAR *p);


void __RPC_STUB ITIMEElementCollection_get_length_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][restricted][id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEElementCollection_get__newEnum_Proxy( 
    ITIMEElementCollection __RPC_FAR * This,
    /* [out][retval] */ IUnknown __RPC_FAR *__RPC_FAR *ppIUnknown);


void __RPC_STUB ITIMEElementCollection_get__newEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEElementCollection_item_Proxy( 
    ITIMEElementCollection __RPC_FAR * This,
    /* [in][optional] */ VARIANT varName,
    /* [in][optional] */ VARIANT varIndex,
    /* [out][retval] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);


void __RPC_STUB ITIMEElementCollection_item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEElementCollection_tags_Proxy( 
    ITIMEElementCollection __RPC_FAR * This,
    /* [in] */ VARIANT varName,
    /* [out][retval] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);


void __RPC_STUB ITIMEElementCollection_tags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITIMEElementCollection_INTERFACE_DEFINED__ */


#ifndef __ITIMEState_INTERFACE_DEFINED__
#define __ITIMEState_INTERFACE_DEFINED__

/* interface ITIMEState */
/* [uuid][unique][dual][oleautomation][object] */ 


EXTERN_C const IID IID_ITIMEState;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DD5EC62A-9D77-4573-80A8-758594E69CEA")
    ITIMEState : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_activeDur( 
            /* [out][retval] */ double __RPC_FAR *dur) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_activeTime( 
            /* [out][retval] */ double __RPC_FAR *time) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_isActive( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *active) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_isOn( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *on) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_isPaused( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *paused) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_isMuted( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *muted) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_parentTimeBegin( 
            /* [out][retval] */ double __RPC_FAR *time) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_parentTimeEnd( 
            /* [out][retval] */ double __RPC_FAR *time) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_progress( 
            /* [out][retval] */ double __RPC_FAR *progress) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_repeatCount( 
            /* [out][retval] */ LONG __RPC_FAR *count) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_segmentDur( 
            /* [out][retval] */ double __RPC_FAR *dur) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_segmentTime( 
            /* [out][retval] */ double __RPC_FAR *time) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_simpleDur( 
            /* [out][retval] */ double __RPC_FAR *dur) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_simpleTime( 
            /* [out][retval] */ double __RPC_FAR *time) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_speed( 
            /* [out][retval] */ float __RPC_FAR *speed) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_state( 
            /* [out][retval] */ TimeState __RPC_FAR *timeState) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_stateString( 
            /* [out][retval] */ BSTR __RPC_FAR *state) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_volume( 
            /* [out][retval] */ float __RPC_FAR *vol) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITIMEStateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITIMEState __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITIMEState __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITIMEState __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ITIMEState __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ITIMEState __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ITIMEState __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ITIMEState __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_activeDur )( 
            ITIMEState __RPC_FAR * This,
            /* [out][retval] */ double __RPC_FAR *dur);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_activeTime )( 
            ITIMEState __RPC_FAR * This,
            /* [out][retval] */ double __RPC_FAR *time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_isActive )( 
            ITIMEState __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *active);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_isOn )( 
            ITIMEState __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *on);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_isPaused )( 
            ITIMEState __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *paused);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_isMuted )( 
            ITIMEState __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *muted);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_parentTimeBegin )( 
            ITIMEState __RPC_FAR * This,
            /* [out][retval] */ double __RPC_FAR *time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_parentTimeEnd )( 
            ITIMEState __RPC_FAR * This,
            /* [out][retval] */ double __RPC_FAR *time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_progress )( 
            ITIMEState __RPC_FAR * This,
            /* [out][retval] */ double __RPC_FAR *progress);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_repeatCount )( 
            ITIMEState __RPC_FAR * This,
            /* [out][retval] */ LONG __RPC_FAR *count);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_segmentDur )( 
            ITIMEState __RPC_FAR * This,
            /* [out][retval] */ double __RPC_FAR *dur);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_segmentTime )( 
            ITIMEState __RPC_FAR * This,
            /* [out][retval] */ double __RPC_FAR *time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_simpleDur )( 
            ITIMEState __RPC_FAR * This,
            /* [out][retval] */ double __RPC_FAR *dur);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_simpleTime )( 
            ITIMEState __RPC_FAR * This,
            /* [out][retval] */ double __RPC_FAR *time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_speed )( 
            ITIMEState __RPC_FAR * This,
            /* [out][retval] */ float __RPC_FAR *speed);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_state )( 
            ITIMEState __RPC_FAR * This,
            /* [out][retval] */ TimeState __RPC_FAR *timeState);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_stateString )( 
            ITIMEState __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *state);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_volume )( 
            ITIMEState __RPC_FAR * This,
            /* [out][retval] */ float __RPC_FAR *vol);
        
        END_INTERFACE
    } ITIMEStateVtbl;

    interface ITIMEState
    {
        CONST_VTBL struct ITIMEStateVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITIMEState_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITIMEState_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITIMEState_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITIMEState_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ITIMEState_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ITIMEState_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ITIMEState_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ITIMEState_get_activeDur(This,dur)	\
    (This)->lpVtbl -> get_activeDur(This,dur)

#define ITIMEState_get_activeTime(This,time)	\
    (This)->lpVtbl -> get_activeTime(This,time)

#define ITIMEState_get_isActive(This,active)	\
    (This)->lpVtbl -> get_isActive(This,active)

#define ITIMEState_get_isOn(This,on)	\
    (This)->lpVtbl -> get_isOn(This,on)

#define ITIMEState_get_isPaused(This,paused)	\
    (This)->lpVtbl -> get_isPaused(This,paused)

#define ITIMEState_get_isMuted(This,muted)	\
    (This)->lpVtbl -> get_isMuted(This,muted)

#define ITIMEState_get_parentTimeBegin(This,time)	\
    (This)->lpVtbl -> get_parentTimeBegin(This,time)

#define ITIMEState_get_parentTimeEnd(This,time)	\
    (This)->lpVtbl -> get_parentTimeEnd(This,time)

#define ITIMEState_get_progress(This,progress)	\
    (This)->lpVtbl -> get_progress(This,progress)

#define ITIMEState_get_repeatCount(This,count)	\
    (This)->lpVtbl -> get_repeatCount(This,count)

#define ITIMEState_get_segmentDur(This,dur)	\
    (This)->lpVtbl -> get_segmentDur(This,dur)

#define ITIMEState_get_segmentTime(This,time)	\
    (This)->lpVtbl -> get_segmentTime(This,time)

#define ITIMEState_get_simpleDur(This,dur)	\
    (This)->lpVtbl -> get_simpleDur(This,dur)

#define ITIMEState_get_simpleTime(This,time)	\
    (This)->lpVtbl -> get_simpleTime(This,time)

#define ITIMEState_get_speed(This,speed)	\
    (This)->lpVtbl -> get_speed(This,speed)

#define ITIMEState_get_state(This,timeState)	\
    (This)->lpVtbl -> get_state(This,timeState)

#define ITIMEState_get_stateString(This,state)	\
    (This)->lpVtbl -> get_stateString(This,state)

#define ITIMEState_get_volume(This,vol)	\
    (This)->lpVtbl -> get_volume(This,vol)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEState_get_activeDur_Proxy( 
    ITIMEState __RPC_FAR * This,
    /* [out][retval] */ double __RPC_FAR *dur);


void __RPC_STUB ITIMEState_get_activeDur_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEState_get_activeTime_Proxy( 
    ITIMEState __RPC_FAR * This,
    /* [out][retval] */ double __RPC_FAR *time);


void __RPC_STUB ITIMEState_get_activeTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEState_get_isActive_Proxy( 
    ITIMEState __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *active);


void __RPC_STUB ITIMEState_get_isActive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEState_get_isOn_Proxy( 
    ITIMEState __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *on);


void __RPC_STUB ITIMEState_get_isOn_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEState_get_isPaused_Proxy( 
    ITIMEState __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *paused);


void __RPC_STUB ITIMEState_get_isPaused_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEState_get_isMuted_Proxy( 
    ITIMEState __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *muted);


void __RPC_STUB ITIMEState_get_isMuted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEState_get_parentTimeBegin_Proxy( 
    ITIMEState __RPC_FAR * This,
    /* [out][retval] */ double __RPC_FAR *time);


void __RPC_STUB ITIMEState_get_parentTimeBegin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEState_get_parentTimeEnd_Proxy( 
    ITIMEState __RPC_FAR * This,
    /* [out][retval] */ double __RPC_FAR *time);


void __RPC_STUB ITIMEState_get_parentTimeEnd_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEState_get_progress_Proxy( 
    ITIMEState __RPC_FAR * This,
    /* [out][retval] */ double __RPC_FAR *progress);


void __RPC_STUB ITIMEState_get_progress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEState_get_repeatCount_Proxy( 
    ITIMEState __RPC_FAR * This,
    /* [out][retval] */ LONG __RPC_FAR *count);


void __RPC_STUB ITIMEState_get_repeatCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEState_get_segmentDur_Proxy( 
    ITIMEState __RPC_FAR * This,
    /* [out][retval] */ double __RPC_FAR *dur);


void __RPC_STUB ITIMEState_get_segmentDur_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEState_get_segmentTime_Proxy( 
    ITIMEState __RPC_FAR * This,
    /* [out][retval] */ double __RPC_FAR *time);


void __RPC_STUB ITIMEState_get_segmentTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEState_get_simpleDur_Proxy( 
    ITIMEState __RPC_FAR * This,
    /* [out][retval] */ double __RPC_FAR *dur);


void __RPC_STUB ITIMEState_get_simpleDur_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEState_get_simpleTime_Proxy( 
    ITIMEState __RPC_FAR * This,
    /* [out][retval] */ double __RPC_FAR *time);


void __RPC_STUB ITIMEState_get_simpleTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEState_get_speed_Proxy( 
    ITIMEState __RPC_FAR * This,
    /* [out][retval] */ float __RPC_FAR *speed);


void __RPC_STUB ITIMEState_get_speed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEState_get_state_Proxy( 
    ITIMEState __RPC_FAR * This,
    /* [out][retval] */ TimeState __RPC_FAR *timeState);


void __RPC_STUB ITIMEState_get_state_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEState_get_stateString_Proxy( 
    ITIMEState __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *state);


void __RPC_STUB ITIMEState_get_stateString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEState_get_volume_Proxy( 
    ITIMEState __RPC_FAR * This,
    /* [out][retval] */ float __RPC_FAR *vol);


void __RPC_STUB ITIMEState_get_volume_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITIMEState_INTERFACE_DEFINED__ */


#ifndef __ITIMEPlayItem_INTERFACE_DEFINED__
#define __ITIMEPlayItem_INTERFACE_DEFINED__

/* interface ITIMEPlayItem */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ITIMEPlayItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2A6096D9-2CE0-47DC-A813-9099A2466309")
    ITIMEPlayItem : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_abstract( 
            /* [retval][out] */ BSTR __RPC_FAR *abs) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_author( 
            /* [retval][out] */ BSTR __RPC_FAR *auth) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_copyright( 
            /* [retval][out] */ BSTR __RPC_FAR *cpyrght) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_dur( 
            /* [retval][out] */ double __RPC_FAR *dur) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_index( 
            /* [retval][out] */ long __RPC_FAR *index) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_rating( 
            /* [retval][out] */ BSTR __RPC_FAR *rate) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_src( 
            /* [retval][out] */ BSTR __RPC_FAR *src) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_title( 
            /* [retval][out] */ BSTR __RPC_FAR *title) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setActive( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITIMEPlayItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITIMEPlayItem __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITIMEPlayItem __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITIMEPlayItem __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ITIMEPlayItem __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ITIMEPlayItem __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ITIMEPlayItem __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ITIMEPlayItem __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_abstract )( 
            ITIMEPlayItem __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *abs);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_author )( 
            ITIMEPlayItem __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *auth);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_copyright )( 
            ITIMEPlayItem __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *cpyrght);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_dur )( 
            ITIMEPlayItem __RPC_FAR * This,
            /* [retval][out] */ double __RPC_FAR *dur);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_index )( 
            ITIMEPlayItem __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *index);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_rating )( 
            ITIMEPlayItem __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *rate);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_src )( 
            ITIMEPlayItem __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *src);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_title )( 
            ITIMEPlayItem __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *title);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *setActive )( 
            ITIMEPlayItem __RPC_FAR * This);
        
        END_INTERFACE
    } ITIMEPlayItemVtbl;

    interface ITIMEPlayItem
    {
        CONST_VTBL struct ITIMEPlayItemVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITIMEPlayItem_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITIMEPlayItem_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITIMEPlayItem_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITIMEPlayItem_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ITIMEPlayItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ITIMEPlayItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ITIMEPlayItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ITIMEPlayItem_get_abstract(This,abs)	\
    (This)->lpVtbl -> get_abstract(This,abs)

#define ITIMEPlayItem_get_author(This,auth)	\
    (This)->lpVtbl -> get_author(This,auth)

#define ITIMEPlayItem_get_copyright(This,cpyrght)	\
    (This)->lpVtbl -> get_copyright(This,cpyrght)

#define ITIMEPlayItem_get_dur(This,dur)	\
    (This)->lpVtbl -> get_dur(This,dur)

#define ITIMEPlayItem_get_index(This,index)	\
    (This)->lpVtbl -> get_index(This,index)

#define ITIMEPlayItem_get_rating(This,rate)	\
    (This)->lpVtbl -> get_rating(This,rate)

#define ITIMEPlayItem_get_src(This,src)	\
    (This)->lpVtbl -> get_src(This,src)

#define ITIMEPlayItem_get_title(This,title)	\
    (This)->lpVtbl -> get_title(This,title)

#define ITIMEPlayItem_setActive(This)	\
    (This)->lpVtbl -> setActive(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEPlayItem_get_abstract_Proxy( 
    ITIMEPlayItem __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *abs);


void __RPC_STUB ITIMEPlayItem_get_abstract_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEPlayItem_get_author_Proxy( 
    ITIMEPlayItem __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *auth);


void __RPC_STUB ITIMEPlayItem_get_author_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEPlayItem_get_copyright_Proxy( 
    ITIMEPlayItem __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *cpyrght);


void __RPC_STUB ITIMEPlayItem_get_copyright_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEPlayItem_get_dur_Proxy( 
    ITIMEPlayItem __RPC_FAR * This,
    /* [retval][out] */ double __RPC_FAR *dur);


void __RPC_STUB ITIMEPlayItem_get_dur_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEPlayItem_get_index_Proxy( 
    ITIMEPlayItem __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *index);


void __RPC_STUB ITIMEPlayItem_get_index_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEPlayItem_get_rating_Proxy( 
    ITIMEPlayItem __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *rate);


void __RPC_STUB ITIMEPlayItem_get_rating_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEPlayItem_get_src_Proxy( 
    ITIMEPlayItem __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *src);


void __RPC_STUB ITIMEPlayItem_get_src_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEPlayItem_get_title_Proxy( 
    ITIMEPlayItem __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *title);


void __RPC_STUB ITIMEPlayItem_get_title_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEPlayItem_setActive_Proxy( 
    ITIMEPlayItem __RPC_FAR * This);


void __RPC_STUB ITIMEPlayItem_setActive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITIMEPlayItem_INTERFACE_DEFINED__ */


#ifndef __ITIMEPlayList_INTERFACE_DEFINED__
#define __ITIMEPlayList_INTERFACE_DEFINED__

/* interface ITIMEPlayList */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ITIMEPlayList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E9B75B62-DD97-4B19-8FD9-9646292952E0")
    ITIMEPlayList : public IDispatch
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_activeTrack( 
            /* [in] */ VARIANT vTrack) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_activeTrack( 
            /* [retval][out] */ ITIMEPlayItem __RPC_FAR *__RPC_FAR *pPlayItem) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_dur( 
            double __RPC_FAR *dur) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE item( 
            /* [in][defaultvalue] */ VARIANT varIndex,
            /* [retval][out] */ ITIMEPlayItem __RPC_FAR *__RPC_FAR *pPlayItem) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_length( 
            /* [retval][out] */ long __RPC_FAR *p) = 0;
        
        virtual /* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__newEnum( 
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *p) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE nextTrack( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE prevTrack( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITIMEPlayListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITIMEPlayList __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITIMEPlayList __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITIMEPlayList __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ITIMEPlayList __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ITIMEPlayList __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ITIMEPlayList __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ITIMEPlayList __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_activeTrack )( 
            ITIMEPlayList __RPC_FAR * This,
            /* [in] */ VARIANT vTrack);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_activeTrack )( 
            ITIMEPlayList __RPC_FAR * This,
            /* [retval][out] */ ITIMEPlayItem __RPC_FAR *__RPC_FAR *pPlayItem);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_dur )( 
            ITIMEPlayList __RPC_FAR * This,
            double __RPC_FAR *dur);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *item )( 
            ITIMEPlayList __RPC_FAR * This,
            /* [in][defaultvalue] */ VARIANT varIndex,
            /* [retval][out] */ ITIMEPlayItem __RPC_FAR *__RPC_FAR *pPlayItem);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_length )( 
            ITIMEPlayList __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *p);
        
        /* [hidden][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__newEnum )( 
            ITIMEPlayList __RPC_FAR * This,
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *p);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *nextTrack )( 
            ITIMEPlayList __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *prevTrack )( 
            ITIMEPlayList __RPC_FAR * This);
        
        END_INTERFACE
    } ITIMEPlayListVtbl;

    interface ITIMEPlayList
    {
        CONST_VTBL struct ITIMEPlayListVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITIMEPlayList_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITIMEPlayList_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITIMEPlayList_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITIMEPlayList_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ITIMEPlayList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ITIMEPlayList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ITIMEPlayList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ITIMEPlayList_put_activeTrack(This,vTrack)	\
    (This)->lpVtbl -> put_activeTrack(This,vTrack)

#define ITIMEPlayList_get_activeTrack(This,pPlayItem)	\
    (This)->lpVtbl -> get_activeTrack(This,pPlayItem)

#define ITIMEPlayList_get_dur(This,dur)	\
    (This)->lpVtbl -> get_dur(This,dur)

#define ITIMEPlayList_item(This,varIndex,pPlayItem)	\
    (This)->lpVtbl -> item(This,varIndex,pPlayItem)

#define ITIMEPlayList_get_length(This,p)	\
    (This)->lpVtbl -> get_length(This,p)

#define ITIMEPlayList_get__newEnum(This,p)	\
    (This)->lpVtbl -> get__newEnum(This,p)

#define ITIMEPlayList_nextTrack(This)	\
    (This)->lpVtbl -> nextTrack(This)

#define ITIMEPlayList_prevTrack(This)	\
    (This)->lpVtbl -> prevTrack(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propput][id] */ HRESULT STDMETHODCALLTYPE ITIMEPlayList_put_activeTrack_Proxy( 
    ITIMEPlayList __RPC_FAR * This,
    /* [in] */ VARIANT vTrack);


void __RPC_STUB ITIMEPlayList_put_activeTrack_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE ITIMEPlayList_get_activeTrack_Proxy( 
    ITIMEPlayList __RPC_FAR * This,
    /* [retval][out] */ ITIMEPlayItem __RPC_FAR *__RPC_FAR *pPlayItem);


void __RPC_STUB ITIMEPlayList_get_activeTrack_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE ITIMEPlayList_get_dur_Proxy( 
    ITIMEPlayList __RPC_FAR * This,
    double __RPC_FAR *dur);


void __RPC_STUB ITIMEPlayList_get_dur_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEPlayList_item_Proxy( 
    ITIMEPlayList __RPC_FAR * This,
    /* [in][defaultvalue] */ VARIANT varIndex,
    /* [retval][out] */ ITIMEPlayItem __RPC_FAR *__RPC_FAR *pPlayItem);


void __RPC_STUB ITIMEPlayList_item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE ITIMEPlayList_get_length_Proxy( 
    ITIMEPlayList __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *p);


void __RPC_STUB ITIMEPlayList_get_length_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE ITIMEPlayList_get__newEnum_Proxy( 
    ITIMEPlayList __RPC_FAR * This,
    /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *p);


void __RPC_STUB ITIMEPlayList_get__newEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEPlayList_nextTrack_Proxy( 
    ITIMEPlayList __RPC_FAR * This);


void __RPC_STUB ITIMEPlayList_nextTrack_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEPlayList_prevTrack_Proxy( 
    ITIMEPlayList __RPC_FAR * This);


void __RPC_STUB ITIMEPlayList_prevTrack_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITIMEPlayList_INTERFACE_DEFINED__ */


#ifndef __ITIMEDVDPlayerObject_INTERFACE_DEFINED__
#define __ITIMEDVDPlayerObject_INTERFACE_DEFINED__

/* interface ITIMEDVDPlayerObject */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ITIMEDVDPlayerObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3AF7AB68-4F29-462C-AA6E-5872448899E3")
    ITIMEDVDPlayerObject : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE upperButtonSelect( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE lowerButtonSelect( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE leftButtonSelect( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE rightButtonSelect( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE buttonActivate( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE gotoMenu( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITIMEDVDPlayerObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITIMEDVDPlayerObject __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITIMEDVDPlayerObject __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITIMEDVDPlayerObject __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ITIMEDVDPlayerObject __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ITIMEDVDPlayerObject __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ITIMEDVDPlayerObject __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ITIMEDVDPlayerObject __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *upperButtonSelect )( 
            ITIMEDVDPlayerObject __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *lowerButtonSelect )( 
            ITIMEDVDPlayerObject __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *leftButtonSelect )( 
            ITIMEDVDPlayerObject __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *rightButtonSelect )( 
            ITIMEDVDPlayerObject __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *buttonActivate )( 
            ITIMEDVDPlayerObject __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *gotoMenu )( 
            ITIMEDVDPlayerObject __RPC_FAR * This);
        
        END_INTERFACE
    } ITIMEDVDPlayerObjectVtbl;

    interface ITIMEDVDPlayerObject
    {
        CONST_VTBL struct ITIMEDVDPlayerObjectVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITIMEDVDPlayerObject_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITIMEDVDPlayerObject_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITIMEDVDPlayerObject_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITIMEDVDPlayerObject_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ITIMEDVDPlayerObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ITIMEDVDPlayerObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ITIMEDVDPlayerObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ITIMEDVDPlayerObject_upperButtonSelect(This)	\
    (This)->lpVtbl -> upperButtonSelect(This)

#define ITIMEDVDPlayerObject_lowerButtonSelect(This)	\
    (This)->lpVtbl -> lowerButtonSelect(This)

#define ITIMEDVDPlayerObject_leftButtonSelect(This)	\
    (This)->lpVtbl -> leftButtonSelect(This)

#define ITIMEDVDPlayerObject_rightButtonSelect(This)	\
    (This)->lpVtbl -> rightButtonSelect(This)

#define ITIMEDVDPlayerObject_buttonActivate(This)	\
    (This)->lpVtbl -> buttonActivate(This)

#define ITIMEDVDPlayerObject_gotoMenu(This)	\
    (This)->lpVtbl -> gotoMenu(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEDVDPlayerObject_upperButtonSelect_Proxy( 
    ITIMEDVDPlayerObject __RPC_FAR * This);


void __RPC_STUB ITIMEDVDPlayerObject_upperButtonSelect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEDVDPlayerObject_lowerButtonSelect_Proxy( 
    ITIMEDVDPlayerObject __RPC_FAR * This);


void __RPC_STUB ITIMEDVDPlayerObject_lowerButtonSelect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEDVDPlayerObject_leftButtonSelect_Proxy( 
    ITIMEDVDPlayerObject __RPC_FAR * This);


void __RPC_STUB ITIMEDVDPlayerObject_leftButtonSelect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEDVDPlayerObject_rightButtonSelect_Proxy( 
    ITIMEDVDPlayerObject __RPC_FAR * This);


void __RPC_STUB ITIMEDVDPlayerObject_rightButtonSelect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEDVDPlayerObject_buttonActivate_Proxy( 
    ITIMEDVDPlayerObject __RPC_FAR * This);


void __RPC_STUB ITIMEDVDPlayerObject_buttonActivate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEDVDPlayerObject_gotoMenu_Proxy( 
    ITIMEDVDPlayerObject __RPC_FAR * This);


void __RPC_STUB ITIMEDVDPlayerObject_gotoMenu_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITIMEDVDPlayerObject_INTERFACE_DEFINED__ */


#ifndef __ITIMEDMusicPlayerObject_INTERFACE_DEFINED__
#define __ITIMEDMusicPlayerObject_INTERFACE_DEFINED__

/* interface ITIMEDMusicPlayerObject */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ITIMEDMusicPlayerObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("407954F5-2BAB-4CFA-954D-249F9FCE43A1")
    ITIMEDMusicPlayerObject : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_isDirectMusicInstalled( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *hasDM) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITIMEDMusicPlayerObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITIMEDMusicPlayerObject __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITIMEDMusicPlayerObject __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITIMEDMusicPlayerObject __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ITIMEDMusicPlayerObject __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ITIMEDMusicPlayerObject __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ITIMEDMusicPlayerObject __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ITIMEDMusicPlayerObject __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_isDirectMusicInstalled )( 
            ITIMEDMusicPlayerObject __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *hasDM);
        
        END_INTERFACE
    } ITIMEDMusicPlayerObjectVtbl;

    interface ITIMEDMusicPlayerObject
    {
        CONST_VTBL struct ITIMEDMusicPlayerObjectVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITIMEDMusicPlayerObject_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITIMEDMusicPlayerObject_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITIMEDMusicPlayerObject_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITIMEDMusicPlayerObject_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ITIMEDMusicPlayerObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ITIMEDMusicPlayerObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ITIMEDMusicPlayerObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ITIMEDMusicPlayerObject_get_isDirectMusicInstalled(This,hasDM)	\
    (This)->lpVtbl -> get_isDirectMusicInstalled(This,hasDM)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEDMusicPlayerObject_get_isDirectMusicInstalled_Proxy( 
    ITIMEDMusicPlayerObject __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *hasDM);


void __RPC_STUB ITIMEDMusicPlayerObject_get_isDirectMusicInstalled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITIMEDMusicPlayerObject_INTERFACE_DEFINED__ */


#ifndef __ITIMEFactory_INTERFACE_DEFINED__
#define __ITIMEFactory_INTERFACE_DEFINED__

/* interface ITIMEFactory */
/* [unique][hidden][uuid][object] */ 


EXTERN_C const IID IID_ITIMEFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cd51e446-3006-434f-90e2-e37e8fb8ca8f")
    ITIMEFactory : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITIMEFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITIMEFactory __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITIMEFactory __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITIMEFactory __RPC_FAR * This);
        
        END_INTERFACE
    } ITIMEFactoryVtbl;

    interface ITIMEFactory
    {
        CONST_VTBL struct ITIMEFactoryVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITIMEFactory_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITIMEFactory_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITIMEFactory_Release(This)	\
    (This)->lpVtbl -> Release(This)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITIMEFactory_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_TIMEFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("17237A20-3ADB-48ec-B182-35291F115790")
TIMEFactory;
#endif

EXTERN_C const CLSID CLSID_TIME;

#ifdef __cplusplus

class DECLSPEC_UUID("e32ef57b-7fde-4765-9bc5-a1ba9705c44e")
TIME;
#endif

EXTERN_C const CLSID CLSID_TIMEAnimation;

#ifdef __cplusplus

class DECLSPEC_UUID("f99d135a-c07c-449e-965c-7dbb7c554a51")
TIMEAnimation;
#endif

EXTERN_C const CLSID CLSID_TIMESetAnimation;

#ifdef __cplusplus

class DECLSPEC_UUID("ba91ce53-baeb-4f05-861c-0a2a0934f82e")
TIMESetAnimation;
#endif

EXTERN_C const CLSID CLSID_TIMEMotionAnimation;

#ifdef __cplusplus

class DECLSPEC_UUID("0019a09d-1a81-41c5-89ec-d9e737811303")
TIMEMotionAnimation;
#endif

EXTERN_C const CLSID CLSID_TIMEColorAnimation;

#ifdef __cplusplus

class DECLSPEC_UUID("62f75052-f3ec-4a64-84fb-ab18e0746ed8")
TIMEColorAnimation;
#endif

#ifndef __IAnimationComposerFactory_INTERFACE_DEFINED__
#define __IAnimationComposerFactory_INTERFACE_DEFINED__

/* interface IAnimationComposerFactory */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAnimationComposerFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BEEB3233-F71F-4683-8B05-9A5314C97DBC")
    IAnimationComposerFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE FindComposer( 
            /* [in] */ IDispatch __RPC_FAR *targetElement,
            /* [in] */ BSTR attributeName,
            /* [retval][out] */ IAnimationComposer __RPC_FAR *__RPC_FAR *animationComposer) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAnimationComposerFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IAnimationComposerFactory __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IAnimationComposerFactory __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IAnimationComposerFactory __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindComposer )( 
            IAnimationComposerFactory __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *targetElement,
            /* [in] */ BSTR attributeName,
            /* [retval][out] */ IAnimationComposer __RPC_FAR *__RPC_FAR *animationComposer);
        
        END_INTERFACE
    } IAnimationComposerFactoryVtbl;

    interface IAnimationComposerFactory
    {
        CONST_VTBL struct IAnimationComposerFactoryVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAnimationComposerFactory_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAnimationComposerFactory_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAnimationComposerFactory_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAnimationComposerFactory_FindComposer(This,targetElement,attributeName,animationComposer)	\
    (This)->lpVtbl -> FindComposer(This,targetElement,attributeName,animationComposer)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IAnimationComposerFactory_FindComposer_Proxy( 
    IAnimationComposerFactory __RPC_FAR * This,
    /* [in] */ IDispatch __RPC_FAR *targetElement,
    /* [in] */ BSTR attributeName,
    /* [retval][out] */ IAnimationComposer __RPC_FAR *__RPC_FAR *animationComposer);


void __RPC_STUB IAnimationComposerFactory_FindComposer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAnimationComposerFactory_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_AnimationComposerFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("332B2A56-F86C-47e7-8602-FC42AC8B9920")
AnimationComposerFactory;
#endif

#ifndef __IAnimationComposerSiteFactory_INTERFACE_DEFINED__
#define __IAnimationComposerSiteFactory_INTERFACE_DEFINED__

/* interface IAnimationComposerSiteFactory */
/* [unique][hidden][dual][uuid][object] */ 


EXTERN_C const IID IID_IAnimationComposerSiteFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B4EA5681-ED72-4efe-BBD7-7C47D1325696")
    IAnimationComposerSiteFactory : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IAnimationComposerSiteFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IAnimationComposerSiteFactory __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IAnimationComposerSiteFactory __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IAnimationComposerSiteFactory __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IAnimationComposerSiteFactory __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IAnimationComposerSiteFactory __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IAnimationComposerSiteFactory __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IAnimationComposerSiteFactory __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } IAnimationComposerSiteFactoryVtbl;

    interface IAnimationComposerSiteFactory
    {
        CONST_VTBL struct IAnimationComposerSiteFactoryVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAnimationComposerSiteFactory_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAnimationComposerSiteFactory_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAnimationComposerSiteFactory_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAnimationComposerSiteFactory_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAnimationComposerSiteFactory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAnimationComposerSiteFactory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAnimationComposerSiteFactory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAnimationComposerSiteFactory_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_AnimationComposerSiteFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("16911A65-D41D-4431-87F7-E757F4D03BD8")
AnimationComposerSiteFactory;
#endif

#ifndef __ITIMEMediaPlayerSite_INTERFACE_DEFINED__
#define __ITIMEMediaPlayerSite_INTERFACE_DEFINED__

/* interface ITIMEMediaPlayerSite */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITIMEMediaPlayerSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bf0571ed-344f-4f58-82c7-7431ed0fd834")
    ITIMEMediaPlayerSite : public IUnknown
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_timeElement( 
            /* [retval][out] */ ITIMEElement __RPC_FAR *__RPC_FAR *pElm) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_timeState( 
            /* [retval][out] */ ITIMEState __RPC_FAR *__RPC_FAR *pState) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE reportError( 
            /* [in] */ HRESULT hr,
            /* [in] */ BSTR errorString) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITIMEMediaPlayerSiteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITIMEMediaPlayerSite __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITIMEMediaPlayerSite __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITIMEMediaPlayerSite __RPC_FAR * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeElement )( 
            ITIMEMediaPlayerSite __RPC_FAR * This,
            /* [retval][out] */ ITIMEElement __RPC_FAR *__RPC_FAR *pElm);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeState )( 
            ITIMEMediaPlayerSite __RPC_FAR * This,
            /* [retval][out] */ ITIMEState __RPC_FAR *__RPC_FAR *pState);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *reportError )( 
            ITIMEMediaPlayerSite __RPC_FAR * This,
            /* [in] */ HRESULT hr,
            /* [in] */ BSTR errorString);
        
        END_INTERFACE
    } ITIMEMediaPlayerSiteVtbl;

    interface ITIMEMediaPlayerSite
    {
        CONST_VTBL struct ITIMEMediaPlayerSiteVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITIMEMediaPlayerSite_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITIMEMediaPlayerSite_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITIMEMediaPlayerSite_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITIMEMediaPlayerSite_get_timeElement(This,pElm)	\
    (This)->lpVtbl -> get_timeElement(This,pElm)

#define ITIMEMediaPlayerSite_get_timeState(This,pState)	\
    (This)->lpVtbl -> get_timeState(This,pState)

#define ITIMEMediaPlayerSite_reportError(This,hr,errorString)	\
    (This)->lpVtbl -> reportError(This,hr,errorString)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayerSite_get_timeElement_Proxy( 
    ITIMEMediaPlayerSite __RPC_FAR * This,
    /* [retval][out] */ ITIMEElement __RPC_FAR *__RPC_FAR *pElm);


void __RPC_STUB ITIMEMediaPlayerSite_get_timeElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayerSite_get_timeState_Proxy( 
    ITIMEMediaPlayerSite __RPC_FAR * This,
    /* [retval][out] */ ITIMEState __RPC_FAR *__RPC_FAR *pState);


void __RPC_STUB ITIMEMediaPlayerSite_get_timeState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayerSite_reportError_Proxy( 
    ITIMEMediaPlayerSite __RPC_FAR * This,
    /* [in] */ HRESULT hr,
    /* [in] */ BSTR errorString);


void __RPC_STUB ITIMEMediaPlayerSite_reportError_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITIMEMediaPlayerSite_INTERFACE_DEFINED__ */


#ifndef __ITIMEMediaPlayer_INTERFACE_DEFINED__
#define __ITIMEMediaPlayer_INTERFACE_DEFINED__

/* interface ITIMEMediaPlayer */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITIMEMediaPlayer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ea4a95be-acc9-4bf0-85a4-1bf3c51e431c")
    ITIMEMediaPlayer : public IUnknown
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Init( 
            ITIMEMediaPlayerSite __RPC_FAR *mpsite) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Detach( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE begin( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE end( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE resume( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE pause( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE repeat( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE reset( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE seek( 
            /* [in] */ double time) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_src( 
            /* [in] */ BSTR url) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_clipBegin( 
            /* [in] */ VARIANT b) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_clipEnd( 
            /* [in] */ VARIANT e) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_abstract( 
            /* [retval][out] */ BSTR __RPC_FAR *abs) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_author( 
            /* [retval][out] */ BSTR __RPC_FAR *auth) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_canPause( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_canSeek( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_clipDur( 
            /* [retval][out] */ double __RPC_FAR *dur) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_copyright( 
            /* [retval][out] */ BSTR __RPC_FAR *cpyrght) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_currTime( 
            /* [retval][out] */ double __RPC_FAR *time) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_customObject( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_hasAudio( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_hasVisual( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_mediaDur( 
            /* [retval][out] */ double __RPC_FAR *dur) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_mediaHeight( 
            /* [retval][out] */ long __RPC_FAR *height) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_mediaWidth( 
            /* [retval][out] */ long __RPC_FAR *width) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_playList( 
            /* [retval][out] */ ITIMEPlayList __RPC_FAR *__RPC_FAR *pPlayList) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_rating( 
            /* [retval][out] */ BSTR __RPC_FAR *rate) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_state( 
            /* [retval][out] */ TimeState __RPC_FAR *ts) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_title( 
            /* [retval][out] */ BSTR __RPC_FAR *name) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITIMEMediaPlayerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITIMEMediaPlayer __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITIMEMediaPlayer __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITIMEMediaPlayer __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Init )( 
            ITIMEMediaPlayer __RPC_FAR * This,
            ITIMEMediaPlayerSite __RPC_FAR *mpsite);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Detach )( 
            ITIMEMediaPlayer __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *begin )( 
            ITIMEMediaPlayer __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *end )( 
            ITIMEMediaPlayer __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *resume )( 
            ITIMEMediaPlayer __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *pause )( 
            ITIMEMediaPlayer __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *repeat )( 
            ITIMEMediaPlayer __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *reset )( 
            ITIMEMediaPlayer __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *seek )( 
            ITIMEMediaPlayer __RPC_FAR * This,
            /* [in] */ double time);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_src )( 
            ITIMEMediaPlayer __RPC_FAR * This,
            /* [in] */ BSTR url);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_clipBegin )( 
            ITIMEMediaPlayer __RPC_FAR * This,
            /* [in] */ VARIANT b);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_clipEnd )( 
            ITIMEMediaPlayer __RPC_FAR * This,
            /* [in] */ VARIANT e);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_abstract )( 
            ITIMEMediaPlayer __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *abs);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_author )( 
            ITIMEMediaPlayer __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *auth);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_canPause )( 
            ITIMEMediaPlayer __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_canSeek )( 
            ITIMEMediaPlayer __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_clipDur )( 
            ITIMEMediaPlayer __RPC_FAR * This,
            /* [retval][out] */ double __RPC_FAR *dur);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_copyright )( 
            ITIMEMediaPlayer __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *cpyrght);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_currTime )( 
            ITIMEMediaPlayer __RPC_FAR * This,
            /* [retval][out] */ double __RPC_FAR *time);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_customObject )( 
            ITIMEMediaPlayer __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_hasAudio )( 
            ITIMEMediaPlayer __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_hasVisual )( 
            ITIMEMediaPlayer __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_mediaDur )( 
            ITIMEMediaPlayer __RPC_FAR * This,
            /* [retval][out] */ double __RPC_FAR *dur);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_mediaHeight )( 
            ITIMEMediaPlayer __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *height);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_mediaWidth )( 
            ITIMEMediaPlayer __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *width);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_playList )( 
            ITIMEMediaPlayer __RPC_FAR * This,
            /* [retval][out] */ ITIMEPlayList __RPC_FAR *__RPC_FAR *pPlayList);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_rating )( 
            ITIMEMediaPlayer __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *rate);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_state )( 
            ITIMEMediaPlayer __RPC_FAR * This,
            /* [retval][out] */ TimeState __RPC_FAR *ts);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_title )( 
            ITIMEMediaPlayer __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *name);
        
        END_INTERFACE
    } ITIMEMediaPlayerVtbl;

    interface ITIMEMediaPlayer
    {
        CONST_VTBL struct ITIMEMediaPlayerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITIMEMediaPlayer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITIMEMediaPlayer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITIMEMediaPlayer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITIMEMediaPlayer_Init(This,mpsite)	\
    (This)->lpVtbl -> Init(This,mpsite)

#define ITIMEMediaPlayer_Detach(This)	\
    (This)->lpVtbl -> Detach(This)

#define ITIMEMediaPlayer_begin(This)	\
    (This)->lpVtbl -> begin(This)

#define ITIMEMediaPlayer_end(This)	\
    (This)->lpVtbl -> end(This)

#define ITIMEMediaPlayer_resume(This)	\
    (This)->lpVtbl -> resume(This)

#define ITIMEMediaPlayer_pause(This)	\
    (This)->lpVtbl -> pause(This)

#define ITIMEMediaPlayer_repeat(This)	\
    (This)->lpVtbl -> repeat(This)

#define ITIMEMediaPlayer_reset(This)	\
    (This)->lpVtbl -> reset(This)

#define ITIMEMediaPlayer_seek(This,time)	\
    (This)->lpVtbl -> seek(This,time)

#define ITIMEMediaPlayer_put_src(This,url)	\
    (This)->lpVtbl -> put_src(This,url)

#define ITIMEMediaPlayer_put_clipBegin(This,b)	\
    (This)->lpVtbl -> put_clipBegin(This,b)

#define ITIMEMediaPlayer_put_clipEnd(This,e)	\
    (This)->lpVtbl -> put_clipEnd(This,e)

#define ITIMEMediaPlayer_get_abstract(This,abs)	\
    (This)->lpVtbl -> get_abstract(This,abs)

#define ITIMEMediaPlayer_get_author(This,auth)	\
    (This)->lpVtbl -> get_author(This,auth)

#define ITIMEMediaPlayer_get_canPause(This,b)	\
    (This)->lpVtbl -> get_canPause(This,b)

#define ITIMEMediaPlayer_get_canSeek(This,b)	\
    (This)->lpVtbl -> get_canSeek(This,b)

#define ITIMEMediaPlayer_get_clipDur(This,dur)	\
    (This)->lpVtbl -> get_clipDur(This,dur)

#define ITIMEMediaPlayer_get_copyright(This,cpyrght)	\
    (This)->lpVtbl -> get_copyright(This,cpyrght)

#define ITIMEMediaPlayer_get_currTime(This,time)	\
    (This)->lpVtbl -> get_currTime(This,time)

#define ITIMEMediaPlayer_get_customObject(This,disp)	\
    (This)->lpVtbl -> get_customObject(This,disp)

#define ITIMEMediaPlayer_get_hasAudio(This,b)	\
    (This)->lpVtbl -> get_hasAudio(This,b)

#define ITIMEMediaPlayer_get_hasVisual(This,b)	\
    (This)->lpVtbl -> get_hasVisual(This,b)

#define ITIMEMediaPlayer_get_mediaDur(This,dur)	\
    (This)->lpVtbl -> get_mediaDur(This,dur)

#define ITIMEMediaPlayer_get_mediaHeight(This,height)	\
    (This)->lpVtbl -> get_mediaHeight(This,height)

#define ITIMEMediaPlayer_get_mediaWidth(This,width)	\
    (This)->lpVtbl -> get_mediaWidth(This,width)

#define ITIMEMediaPlayer_get_playList(This,pPlayList)	\
    (This)->lpVtbl -> get_playList(This,pPlayList)

#define ITIMEMediaPlayer_get_rating(This,rate)	\
    (This)->lpVtbl -> get_rating(This,rate)

#define ITIMEMediaPlayer_get_state(This,ts)	\
    (This)->lpVtbl -> get_state(This,ts)

#define ITIMEMediaPlayer_get_title(This,name)	\
    (This)->lpVtbl -> get_title(This,name)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_Init_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This,
    ITIMEMediaPlayerSite __RPC_FAR *mpsite);


void __RPC_STUB ITIMEMediaPlayer_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_Detach_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This);


void __RPC_STUB ITIMEMediaPlayer_Detach_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_begin_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This);


void __RPC_STUB ITIMEMediaPlayer_begin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_end_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This);


void __RPC_STUB ITIMEMediaPlayer_end_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_resume_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This);


void __RPC_STUB ITIMEMediaPlayer_resume_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_pause_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This);


void __RPC_STUB ITIMEMediaPlayer_pause_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_repeat_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This);


void __RPC_STUB ITIMEMediaPlayer_repeat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_reset_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This);


void __RPC_STUB ITIMEMediaPlayer_reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_seek_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This,
    /* [in] */ double time);


void __RPC_STUB ITIMEMediaPlayer_seek_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_put_src_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This,
    /* [in] */ BSTR url);


void __RPC_STUB ITIMEMediaPlayer_put_src_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_put_clipBegin_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This,
    /* [in] */ VARIANT b);


void __RPC_STUB ITIMEMediaPlayer_put_clipBegin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_put_clipEnd_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This,
    /* [in] */ VARIANT e);


void __RPC_STUB ITIMEMediaPlayer_put_clipEnd_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_get_abstract_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *abs);


void __RPC_STUB ITIMEMediaPlayer_get_abstract_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_get_author_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *auth);


void __RPC_STUB ITIMEMediaPlayer_get_author_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_get_canPause_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b);


void __RPC_STUB ITIMEMediaPlayer_get_canPause_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_get_canSeek_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b);


void __RPC_STUB ITIMEMediaPlayer_get_canSeek_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_get_clipDur_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This,
    /* [retval][out] */ double __RPC_FAR *dur);


void __RPC_STUB ITIMEMediaPlayer_get_clipDur_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_get_copyright_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *cpyrght);


void __RPC_STUB ITIMEMediaPlayer_get_copyright_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_get_currTime_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This,
    /* [retval][out] */ double __RPC_FAR *time);


void __RPC_STUB ITIMEMediaPlayer_get_currTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_get_customObject_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);


void __RPC_STUB ITIMEMediaPlayer_get_customObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_get_hasAudio_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b);


void __RPC_STUB ITIMEMediaPlayer_get_hasAudio_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_get_hasVisual_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *b);


void __RPC_STUB ITIMEMediaPlayer_get_hasVisual_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_get_mediaDur_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This,
    /* [retval][out] */ double __RPC_FAR *dur);


void __RPC_STUB ITIMEMediaPlayer_get_mediaDur_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_get_mediaHeight_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *height);


void __RPC_STUB ITIMEMediaPlayer_get_mediaHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_get_mediaWidth_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *width);


void __RPC_STUB ITIMEMediaPlayer_get_mediaWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_get_playList_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This,
    /* [retval][out] */ ITIMEPlayList __RPC_FAR *__RPC_FAR *pPlayList);


void __RPC_STUB ITIMEMediaPlayer_get_playList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_get_rating_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *rate);


void __RPC_STUB ITIMEMediaPlayer_get_rating_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_get_state_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This,
    /* [retval][out] */ TimeState __RPC_FAR *ts);


void __RPC_STUB ITIMEMediaPlayer_get_state_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayer_get_title_Proxy( 
    ITIMEMediaPlayer __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *name);


void __RPC_STUB ITIMEMediaPlayer_get_title_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITIMEMediaPlayer_INTERFACE_DEFINED__ */


#ifndef __ITIMEMediaPlayerControl_INTERFACE_DEFINED__
#define __ITIMEMediaPlayerControl_INTERFACE_DEFINED__

/* interface ITIMEMediaPlayerControl */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITIMEMediaPlayerControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("897a99e7-f386-45c8-b51b-3a25bbcbba69")
    ITIMEMediaPlayerControl : public IUnknown
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getControl( 
            IUnknown __RPC_FAR *__RPC_FAR *control) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITIMEMediaPlayerControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITIMEMediaPlayerControl __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITIMEMediaPlayerControl __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITIMEMediaPlayerControl __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *getControl )( 
            ITIMEMediaPlayerControl __RPC_FAR * This,
            IUnknown __RPC_FAR *__RPC_FAR *control);
        
        END_INTERFACE
    } ITIMEMediaPlayerControlVtbl;

    interface ITIMEMediaPlayerControl
    {
        CONST_VTBL struct ITIMEMediaPlayerControlVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITIMEMediaPlayerControl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITIMEMediaPlayerControl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITIMEMediaPlayerControl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITIMEMediaPlayerControl_getControl(This,control)	\
    (This)->lpVtbl -> getControl(This,control)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE ITIMEMediaPlayerControl_getControl_Proxy( 
    ITIMEMediaPlayerControl __RPC_FAR * This,
    IUnknown __RPC_FAR *__RPC_FAR *control);


void __RPC_STUB ITIMEMediaPlayerControl_getControl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITIMEMediaPlayerControl_INTERFACE_DEFINED__ */

#endif /* __MSTIME_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


