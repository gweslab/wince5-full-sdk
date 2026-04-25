//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// Use of this source code is subject to the terms of the Microsoft EULA for
//  Windows CE.  If you did not accept the EULA, you are
//  not authorized to use this source code. 
// For a copy of the EULA, please see the LICENSE.RTF on your install media.
//

#if !defined(_DEF_URLMONUI_H_)

#define _DEF_URLMONUI_H_ 

// Return values from DialogProc's
enum  {  ZALERT_NO = 0 /* should be 0*/ , ZALERT_YES, ZALERT_YESPERSIST };

#if defined(__cplusplus)
extern "C"{
#endif 

int IsDialogBoxHandled
(
    IN HWND     hWnd,
    IN DWORD    dwAction,
    IN DWORD    dwPermissions,
    IN LPCTSTR  lpszText
);


#if defined(__cplusplus)
}
#endif

#endif


