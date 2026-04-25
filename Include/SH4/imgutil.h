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
/* at Thu Jun 24 18:48:44 2004
 */
/* Compiler settings for .\imgutil.idl:
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

#ifndef __imgutil_h__
#define __imgutil_h__

/* Forward Declarations */ 

#ifndef __ISniffStream_FWD_DEFINED__
#define __ISniffStream_FWD_DEFINED__
typedef interface ISniffStream ISniffStream;
#endif 	/* __ISniffStream_FWD_DEFINED__ */


#ifndef __IDithererImpl_FWD_DEFINED__
#define __IDithererImpl_FWD_DEFINED__
typedef interface IDithererImpl IDithererImpl;
#endif 	/* __IDithererImpl_FWD_DEFINED__ */


#ifndef __CoDitherToRGB8_FWD_DEFINED__
#define __CoDitherToRGB8_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoDitherToRGB8 CoDitherToRGB8;
#else
typedef struct CoDitherToRGB8 CoDitherToRGB8;
#endif /* __cplusplus */

#endif 	/* __CoDitherToRGB8_FWD_DEFINED__ */


#ifndef __CoSniffStream_FWD_DEFINED__
#define __CoSniffStream_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoSniffStream CoSniffStream;
#else
typedef struct CoSniffStream CoSniffStream;
#endif /* __cplusplus */

#endif 	/* __CoSniffStream_FWD_DEFINED__ */


#ifndef __CoMapMIMEToCLSID_FWD_DEFINED__
#define __CoMapMIMEToCLSID_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoMapMIMEToCLSID CoMapMIMEToCLSID;
#else
typedef struct CoMapMIMEToCLSID CoMapMIMEToCLSID;
#endif /* __cplusplus */

#endif 	/* __CoMapMIMEToCLSID_FWD_DEFINED__ */


/* header files for imported files */
#include "ocmm.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_imgutil_0000 */
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
#include <ddraw.h>

STDAPI CreateMIMEMap( IMapMIMEToCLSID** ppMap );
STDAPI DecodeImage( IStream* pStream, IMapMIMEToCLSID* pMap,
   IUnknown* pEventSink );
STDAPI SniffStream( IStream* pInStream, UINT* pnFormat,
   IStream** ppOutStream );
STDAPI GetMaxMIMEIDBytes( ULONG* pnMaxBytes );
STDAPI IdentifyMIMEType( const BYTE* pbBytes, ULONG nBytes,
   UINT* pnFormat );
STDAPI ComputeInvCMAP(const RGBQUAD *pRGBColors, ULONG nColors, BYTE *pInvTable,
   ULONG cbTable);
STDAPI DitherTo8( BYTE * pDestBits, LONG nDestPitch, BYTE * pSrcBits, LONG nSrcPitch,
   REFGUID bfidSrc, RGBQUAD * prgbDestColors, RGBQUAD * prgbSrcColors, BYTE * pbDestInvMap,
   LONG x, LONG y, LONG cx, LONG cy, LONG lDestTrans, LONG lSrcTrans);
STDAPI CreateDDrawSurfaceOnDIB(HBITMAP hbmDib, IDirectDrawSurface **ppSurface);


extern RPC_IF_HANDLE __MIDL_itf_imgutil_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imgutil_0000_v0_0_s_ifspec;

#ifndef __ISniffStream_INTERFACE_DEFINED__
#define __ISniffStream_INTERFACE_DEFINED__

/* interface ISniffStream */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_ISniffStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4EF17940-30E0-11d0-B724-00AA006C1A01")
    ISniffStream : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Init( 
            IStream __RPC_FAR *pStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Peek( 
            void __RPC_FAR *pBuffer,
            ULONG nBytes,
            ULONG __RPC_FAR *pnBytesRead) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISniffStreamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISniffStream __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISniffStream __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISniffStream __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Init )( 
            ISniffStream __RPC_FAR * This,
            IStream __RPC_FAR *pStream);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Peek )( 
            ISniffStream __RPC_FAR * This,
            void __RPC_FAR *pBuffer,
            ULONG nBytes,
            ULONG __RPC_FAR *pnBytesRead);
        
        END_INTERFACE
    } ISniffStreamVtbl;

    interface ISniffStream
    {
        CONST_VTBL struct ISniffStreamVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISniffStream_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISniffStream_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISniffStream_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISniffStream_Init(This,pStream)	\
    (This)->lpVtbl -> Init(This,pStream)

#define ISniffStream_Peek(This,pBuffer,nBytes,pnBytesRead)	\
    (This)->lpVtbl -> Peek(This,pBuffer,nBytes,pnBytesRead)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISniffStream_Init_Proxy( 
    ISniffStream __RPC_FAR * This,
    IStream __RPC_FAR *pStream);


void __RPC_STUB ISniffStream_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISniffStream_Peek_Proxy( 
    ISniffStream __RPC_FAR * This,
    void __RPC_FAR *pBuffer,
    ULONG nBytes,
    ULONG __RPC_FAR *pnBytesRead);


void __RPC_STUB ISniffStream_Peek_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISniffStream_INTERFACE_DEFINED__ */


#ifndef __IDithererImpl_INTERFACE_DEFINED__
#define __IDithererImpl_INTERFACE_DEFINED__

/* interface IDithererImpl */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_IDithererImpl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7C48E840-3910-11d0-86FC-00A0C913F750")
    IDithererImpl : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetDestColorTable( 
            ULONG nColors,
            const RGBQUAD __RPC_FAR *prgbColors) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetEventSink( 
            IImageDecodeEventSink __RPC_FAR *pEventSink) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDithererImplVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDithererImpl __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDithererImpl __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDithererImpl __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetDestColorTable )( 
            IDithererImpl __RPC_FAR * This,
            ULONG nColors,
            const RGBQUAD __RPC_FAR *prgbColors);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetEventSink )( 
            IDithererImpl __RPC_FAR * This,
            IImageDecodeEventSink __RPC_FAR *pEventSink);
        
        END_INTERFACE
    } IDithererImplVtbl;

    interface IDithererImpl
    {
        CONST_VTBL struct IDithererImplVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDithererImpl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDithererImpl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDithererImpl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDithererImpl_SetDestColorTable(This,nColors,prgbColors)	\
    (This)->lpVtbl -> SetDestColorTable(This,nColors,prgbColors)

#define IDithererImpl_SetEventSink(This,pEventSink)	\
    (This)->lpVtbl -> SetEventSink(This,pEventSink)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDithererImpl_SetDestColorTable_Proxy( 
    IDithererImpl __RPC_FAR * This,
    ULONG nColors,
    const RGBQUAD __RPC_FAR *prgbColors);


void __RPC_STUB IDithererImpl_SetDestColorTable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDithererImpl_SetEventSink_Proxy( 
    IDithererImpl __RPC_FAR * This,
    IImageDecodeEventSink __RPC_FAR *pEventSink);


void __RPC_STUB IDithererImpl_SetEventSink_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDithererImpl_INTERFACE_DEFINED__ */



#ifndef __ImgUtilLib_LIBRARY_DEFINED__
#define __ImgUtilLib_LIBRARY_DEFINED__

/* library ImgUtilLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ImgUtilLib;

EXTERN_C const CLSID CLSID_CoDitherToRGB8;

#ifdef __cplusplus

class DECLSPEC_UUID("A860CE50-3910-11d0-86FC-00A0C913F750")
CoDitherToRGB8;
#endif

EXTERN_C const CLSID CLSID_CoSniffStream;

#ifdef __cplusplus

class DECLSPEC_UUID("6A01FDA0-30DF-11d0-B724-00AA006C1A01")
CoSniffStream;
#endif

EXTERN_C const CLSID CLSID_CoMapMIMEToCLSID;

#ifdef __cplusplus

class DECLSPEC_UUID("30C3B080-30FB-11d0-B724-00AA006C1A01")
CoMapMIMEToCLSID;
#endif
#endif /* __ImgUtilLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


