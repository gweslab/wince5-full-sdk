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
/* at Thu Jun 24 19:10:11 2004
 */
/* Compiler settings for .\upnp.idl:
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

#ifndef __upnp_h__
#define __upnp_h__

/* Forward Declarations */ 

#ifndef __IUPnPDeviceFinder_FWD_DEFINED__
#define __IUPnPDeviceFinder_FWD_DEFINED__
typedef interface IUPnPDeviceFinder IUPnPDeviceFinder;
#endif 	/* __IUPnPDeviceFinder_FWD_DEFINED__ */


#ifndef __IUPnPDeviceFinderCallback_FWD_DEFINED__
#define __IUPnPDeviceFinderCallback_FWD_DEFINED__
typedef interface IUPnPDeviceFinderCallback IUPnPDeviceFinderCallback;
#endif 	/* __IUPnPDeviceFinderCallback_FWD_DEFINED__ */


#ifndef __IUPnPServices_FWD_DEFINED__
#define __IUPnPServices_FWD_DEFINED__
typedef interface IUPnPServices IUPnPServices;
#endif 	/* __IUPnPServices_FWD_DEFINED__ */


#ifndef __IUPnPService_FWD_DEFINED__
#define __IUPnPService_FWD_DEFINED__
typedef interface IUPnPService IUPnPService;
#endif 	/* __IUPnPService_FWD_DEFINED__ */


#ifndef __IUPnPServiceCallbackPrivate_FWD_DEFINED__
#define __IUPnPServiceCallbackPrivate_FWD_DEFINED__
typedef interface IUPnPServiceCallbackPrivate IUPnPServiceCallbackPrivate;
#endif 	/* __IUPnPServiceCallbackPrivate_FWD_DEFINED__ */


#ifndef __IUPnPServiceCallback_FWD_DEFINED__
#define __IUPnPServiceCallback_FWD_DEFINED__
typedef interface IUPnPServiceCallback IUPnPServiceCallback;
#endif 	/* __IUPnPServiceCallback_FWD_DEFINED__ */


#ifndef __IUPnPDevices_FWD_DEFINED__
#define __IUPnPDevices_FWD_DEFINED__
typedef interface IUPnPDevices IUPnPDevices;
#endif 	/* __IUPnPDevices_FWD_DEFINED__ */


#ifndef __IUPnPDevice_FWD_DEFINED__
#define __IUPnPDevice_FWD_DEFINED__
typedef interface IUPnPDevice IUPnPDevice;
#endif 	/* __IUPnPDevice_FWD_DEFINED__ */


#ifndef __IUPnPDeviceDocumentAccess_FWD_DEFINED__
#define __IUPnPDeviceDocumentAccess_FWD_DEFINED__
typedef interface IUPnPDeviceDocumentAccess IUPnPDeviceDocumentAccess;
#endif 	/* __IUPnPDeviceDocumentAccess_FWD_DEFINED__ */


#ifndef __IUPnPDescriptionDocument_FWD_DEFINED__
#define __IUPnPDescriptionDocument_FWD_DEFINED__
typedef interface IUPnPDescriptionDocument IUPnPDescriptionDocument;
#endif 	/* __IUPnPDescriptionDocument_FWD_DEFINED__ */


#ifndef __IUPnPDescriptionDocumentCallback_FWD_DEFINED__
#define __IUPnPDescriptionDocumentCallback_FWD_DEFINED__
typedef interface IUPnPDescriptionDocumentCallback IUPnPDescriptionDocumentCallback;
#endif 	/* __IUPnPDescriptionDocumentCallback_FWD_DEFINED__ */


#ifndef __IUPnPDeviceFinderCallback_FWD_DEFINED__
#define __IUPnPDeviceFinderCallback_FWD_DEFINED__
typedef interface IUPnPDeviceFinderCallback IUPnPDeviceFinderCallback;
#endif 	/* __IUPnPDeviceFinderCallback_FWD_DEFINED__ */


#ifndef __IUPnPDescriptionDocumentCallback_FWD_DEFINED__
#define __IUPnPDescriptionDocumentCallback_FWD_DEFINED__
typedef interface IUPnPDescriptionDocumentCallback IUPnPDescriptionDocumentCallback;
#endif 	/* __IUPnPDescriptionDocumentCallback_FWD_DEFINED__ */


#ifndef __IUPnPServiceCallback_FWD_DEFINED__
#define __IUPnPServiceCallback_FWD_DEFINED__
typedef interface IUPnPServiceCallback IUPnPServiceCallback;
#endif 	/* __IUPnPServiceCallback_FWD_DEFINED__ */


#ifndef __IUPnPServiceCallbackPrivate_FWD_DEFINED__
#define __IUPnPServiceCallbackPrivate_FWD_DEFINED__
typedef interface IUPnPServiceCallbackPrivate IUPnPServiceCallbackPrivate;
#endif 	/* __IUPnPServiceCallbackPrivate_FWD_DEFINED__ */


#ifndef __IUPnPDeviceDocumentAccess_FWD_DEFINED__
#define __IUPnPDeviceDocumentAccess_FWD_DEFINED__
typedef interface IUPnPDeviceDocumentAccess IUPnPDeviceDocumentAccess;
#endif 	/* __IUPnPDeviceDocumentAccess_FWD_DEFINED__ */


#ifndef __UPnPDeviceFinder_FWD_DEFINED__
#define __UPnPDeviceFinder_FWD_DEFINED__

#ifdef __cplusplus
typedef class UPnPDeviceFinder UPnPDeviceFinder;
#else
typedef struct UPnPDeviceFinder UPnPDeviceFinder;
#endif /* __cplusplus */

#endif 	/* __UPnPDeviceFinder_FWD_DEFINED__ */


#ifndef __UPnPDescriptionDocument_FWD_DEFINED__
#define __UPnPDescriptionDocument_FWD_DEFINED__

#ifdef __cplusplus
typedef class UPnPDescriptionDocument UPnPDescriptionDocument;
#else
typedef struct UPnPDescriptionDocument UPnPDescriptionDocument;
#endif /* __cplusplus */

#endif 	/* __UPnPDescriptionDocument_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_upnp_0000 */
/* [local] */ 











#define UPNP_E_ROOT_ELEMENT_EXPECTED     MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0200)
#define UPNP_E_DEVICE_ELEMENT_EXPECTED   MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0201)
#define UPNP_E_SERVICE_ELEMENT_EXPECTED  MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0202)
#define UPNP_E_SERVICE_NODE_INCOMPLETE   MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0203)
#define UPNP_E_DEVICE_NODE_INCOMPLETE    MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0204)
#define UPNP_E_ICON_ELEMENT_EXPECTED     MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0205)
#define UPNP_E_ICON_NODE_INCOMPLETE      MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0206)
#define UPNP_E_INVALID_ACTION            MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0207)
#define UPNP_E_INVALID_ARGUMENTS         MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0208)
#define UPNP_E_OUT_OF_SYNC               MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0209)
#define UPNP_E_ACTION_REQUEST_FAILED     MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0210)
#define UPNP_E_TRANSPORT_ERROR           MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0211)
#define UPNP_E_VARIABLE_VALUE_UNKNOWN    MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0212)
#define UPNP_E_INVALID_VARIABLE          MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0213)
#define UPNP_E_DEVICE_ERROR              MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0214)
#define UPNP_E_PROTOCOL_ERROR            MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0215)
#define UPNP_E_ERROR_PROCESSING_RESPONSE MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0216)
#define UPNP_E_DEVICE_TIMEOUT            MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0217)
#define UPNP_E_INVALID_DOCUMENT          MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0500)
#define UPNP_E_EVENT_SUBSCRIPTION_FAILED MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0501)
#define FAULT_INVALID_ACTION             401
#define FAULT_INVALID_ARG                402
#define FAULT_INVALID_SEQUENCE_NUMBER    403
#define FAULT_INVALID_VARIABLE           404
#define FAULT_DEVICE_INTERNAL_ERROR      501
#define FAULT_ACTION_SPECIFIC_BASE       600
#define FAULT_ACTION_SPECIFIC_MAX        899
#define UPNP_E_ACTION_SPECIFIC_BASE      MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0300)
#define UPNP_E_ACTION_SPECIFIC_MAX       (UPNP_E_ACTION_SPECIFIC_BASE + (FAULT_ACTION_SPECIFIC_MAX - FAULT_ACTION_SPECIFIC_BASE))


extern RPC_IF_HANDLE __MIDL_itf_upnp_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_upnp_0000_v0_0_s_ifspec;

#ifndef __IUPnPDeviceFinder_INTERFACE_DEFINED__
#define __IUPnPDeviceFinder_INTERFACE_DEFINED__

/* interface IUPnPDeviceFinder */
/* [nonextensible][unique][oleautomation][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IUPnPDeviceFinder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ADDA3D55-6F72-4319-BFF9-18600A539B10")
    IUPnPDeviceFinder : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindByType( 
            /* [in] */ BSTR bstrTypeURI,
            /* [in] */ DWORD dwFlags,
            /* [retval][out] */ IUPnPDevices __RPC_FAR *__RPC_FAR *pDevices) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateAsyncFind( 
            /* [in] */ BSTR bstrTypeURI,
            /* [in] */ DWORD dwFlags,
            /* [in] */ IUnknown __RPC_FAR *punkDeviceFinderCallback,
            /* [retval][out] */ LONG __RPC_FAR *plFindData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartAsyncFind( 
            /* [in] */ LONG lFindData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CancelAsyncFind( 
            /* [in] */ LONG lFindData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindByUDN( 
            /* [in] */ BSTR bstrUDN,
            /* [retval][out] */ IUPnPDevice __RPC_FAR *__RPC_FAR *pDevice) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUPnPDeviceFinderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IUPnPDeviceFinder __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IUPnPDeviceFinder __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IUPnPDeviceFinder __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IUPnPDeviceFinder __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IUPnPDeviceFinder __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IUPnPDeviceFinder __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IUPnPDeviceFinder __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindByType )( 
            IUPnPDeviceFinder __RPC_FAR * This,
            /* [in] */ BSTR bstrTypeURI,
            /* [in] */ DWORD dwFlags,
            /* [retval][out] */ IUPnPDevices __RPC_FAR *__RPC_FAR *pDevices);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateAsyncFind )( 
            IUPnPDeviceFinder __RPC_FAR * This,
            /* [in] */ BSTR bstrTypeURI,
            /* [in] */ DWORD dwFlags,
            /* [in] */ IUnknown __RPC_FAR *punkDeviceFinderCallback,
            /* [retval][out] */ LONG __RPC_FAR *plFindData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *StartAsyncFind )( 
            IUPnPDeviceFinder __RPC_FAR * This,
            /* [in] */ LONG lFindData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CancelAsyncFind )( 
            IUPnPDeviceFinder __RPC_FAR * This,
            /* [in] */ LONG lFindData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindByUDN )( 
            IUPnPDeviceFinder __RPC_FAR * This,
            /* [in] */ BSTR bstrUDN,
            /* [retval][out] */ IUPnPDevice __RPC_FAR *__RPC_FAR *pDevice);
        
        END_INTERFACE
    } IUPnPDeviceFinderVtbl;

    interface IUPnPDeviceFinder
    {
        CONST_VTBL struct IUPnPDeviceFinderVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUPnPDeviceFinder_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IUPnPDeviceFinder_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IUPnPDeviceFinder_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IUPnPDeviceFinder_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IUPnPDeviceFinder_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IUPnPDeviceFinder_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IUPnPDeviceFinder_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IUPnPDeviceFinder_FindByType(This,bstrTypeURI,dwFlags,pDevices)	\
    (This)->lpVtbl -> FindByType(This,bstrTypeURI,dwFlags,pDevices)

#define IUPnPDeviceFinder_CreateAsyncFind(This,bstrTypeURI,dwFlags,punkDeviceFinderCallback,plFindData)	\
    (This)->lpVtbl -> CreateAsyncFind(This,bstrTypeURI,dwFlags,punkDeviceFinderCallback,plFindData)

#define IUPnPDeviceFinder_StartAsyncFind(This,lFindData)	\
    (This)->lpVtbl -> StartAsyncFind(This,lFindData)

#define IUPnPDeviceFinder_CancelAsyncFind(This,lFindData)	\
    (This)->lpVtbl -> CancelAsyncFind(This,lFindData)

#define IUPnPDeviceFinder_FindByUDN(This,bstrUDN,pDevice)	\
    (This)->lpVtbl -> FindByUDN(This,bstrUDN,pDevice)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IUPnPDeviceFinder_FindByType_Proxy( 
    IUPnPDeviceFinder __RPC_FAR * This,
    /* [in] */ BSTR bstrTypeURI,
    /* [in] */ DWORD dwFlags,
    /* [retval][out] */ IUPnPDevices __RPC_FAR *__RPC_FAR *pDevices);


void __RPC_STUB IUPnPDeviceFinder_FindByType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IUPnPDeviceFinder_CreateAsyncFind_Proxy( 
    IUPnPDeviceFinder __RPC_FAR * This,
    /* [in] */ BSTR bstrTypeURI,
    /* [in] */ DWORD dwFlags,
    /* [in] */ IUnknown __RPC_FAR *punkDeviceFinderCallback,
    /* [retval][out] */ LONG __RPC_FAR *plFindData);


void __RPC_STUB IUPnPDeviceFinder_CreateAsyncFind_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IUPnPDeviceFinder_StartAsyncFind_Proxy( 
    IUPnPDeviceFinder __RPC_FAR * This,
    /* [in] */ LONG lFindData);


void __RPC_STUB IUPnPDeviceFinder_StartAsyncFind_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IUPnPDeviceFinder_CancelAsyncFind_Proxy( 
    IUPnPDeviceFinder __RPC_FAR * This,
    /* [in] */ LONG lFindData);


void __RPC_STUB IUPnPDeviceFinder_CancelAsyncFind_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IUPnPDeviceFinder_FindByUDN_Proxy( 
    IUPnPDeviceFinder __RPC_FAR * This,
    /* [in] */ BSTR bstrUDN,
    /* [retval][out] */ IUPnPDevice __RPC_FAR *__RPC_FAR *pDevice);


void __RPC_STUB IUPnPDeviceFinder_FindByUDN_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IUPnPDeviceFinder_INTERFACE_DEFINED__ */


#ifndef __IUPnPDeviceFinderCallback_INTERFACE_DEFINED__
#define __IUPnPDeviceFinderCallback_INTERFACE_DEFINED__

/* interface IUPnPDeviceFinderCallback */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUPnPDeviceFinderCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("415A984A-88B3-49F3-92AF-0508BEDF0D6C")
    IUPnPDeviceFinderCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DeviceAdded( 
            /* [in] */ LONG lFindData,
            /* [in] */ IUPnPDevice __RPC_FAR *pDevice) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeviceRemoved( 
            /* [in] */ LONG lFindData,
            /* [in] */ BSTR bstrUDN) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SearchComplete( 
            /* [in] */ LONG lFindData) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUPnPDeviceFinderCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IUPnPDeviceFinderCallback __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IUPnPDeviceFinderCallback __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IUPnPDeviceFinderCallback __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DeviceAdded )( 
            IUPnPDeviceFinderCallback __RPC_FAR * This,
            /* [in] */ LONG lFindData,
            /* [in] */ IUPnPDevice __RPC_FAR *pDevice);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DeviceRemoved )( 
            IUPnPDeviceFinderCallback __RPC_FAR * This,
            /* [in] */ LONG lFindData,
            /* [in] */ BSTR bstrUDN);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SearchComplete )( 
            IUPnPDeviceFinderCallback __RPC_FAR * This,
            /* [in] */ LONG lFindData);
        
        END_INTERFACE
    } IUPnPDeviceFinderCallbackVtbl;

    interface IUPnPDeviceFinderCallback
    {
        CONST_VTBL struct IUPnPDeviceFinderCallbackVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUPnPDeviceFinderCallback_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IUPnPDeviceFinderCallback_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IUPnPDeviceFinderCallback_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IUPnPDeviceFinderCallback_DeviceAdded(This,lFindData,pDevice)	\
    (This)->lpVtbl -> DeviceAdded(This,lFindData,pDevice)

#define IUPnPDeviceFinderCallback_DeviceRemoved(This,lFindData,bstrUDN)	\
    (This)->lpVtbl -> DeviceRemoved(This,lFindData,bstrUDN)

#define IUPnPDeviceFinderCallback_SearchComplete(This,lFindData)	\
    (This)->lpVtbl -> SearchComplete(This,lFindData)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IUPnPDeviceFinderCallback_DeviceAdded_Proxy( 
    IUPnPDeviceFinderCallback __RPC_FAR * This,
    /* [in] */ LONG lFindData,
    /* [in] */ IUPnPDevice __RPC_FAR *pDevice);


void __RPC_STUB IUPnPDeviceFinderCallback_DeviceAdded_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IUPnPDeviceFinderCallback_DeviceRemoved_Proxy( 
    IUPnPDeviceFinderCallback __RPC_FAR * This,
    /* [in] */ LONG lFindData,
    /* [in] */ BSTR bstrUDN);


void __RPC_STUB IUPnPDeviceFinderCallback_DeviceRemoved_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IUPnPDeviceFinderCallback_SearchComplete_Proxy( 
    IUPnPDeviceFinderCallback __RPC_FAR * This,
    /* [in] */ LONG lFindData);


void __RPC_STUB IUPnPDeviceFinderCallback_SearchComplete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IUPnPDeviceFinderCallback_INTERFACE_DEFINED__ */


#ifndef __IUPnPServices_INTERFACE_DEFINED__
#define __IUPnPServices_INTERFACE_DEFINED__

/* interface IUPnPServices */
/* [nonextensible][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IUPnPServices;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3F8C8E9E-9A7A-4DC8-BC41-FF31FA374956")
    IUPnPServices : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long __RPC_FAR *plCount) = 0;
        
        virtual /* [helpstring][hidden][restricted][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN __RPC_FAR *ppunk) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR bstrServiceId,
            /* [retval][out] */ IUPnPService __RPC_FAR *__RPC_FAR *ppService) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUPnPServicesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IUPnPServices __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IUPnPServices __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IUPnPServices __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IUPnPServices __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IUPnPServices __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IUPnPServices __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IUPnPServices __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )( 
            IUPnPServices __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *plCount);
        
        /* [helpstring][hidden][restricted][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__NewEnum )( 
            IUPnPServices __RPC_FAR * This,
            /* [retval][out] */ LPUNKNOWN __RPC_FAR *ppunk);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Item )( 
            IUPnPServices __RPC_FAR * This,
            /* [in] */ BSTR bstrServiceId,
            /* [retval][out] */ IUPnPService __RPC_FAR *__RPC_FAR *ppService);
        
        END_INTERFACE
    } IUPnPServicesVtbl;

    interface IUPnPServices
    {
        CONST_VTBL struct IUPnPServicesVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUPnPServices_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IUPnPServices_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IUPnPServices_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IUPnPServices_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IUPnPServices_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IUPnPServices_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IUPnPServices_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IUPnPServices_get_Count(This,plCount)	\
    (This)->lpVtbl -> get_Count(This,plCount)

#define IUPnPServices_get__NewEnum(This,ppunk)	\
    (This)->lpVtbl -> get__NewEnum(This,ppunk)

#define IUPnPServices_get_Item(This,bstrServiceId,ppService)	\
    (This)->lpVtbl -> get_Item(This,bstrServiceId,ppService)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPServices_get_Count_Proxy( 
    IUPnPServices __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *plCount);


void __RPC_STUB IUPnPServices_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][hidden][restricted][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPServices_get__NewEnum_Proxy( 
    IUPnPServices __RPC_FAR * This,
    /* [retval][out] */ LPUNKNOWN __RPC_FAR *ppunk);


void __RPC_STUB IUPnPServices_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPServices_get_Item_Proxy( 
    IUPnPServices __RPC_FAR * This,
    /* [in] */ BSTR bstrServiceId,
    /* [retval][out] */ IUPnPService __RPC_FAR *__RPC_FAR *ppService);


void __RPC_STUB IUPnPServices_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IUPnPServices_INTERFACE_DEFINED__ */


#ifndef __IUPnPService_INTERFACE_DEFINED__
#define __IUPnPService_INTERFACE_DEFINED__

/* interface IUPnPService */
/* [nonextensible][unique][oleautomation][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IUPnPService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A295019C-DC65-47DD-90DC-7FE918A1AB44")
    IUPnPService : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE QueryStateVariable( 
            /* [in] */ BSTR bstrVariableName,
            /* [retval][out] */ VARIANT __RPC_FAR *pValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InvokeAction( 
            /* [in] */ BSTR bstrActionName,
            /* [in] */ VARIANT vInActionArgs,
            /* [out][in] */ VARIANT __RPC_FAR *pvOutActionArgs,
            /* [retval][out] */ VARIANT __RPC_FAR *pvRetVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ServiceTypeIdentifier( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IUnknown __RPC_FAR *pUnkCallback) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrId) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastTransportStatus( 
            /* [retval][out] */ long __RPC_FAR *plValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUPnPServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IUPnPService __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IUPnPService __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IUPnPService __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IUPnPService __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IUPnPService __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IUPnPService __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IUPnPService __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryStateVariable )( 
            IUPnPService __RPC_FAR * This,
            /* [in] */ BSTR bstrVariableName,
            /* [retval][out] */ VARIANT __RPC_FAR *pValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InvokeAction )( 
            IUPnPService __RPC_FAR * This,
            /* [in] */ BSTR bstrActionName,
            /* [in] */ VARIANT vInActionArgs,
            /* [out][in] */ VARIANT __RPC_FAR *pvOutActionArgs,
            /* [retval][out] */ VARIANT __RPC_FAR *pvRetVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ServiceTypeIdentifier )( 
            IUPnPService __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddCallback )( 
            IUPnPService __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pUnkCallback);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Id )( 
            IUPnPService __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrId);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LastTransportStatus )( 
            IUPnPService __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *plValue);
        
        END_INTERFACE
    } IUPnPServiceVtbl;

    interface IUPnPService
    {
        CONST_VTBL struct IUPnPServiceVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUPnPService_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IUPnPService_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IUPnPService_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IUPnPService_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IUPnPService_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IUPnPService_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IUPnPService_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IUPnPService_QueryStateVariable(This,bstrVariableName,pValue)	\
    (This)->lpVtbl -> QueryStateVariable(This,bstrVariableName,pValue)

#define IUPnPService_InvokeAction(This,bstrActionName,vInActionArgs,pvOutActionArgs,pvRetVal)	\
    (This)->lpVtbl -> InvokeAction(This,bstrActionName,vInActionArgs,pvOutActionArgs,pvRetVal)

#define IUPnPService_get_ServiceTypeIdentifier(This,pVal)	\
    (This)->lpVtbl -> get_ServiceTypeIdentifier(This,pVal)

#define IUPnPService_AddCallback(This,pUnkCallback)	\
    (This)->lpVtbl -> AddCallback(This,pUnkCallback)

#define IUPnPService_get_Id(This,pbstrId)	\
    (This)->lpVtbl -> get_Id(This,pbstrId)

#define IUPnPService_get_LastTransportStatus(This,plValue)	\
    (This)->lpVtbl -> get_LastTransportStatus(This,plValue)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IUPnPService_QueryStateVariable_Proxy( 
    IUPnPService __RPC_FAR * This,
    /* [in] */ BSTR bstrVariableName,
    /* [retval][out] */ VARIANT __RPC_FAR *pValue);


void __RPC_STUB IUPnPService_QueryStateVariable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IUPnPService_InvokeAction_Proxy( 
    IUPnPService __RPC_FAR * This,
    /* [in] */ BSTR bstrActionName,
    /* [in] */ VARIANT vInActionArgs,
    /* [out][in] */ VARIANT __RPC_FAR *pvOutActionArgs,
    /* [retval][out] */ VARIANT __RPC_FAR *pvRetVal);


void __RPC_STUB IUPnPService_InvokeAction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPService_get_ServiceTypeIdentifier_Proxy( 
    IUPnPService __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IUPnPService_get_ServiceTypeIdentifier_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IUPnPService_AddCallback_Proxy( 
    IUPnPService __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pUnkCallback);


void __RPC_STUB IUPnPService_AddCallback_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPService_get_Id_Proxy( 
    IUPnPService __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrId);


void __RPC_STUB IUPnPService_get_Id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPService_get_LastTransportStatus_Proxy( 
    IUPnPService __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *plValue);


void __RPC_STUB IUPnPService_get_LastTransportStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IUPnPService_INTERFACE_DEFINED__ */


#ifndef __IUPnPServiceCallbackPrivate_INTERFACE_DEFINED__
#define __IUPnPServiceCallbackPrivate_INTERFACE_DEFINED__

/* interface IUPnPServiceCallbackPrivate */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUPnPServiceCallbackPrivate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("24ea2515-f612-4528-ba82-7bd3dbbad303")
    IUPnPServiceCallbackPrivate : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddTransientCallback( 
            /* [in] */ IUnknown __RPC_FAR *pUnkCallback,
            /* [out] */ DWORD __RPC_FAR *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveTransientCallback( 
            /* [in] */ DWORD dwCookie) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUPnPServiceCallbackPrivateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IUPnPServiceCallbackPrivate __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IUPnPServiceCallbackPrivate __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IUPnPServiceCallbackPrivate __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddTransientCallback )( 
            IUPnPServiceCallbackPrivate __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pUnkCallback,
            /* [out] */ DWORD __RPC_FAR *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RemoveTransientCallback )( 
            IUPnPServiceCallbackPrivate __RPC_FAR * This,
            /* [in] */ DWORD dwCookie);
        
        END_INTERFACE
    } IUPnPServiceCallbackPrivateVtbl;

    interface IUPnPServiceCallbackPrivate
    {
        CONST_VTBL struct IUPnPServiceCallbackPrivateVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUPnPServiceCallbackPrivate_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IUPnPServiceCallbackPrivate_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IUPnPServiceCallbackPrivate_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IUPnPServiceCallbackPrivate_AddTransientCallback(This,pUnkCallback,pdwCookie)	\
    (This)->lpVtbl -> AddTransientCallback(This,pUnkCallback,pdwCookie)

#define IUPnPServiceCallbackPrivate_RemoveTransientCallback(This,dwCookie)	\
    (This)->lpVtbl -> RemoveTransientCallback(This,dwCookie)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IUPnPServiceCallbackPrivate_AddTransientCallback_Proxy( 
    IUPnPServiceCallbackPrivate __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pUnkCallback,
    /* [out] */ DWORD __RPC_FAR *pdwCookie);


void __RPC_STUB IUPnPServiceCallbackPrivate_AddTransientCallback_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IUPnPServiceCallbackPrivate_RemoveTransientCallback_Proxy( 
    IUPnPServiceCallbackPrivate __RPC_FAR * This,
    /* [in] */ DWORD dwCookie);


void __RPC_STUB IUPnPServiceCallbackPrivate_RemoveTransientCallback_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IUPnPServiceCallbackPrivate_INTERFACE_DEFINED__ */


#ifndef __IUPnPServiceCallback_INTERFACE_DEFINED__
#define __IUPnPServiceCallback_INTERFACE_DEFINED__

/* interface IUPnPServiceCallback */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUPnPServiceCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("31fadca9-ab73-464b-b67d-5c1d0f83c8b8")
    IUPnPServiceCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE StateVariableChanged( 
            /* [in] */ IUPnPService __RPC_FAR *pus,
            /* [in] */ LPCWSTR pcwszStateVarName,
            /* [in] */ VARIANT vaValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ServiceInstanceDied( 
            /* [in] */ IUPnPService __RPC_FAR *pus) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUPnPServiceCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IUPnPServiceCallback __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IUPnPServiceCallback __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IUPnPServiceCallback __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *StateVariableChanged )( 
            IUPnPServiceCallback __RPC_FAR * This,
            /* [in] */ IUPnPService __RPC_FAR *pus,
            /* [in] */ LPCWSTR pcwszStateVarName,
            /* [in] */ VARIANT vaValue);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ServiceInstanceDied )( 
            IUPnPServiceCallback __RPC_FAR * This,
            /* [in] */ IUPnPService __RPC_FAR *pus);
        
        END_INTERFACE
    } IUPnPServiceCallbackVtbl;

    interface IUPnPServiceCallback
    {
        CONST_VTBL struct IUPnPServiceCallbackVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUPnPServiceCallback_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IUPnPServiceCallback_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IUPnPServiceCallback_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IUPnPServiceCallback_StateVariableChanged(This,pus,pcwszStateVarName,vaValue)	\
    (This)->lpVtbl -> StateVariableChanged(This,pus,pcwszStateVarName,vaValue)

#define IUPnPServiceCallback_ServiceInstanceDied(This,pus)	\
    (This)->lpVtbl -> ServiceInstanceDied(This,pus)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IUPnPServiceCallback_StateVariableChanged_Proxy( 
    IUPnPServiceCallback __RPC_FAR * This,
    /* [in] */ IUPnPService __RPC_FAR *pus,
    /* [in] */ LPCWSTR pcwszStateVarName,
    /* [in] */ VARIANT vaValue);


void __RPC_STUB IUPnPServiceCallback_StateVariableChanged_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IUPnPServiceCallback_ServiceInstanceDied_Proxy( 
    IUPnPServiceCallback __RPC_FAR * This,
    /* [in] */ IUPnPService __RPC_FAR *pus);


void __RPC_STUB IUPnPServiceCallback_ServiceInstanceDied_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IUPnPServiceCallback_INTERFACE_DEFINED__ */


#ifndef __IUPnPDevices_INTERFACE_DEFINED__
#define __IUPnPDevices_INTERFACE_DEFINED__

/* interface IUPnPDevices */
/* [nonextensible][unique][oleautomation][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IUPnPDevices;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FDBC0C73-BDA3-4C66-AC4F-F2D96FDAD68C")
    IUPnPDevices : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long __RPC_FAR *plCount) = 0;
        
        virtual /* [helpstring][hidden][restricted][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN __RPC_FAR *ppunk) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR bstrUDN,
            /* [retval][out] */ IUPnPDevice __RPC_FAR *__RPC_FAR *ppDevice) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUPnPDevicesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IUPnPDevices __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IUPnPDevices __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IUPnPDevices __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IUPnPDevices __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IUPnPDevices __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IUPnPDevices __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IUPnPDevices __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )( 
            IUPnPDevices __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *plCount);
        
        /* [helpstring][hidden][restricted][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__NewEnum )( 
            IUPnPDevices __RPC_FAR * This,
            /* [retval][out] */ LPUNKNOWN __RPC_FAR *ppunk);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Item )( 
            IUPnPDevices __RPC_FAR * This,
            /* [in] */ BSTR bstrUDN,
            /* [retval][out] */ IUPnPDevice __RPC_FAR *__RPC_FAR *ppDevice);
        
        END_INTERFACE
    } IUPnPDevicesVtbl;

    interface IUPnPDevices
    {
        CONST_VTBL struct IUPnPDevicesVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUPnPDevices_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IUPnPDevices_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IUPnPDevices_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IUPnPDevices_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IUPnPDevices_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IUPnPDevices_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IUPnPDevices_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IUPnPDevices_get_Count(This,plCount)	\
    (This)->lpVtbl -> get_Count(This,plCount)

#define IUPnPDevices_get__NewEnum(This,ppunk)	\
    (This)->lpVtbl -> get__NewEnum(This,ppunk)

#define IUPnPDevices_get_Item(This,bstrUDN,ppDevice)	\
    (This)->lpVtbl -> get_Item(This,bstrUDN,ppDevice)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPDevices_get_Count_Proxy( 
    IUPnPDevices __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *plCount);


void __RPC_STUB IUPnPDevices_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][hidden][restricted][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPDevices_get__NewEnum_Proxy( 
    IUPnPDevices __RPC_FAR * This,
    /* [retval][out] */ LPUNKNOWN __RPC_FAR *ppunk);


void __RPC_STUB IUPnPDevices_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPDevices_get_Item_Proxy( 
    IUPnPDevices __RPC_FAR * This,
    /* [in] */ BSTR bstrUDN,
    /* [retval][out] */ IUPnPDevice __RPC_FAR *__RPC_FAR *ppDevice);


void __RPC_STUB IUPnPDevices_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IUPnPDevices_INTERFACE_DEFINED__ */


#ifndef __IUPnPDevice_INTERFACE_DEFINED__
#define __IUPnPDevice_INTERFACE_DEFINED__

/* interface IUPnPDevice */
/* [nonextensible][unique][oleautomation][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IUPnPDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3D44D0D1-98C9-4889-ACD1-F9D674BF2221")
    IUPnPDevice : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsRootDevice( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pvarb) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RootDevice( 
            /* [retval][out] */ IUPnPDevice __RPC_FAR *__RPC_FAR *ppudRootDevice) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ParentDevice( 
            /* [retval][out] */ IUPnPDevice __RPC_FAR *__RPC_FAR *ppudDeviceParent) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasChildren( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pvarb) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Children( 
            /* [retval][out] */ IUPnPDevices __RPC_FAR *__RPC_FAR *ppudChildren) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UniqueDeviceName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FriendlyName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PresentationURL( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ManufacturerName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ManufacturerURL( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ModelName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ModelNumber( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ModelURL( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UPC( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SerialNumber( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IconURL( 
            /* [in] */ BSTR bstrEncodingFormat,
            /* [in] */ LONG lSizeX,
            /* [in] */ LONG lSizeY,
            /* [in] */ LONG lBitDepth,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrIconURL) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Services( 
            /* [retval][out] */ IUPnPServices __RPC_FAR *__RPC_FAR *ppusServices) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUPnPDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IUPnPDevice __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IUPnPDevice __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IUPnPDevice __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IUPnPDevice __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IUPnPDevice __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IUPnPDevice __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IUPnPDevice __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IsRootDevice )( 
            IUPnPDevice __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pvarb);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_RootDevice )( 
            IUPnPDevice __RPC_FAR * This,
            /* [retval][out] */ IUPnPDevice __RPC_FAR *__RPC_FAR *ppudRootDevice);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ParentDevice )( 
            IUPnPDevice __RPC_FAR * This,
            /* [retval][out] */ IUPnPDevice __RPC_FAR *__RPC_FAR *ppudDeviceParent);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_HasChildren )( 
            IUPnPDevice __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pvarb);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Children )( 
            IUPnPDevice __RPC_FAR * This,
            /* [retval][out] */ IUPnPDevices __RPC_FAR *__RPC_FAR *ppudChildren);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_UniqueDeviceName )( 
            IUPnPDevice __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_FriendlyName )( 
            IUPnPDevice __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            IUPnPDevice __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_PresentationURL )( 
            IUPnPDevice __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ManufacturerName )( 
            IUPnPDevice __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ManufacturerURL )( 
            IUPnPDevice __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ModelName )( 
            IUPnPDevice __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ModelNumber )( 
            IUPnPDevice __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Description )( 
            IUPnPDevice __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ModelURL )( 
            IUPnPDevice __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_UPC )( 
            IUPnPDevice __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_SerialNumber )( 
            IUPnPDevice __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IconURL )( 
            IUPnPDevice __RPC_FAR * This,
            /* [in] */ BSTR bstrEncodingFormat,
            /* [in] */ LONG lSizeX,
            /* [in] */ LONG lSizeY,
            /* [in] */ LONG lBitDepth,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrIconURL);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Services )( 
            IUPnPDevice __RPC_FAR * This,
            /* [retval][out] */ IUPnPServices __RPC_FAR *__RPC_FAR *ppusServices);
        
        END_INTERFACE
    } IUPnPDeviceVtbl;

    interface IUPnPDevice
    {
        CONST_VTBL struct IUPnPDeviceVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUPnPDevice_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IUPnPDevice_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IUPnPDevice_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IUPnPDevice_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IUPnPDevice_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IUPnPDevice_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IUPnPDevice_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IUPnPDevice_get_IsRootDevice(This,pvarb)	\
    (This)->lpVtbl -> get_IsRootDevice(This,pvarb)

#define IUPnPDevice_get_RootDevice(This,ppudRootDevice)	\
    (This)->lpVtbl -> get_RootDevice(This,ppudRootDevice)

#define IUPnPDevice_get_ParentDevice(This,ppudDeviceParent)	\
    (This)->lpVtbl -> get_ParentDevice(This,ppudDeviceParent)

#define IUPnPDevice_get_HasChildren(This,pvarb)	\
    (This)->lpVtbl -> get_HasChildren(This,pvarb)

#define IUPnPDevice_get_Children(This,ppudChildren)	\
    (This)->lpVtbl -> get_Children(This,ppudChildren)

#define IUPnPDevice_get_UniqueDeviceName(This,pbstr)	\
    (This)->lpVtbl -> get_UniqueDeviceName(This,pbstr)

#define IUPnPDevice_get_FriendlyName(This,pbstr)	\
    (This)->lpVtbl -> get_FriendlyName(This,pbstr)

#define IUPnPDevice_get_Type(This,pbstr)	\
    (This)->lpVtbl -> get_Type(This,pbstr)

#define IUPnPDevice_get_PresentationURL(This,pbstr)	\
    (This)->lpVtbl -> get_PresentationURL(This,pbstr)

#define IUPnPDevice_get_ManufacturerName(This,pbstr)	\
    (This)->lpVtbl -> get_ManufacturerName(This,pbstr)

#define IUPnPDevice_get_ManufacturerURL(This,pbstr)	\
    (This)->lpVtbl -> get_ManufacturerURL(This,pbstr)

#define IUPnPDevice_get_ModelName(This,pbstr)	\
    (This)->lpVtbl -> get_ModelName(This,pbstr)

#define IUPnPDevice_get_ModelNumber(This,pbstr)	\
    (This)->lpVtbl -> get_ModelNumber(This,pbstr)

#define IUPnPDevice_get_Description(This,pbstr)	\
    (This)->lpVtbl -> get_Description(This,pbstr)

#define IUPnPDevice_get_ModelURL(This,pbstr)	\
    (This)->lpVtbl -> get_ModelURL(This,pbstr)

#define IUPnPDevice_get_UPC(This,pbstr)	\
    (This)->lpVtbl -> get_UPC(This,pbstr)

#define IUPnPDevice_get_SerialNumber(This,pbstr)	\
    (This)->lpVtbl -> get_SerialNumber(This,pbstr)

#define IUPnPDevice_IconURL(This,bstrEncodingFormat,lSizeX,lSizeY,lBitDepth,pbstrIconURL)	\
    (This)->lpVtbl -> IconURL(This,bstrEncodingFormat,lSizeX,lSizeY,lBitDepth,pbstrIconURL)

#define IUPnPDevice_get_Services(This,ppusServices)	\
    (This)->lpVtbl -> get_Services(This,ppusServices)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPDevice_get_IsRootDevice_Proxy( 
    IUPnPDevice __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pvarb);


void __RPC_STUB IUPnPDevice_get_IsRootDevice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPDevice_get_RootDevice_Proxy( 
    IUPnPDevice __RPC_FAR * This,
    /* [retval][out] */ IUPnPDevice __RPC_FAR *__RPC_FAR *ppudRootDevice);


void __RPC_STUB IUPnPDevice_get_RootDevice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPDevice_get_ParentDevice_Proxy( 
    IUPnPDevice __RPC_FAR * This,
    /* [retval][out] */ IUPnPDevice __RPC_FAR *__RPC_FAR *ppudDeviceParent);


void __RPC_STUB IUPnPDevice_get_ParentDevice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPDevice_get_HasChildren_Proxy( 
    IUPnPDevice __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pvarb);


void __RPC_STUB IUPnPDevice_get_HasChildren_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPDevice_get_Children_Proxy( 
    IUPnPDevice __RPC_FAR * This,
    /* [retval][out] */ IUPnPDevices __RPC_FAR *__RPC_FAR *ppudChildren);


void __RPC_STUB IUPnPDevice_get_Children_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPDevice_get_UniqueDeviceName_Proxy( 
    IUPnPDevice __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstr);


void __RPC_STUB IUPnPDevice_get_UniqueDeviceName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPDevice_get_FriendlyName_Proxy( 
    IUPnPDevice __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstr);


void __RPC_STUB IUPnPDevice_get_FriendlyName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPDevice_get_Type_Proxy( 
    IUPnPDevice __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstr);


void __RPC_STUB IUPnPDevice_get_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPDevice_get_PresentationURL_Proxy( 
    IUPnPDevice __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstr);


void __RPC_STUB IUPnPDevice_get_PresentationURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPDevice_get_ManufacturerName_Proxy( 
    IUPnPDevice __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstr);


void __RPC_STUB IUPnPDevice_get_ManufacturerName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPDevice_get_ManufacturerURL_Proxy( 
    IUPnPDevice __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstr);


void __RPC_STUB IUPnPDevice_get_ManufacturerURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPDevice_get_ModelName_Proxy( 
    IUPnPDevice __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstr);


void __RPC_STUB IUPnPDevice_get_ModelName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPDevice_get_ModelNumber_Proxy( 
    IUPnPDevice __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstr);


void __RPC_STUB IUPnPDevice_get_ModelNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPDevice_get_Description_Proxy( 
    IUPnPDevice __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstr);


void __RPC_STUB IUPnPDevice_get_Description_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPDevice_get_ModelURL_Proxy( 
    IUPnPDevice __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstr);


void __RPC_STUB IUPnPDevice_get_ModelURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPDevice_get_UPC_Proxy( 
    IUPnPDevice __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstr);


void __RPC_STUB IUPnPDevice_get_UPC_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPDevice_get_SerialNumber_Proxy( 
    IUPnPDevice __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstr);


void __RPC_STUB IUPnPDevice_get_SerialNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IUPnPDevice_IconURL_Proxy( 
    IUPnPDevice __RPC_FAR * This,
    /* [in] */ BSTR bstrEncodingFormat,
    /* [in] */ LONG lSizeX,
    /* [in] */ LONG lSizeY,
    /* [in] */ LONG lBitDepth,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrIconURL);


void __RPC_STUB IUPnPDevice_IconURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPDevice_get_Services_Proxy( 
    IUPnPDevice __RPC_FAR * This,
    /* [retval][out] */ IUPnPServices __RPC_FAR *__RPC_FAR *ppusServices);


void __RPC_STUB IUPnPDevice_get_Services_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IUPnPDevice_INTERFACE_DEFINED__ */


#ifndef __IUPnPDeviceDocumentAccess_INTERFACE_DEFINED__
#define __IUPnPDeviceDocumentAccess_INTERFACE_DEFINED__

/* interface IUPnPDeviceDocumentAccess */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUPnPDeviceDocumentAccess;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E7772804-3287-418e-9072-CF2B47238981")
    IUPnPDeviceDocumentAccess : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDocumentURL( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrDocument) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUPnPDeviceDocumentAccessVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IUPnPDeviceDocumentAccess __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IUPnPDeviceDocumentAccess __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IUPnPDeviceDocumentAccess __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDocumentURL )( 
            IUPnPDeviceDocumentAccess __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrDocument);
        
        END_INTERFACE
    } IUPnPDeviceDocumentAccessVtbl;

    interface IUPnPDeviceDocumentAccess
    {
        CONST_VTBL struct IUPnPDeviceDocumentAccessVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUPnPDeviceDocumentAccess_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IUPnPDeviceDocumentAccess_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IUPnPDeviceDocumentAccess_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IUPnPDeviceDocumentAccess_GetDocumentURL(This,pbstrDocument)	\
    (This)->lpVtbl -> GetDocumentURL(This,pbstrDocument)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IUPnPDeviceDocumentAccess_GetDocumentURL_Proxy( 
    IUPnPDeviceDocumentAccess __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrDocument);


void __RPC_STUB IUPnPDeviceDocumentAccess_GetDocumentURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IUPnPDeviceDocumentAccess_INTERFACE_DEFINED__ */


#ifndef __IUPnPDescriptionDocument_INTERFACE_DEFINED__
#define __IUPnPDescriptionDocument_INTERFACE_DEFINED__

/* interface IUPnPDescriptionDocument */
/* [nonextensible][unique][oleautomation][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IUPnPDescriptionDocument;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("11d1c1b2-7daa-4c9e-9595-7f82ed206d1e")
    IUPnPDescriptionDocument : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReadyState( 
            /* [retval][out] */ LONG __RPC_FAR *plReadyState) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ BSTR bstrUrl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadAsync( 
            /* [in] */ BSTR bstrUrl,
            /* [in] */ IUnknown __RPC_FAR *punkCallback) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LoadResult( 
            /* [retval][out] */ long __RPC_FAR *phrError) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Abort( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RootDevice( 
            /* [retval][out] */ IUPnPDevice __RPC_FAR *__RPC_FAR *ppudRootDevice) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeviceByUDN( 
            /* [in] */ BSTR bstrUDN,
            /* [retval][out] */ IUPnPDevice __RPC_FAR *__RPC_FAR *ppudDevice) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUPnPDescriptionDocumentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IUPnPDescriptionDocument __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IUPnPDescriptionDocument __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IUPnPDescriptionDocument __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IUPnPDescriptionDocument __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IUPnPDescriptionDocument __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IUPnPDescriptionDocument __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IUPnPDescriptionDocument __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ReadyState )( 
            IUPnPDescriptionDocument __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *plReadyState);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Load )( 
            IUPnPDescriptionDocument __RPC_FAR * This,
            /* [in] */ BSTR bstrUrl);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LoadAsync )( 
            IUPnPDescriptionDocument __RPC_FAR * This,
            /* [in] */ BSTR bstrUrl,
            /* [in] */ IUnknown __RPC_FAR *punkCallback);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LoadResult )( 
            IUPnPDescriptionDocument __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *phrError);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Abort )( 
            IUPnPDescriptionDocument __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RootDevice )( 
            IUPnPDescriptionDocument __RPC_FAR * This,
            /* [retval][out] */ IUPnPDevice __RPC_FAR *__RPC_FAR *ppudRootDevice);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DeviceByUDN )( 
            IUPnPDescriptionDocument __RPC_FAR * This,
            /* [in] */ BSTR bstrUDN,
            /* [retval][out] */ IUPnPDevice __RPC_FAR *__RPC_FAR *ppudDevice);
        
        END_INTERFACE
    } IUPnPDescriptionDocumentVtbl;

    interface IUPnPDescriptionDocument
    {
        CONST_VTBL struct IUPnPDescriptionDocumentVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUPnPDescriptionDocument_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IUPnPDescriptionDocument_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IUPnPDescriptionDocument_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IUPnPDescriptionDocument_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IUPnPDescriptionDocument_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IUPnPDescriptionDocument_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IUPnPDescriptionDocument_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IUPnPDescriptionDocument_get_ReadyState(This,plReadyState)	\
    (This)->lpVtbl -> get_ReadyState(This,plReadyState)

#define IUPnPDescriptionDocument_Load(This,bstrUrl)	\
    (This)->lpVtbl -> Load(This,bstrUrl)

#define IUPnPDescriptionDocument_LoadAsync(This,bstrUrl,punkCallback)	\
    (This)->lpVtbl -> LoadAsync(This,bstrUrl,punkCallback)

#define IUPnPDescriptionDocument_get_LoadResult(This,phrError)	\
    (This)->lpVtbl -> get_LoadResult(This,phrError)

#define IUPnPDescriptionDocument_Abort(This)	\
    (This)->lpVtbl -> Abort(This)

#define IUPnPDescriptionDocument_RootDevice(This,ppudRootDevice)	\
    (This)->lpVtbl -> RootDevice(This,ppudRootDevice)

#define IUPnPDescriptionDocument_DeviceByUDN(This,bstrUDN,ppudDevice)	\
    (This)->lpVtbl -> DeviceByUDN(This,bstrUDN,ppudDevice)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPDescriptionDocument_get_ReadyState_Proxy( 
    IUPnPDescriptionDocument __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *plReadyState);


void __RPC_STUB IUPnPDescriptionDocument_get_ReadyState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IUPnPDescriptionDocument_Load_Proxy( 
    IUPnPDescriptionDocument __RPC_FAR * This,
    /* [in] */ BSTR bstrUrl);


void __RPC_STUB IUPnPDescriptionDocument_Load_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IUPnPDescriptionDocument_LoadAsync_Proxy( 
    IUPnPDescriptionDocument __RPC_FAR * This,
    /* [in] */ BSTR bstrUrl,
    /* [in] */ IUnknown __RPC_FAR *punkCallback);


void __RPC_STUB IUPnPDescriptionDocument_LoadAsync_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IUPnPDescriptionDocument_get_LoadResult_Proxy( 
    IUPnPDescriptionDocument __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *phrError);


void __RPC_STUB IUPnPDescriptionDocument_get_LoadResult_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IUPnPDescriptionDocument_Abort_Proxy( 
    IUPnPDescriptionDocument __RPC_FAR * This);


void __RPC_STUB IUPnPDescriptionDocument_Abort_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IUPnPDescriptionDocument_RootDevice_Proxy( 
    IUPnPDescriptionDocument __RPC_FAR * This,
    /* [retval][out] */ IUPnPDevice __RPC_FAR *__RPC_FAR *ppudRootDevice);


void __RPC_STUB IUPnPDescriptionDocument_RootDevice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IUPnPDescriptionDocument_DeviceByUDN_Proxy( 
    IUPnPDescriptionDocument __RPC_FAR * This,
    /* [in] */ BSTR bstrUDN,
    /* [retval][out] */ IUPnPDevice __RPC_FAR *__RPC_FAR *ppudDevice);


void __RPC_STUB IUPnPDescriptionDocument_DeviceByUDN_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IUPnPDescriptionDocument_INTERFACE_DEFINED__ */


#ifndef __IUPnPDescriptionDocumentCallback_INTERFACE_DEFINED__
#define __IUPnPDescriptionDocumentCallback_INTERFACE_DEFINED__

/* interface IUPnPDescriptionDocumentCallback */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUPnPDescriptionDocumentCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("77394c69-5486-40d6-9bc3-4991983e02da")
    IUPnPDescriptionDocumentCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE LoadComplete( 
            /* [in] */ HRESULT hrLoadResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUPnPDescriptionDocumentCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IUPnPDescriptionDocumentCallback __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IUPnPDescriptionDocumentCallback __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IUPnPDescriptionDocumentCallback __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LoadComplete )( 
            IUPnPDescriptionDocumentCallback __RPC_FAR * This,
            /* [in] */ HRESULT hrLoadResult);
        
        END_INTERFACE
    } IUPnPDescriptionDocumentCallbackVtbl;

    interface IUPnPDescriptionDocumentCallback
    {
        CONST_VTBL struct IUPnPDescriptionDocumentCallbackVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUPnPDescriptionDocumentCallback_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IUPnPDescriptionDocumentCallback_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IUPnPDescriptionDocumentCallback_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IUPnPDescriptionDocumentCallback_LoadComplete(This,hrLoadResult)	\
    (This)->lpVtbl -> LoadComplete(This,hrLoadResult)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IUPnPDescriptionDocumentCallback_LoadComplete_Proxy( 
    IUPnPDescriptionDocumentCallback __RPC_FAR * This,
    /* [in] */ HRESULT hrLoadResult);


void __RPC_STUB IUPnPDescriptionDocumentCallback_LoadComplete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IUPnPDescriptionDocumentCallback_INTERFACE_DEFINED__ */



#ifndef __UPNPLib_LIBRARY_DEFINED__
#define __UPNPLib_LIBRARY_DEFINED__

/* library UPNPLib */
/* [helpstring][version][uuid] */ 







EXTERN_C const IID LIBID_UPNPLib;

EXTERN_C const CLSID CLSID_UPnPDeviceFinder;

#ifdef __cplusplus

class DECLSPEC_UUID("E2085F28-FEB7-404A-B8E7-E659BDEAAA02")
UPnPDeviceFinder;
#endif

EXTERN_C const CLSID CLSID_UPnPDescriptionDocument;

#ifdef __cplusplus

class DECLSPEC_UUID("1d8a9b47-3a28-4ce2-8a4b-bd34e45bceeb")
UPnPDescriptionDocument;
#endif
#endif /* __UPNPLib_LIBRARY_DEFINED__ */

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


