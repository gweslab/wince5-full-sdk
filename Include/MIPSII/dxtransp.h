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
/* at Thu Jun 24 18:48:34 2004
 */
/* Compiler settings for .\dxtransp.idl:
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

#ifndef __dxtransp_h__
#define __dxtransp_h__

/* Forward Declarations */ 

#ifndef __IDXRasterizer_FWD_DEFINED__
#define __IDXRasterizer_FWD_DEFINED__
typedef interface IDXRasterizer IDXRasterizer;
#endif 	/* __IDXRasterizer_FWD_DEFINED__ */


#ifndef __IDXTFilterBehavior_FWD_DEFINED__
#define __IDXTFilterBehavior_FWD_DEFINED__
typedef interface IDXTFilterBehavior IDXTFilterBehavior;
#endif 	/* __IDXTFilterBehavior_FWD_DEFINED__ */


#ifndef __IDXTFilterBehaviorSite_FWD_DEFINED__
#define __IDXTFilterBehaviorSite_FWD_DEFINED__
typedef interface IDXTFilterBehaviorSite IDXTFilterBehaviorSite;
#endif 	/* __IDXTFilterBehaviorSite_FWD_DEFINED__ */


#ifndef __IDXTFilterCollection_FWD_DEFINED__
#define __IDXTFilterCollection_FWD_DEFINED__
typedef interface IDXTFilterCollection IDXTFilterCollection;
#endif 	/* __IDXTFilterCollection_FWD_DEFINED__ */


#ifndef __IDXTFilter_FWD_DEFINED__
#define __IDXTFilter_FWD_DEFINED__
typedef interface IDXTFilter IDXTFilter;
#endif 	/* __IDXTFilter_FWD_DEFINED__ */


#ifndef __IDXTFilterController_FWD_DEFINED__
#define __IDXTFilterController_FWD_DEFINED__
typedef interface IDXTFilterController IDXTFilterController;
#endif 	/* __IDXTFilterController_FWD_DEFINED__ */


#ifndef __IDXTRedirectFilterInit_FWD_DEFINED__
#define __IDXTRedirectFilterInit_FWD_DEFINED__
typedef interface IDXTRedirectFilterInit IDXTRedirectFilterInit;
#endif 	/* __IDXTRedirectFilterInit_FWD_DEFINED__ */


#ifndef __IDXTClipOrigin_FWD_DEFINED__
#define __IDXTClipOrigin_FWD_DEFINED__
typedef interface IDXTClipOrigin IDXTClipOrigin;
#endif 	/* __IDXTClipOrigin_FWD_DEFINED__ */


#ifndef __DXRasterizer_FWD_DEFINED__
#define __DXRasterizer_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXRasterizer DXRasterizer;
#else
typedef struct DXRasterizer DXRasterizer;
#endif /* __cplusplus */

#endif 	/* __DXRasterizer_FWD_DEFINED__ */


#ifndef __DXTFilterBehavior_FWD_DEFINED__
#define __DXTFilterBehavior_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTFilterBehavior DXTFilterBehavior;
#else
typedef struct DXTFilterBehavior DXTFilterBehavior;
#endif /* __cplusplus */

#endif 	/* __DXTFilterBehavior_FWD_DEFINED__ */


#ifndef __DXTFilterFactory_FWD_DEFINED__
#define __DXTFilterFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTFilterFactory DXTFilterFactory;
#else
typedef struct DXTFilterFactory DXTFilterFactory;
#endif /* __cplusplus */

#endif 	/* __DXTFilterFactory_FWD_DEFINED__ */


#ifndef __DXTFilterCollection_FWD_DEFINED__
#define __DXTFilterCollection_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTFilterCollection DXTFilterCollection;
#else
typedef struct DXTFilterCollection DXTFilterCollection;
#endif /* __cplusplus */

#endif 	/* __DXTFilterCollection_FWD_DEFINED__ */


/* header files for imported files */
#include "dxtrans.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_dxtransp_0000 */
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




typedef 
enum DXRASTERFILL
    {	DXRASTER_PEN	= 0,
	DXRASTER_BRUSH	= 1,
	DXRASTER_BACKGROUND	= 2
    }	DXRASTERFILL;

typedef struct DXRASTERSCANINFO
    {
    ULONG ulIndex;
    ULONG Row;
    const BYTE __RPC_FAR *pWeights;
    const DXRUNINFO __RPC_FAR *pRunInfo;
    ULONG cRunInfo;
    }	DXRASTERSCANINFO;

typedef struct DXRASTERPOINTINFO
    {
    DXOVERSAMPLEDESC Pixel;
    ULONG ulIndex;
    BYTE Weight;
    }	DXRASTERPOINTINFO;

typedef struct DXRASTERRECTINFO
    {
    ULONG ulIndex;
    RECT Rect;
    BYTE Weight;
    }	DXRASTERRECTINFO;



extern RPC_IF_HANDLE __MIDL_itf_dxtransp_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtransp_0000_v0_0_s_ifspec;

#ifndef __IDXRasterizer_INTERFACE_DEFINED__
#define __IDXRasterizer_INTERFACE_DEFINED__

/* interface IDXRasterizer */
/* [object][hidden][unique][uuid][local] */ 


EXTERN_C const IID IID_IDXRasterizer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9EA3B635-C37D-11d1-905E-00C04FD9189D")
    IDXRasterizer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetSurface( 
            /* [in] */ IDXSurface __RPC_FAR *pDXSurface) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSurface( 
            /* [out] */ IDXSurface __RPC_FAR *__RPC_FAR *ppDXSurface) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFill( 
            /* [in] */ ULONG ulIndex,
            /* [in] */ IDXSurface __RPC_FAR *pSurface,
            /* [in] */ const POINT __RPC_FAR *ppt,
            /* [in] */ DXSAMPLE FillColor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFill( 
            /* [in] */ ULONG ulIndex,
            /* [out] */ IDXSurface __RPC_FAR *__RPC_FAR *ppSurface,
            /* [out] */ POINT __RPC_FAR *ppt,
            /* [out] */ DXSAMPLE __RPC_FAR *pFillColor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginRendering( 
            /* [in] */ ULONG ulTimeOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRendering( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RenderScan( 
            /* [in] */ const DXRASTERSCANINFO __RPC_FAR *pScanInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPixel( 
            /* [in] */ DXRASTERPOINTINFO __RPC_FAR *pPointInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FillRect( 
            /* [in] */ const DXRASTERRECTINFO __RPC_FAR *pRectInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBounds( 
            /* [out] */ DXBNDS __RPC_FAR *pBounds) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXRasterizerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXRasterizer __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXRasterizer __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXRasterizer __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetSurface )( 
            IDXRasterizer __RPC_FAR * This,
            /* [in] */ IDXSurface __RPC_FAR *pDXSurface);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSurface )( 
            IDXRasterizer __RPC_FAR * This,
            /* [out] */ IDXSurface __RPC_FAR *__RPC_FAR *ppDXSurface);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetFill )( 
            IDXRasterizer __RPC_FAR * This,
            /* [in] */ ULONG ulIndex,
            /* [in] */ IDXSurface __RPC_FAR *pSurface,
            /* [in] */ const POINT __RPC_FAR *ppt,
            /* [in] */ DXSAMPLE FillColor);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFill )( 
            IDXRasterizer __RPC_FAR * This,
            /* [in] */ ULONG ulIndex,
            /* [out] */ IDXSurface __RPC_FAR *__RPC_FAR *ppSurface,
            /* [out] */ POINT __RPC_FAR *ppt,
            /* [out] */ DXSAMPLE __RPC_FAR *pFillColor);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *BeginRendering )( 
            IDXRasterizer __RPC_FAR * This,
            /* [in] */ ULONG ulTimeOut);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EndRendering )( 
            IDXRasterizer __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RenderScan )( 
            IDXRasterizer __RPC_FAR * This,
            /* [in] */ const DXRASTERSCANINFO __RPC_FAR *pScanInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetPixel )( 
            IDXRasterizer __RPC_FAR * This,
            /* [in] */ DXRASTERPOINTINFO __RPC_FAR *pPointInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FillRect )( 
            IDXRasterizer __RPC_FAR * This,
            /* [in] */ const DXRASTERRECTINFO __RPC_FAR *pRectInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetBounds )( 
            IDXRasterizer __RPC_FAR * This,
            /* [out] */ DXBNDS __RPC_FAR *pBounds);
        
        END_INTERFACE
    } IDXRasterizerVtbl;

    interface IDXRasterizer
    {
        CONST_VTBL struct IDXRasterizerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXRasterizer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXRasterizer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXRasterizer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXRasterizer_SetSurface(This,pDXSurface)	\
    (This)->lpVtbl -> SetSurface(This,pDXSurface)

#define IDXRasterizer_GetSurface(This,ppDXSurface)	\
    (This)->lpVtbl -> GetSurface(This,ppDXSurface)

#define IDXRasterizer_SetFill(This,ulIndex,pSurface,ppt,FillColor)	\
    (This)->lpVtbl -> SetFill(This,ulIndex,pSurface,ppt,FillColor)

#define IDXRasterizer_GetFill(This,ulIndex,ppSurface,ppt,pFillColor)	\
    (This)->lpVtbl -> GetFill(This,ulIndex,ppSurface,ppt,pFillColor)

#define IDXRasterizer_BeginRendering(This,ulTimeOut)	\
    (This)->lpVtbl -> BeginRendering(This,ulTimeOut)

#define IDXRasterizer_EndRendering(This)	\
    (This)->lpVtbl -> EndRendering(This)

#define IDXRasterizer_RenderScan(This,pScanInfo)	\
    (This)->lpVtbl -> RenderScan(This,pScanInfo)

#define IDXRasterizer_SetPixel(This,pPointInfo)	\
    (This)->lpVtbl -> SetPixel(This,pPointInfo)

#define IDXRasterizer_FillRect(This,pRectInfo)	\
    (This)->lpVtbl -> FillRect(This,pRectInfo)

#define IDXRasterizer_GetBounds(This,pBounds)	\
    (This)->lpVtbl -> GetBounds(This,pBounds)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXRasterizer_SetSurface_Proxy( 
    IDXRasterizer __RPC_FAR * This,
    /* [in] */ IDXSurface __RPC_FAR *pDXSurface);


void __RPC_STUB IDXRasterizer_SetSurface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXRasterizer_GetSurface_Proxy( 
    IDXRasterizer __RPC_FAR * This,
    /* [out] */ IDXSurface __RPC_FAR *__RPC_FAR *ppDXSurface);


void __RPC_STUB IDXRasterizer_GetSurface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXRasterizer_SetFill_Proxy( 
    IDXRasterizer __RPC_FAR * This,
    /* [in] */ ULONG ulIndex,
    /* [in] */ IDXSurface __RPC_FAR *pSurface,
    /* [in] */ const POINT __RPC_FAR *ppt,
    /* [in] */ DXSAMPLE FillColor);


void __RPC_STUB IDXRasterizer_SetFill_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXRasterizer_GetFill_Proxy( 
    IDXRasterizer __RPC_FAR * This,
    /* [in] */ ULONG ulIndex,
    /* [out] */ IDXSurface __RPC_FAR *__RPC_FAR *ppSurface,
    /* [out] */ POINT __RPC_FAR *ppt,
    /* [out] */ DXSAMPLE __RPC_FAR *pFillColor);


void __RPC_STUB IDXRasterizer_GetFill_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXRasterizer_BeginRendering_Proxy( 
    IDXRasterizer __RPC_FAR * This,
    /* [in] */ ULONG ulTimeOut);


void __RPC_STUB IDXRasterizer_BeginRendering_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXRasterizer_EndRendering_Proxy( 
    IDXRasterizer __RPC_FAR * This);


void __RPC_STUB IDXRasterizer_EndRendering_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXRasterizer_RenderScan_Proxy( 
    IDXRasterizer __RPC_FAR * This,
    /* [in] */ const DXRASTERSCANINFO __RPC_FAR *pScanInfo);


void __RPC_STUB IDXRasterizer_RenderScan_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXRasterizer_SetPixel_Proxy( 
    IDXRasterizer __RPC_FAR * This,
    /* [in] */ DXRASTERPOINTINFO __RPC_FAR *pPointInfo);


void __RPC_STUB IDXRasterizer_SetPixel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXRasterizer_FillRect_Proxy( 
    IDXRasterizer __RPC_FAR * This,
    /* [in] */ const DXRASTERRECTINFO __RPC_FAR *pRectInfo);


void __RPC_STUB IDXRasterizer_FillRect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXRasterizer_GetBounds_Proxy( 
    IDXRasterizer __RPC_FAR * This,
    /* [out] */ DXBNDS __RPC_FAR *pBounds);


void __RPC_STUB IDXRasterizer_GetBounds_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXRasterizer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtransp_0177 */
/* [local] */ 

typedef 
enum DX2DXFORMOPS
    {	DX2DXO_IDENTITY	= 0,
	DX2DXO_TRANSLATE	= DX2DXO_IDENTITY + 1,
	DX2DXO_SCALE	= DX2DXO_TRANSLATE + 1,
	DX2DXO_SCALE_AND_TRANS	= DX2DXO_SCALE + 1,
	DX2DXO_GENERAL	= DX2DXO_SCALE_AND_TRANS + 1,
	DX2DXO_GENERAL_AND_TRANS	= DX2DXO_GENERAL + 1
    }	DX2DXFORMOPS;

typedef struct DX2DXFORM
    {
    FLOAT eM11;
    FLOAT eM12;
    FLOAT eM21;
    FLOAT eM22;
    FLOAT eDx;
    FLOAT eDy;
    DX2DXFORMOPS eOp;
    }	DX2DXFORM;

typedef struct DX2DXFORM __RPC_FAR *PDX2DXFORM;

typedef 
enum DX2DPOLYDRAW
    {	DX2D_WINDING_FILL	= 1L << 0,
	DX2D_NO_FLATTEN	= 1L << 1,
	DX2D_DO_GRID_FIT	= 1L << 2,
	DX2D_IS_RECT	= 1L << 3,
	DX2D_STROKE	= 1L << 4,
	DX2D_FILL	= 1L << 5,
	DX2D_UNUSED	= 0xffffffc0
    }	DX2DPOLYDRAW;

typedef struct DXFPOINT
    {
    FLOAT x;
    FLOAT y;
    }	DXFPOINT;

typedef 
enum DX2DPEN
    {	DX2D_PEN_DEFAULT	= 0,
	DX2D_PEN_WIDTH_IN_DISPLAY_COORDS	= 1L << 0,
	DX2D_PEN_UNUSED	= 0xfffffffe
    }	DX2DPEN;

typedef struct DXPEN
    {
    DXSAMPLE Color;
    float Width;
    DWORD Style;
    IDXSurface __RPC_FAR *pTexture;
    DXFPOINT TexturePos;
    DWORD dwFlags;
    }	DXPEN;

typedef struct DXBRUSH
    {
    DXSAMPLE Color;
    IDXSurface __RPC_FAR *pTexture;
    DXFPOINT TexturePos;
    }	DXBRUSH;

typedef 
enum DX2DGRADIENT
    {	DX2DGRAD_DEFAULT	= 0,
	DX2DGRAD_CLIPGRADIENT	= 1,
	DX2DGRAD_UNUSED	= 0xfffffffe
    }	DX2DGRADIENT;

typedef 
enum DXLOGFONTENUM
    {	DXLF_HEIGHT	= 1,
	DXLF_WIDTH	= 2,
	DXLF_ESC	= 4,
	DXLF_ORIENTATION	= 8,
	DXLF_WEIGHT	= 16,
	DXLF_ITALIC	= 32,
	DXLF_UNDERLINE	= 64,
	DXLF_STRIKEOUT	= 128,
	DXLF_CHARSET	= 256,
	DXLF_OUTPREC	= 512,
	DXLF_CLIPPREC	= 1024,
	DXLF_QUALITY	= 2048,
	DXLF_PITCHANDFAM	= 4096,
	DXLF_FACENAME	= 8192,
	DXLF_ALL	= 0x3fff
    }	DXLOGFONTENUM;

#if !defined(_WINGDI_) && !defined(UNDER_CE)
typedef struct tagLOGFONTA
    {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    CHAR lfFaceName[ 32 ];
    }	LOGFONTA;

typedef struct tagLOGFONTW
    {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    WCHAR lfFaceName[ 32 ];
    }	LOGFONTW;

typedef LOGFONTW LOGFONT;

#endif
typedef 
enum DXTFILTERCAPS
    {	DXTFILTERCAPS_IDXSURFACE	= 1L << 0,
	DXTFILTERCAPS_IDXEFFECT	= 1L << 1,
	DXTFILTERCAPS_INPUT1REQ	= 1L << 2,
	DXTFILTERCAPS_INPUT2REQ	= 1L << 3,
	DXTFILTERCAPS_INPUT1OPT	= 1L << 4,
	DXTFILTERCAPS_INPUT2OPT	= 1L << 5,
	DXTFILTERCAPS_PRIV_MATRIX	= 1L << 6,
	DXTFILTERCAPS_MAX	= 1L << 7
    }	DXTFILTERCAPS;

typedef void __RPC_FAR *HFILTER;

typedef 
enum DXT_FILTER_TYPE_FLAGS
    {	DXTFTF_INVALID	= 0,
	DXTFTF_CSS	= 1L << 0,
	DXTFTF_PRIVATE	= 1L << 1,
	DXTFTF_ALLMODIFIERS	= DXTFTF_CSS | DXTFTF_PRIVATE,
	DXTFTF_SURFACE	= 1L << 16,
	DXTFTF_ZEROINPUT	= 1L << 17,
	DXTFTF_FILTER	= 1L << 18,
	DXTFTF_ALLTYPES	= DXTFTF_SURFACE | DXTFTF_ZEROINPUT | DXTFTF_FILTER
    }	DXT_FILTER_TYPE_FLAGS;



extern RPC_IF_HANDLE __MIDL_itf_dxtransp_0177_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtransp_0177_v0_0_s_ifspec;

#ifndef __IDXTFilterBehavior_INTERFACE_DEFINED__
#define __IDXTFilterBehavior_INTERFACE_DEFINED__

/* interface IDXTFilterBehavior */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXTFilterBehavior;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("14D7DDDD-ACA2-4E45-9504-3808ABEB4F92")
    IDXTFilterBehavior : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            IDXTransformFactory __RPC_FAR *pDXTransformFactory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFilterCollection( 
            IDXTFilterCollection __RPC_FAR *__RPC_FAR *ppDXTFilterCollection) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LockFilterChainForEdit( 
            DWORD __RPC_FAR *pdwKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddFilterFromBSTR( 
            const BSTR bstrFilterString,
            const DWORD dwFlags,
            DWORD __RPC_FAR *const pdwFilterType,
            HFILTER __RPC_FAR *const phFilter) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DestroyFilter( 
            HFILTER hFilter) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnlockFilterChain( 
            DWORD dwKey) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTFilterBehaviorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTFilterBehavior __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTFilterBehavior __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTFilterBehavior __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Initialize )( 
            IDXTFilterBehavior __RPC_FAR * This,
            IDXTransformFactory __RPC_FAR *pDXTransformFactory);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFilterCollection )( 
            IDXTFilterBehavior __RPC_FAR * This,
            IDXTFilterCollection __RPC_FAR *__RPC_FAR *ppDXTFilterCollection);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LockFilterChainForEdit )( 
            IDXTFilterBehavior __RPC_FAR * This,
            DWORD __RPC_FAR *pdwKey);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddFilterFromBSTR )( 
            IDXTFilterBehavior __RPC_FAR * This,
            const BSTR bstrFilterString,
            const DWORD dwFlags,
            DWORD __RPC_FAR *const pdwFilterType,
            HFILTER __RPC_FAR *const phFilter);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DestroyFilter )( 
            IDXTFilterBehavior __RPC_FAR * This,
            HFILTER hFilter);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *UnlockFilterChain )( 
            IDXTFilterBehavior __RPC_FAR * This,
            DWORD dwKey);
        
        END_INTERFACE
    } IDXTFilterBehaviorVtbl;

    interface IDXTFilterBehavior
    {
        CONST_VTBL struct IDXTFilterBehaviorVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTFilterBehavior_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTFilterBehavior_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTFilterBehavior_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTFilterBehavior_Initialize(This,pDXTransformFactory)	\
    (This)->lpVtbl -> Initialize(This,pDXTransformFactory)

#define IDXTFilterBehavior_GetFilterCollection(This,ppDXTFilterCollection)	\
    (This)->lpVtbl -> GetFilterCollection(This,ppDXTFilterCollection)

#define IDXTFilterBehavior_LockFilterChainForEdit(This,pdwKey)	\
    (This)->lpVtbl -> LockFilterChainForEdit(This,pdwKey)

#define IDXTFilterBehavior_AddFilterFromBSTR(This,bstrFilterString,dwFlags,pdwFilterType,phFilter)	\
    (This)->lpVtbl -> AddFilterFromBSTR(This,bstrFilterString,dwFlags,pdwFilterType,phFilter)

#define IDXTFilterBehavior_DestroyFilter(This,hFilter)	\
    (This)->lpVtbl -> DestroyFilter(This,hFilter)

#define IDXTFilterBehavior_UnlockFilterChain(This,dwKey)	\
    (This)->lpVtbl -> UnlockFilterChain(This,dwKey)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXTFilterBehavior_Initialize_Proxy( 
    IDXTFilterBehavior __RPC_FAR * This,
    IDXTransformFactory __RPC_FAR *pDXTransformFactory);


void __RPC_STUB IDXTFilterBehavior_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilterBehavior_GetFilterCollection_Proxy( 
    IDXTFilterBehavior __RPC_FAR * This,
    IDXTFilterCollection __RPC_FAR *__RPC_FAR *ppDXTFilterCollection);


void __RPC_STUB IDXTFilterBehavior_GetFilterCollection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilterBehavior_LockFilterChainForEdit_Proxy( 
    IDXTFilterBehavior __RPC_FAR * This,
    DWORD __RPC_FAR *pdwKey);


void __RPC_STUB IDXTFilterBehavior_LockFilterChainForEdit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilterBehavior_AddFilterFromBSTR_Proxy( 
    IDXTFilterBehavior __RPC_FAR * This,
    const BSTR bstrFilterString,
    const DWORD dwFlags,
    DWORD __RPC_FAR *const pdwFilterType,
    HFILTER __RPC_FAR *const phFilter);


void __RPC_STUB IDXTFilterBehavior_AddFilterFromBSTR_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilterBehavior_DestroyFilter_Proxy( 
    IDXTFilterBehavior __RPC_FAR * This,
    HFILTER hFilter);


void __RPC_STUB IDXTFilterBehavior_DestroyFilter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilterBehavior_UnlockFilterChain_Proxy( 
    IDXTFilterBehavior __RPC_FAR * This,
    DWORD dwKey);


void __RPC_STUB IDXTFilterBehavior_UnlockFilterChain_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTFilterBehavior_INTERFACE_DEFINED__ */


#ifndef __IDXTFilterBehaviorSite_INTERFACE_DEFINED__
#define __IDXTFilterBehaviorSite_INTERFACE_DEFINED__

/* interface IDXTFilterBehaviorSite */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXTFilterBehaviorSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("909B23C2-9018-499f-A86D-4E7DA937E931")
    IDXTFilterBehaviorSite : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InvalidateElement( 
            BOOL fInvalidateSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InvalidateFilterChain( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExecuteFilterChain( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FireOnFilterChangeEvent( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnFilterChangeStatus( 
            DXTFILTER_STATUS eStatusOld,
            DXTFILTER_STATUS eStatusNew) = 0;
        
        virtual void STDMETHODCALLTYPE OnFatalError( 
            HRESULT hrFatalError) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTimer( 
            void __RPC_FAR *__RPC_FAR *ppvTimer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnsureView( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTFilterBehaviorSiteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTFilterBehaviorSite __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTFilterBehaviorSite __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTFilterBehaviorSite __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InvalidateElement )( 
            IDXTFilterBehaviorSite __RPC_FAR * This,
            BOOL fInvalidateSize);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InvalidateFilterChain )( 
            IDXTFilterBehaviorSite __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ExecuteFilterChain )( 
            IDXTFilterBehaviorSite __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FireOnFilterChangeEvent )( 
            IDXTFilterBehaviorSite __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnFilterChangeStatus )( 
            IDXTFilterBehaviorSite __RPC_FAR * This,
            DXTFILTER_STATUS eStatusOld,
            DXTFILTER_STATUS eStatusNew);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *OnFatalError )( 
            IDXTFilterBehaviorSite __RPC_FAR * This,
            HRESULT hrFatalError);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTimer )( 
            IDXTFilterBehaviorSite __RPC_FAR * This,
            void __RPC_FAR *__RPC_FAR *ppvTimer);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnsureView )( 
            IDXTFilterBehaviorSite __RPC_FAR * This);
        
        END_INTERFACE
    } IDXTFilterBehaviorSiteVtbl;

    interface IDXTFilterBehaviorSite
    {
        CONST_VTBL struct IDXTFilterBehaviorSiteVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTFilterBehaviorSite_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTFilterBehaviorSite_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTFilterBehaviorSite_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTFilterBehaviorSite_InvalidateElement(This,fInvalidateSize)	\
    (This)->lpVtbl -> InvalidateElement(This,fInvalidateSize)

#define IDXTFilterBehaviorSite_InvalidateFilterChain(This)	\
    (This)->lpVtbl -> InvalidateFilterChain(This)

#define IDXTFilterBehaviorSite_ExecuteFilterChain(This)	\
    (This)->lpVtbl -> ExecuteFilterChain(This)

#define IDXTFilterBehaviorSite_FireOnFilterChangeEvent(This)	\
    (This)->lpVtbl -> FireOnFilterChangeEvent(This)

#define IDXTFilterBehaviorSite_OnFilterChangeStatus(This,eStatusOld,eStatusNew)	\
    (This)->lpVtbl -> OnFilterChangeStatus(This,eStatusOld,eStatusNew)

#define IDXTFilterBehaviorSite_OnFatalError(This,hrFatalError)	\
    (This)->lpVtbl -> OnFatalError(This,hrFatalError)

#define IDXTFilterBehaviorSite_GetTimer(This,ppvTimer)	\
    (This)->lpVtbl -> GetTimer(This,ppvTimer)

#define IDXTFilterBehaviorSite_EnsureView(This)	\
    (This)->lpVtbl -> EnsureView(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXTFilterBehaviorSite_InvalidateElement_Proxy( 
    IDXTFilterBehaviorSite __RPC_FAR * This,
    BOOL fInvalidateSize);


void __RPC_STUB IDXTFilterBehaviorSite_InvalidateElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilterBehaviorSite_InvalidateFilterChain_Proxy( 
    IDXTFilterBehaviorSite __RPC_FAR * This);


void __RPC_STUB IDXTFilterBehaviorSite_InvalidateFilterChain_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilterBehaviorSite_ExecuteFilterChain_Proxy( 
    IDXTFilterBehaviorSite __RPC_FAR * This);


void __RPC_STUB IDXTFilterBehaviorSite_ExecuteFilterChain_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilterBehaviorSite_FireOnFilterChangeEvent_Proxy( 
    IDXTFilterBehaviorSite __RPC_FAR * This);


void __RPC_STUB IDXTFilterBehaviorSite_FireOnFilterChangeEvent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilterBehaviorSite_OnFilterChangeStatus_Proxy( 
    IDXTFilterBehaviorSite __RPC_FAR * This,
    DXTFILTER_STATUS eStatusOld,
    DXTFILTER_STATUS eStatusNew);


void __RPC_STUB IDXTFilterBehaviorSite_OnFilterChangeStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


void STDMETHODCALLTYPE IDXTFilterBehaviorSite_OnFatalError_Proxy( 
    IDXTFilterBehaviorSite __RPC_FAR * This,
    HRESULT hrFatalError);


void __RPC_STUB IDXTFilterBehaviorSite_OnFatalError_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilterBehaviorSite_GetTimer_Proxy( 
    IDXTFilterBehaviorSite __RPC_FAR * This,
    void __RPC_FAR *__RPC_FAR *ppvTimer);


void __RPC_STUB IDXTFilterBehaviorSite_GetTimer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilterBehaviorSite_EnsureView_Proxy( 
    IDXTFilterBehaviorSite __RPC_FAR * This);


void __RPC_STUB IDXTFilterBehaviorSite_EnsureView_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTFilterBehaviorSite_INTERFACE_DEFINED__ */


#ifndef __IDXTFilterCollection_INTERFACE_DEFINED__
#define __IDXTFilterCollection_INTERFACE_DEFINED__

/* interface IDXTFilterCollection */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXTFilterCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("22B07B33-8BFB-49d4-9B90-0938370C9019")
    IDXTFilterCollection : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Init( 
            const IDXTFilterBehavior __RPC_FAR *pDXTFilterBehavior) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddFilter( 
            const BSTR bstrFilterString,
            const DWORD dwFlags,
            DWORD __RPC_FAR *const pdwFilterType,
            HFILTER __RPC_FAR *const phFilter) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveFilter( 
            const HFILTER hFilter) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveFilters( 
            const DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFilterController( 
            const HFILTER hFilter,
            IDXTFilterController __RPC_FAR *__RPC_FAR *const ppDXTFilterController) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTFilterCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTFilterCollection __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTFilterCollection __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTFilterCollection __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Init )( 
            IDXTFilterCollection __RPC_FAR * This,
            const IDXTFilterBehavior __RPC_FAR *pDXTFilterBehavior);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddFilter )( 
            IDXTFilterCollection __RPC_FAR * This,
            const BSTR bstrFilterString,
            const DWORD dwFlags,
            DWORD __RPC_FAR *const pdwFilterType,
            HFILTER __RPC_FAR *const phFilter);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RemoveFilter )( 
            IDXTFilterCollection __RPC_FAR * This,
            const HFILTER hFilter);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RemoveFilters )( 
            IDXTFilterCollection __RPC_FAR * This,
            const DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFilterController )( 
            IDXTFilterCollection __RPC_FAR * This,
            const HFILTER hFilter,
            IDXTFilterController __RPC_FAR *__RPC_FAR *const ppDXTFilterController);
        
        END_INTERFACE
    } IDXTFilterCollectionVtbl;

    interface IDXTFilterCollection
    {
        CONST_VTBL struct IDXTFilterCollectionVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTFilterCollection_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTFilterCollection_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTFilterCollection_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTFilterCollection_Init(This,pDXTFilterBehavior)	\
    (This)->lpVtbl -> Init(This,pDXTFilterBehavior)

#define IDXTFilterCollection_AddFilter(This,bstrFilterString,dwFlags,pdwFilterType,phFilter)	\
    (This)->lpVtbl -> AddFilter(This,bstrFilterString,dwFlags,pdwFilterType,phFilter)

#define IDXTFilterCollection_RemoveFilter(This,hFilter)	\
    (This)->lpVtbl -> RemoveFilter(This,hFilter)

#define IDXTFilterCollection_RemoveFilters(This,dwFlags)	\
    (This)->lpVtbl -> RemoveFilters(This,dwFlags)

#define IDXTFilterCollection_GetFilterController(This,hFilter,ppDXTFilterController)	\
    (This)->lpVtbl -> GetFilterController(This,hFilter,ppDXTFilterController)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXTFilterCollection_Init_Proxy( 
    IDXTFilterCollection __RPC_FAR * This,
    const IDXTFilterBehavior __RPC_FAR *pDXTFilterBehavior);


void __RPC_STUB IDXTFilterCollection_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilterCollection_AddFilter_Proxy( 
    IDXTFilterCollection __RPC_FAR * This,
    const BSTR bstrFilterString,
    const DWORD dwFlags,
    DWORD __RPC_FAR *const pdwFilterType,
    HFILTER __RPC_FAR *const phFilter);


void __RPC_STUB IDXTFilterCollection_AddFilter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilterCollection_RemoveFilter_Proxy( 
    IDXTFilterCollection __RPC_FAR * This,
    const HFILTER hFilter);


void __RPC_STUB IDXTFilterCollection_RemoveFilter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilterCollection_RemoveFilters_Proxy( 
    IDXTFilterCollection __RPC_FAR * This,
    const DWORD dwFlags);


void __RPC_STUB IDXTFilterCollection_RemoveFilters_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilterCollection_GetFilterController_Proxy( 
    IDXTFilterCollection __RPC_FAR * This,
    const HFILTER hFilter,
    IDXTFilterController __RPC_FAR *__RPC_FAR *const ppDXTFilterController);


void __RPC_STUB IDXTFilterCollection_GetFilterController_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTFilterCollection_INTERFACE_DEFINED__ */


#ifndef __IDXTFilter_INTERFACE_DEFINED__
#define __IDXTFilter_INTERFACE_DEFINED__

/* interface IDXTFilter */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXTFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6187E5A2-A445-4608-8FC0-BE7A6C8DB386")
    IDXTFilter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IDXTransform __RPC_FAR *pDXTransform,
            /* [in] */ IDXSurfaceFactory __RPC_FAR *pDXSurfaceFactory,
            /* [in] */ IDXTFilterBehaviorSite __RPC_FAR *pDXTFilterBehaviorSite,
            /* [in] */ DWORD dwFilterCaps,
            /* [in] */ BOOL fUsesOldStyleFilterName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputSurface( 
            /* [in] */ IDXSurface __RPC_FAR *pDXSurface) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOutputSurface( 
            /* [in] */ IDXSurface __RPC_FAR *pDXSurface) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOutputSurface( 
            /* [out] */ IDXSurface __RPC_FAR *__RPC_FAR *ppDXSurface) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MapBoundsIn2Out( 
            /* [in] */ DXBNDS __RPC_FAR *pbndsIn,
            /* [out][in] */ DXBNDS __RPC_FAR *pbndsOut,
            /* [in] */ BOOL fResetOutputSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MapBoundsOut2In( 
            /* [in] */ DXBNDS __RPC_FAR *pbndsOut,
            /* [out][in] */ DXBNDS __RPC_FAR *pbndsIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Execute( 
            /* [in] */ DXBNDS __RPC_FAR *pbndsPortion,
            /* [in] */ DXVEC __RPC_FAR *pvecPlacement,
            /* [in] */ BOOL fFireFilterChange) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMiscFlags( 
            /* [in] */ DWORD dwMiscFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HitTest( 
            /* [in] */ const DXVEC __RPC_FAR *pvecOut,
            /* [out][in] */ BOOL __RPC_FAR *pfInactiveInputHit,
            /* [out][in] */ DXVEC __RPC_FAR *pvecIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Detach( void) = 0;
        
        virtual BOOL STDMETHODCALLTYPE IsEnabled( void) = 0;
        
        virtual void STDMETHODCALLTYPE HardDisable( 
            HRESULT hrHardDisable) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTFilter __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTFilter __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTFilter __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Initialize )( 
            IDXTFilter __RPC_FAR * This,
            /* [in] */ IDXTransform __RPC_FAR *pDXTransform,
            /* [in] */ IDXSurfaceFactory __RPC_FAR *pDXSurfaceFactory,
            /* [in] */ IDXTFilterBehaviorSite __RPC_FAR *pDXTFilterBehaviorSite,
            /* [in] */ DWORD dwFilterCaps,
            /* [in] */ BOOL fUsesOldStyleFilterName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetInputSurface )( 
            IDXTFilter __RPC_FAR * This,
            /* [in] */ IDXSurface __RPC_FAR *pDXSurface);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetOutputSurface )( 
            IDXTFilter __RPC_FAR * This,
            /* [in] */ IDXSurface __RPC_FAR *pDXSurface);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetOutputSurface )( 
            IDXTFilter __RPC_FAR * This,
            /* [out] */ IDXSurface __RPC_FAR *__RPC_FAR *ppDXSurface);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MapBoundsIn2Out )( 
            IDXTFilter __RPC_FAR * This,
            /* [in] */ DXBNDS __RPC_FAR *pbndsIn,
            /* [out][in] */ DXBNDS __RPC_FAR *pbndsOut,
            /* [in] */ BOOL fResetOutputSize);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MapBoundsOut2In )( 
            IDXTFilter __RPC_FAR * This,
            /* [in] */ DXBNDS __RPC_FAR *pbndsOut,
            /* [out][in] */ DXBNDS __RPC_FAR *pbndsIn);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Execute )( 
            IDXTFilter __RPC_FAR * This,
            /* [in] */ DXBNDS __RPC_FAR *pbndsPortion,
            /* [in] */ DXVEC __RPC_FAR *pvecPlacement,
            /* [in] */ BOOL fFireFilterChange);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetMiscFlags )( 
            IDXTFilter __RPC_FAR * This,
            /* [in] */ DWORD dwMiscFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *HitTest )( 
            IDXTFilter __RPC_FAR * This,
            /* [in] */ const DXVEC __RPC_FAR *pvecOut,
            /* [out][in] */ BOOL __RPC_FAR *pfInactiveInputHit,
            /* [out][in] */ DXVEC __RPC_FAR *pvecIn);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Detach )( 
            IDXTFilter __RPC_FAR * This);
        
        BOOL ( STDMETHODCALLTYPE __RPC_FAR *IsEnabled )( 
            IDXTFilter __RPC_FAR * This);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *HardDisable )( 
            IDXTFilter __RPC_FAR * This,
            HRESULT hrHardDisable);
        
        END_INTERFACE
    } IDXTFilterVtbl;

    interface IDXTFilter
    {
        CONST_VTBL struct IDXTFilterVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTFilter_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTFilter_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTFilter_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTFilter_Initialize(This,pDXTransform,pDXSurfaceFactory,pDXTFilterBehaviorSite,dwFilterCaps,fUsesOldStyleFilterName)	\
    (This)->lpVtbl -> Initialize(This,pDXTransform,pDXSurfaceFactory,pDXTFilterBehaviorSite,dwFilterCaps,fUsesOldStyleFilterName)

#define IDXTFilter_SetInputSurface(This,pDXSurface)	\
    (This)->lpVtbl -> SetInputSurface(This,pDXSurface)

#define IDXTFilter_SetOutputSurface(This,pDXSurface)	\
    (This)->lpVtbl -> SetOutputSurface(This,pDXSurface)

#define IDXTFilter_GetOutputSurface(This,ppDXSurface)	\
    (This)->lpVtbl -> GetOutputSurface(This,ppDXSurface)

#define IDXTFilter_MapBoundsIn2Out(This,pbndsIn,pbndsOut,fResetOutputSize)	\
    (This)->lpVtbl -> MapBoundsIn2Out(This,pbndsIn,pbndsOut,fResetOutputSize)

#define IDXTFilter_MapBoundsOut2In(This,pbndsOut,pbndsIn)	\
    (This)->lpVtbl -> MapBoundsOut2In(This,pbndsOut,pbndsIn)

#define IDXTFilter_Execute(This,pbndsPortion,pvecPlacement,fFireFilterChange)	\
    (This)->lpVtbl -> Execute(This,pbndsPortion,pvecPlacement,fFireFilterChange)

#define IDXTFilter_SetMiscFlags(This,dwMiscFlags)	\
    (This)->lpVtbl -> SetMiscFlags(This,dwMiscFlags)

#define IDXTFilter_HitTest(This,pvecOut,pfInactiveInputHit,pvecIn)	\
    (This)->lpVtbl -> HitTest(This,pvecOut,pfInactiveInputHit,pvecIn)

#define IDXTFilter_Detach(This)	\
    (This)->lpVtbl -> Detach(This)

#define IDXTFilter_IsEnabled(This)	\
    (This)->lpVtbl -> IsEnabled(This)

#define IDXTFilter_HardDisable(This,hrHardDisable)	\
    (This)->lpVtbl -> HardDisable(This,hrHardDisable)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXTFilter_Initialize_Proxy( 
    IDXTFilter __RPC_FAR * This,
    /* [in] */ IDXTransform __RPC_FAR *pDXTransform,
    /* [in] */ IDXSurfaceFactory __RPC_FAR *pDXSurfaceFactory,
    /* [in] */ IDXTFilterBehaviorSite __RPC_FAR *pDXTFilterBehaviorSite,
    /* [in] */ DWORD dwFilterCaps,
    /* [in] */ BOOL fUsesOldStyleFilterName);


void __RPC_STUB IDXTFilter_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilter_SetInputSurface_Proxy( 
    IDXTFilter __RPC_FAR * This,
    /* [in] */ IDXSurface __RPC_FAR *pDXSurface);


void __RPC_STUB IDXTFilter_SetInputSurface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilter_SetOutputSurface_Proxy( 
    IDXTFilter __RPC_FAR * This,
    /* [in] */ IDXSurface __RPC_FAR *pDXSurface);


void __RPC_STUB IDXTFilter_SetOutputSurface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilter_GetOutputSurface_Proxy( 
    IDXTFilter __RPC_FAR * This,
    /* [out] */ IDXSurface __RPC_FAR *__RPC_FAR *ppDXSurface);


void __RPC_STUB IDXTFilter_GetOutputSurface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilter_MapBoundsIn2Out_Proxy( 
    IDXTFilter __RPC_FAR * This,
    /* [in] */ DXBNDS __RPC_FAR *pbndsIn,
    /* [out][in] */ DXBNDS __RPC_FAR *pbndsOut,
    /* [in] */ BOOL fResetOutputSize);


void __RPC_STUB IDXTFilter_MapBoundsIn2Out_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilter_MapBoundsOut2In_Proxy( 
    IDXTFilter __RPC_FAR * This,
    /* [in] */ DXBNDS __RPC_FAR *pbndsOut,
    /* [out][in] */ DXBNDS __RPC_FAR *pbndsIn);


void __RPC_STUB IDXTFilter_MapBoundsOut2In_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilter_Execute_Proxy( 
    IDXTFilter __RPC_FAR * This,
    /* [in] */ DXBNDS __RPC_FAR *pbndsPortion,
    /* [in] */ DXVEC __RPC_FAR *pvecPlacement,
    /* [in] */ BOOL fFireFilterChange);


void __RPC_STUB IDXTFilter_Execute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilter_SetMiscFlags_Proxy( 
    IDXTFilter __RPC_FAR * This,
    /* [in] */ DWORD dwMiscFlags);


void __RPC_STUB IDXTFilter_SetMiscFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilter_HitTest_Proxy( 
    IDXTFilter __RPC_FAR * This,
    /* [in] */ const DXVEC __RPC_FAR *pvecOut,
    /* [out][in] */ BOOL __RPC_FAR *pfInactiveInputHit,
    /* [out][in] */ DXVEC __RPC_FAR *pvecIn);


void __RPC_STUB IDXTFilter_HitTest_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilter_Detach_Proxy( 
    IDXTFilter __RPC_FAR * This);


void __RPC_STUB IDXTFilter_Detach_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


BOOL STDMETHODCALLTYPE IDXTFilter_IsEnabled_Proxy( 
    IDXTFilter __RPC_FAR * This);


void __RPC_STUB IDXTFilter_IsEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


void STDMETHODCALLTYPE IDXTFilter_HardDisable_Proxy( 
    IDXTFilter __RPC_FAR * This,
    HRESULT hrHardDisable);


void __RPC_STUB IDXTFilter_HardDisable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtransp_0181 */
/* [local] */ 

typedef 
enum DXT_QUICK_APPLY_TYPE
    {	DXTQAT_TransitionIn	= 0,
	DXTQAT_TransitionOut	= DXTQAT_TransitionIn + 1,
	DXTQAT_TransitionFromElement	= DXTQAT_TransitionOut + 1,
	DXTQAT_TransitionToElement	= DXTQAT_TransitionFromElement + 1
    }	DXT_QUICK_APPLY_TYPE;



extern RPC_IF_HANDLE __MIDL_itf_dxtransp_0181_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtransp_0181_v0_0_s_ifspec;

#ifndef __IDXTFilterController_INTERFACE_DEFINED__
#define __IDXTFilterController_INTERFACE_DEFINED__

/* interface IDXTFilterController */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXTFilterController;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5CF315F2-273D-47B6-B9ED-F75DC3B0150B")
    IDXTFilterController : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetProgress( 
            float flProgress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetEnabled( 
            BOOL fEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFilterControlsVisibility( 
            BOOL fFilterControlsVisibility) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QuickApply( 
            DXT_QUICK_APPLY_TYPE dxtqat,
            IUnknown __RPC_FAR *punkInput) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTFilterControllerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTFilterController __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTFilterController __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTFilterController __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetProgress )( 
            IDXTFilterController __RPC_FAR * This,
            float flProgress);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetEnabled )( 
            IDXTFilterController __RPC_FAR * This,
            BOOL fEnabled);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetFilterControlsVisibility )( 
            IDXTFilterController __RPC_FAR * This,
            BOOL fFilterControlsVisibility);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QuickApply )( 
            IDXTFilterController __RPC_FAR * This,
            DXT_QUICK_APPLY_TYPE dxtqat,
            IUnknown __RPC_FAR *punkInput);
        
        END_INTERFACE
    } IDXTFilterControllerVtbl;

    interface IDXTFilterController
    {
        CONST_VTBL struct IDXTFilterControllerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTFilterController_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTFilterController_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTFilterController_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTFilterController_SetProgress(This,flProgress)	\
    (This)->lpVtbl -> SetProgress(This,flProgress)

#define IDXTFilterController_SetEnabled(This,fEnabled)	\
    (This)->lpVtbl -> SetEnabled(This,fEnabled)

#define IDXTFilterController_SetFilterControlsVisibility(This,fFilterControlsVisibility)	\
    (This)->lpVtbl -> SetFilterControlsVisibility(This,fFilterControlsVisibility)

#define IDXTFilterController_QuickApply(This,dxtqat,punkInput)	\
    (This)->lpVtbl -> QuickApply(This,dxtqat,punkInput)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXTFilterController_SetProgress_Proxy( 
    IDXTFilterController __RPC_FAR * This,
    float flProgress);


void __RPC_STUB IDXTFilterController_SetProgress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilterController_SetEnabled_Proxy( 
    IDXTFilterController __RPC_FAR * This,
    BOOL fEnabled);


void __RPC_STUB IDXTFilterController_SetEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilterController_SetFilterControlsVisibility_Proxy( 
    IDXTFilterController __RPC_FAR * This,
    BOOL fFilterControlsVisibility);


void __RPC_STUB IDXTFilterController_SetFilterControlsVisibility_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTFilterController_QuickApply_Proxy( 
    IDXTFilterController __RPC_FAR * This,
    DXT_QUICK_APPLY_TYPE dxtqat,
    IUnknown __RPC_FAR *punkInput);


void __RPC_STUB IDXTFilterController_QuickApply_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTFilterController_INTERFACE_DEFINED__ */


#ifndef __IDXTRedirectFilterInit_INTERFACE_DEFINED__
#define __IDXTRedirectFilterInit_INTERFACE_DEFINED__

/* interface IDXTRedirectFilterInit */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXTRedirectFilterInit;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D1A57094-21F7-4e6c-93E5-F5F77F748293")
    IDXTRedirectFilterInit : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetHTMLPaintSite( 
            void __RPC_FAR *pvHTMLPaintSite) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTRedirectFilterInitVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTRedirectFilterInit __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTRedirectFilterInit __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTRedirectFilterInit __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetHTMLPaintSite )( 
            IDXTRedirectFilterInit __RPC_FAR * This,
            void __RPC_FAR *pvHTMLPaintSite);
        
        END_INTERFACE
    } IDXTRedirectFilterInitVtbl;

    interface IDXTRedirectFilterInit
    {
        CONST_VTBL struct IDXTRedirectFilterInitVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTRedirectFilterInit_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTRedirectFilterInit_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTRedirectFilterInit_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTRedirectFilterInit_SetHTMLPaintSite(This,pvHTMLPaintSite)	\
    (This)->lpVtbl -> SetHTMLPaintSite(This,pvHTMLPaintSite)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXTRedirectFilterInit_SetHTMLPaintSite_Proxy( 
    IDXTRedirectFilterInit __RPC_FAR * This,
    void __RPC_FAR *pvHTMLPaintSite);


void __RPC_STUB IDXTRedirectFilterInit_SetHTMLPaintSite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTRedirectFilterInit_INTERFACE_DEFINED__ */


#ifndef __IDXTClipOrigin_INTERFACE_DEFINED__
#define __IDXTClipOrigin_INTERFACE_DEFINED__

/* interface IDXTClipOrigin */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXTClipOrigin;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EE1663D8-0988-4C48-9FD6-DB4450885668")
    IDXTClipOrigin : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetClipOrigin( 
            DXVEC __RPC_FAR *pvecClipOrigin) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTClipOriginVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTClipOrigin __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTClipOrigin __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTClipOrigin __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetClipOrigin )( 
            IDXTClipOrigin __RPC_FAR * This,
            DXVEC __RPC_FAR *pvecClipOrigin);
        
        END_INTERFACE
    } IDXTClipOriginVtbl;

    interface IDXTClipOrigin
    {
        CONST_VTBL struct IDXTClipOriginVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTClipOrigin_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTClipOrigin_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTClipOrigin_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTClipOrigin_GetClipOrigin(This,pvecClipOrigin)	\
    (This)->lpVtbl -> GetClipOrigin(This,pvecClipOrigin)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXTClipOrigin_GetClipOrigin_Proxy( 
    IDXTClipOrigin __RPC_FAR * This,
    DXVEC __RPC_FAR *pvecClipOrigin);


void __RPC_STUB IDXTClipOrigin_GetClipOrigin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTClipOrigin_INTERFACE_DEFINED__ */



#ifndef __DXTRANSPLib_LIBRARY_DEFINED__
#define __DXTRANSPLib_LIBRARY_DEFINED__

/* library DXTRANSPLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_DXTRANSPLib;

EXTERN_C const CLSID CLSID_DXRasterizer;

#ifdef __cplusplus

class DECLSPEC_UUID("8652CE55-9E80-11D1-9053-00C04FD9189D")
DXRasterizer;
#endif

EXTERN_C const CLSID CLSID_DXTFilterBehavior;

#ifdef __cplusplus

class DECLSPEC_UUID("649EEC1E-B579-4E8C-BB3B-4997F8426536")
DXTFilterBehavior;
#endif

EXTERN_C const CLSID CLSID_DXTFilterFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("81397204-F51A-4571-8D7B-DC030521AABD")
DXTFilterFactory;
#endif

EXTERN_C const CLSID CLSID_DXTFilterCollection;

#ifdef __cplusplus

class DECLSPEC_UUID("A7EE7F34-3BD1-427f-9231-F941E9B7E1FE")
DXTFilterCollection;
#endif
#endif /* __DXTRANSPLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


