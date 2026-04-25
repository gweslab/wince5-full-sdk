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
//+-------------------------------------------------------------------------
//
//  Microsoft Windows
//  Copyright 1995-1998 Microsoft Corporation. All Rights Reserved.
//
//  File: hlinkez.h
//
//--------------------------------------------------------------------------

struct IBindStatusCallback;

HRESULT HlinkSimpleNavigateToString(
    /* [in] */ LPCWSTR szTarget,      // required - target document - null if local jump w/in doc
    /* [in] */ LPCWSTR szLocation,    // optional, for navigation into middle of a doc
    /* [in] */ LPCWSTR szAdditionalParams,   // optional, for targeting frame-sets
    /* [in] */ IUnknown *pUnk,        // required - we'll search this for other necessary interfaces
    /* [in] */ IBindCtx *pbc,         // optional. caller may register an IBSC in this
	/* [in] */ IBindStatusCallback *,
    /* [in] */ DWORD grfHLNF,         // flags (TBD - HadiP needs to define this correctly?)
    /* [in] */ DWORD dwReserved       // for future use, must be NULL
);

HRESULT HlinkSimpleNavigateToMoniker(
    /* [in] */ IMoniker *pmkTarget,   // required - target document - (may be null if local jump w/in doc)
    /* [in] */ LPCWSTR szLocation,    // optional, for navigation into middle of a doc
    /* [in] */ LPCWSTR szAddParams,   // optional, for targeting frame-sets
    /* [in] */ IUnknown *pUnk,        // required - we'll search this for other necessary interfaces
    /* [in] */ IBindCtx *pbc,         // optional. caller may register an IBSC in this
	/* [in] */ IBindStatusCallback *,
    /* [in] */ DWORD grfHLNF,         // flags (TBD - HadiP needs to define this correctly?)
    /* [in] */ DWORD dwReserved       // for future use, must be NULL
);

HRESULT HlinkGoBack(IUnknown *pUnk);
HRESULT HlinkGoForward(IUnknown *pUnk);
HRESULT HlinkNavigateString(IUnknown *pUnk, LPCWSTR szTarget);
HRESULT HlinkNavigateMoniker(IUnknown *pUnk, IMoniker *pmkTarget);
