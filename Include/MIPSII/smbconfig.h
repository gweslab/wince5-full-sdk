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
//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// This source code is licensed under Microsoft Shared Source License
// Version 1.0 for Windows CE.
// For a copy of the license visit http://go.microsoft.com/fwlink/?LinkId=3223.
//

#ifndef SMBCONFIG_H
#define SMBCONFIG_H

HRESULT Change_ACL(const WCHAR *pShareName, const WCHAR *pACL, const WCHAR *pROACL);
HRESULT Add_Share(const WCHAR *pName, DWORD dwType, const WCHAR *pPath, const WCHAR *pACL, const WCHAR *pROACL, const WCHAR *pDriver, const WCHAR *pComment);
HRESULT Del_Share(const WCHAR *pName);
HRESULT List_Connected_Users(WCHAR *pBuffer, UINT *puiLen);
HRESULT QueryAmountTransfered(LARGE_INTEGER *pRead, LARGE_INTEGER *pWritten);


typedef HRESULT  (*PFNChange_ACL)(const WCHAR *pShareName, const WCHAR *pACL, const WCHAR *pROACL);
typedef HRESULT  (*PFNAdd_Share)(const WCHAR *pName, DWORD dwType, const WCHAR *pPath, const WCHAR *pACL, const WCHAR *pROACL, const WCHAR *pDriver, const WCHAR *pComment);
typedef HRESULT  (*PFNDel_Share)(const WCHAR *pName);
typedef HRESULT  (*PFNList_Connected_Users)(WCHAR *pBuffer, UINT *puiLen);
typedef HRESULT  (*PFNQueryAmountTransfered)(LARGE_INTEGER *pRead, LARGE_INTEGER *pWritten);


#endif
