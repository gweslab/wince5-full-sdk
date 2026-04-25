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
/* at Tue Feb 05 14:32:07 2002
 */
/* Compiler settings for .\opsprof.idl:
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

#ifndef __opsprof_h__
#define __opsprof_h__

/* Forward Declarations */ 

#ifndef __IOpsProfileSimple_FWD_DEFINED__
#define __IOpsProfileSimple_FWD_DEFINED__
typedef interface IOpsProfileSimple IOpsProfileSimple;
#endif 	/* __IOpsProfileSimple_FWD_DEFINED__ */


/* header files for imported files */
#include "objidl.h"
#include "oleidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_opsprof_0000 */
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

#pragma comment(lib,"uuid.lib")

//---------------------------------------------------------------------------=
// IOpsProfileSimple Interface.

#ifndef _OPSPROF_H
#define _OPSPROF_H


extern RPC_IF_HANDLE __MIDL_itf_opsprof_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_opsprof_0000_v0_0_s_ifspec;

#ifndef __IOpsProfileSimple_INTERFACE_DEFINED__
#define __IOpsProfileSimple_INTERFACE_DEFINED__

/* interface IOpsProfileSimple */
/* [uuid][object] */ 


EXTERN_C const IID IID_IOpsProfileSimple;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7DD1362C-28B6-11d2-BCA7-00C04FD929DB")
    IOpsProfileSimple : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReadProperties( 
            /* [in] */ long lNumProperties,
            /* [size_is][in] */ const LPCWSTR __RPC_FAR szProperties[  ],
            /* [size_is][out] */ LPWSTR __RPC_FAR szReturnValues[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WriteProperties( 
            /* [in] */ long lNumProperties,
            /* [size_is][in] */ const LPCWSTR __RPC_FAR szProperties[  ],
            /* [size_is][in] */ const LPCWSTR __RPC_FAR szValues[  ]) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IOpsProfileSimpleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IOpsProfileSimple __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IOpsProfileSimple __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IOpsProfileSimple __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ReadProperties )( 
            IOpsProfileSimple __RPC_FAR * This,
            /* [in] */ long lNumProperties,
            /* [size_is][in] */ const LPCWSTR __RPC_FAR szProperties[  ],
            /* [size_is][out] */ LPWSTR __RPC_FAR szReturnValues[  ]);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *WriteProperties )( 
            IOpsProfileSimple __RPC_FAR * This,
            /* [in] */ long lNumProperties,
            /* [size_is][in] */ const LPCWSTR __RPC_FAR szProperties[  ],
            /* [size_is][in] */ const LPCWSTR __RPC_FAR szValues[  ]);
        
        END_INTERFACE
    } IOpsProfileSimpleVtbl;

    interface IOpsProfileSimple
    {
        CONST_VTBL struct IOpsProfileSimpleVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOpsProfileSimple_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IOpsProfileSimple_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IOpsProfileSimple_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IOpsProfileSimple_ReadProperties(This,lNumProperties,szProperties,szReturnValues)	\
    (This)->lpVtbl -> ReadProperties(This,lNumProperties,szProperties,szReturnValues)

#define IOpsProfileSimple_WriteProperties(This,lNumProperties,szProperties,szValues)	\
    (This)->lpVtbl -> WriteProperties(This,lNumProperties,szProperties,szValues)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IOpsProfileSimple_ReadProperties_Proxy( 
    IOpsProfileSimple __RPC_FAR * This,
    /* [in] */ long lNumProperties,
    /* [size_is][in] */ const LPCWSTR __RPC_FAR szProperties[  ],
    /* [size_is][out] */ LPWSTR __RPC_FAR szReturnValues[  ]);


void __RPC_STUB IOpsProfileSimple_ReadProperties_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IOpsProfileSimple_WriteProperties_Proxy( 
    IOpsProfileSimple __RPC_FAR * This,
    /* [in] */ long lNumProperties,
    /* [size_is][in] */ const LPCWSTR __RPC_FAR szProperties[  ],
    /* [size_is][in] */ const LPCWSTR __RPC_FAR szValues[  ]);


void __RPC_STUB IOpsProfileSimple_WriteProperties_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IOpsProfileSimple_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_opsprof_0085 */
/* [local] */ 

#endif


extern RPC_IF_HANDLE __MIDL_itf_opsprof_0085_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_opsprof_0085_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


