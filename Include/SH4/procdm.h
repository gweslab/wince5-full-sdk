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
/* at Thu Jun 24 18:49:41 2004
 */
/* Compiler settings for .\procdm.idl:
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

#ifndef __procdm_h__
#define __procdm_h__

/* Forward Declarations */ 

#ifndef __IProcessDebugManager2_FWD_DEFINED__
#define __IProcessDebugManager2_FWD_DEFINED__
typedef interface IProcessDebugManager2 IProcessDebugManager2;
#endif 	/* __IProcessDebugManager2_FWD_DEFINED__ */


#ifndef __ProcessDebugManager_FWD_DEFINED__
#define __ProcessDebugManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class ProcessDebugManager ProcessDebugManager;
#else
typedef struct ProcessDebugManager ProcessDebugManager;
#endif /* __cplusplus */

#endif 	/* __ProcessDebugManager_FWD_DEFINED__ */


#ifndef __DebugHelper_FWD_DEFINED__
#define __DebugHelper_FWD_DEFINED__

#ifdef __cplusplus
typedef class DebugHelper DebugHelper;
#else
typedef struct DebugHelper DebugHelper;
#endif /* __cplusplus */

#endif 	/* __DebugHelper_FWD_DEFINED__ */


#ifndef __CDebugDocumentHelper_FWD_DEFINED__
#define __CDebugDocumentHelper_FWD_DEFINED__

#ifdef __cplusplus
typedef class CDebugDocumentHelper CDebugDocumentHelper;
#else
typedef struct CDebugDocumentHelper CDebugDocumentHelper;
#endif /* __cplusplus */

#endif 	/* __CDebugDocumentHelper_FWD_DEFINED__ */


/* header files for imported files */
#include "activdbg.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_procdm_0000 */
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


extern RPC_IF_HANDLE __MIDL_itf_procdm_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_procdm_0000_v0_0_s_ifspec;

#ifndef __IProcessDebugManager2_INTERFACE_DEFINED__
#define __IProcessDebugManager2_INTERFACE_DEFINED__

/* interface IProcessDebugManager2 */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IProcessDebugManager2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("78a51820-51f4-11d0-8f20-00805f2cd064")
    IProcessDebugManager2 : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IProcessDebugManager2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IProcessDebugManager2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IProcessDebugManager2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IProcessDebugManager2 __RPC_FAR * This);
        
        END_INTERFACE
    } IProcessDebugManager2Vtbl;

    interface IProcessDebugManager2
    {
        CONST_VTBL struct IProcessDebugManager2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IProcessDebugManager2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IProcessDebugManager2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IProcessDebugManager2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IProcessDebugManager2_INTERFACE_DEFINED__ */



#ifndef __PROCDMLib_LIBRARY_DEFINED__
#define __PROCDMLib_LIBRARY_DEFINED__

/* library PROCDMLib */
/* [helpstring][version][uuid] */ 

EXTERN_C const CLSID CLSID_CDebugDocumentHelper;

EXTERN_C const IID LIBID_PROCDMLib;

EXTERN_C const CLSID CLSID_ProcessDebugManager;

#ifdef __cplusplus

class DECLSPEC_UUID("78a51822-51f4-11d0-8f20-00805f2cd064")
ProcessDebugManager;
#endif

EXTERN_C const CLSID CLSID_DebugHelper;

#ifdef __cplusplus

class DECLSPEC_UUID("0BFCC060-8C1D-11d0-ACCD-00AA0060275C")
DebugHelper;
#endif

EXTERN_C const CLSID CLSID_CDebugDocumentHelper;

#ifdef __cplusplus

class DECLSPEC_UUID("83B8BCA6-687C-11D0-A405-00AA0060275C")
CDebugDocumentHelper;
#endif
#endif /* __PROCDMLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


