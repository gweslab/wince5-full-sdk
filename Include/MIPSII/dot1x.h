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
#ifndef _DOT1X_
#define _DOT1X_


#ifdef __cplusplus
extern "C" {
#endif

// [P]DOT1X_BLOB: generic description of a BLOB
typedef struct
{
DWORD   dwDataLen;
#if defined(MIDL_PASS)
[unique, size_is(dwDataLen)] LPBYTE pData;
#else
LPBYTE  pData;
#endif
} DOT1X_BLOB, *PDOT1X_BLOB;


// NOTE: Remove this when extended to non-WLAN 
#define MAX_SSID_LEN 32

//
// Structure: ONEEX_EAP_UI_CONTEXT
//

typedef struct _ONEEX_EAP_UI_CONTEXT
{
    DWORD       dwEAPOLUIMsgType;
    WCHAR       wszGUID[39];
    DWORD       dwSessionId;
    DWORD       dwContextId;
    DWORD       dwEapId;
    DWORD       dwEapTypeId;
    DWORD       dwEapFlags;
    WCHAR       wszSSID[MAX_SSID_LEN+1];
    DWORD       dwSizeOfSSID;
    BYTE        bSSID[MAX_SSID_LEN];
    DWORD       dwEAPOLState;
    DWORD       dwRetCode;
    DWORD       dwSizeOfEapUIData;
    BYTE        bEapUIData[1];
} ONEEX_EAP_UI_CONTEXT, *PONEEX_EAP_UI_CONTEXT;


// Structure used to define the UI Response.
// Currently it contains upto 3 blobs.
// If more are required, add to the structure

#define NUM_RESP_BLOBS 3


typedef struct _ONEEXUI_RESP
{
    DOT1X_BLOB    rdData0;
    DOT1X_BLOB    rdData1;
    DOT1X_BLOB    rdData2;
} ONEEXUI_RESP, *PONEEXUI_RESP;

//
// Defines for messaging between Service and Dialog DLL
//

#define     EAPOLUI_GET_USERIDENTITY            0x00000001
#define     EAPOLUI_GET_USERNAMEPASSWORD        0x00000002
#define     EAPOLUI_INVOKEINTERACTIVEUI         0x00000004
#define     EAPOLUI_EAP_NOTIFICATION            0x00000008
#define     EAPOLUI_REAUTHENTICATE              0x00000010
#define     EAPOLUI_CREATEBALLOON               0x00000020
#define     EAPOLUI_CLEANUP                     0x00000040
#define     EAPOLUI_DUMMY                       0x00000080

#define     NUM_EAPOL_DLG_MSGS      8


//
// EAP configuration DLL entrypoints.  These definitions must match the
// raseapif.h prototypes for RasEapInvokeConfigUI and RasEapFreeUserData.
//

typedef DWORD (APIENTRY * RASEAPFREE)( PBYTE );
typedef DWORD (APIENTRY * RASEAPINVOKECONFIGUI)( DWORD, HWND, DWORD, PBYTE, DWORD, PBYTE*, DWORD*);
typedef DWORD (APIENTRY * RASEAPGETIDENTITY)( DWORD, HWND, DWORD, const WCHAR*, const WCHAR*, PBYTE, DWORD, PBYTE, DWORD, PBYTE*, DWORD*, WCHAR** );
typedef DWORD (APIENTRY * RASEAPINVOKEINTERACTIVEUI)( DWORD, HWND, PBYTE, DWORD, PBYTE*, DWORD* );


// Double-threaded linked list node control block.  There is one node for each
// entry in a list.
//
// Applications should not access this structure directly.
//
typedef struct
_ONEEX_DTLNODE
{
    struct _ONEEX_DTLNODE* pdtlnodePrev; // Address of previous node or NULL if none
    struct _ONEEX_DTLNODE* pdtlnodeNext; // Address of next node or NULL if none
    VOID*    pData;        // Address of user's data
    LONG_PTR lNodeId;      // User-defined node identification code
}
ONEEX_DTLNODE;


//
// Double-threaded linked list control block.  There is one for each list.
//
// Applications should not access this structure directly.
//

typedef struct
_ONEEX_DTLLIST
{
    struct _ONEEX_DTLNODE* pdtlnodeFirst; // Address of first node or NULL if none
    struct _ONEEX_DTLNODE* pdtlnodeLast;  // Address of last node or NULL if none
    LONG     lNodes;        // Number of nodes in list
    LONG_PTR lListId;       // User-defined list identification code
}
ONEEX_DTLLIST;


// List node free function.  See FreeList.
//
typedef VOID (*PONEEXDESTROYNODE)( IN ONEEX_DTLNODE* );

#define DtlGetFirstNode( pdtllist )   ((pdtllist)->pdtlnodeFirst)
#define DtlGetNextNode( pdtlnode )    ((pdtlnode)->pdtlnodeNext)
#define DtlGetData( pdtlnode )        ((pdtlnode)->pData)

#if 0
#ifndef ONEEX_EAPTLS_CONNPROP_ATTRIBUTE_TYPE
typedef enum _ONEEX_EAPTLS_CONNPROP_ATTRIBUTE_TYPE_
{
    ecatMinimum = 0,            //Undefined
    ecatFlagRegistryCert,       //Value is a pointer to BOOL
    ecatFlagScard,              //Value is a pointer to BOOL
    ecatFlagValidateServer,     //Value is a pointer to BOOL
    ecatFlagValidateName,       //Value is a pointer to BOOL
    ecatFlagDiffUser,           //Value is a pointer to BOOL
    ecatServerNames,            //Value is a pointer to NULL
                                //terminated string of semi
                                //colon delimited server names
    ecatRootHashes              //Value is a pointer to
                                //SHA1 hashes of Root certs.

}ONEEX_EAPTLS_CONNPROP_ATTRIBUTE_TYPE;
#endif
#endif

typedef struct _ONEEX_EAPTLS_CONNPROP_ATTRIBUTE
{

    // ONEEX_EAPTLS_CONNPROP_ATTRIBUTE_TYPE  ecaType;
    DWORD                           ecaType;
    DWORD                           dwLength;   //includes byte length of the value
                                                //if it is a LPWSTR, it includes
                                                //the null termination.
    PVOID                           Value;

}ONEEX_EAPTLS_CONNPROP_ATTRIBUTE, *PONEEX_EAPTLS_CONNPROP_ATTRIBUTE;


#define RAS_EAP_VALUENAME_HIDEPEAPMSCHAPv2       TEXT("HidePEAPMSCHAPv2")

// Flags

#define EAPCFG_FLAG_RequireUsername   0x1
#define EAPCFG_FLAG_RequirePassword   0x2

// EAP configuration package definition.

typedef struct
_ONEEX_EAPCFG
{
    // The package's unique EAP algorithm code.
    //
    DWORD dwKey;

    // The friendly name of the package suitable for display to the user.
    //
    TCHAR* pszFriendlyName;

    // The SystemRoot-relative path to the package's configuration DLL.  May
    // be NULL indicating there is none.
    //
    TCHAR* pszConfigDll;

    // The SystemRoot-relative path to the package's identity DLL.  May
    // be NULL indicating there is none.
    //
    TCHAR* pszIdentityDll;

    // Flags that specify what standard credentials are required at dial
    // time.
    //
    DWORD dwStdCredentialFlags;

    // True if user is to be forced to run the configuration API for the
    // package, i.e. defaults are not sufficient.
    //
    BOOL fForceConfig;

    // True if the package provides MPPE encryption keys, false if not.
    //
    BOOL fProvidesMppeKeys;

    // The package's default configuration blob, which can be overwritten by
    // the configuration DLL.  May be NULL and 0 indicating there is none.
    //
    BYTE* pData;
    DWORD cbData;

    // EAP per user data to be stored in HKCU. This data is returned from
    // the EapInvokeConfigUI entrypoint in the eap dll.
    //
    BYTE* pUserData;
    DWORD cbUserData;

    // Set when the configuration DLL has been called on the package.  This is
    // not a registry setting.  It is provided for the convenience of the UI
    // only.
    //
    BOOL fConfigDllCalled;

    // Specifies the class ID of the configuration UI for remote machines.
    // Not used
    GUID guidConfigCLSID;
} ONEEX_EAPCFG;

VOID     OneExDtlDestroyList( ONEEX_DTLLIST*, PONEEXDESTROYNODE );

ONEEX_DTLNODE *
OneExCreateEapcfgNode(
    void);

VOID
OneExDestroyEapcfgNode(
    IN OUT ONEEX_DTLNODE* pNode);

ONEEX_DTLNODE*
OneExEapcfgNodeFromKey(
    IN ONEEX_DTLLIST* pList,
    IN DWORD dwKey);

#define     EAPOL_MUTUAL_AUTH_EAP_ONLY      0x00000001

ONEEX_DTLLIST*
OneExReadEapcfgList(IN DWORD   dwFlags);


#define EAPOL_DISABLED                  0
#define EAPOL_ENABLED                   0x80000000

#define EAPOL_MACHINE_AUTH_DISABLED     0
#define EAPOL_MACHINE_AUTH_ENABLED      0x40000000

#define EAPOL_GUEST_AUTH_DISABLED       0
#define EAPOL_GUEST_AUTH_ENABLED        0x20000000

#define EAP_TYPE_MD5                    4
#define EAP_TYPE_TLS                    13
#define EAP_TYPE_PEAP                   25
#define EAP_TYPE_MSCHAPv2               26

#define DEFAULT_EAP_TYPE                EAP_TYPE_TLS
#define DEFAULT_EAPOL_STATE             EAPOL_ENABLED
#define DEFAULT_MACHINE_AUTH_STATE      EAPOL_MACHINE_AUTH_ENABLED
#define DEFAULT_GUEST_AUTH_STATE        EAPOL_GUEST_AUTH_DISABLED

#define DEFAULT_EAP_STATE               (DEFAULT_EAPOL_STATE | DEFAULT_MACHINE_AUTH_STATE | DEFAULT_GUEST_AUTH_STATE)

#define IS_EAPOL_ENABLED(x) \
    ((x & EAPOL_ENABLED)?1:0)
#define IS_MACHINE_AUTH_ENABLED(x) \
    ((x & EAPOL_MACHINE_AUTH_ENABLED)?1:0)
#define IS_GUEST_AUTH_ENABLED(x) \
    ((x & EAPOL_GUEST_AUTH_ENABLED)?1:0)

#define     GUID_STRING_LEN_WITH_TERM   39

#ifdef __midl
    typedef struct _DOT1X_MAC_ADDRESS {
        UCHAR ucDot1xMacAddress[6];
    } DOT1X_MAC_ADDRESS, * PDOT1X_MAC_ADDRESS;
#else
    typedef UCHAR DOT1X_MAC_ADDRESS[6];
    typedef DOT1X_MAC_ADDRESS * PDOT1X_MAC_ADDRESS;
#endif

typedef enum _DOT1X_SYSTEM_AUTH_CONTROL
{
	Auth_Control_Enabled = 1,
	Auth_Control_Disabled
} DOT1X_SYSTEM_AUTH_CONTROL, *PDOT1X_SYSTEM_AUTH_CONTROL;

DWORD
WINAPI
Dot1xAllocateBuffer (
        DWORD dwByteCount,
        LPVOID * ppvBuffer
        );

DWORD
WINAPI
Dot1xFreeBuffer (
        LPVOID pvBuffer
        );


DWORD
WINAPI
SetDot1xSystemAuthControl (
        HANDLE hSystemHandle,
        DWORD dwVersion,
        PULONG puDot1xSystemAuthControl,
        LPVOID pvReserved
        );

DWORD
WINAPI
GetDot1xSystemAuthControl (
        HANDLE hSystemHandle,
        DWORD dwVersion,
        PULONG puDot1xSystemAuthControl,
        LPVOID pvReserved
        );

DWORD
WINAPI
GetDot1xPaePortProtocolVersion (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xPaePortProtocolVersion,
        LPVOID pvReserved
        );

#define DOT1X_PAE_PORT_AUTH_CAPABLE 0
#define DOT1X_PAE_PORT_SUPP_CAPABLE 1

DWORD
WINAPI
GetDot1xPaePortCapabilities (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puPaePortCapabilities,
        LPVOID pvReserved
        );

DWORD
WINAPI
SetDot1xPaePortInitialize (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PBOOL pfDot1xPaePortInitialize,
        LPVOID pvReserved
        );

DWORD
WINAPI
GetDot1xPaePortInitialize (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PBOOL pfDot1xPaePortInitialize,
        LPVOID pvReserved
        );

DWORD
WINAPI
SetDot1xPaePortReauthenticate (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PBOOL pfDot1xPaePortReauthenticate,
        LPVOID pvReserved
        );

DWORD
WINAPI
GetDot1xPaePortReauthenticate (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PBOOL pfDot1xPaePortReauthenticate,
        LPVOID pvReserved
        );

typedef enum _DOT1x_AUTH_PAE_STATE {
	Dot1x_Auth_Pae_State_Initialize = 1,
	Dot1x_Auth_Pae_State_Disconnected,
	Dot1x_Auth_Pae_State_Connecting,
	Dot1x_Auth_Pae_State_Authenticating,
	Dot1x_Auth_Pae_State_Authenticated,
	Dot1x_Auth_Pae_State_Aborting,
	Dot1x_Auth_Pae_State_Held,
	Dot1x_Auth_Pae_State_ForceAuth,
	Dot1x_Auth_Pae_State_ForceUnauth
} DOT1X_AUTH_PAE_STATE, *PDOT1X_AUTH_PAE_STATE;

DWORD
WINAPI
GetDot1xAuthPaeState (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xAuthPaeState,
        LPVOID pvReserved
        );

typedef enum _DOT1X_AUTH_BACKEND_AUTH_STATE {
	Dot1x_Backend_Auth_State_Request = 1,
	Dot1x_Backend_Auth_State_Response,
	Dot1x_Backend_Auth_State_Success,
	Dot1x_Backend_Auth_State_Fail,
	Dot1x_Backend_Auth_State_Timeout,
	Dot1x_Backend_Auth_State_Idle,
	Dot1x_Backend_Auth_State_Initialize
} DOT1X_AUTH_BACKEND_AUTH_STATE, *PDOT1X_AUTH_BACKEND_AUTH_STATE;

DWORD
WINAPI
GetDot1xAuthBackendAuthState (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xAuthBackendAuthState,
        LPVOID pvReserved
        );

typedef enum _DOT1X_PAE_CONTROLLED_DIRECTIONS
{
	DOT1x_CONTROLLED_DIRECTIONS_BOTH = 0,
	DOT1x_CONTROLLED_DIRECTIONS_IN
} DOT1X_PAE_CONTROLLED_DIRECTIONS, *PDOT1X_PAE_CONTROLLED_DIRECTIONS;

DWORD
WINAPI
SetDot1xAuthAdminControlledDirections (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xAuthAdminControlledDirections,
        LPVOID pvReserved
        );

DWORD
WINAPI
GetDot1xAuthAdminControlledDirections (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xAuthAdminControlledDirections,
        LPVOID pvReserved
        );

DWORD
WINAPI
GetDot1xAuthOperControlledDirections (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xAuthOperControlledDirections,
        LPVOID pvReserved
        );


typedef enum _DOT1X_PAE_CONTROLLED_PORT_STATUS
{
	STATUS_AUTHORIZED = 1,
	STATUS_UNAUTHORIZED = 2
} DOT1X_PAE_CONTROLLED_PORT_STATUS, *PDOT1X_PAE_CONTROLLED_PORT_STATUS;

DWORD
WINAPI
GetDot1xAuthAuthControlledPortStatus (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xAuthAuthControlledPortStatus,
        LPVOID pvReserved
        );

typedef enum _DOT1X_PAE_CONTROLLED_PORT_CONTROL
{
	CONTROL_FORCEUNAUTHORIZED = 1,
	CONTROL_AUTO = 2,
	CONTROL_FORCEAUTHORIZED = 3
} DOT1X_PAE_CONTROLLED_PORT_CONTROL, *PDOT1X_PAE_CONTROLLED_PORT_CONTROL;

DWORD
WINAPI
SetDot1xAuthAuthControlledPortControl (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xAuthControlledPortControl,
        LPVOID pvReserved
        );

DWORD
WINAPI
GetDot1xAuthAuthControlledPortControl (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xAuthControlledPortControl,
        LPVOID pvReserved
        );

DWORD
WINAPI
SetDot1xAuthQuietPeriod (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xAuthQuietPeriod,
        LPVOID pvReserved
        );

DWORD
WINAPI
GetDot1xAuthQuietPeriod (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xAuthQuietPeriod,
        LPVOID pvReserved
        );

DWORD
WINAPI
SetDot1xAuthTxPeriod (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xAuthTxPeriod,
        LPVOID pvReserved
        );

DWORD
WINAPI
GetDot1xAuthTxPeriod (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xAuthTxPeriod,
        LPVOID pvReserved
        );

DWORD
WINAPI
SetDot1xAuthSuppTimeout (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xAuthSuppTimeout,
        LPVOID pvReserved
        );

DWORD
WINAPI
GetDot1xAuthSuppTimeout (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xAuthSuppTimeout,
        LPVOID pvReserved
        );

DWORD
WINAPI
SetDot1xAuthServerTimeout (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xAuthServerTimeout,
        LPVOID pvReserved
        );

DWORD
WINAPI
GetDot1xAuthServerTimeout (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xAuthServerTimeout,
        LPVOID pvReserved
        );

DWORD
WINAPI
SetDot1xMaxReq (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xAuthMaxReq,
        LPVOID pvReserved
        );

DWORD
WINAPI
GetDot1xMaxReq (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xAuthMaxReq,
        LPVOID pvReserved
        );

DWORD
WINAPI
SetDot1xAuthReAuthPeriod (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xAuthReAuthPeriod,
        LPVOID pvReserved
        );

DWORD
WINAPI
GetDot1xAuthReAuthPeriod (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xAuthReAuthPeriod,
        LPVOID pvReserved
        );

DWORD
WINAPI
SetDot1xAuthReAuthEnabled (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PBOOL pfDot1xAuthReAuthEnabled,
        LPVOID pvReserved
        );

DWORD
WINAPI
GetDot1xAuthReAuthEnabled (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PBOOL pfDot1xAuthReAuthEnabled,
        LPVOID pvReserved
        );

DWORD
WINAPI
SetDot1xAuthKeyTxEnabled (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PBOOL pfDot1xAuthKeyTxEnabled,
        LPVOID pvReserved
        );

DWORD
WINAPI
GetDot1xAuthKeyTxEnabled (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PBOOL pfDot1xAuthKeyTxEnabled,
        LPVOID pvReserved
        );

#define DOT1X_PSK_LENGTH 32

DWORD
WINAPI
SetDot1xSSNPSK (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PDOT1X_BLOB pPSK,
        LPVOID pvReserved
        );

DWORD
WINAPI
SetDot1xGroupKeyUpdateTimer (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PDWORD pdwGroupKeyUpdateTimer,
        LPVOID pvReserved
        );

DWORD
WINAPI
GetDot1xGroupKeyUpdateTimer (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PDWORD pdwGroupKeyUpdateTimer,
        LPVOID pvReserved
        );

typedef struct _DOT1X_AUTH_STATS_ENTRY {
    ULONG uDot1xAuthEapolFramesRx;
    ULONG uDot1xAuthEapolFramesTx;
    ULONG uDot1xAuthEapolStartFramesRx;
    ULONG uDot1xAuthEapolLogoffFramesRx;
    ULONG uDot1xAuthEapolRespIdFramesRx;
    ULONG uDot1xAuthEapolRespFramesRx;
    ULONG uDot1xAuthEapolReqIdFramesTx;
    ULONG uDot1xAuthEapolReqFramesTx;
    ULONG uDot1xAuthInvalideEapolFramesRx;
    ULONG uDot1xAuthEapLengthErrorFramesRx;
    ULONG uDot1xAuthLastEapolFrameVersion;
    DOT1X_MAC_ADDRESS uDot1xAuthLastEapolFrameSource;
} DOT1X_AUTH_STATS_ENTRY, *PDOT1X_AUTH_STATS_ENTRY;


DWORD
WINAPI
GetDot1xAuthStatsEntry (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PDOT1X_AUTH_STATS_ENTRY pDot1xAuthStatsEntry,
        LPVOID pvReserved
        );


typedef struct _DOT1X_AUTH_DIAG_ENTRY {
    ULONG udot1xAuthEntersConnecting;
    ULONG udot1xAuthEapLogoffsWhileConnecting;
    ULONG udot1xAuthEntersAuthenticating;
    ULONG udot1xAuthAuthSuccessWhileAuthenticating;
    ULONG udot1xAuthAuthTimeoutWhileAuthenticating;
    ULONG udot1xAuthAuthFailWhileAuthenticating;
    ULONG udot1xAuthAuthReauthsWhileAuthenticating;
    ULONG udot1xAuthAuthEapStartsWhileAuthenticating;
    ULONG udot1xAuthAuthEapLogoffWhileAuthenticating;
    ULONG udot1xAuthAuthReauthsWhileAuthenticated;
    ULONG udot1xAuthAuthEapStartsWhileAuthenticated;
    ULONG udot1xAuthAuthEapLogoffWhileAuthenticated;
    ULONG udot1xAuthBackendResponses;
    ULONG udot1xAuthBackendOtherRequestsToSupplicant;
    ULONG udot1xAuthBackendNonNakResponsesFromSupplicant;
    ULONG udot1xAuthBackendAuthSuccesses;
    ULONG udot1xAuthBackendAuthFails;
} DOT1X_AUTH_DIAG_ENTRY, *PDOT1X_AUTH_DIAG_ENTRY;

DWORD
WINAPI
GetDot1xAuthDiagEntry(
        HANDLE hPortHandle,
        DWORD dwVersion,
        PDOT1X_AUTH_DIAG_ENTRY pDot1xAuthDiagEntry,
        LPVOID pvReserved
        );


typedef struct _DOT1X_AUTH_SESSION_STATS {
    ULONGLONG udot1xAuthSessionOctetsRx;
    ULONGLONG udot1xAuthSessionOctetsTx;
    ULONG udot1xAuthSessionFramesRx;
    ULONG udot1xAuthSessionFramesTx;
    PDOT1X_BLOB udot1xAuthSessionId;
    ULONG udot1xAuthSessionAuthenticMethod;
    ULONG udot1xAuthSessionTime;
    ULONG udot1xAuthSessionTerminateCause;
    PDOT1X_BLOB udot1xAuthSessionUserName;
} DOT1X_AUTH_SESSION_STATS, *PDOT1X_AUTH_SESSION_STATS;

DWORD
WINAPI
GetDot1xAuthSessionStats (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PDOT1X_AUTH_SESSION_STATS pDot1xAuthSessionStats,
        LPVOID pvReserved
        );


typedef enum _DOT1X_SUPP_PAE_STATE_ {
	Dot1x_Supp_Pae_State_Disconnected = 1,
	Dot1x_Supp_Pae_State_Logoff = 2,
	Dot1x_Supp_Pae_State_Connecting = 3,
	Dot1x_Supp_Pae_State_Authenticating = 4,
	Dot1x_Supp_Pae_State_Authenticated = 5,
	Dot1x_Supp_Pae_State_Acquired = 6,
	Dot1x_Supp_Pae_State_Held = 7
} DOT1X_SUPP_PAE_STATE, *PDOT1X_SUPP_PAE_STATE;


DWORD
WINAPI
GetDot1xSuppPaeState (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xSuppPaeState,
        LPVOID pvReserved
        );


DWORD
WINAPI
SetDot1xSuppHeldPeriod (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xSuppHeldPeriod,
        LPVOID pvReserved
        );

DWORD
WINAPI
GetDot1xSuppHeldPeriod (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xSuppHeldPeriod,
        LPVOID pvReserved
        );

DWORD
WINAPI
SetDot1xSuppAuthPeriod (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xSuppAuthPeriod,
        LPVOID pvReserved
        );

DWORD
WINAPI
GetDot1xSuppAuthPeriod (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xSuppAuthPeriod,
        LPVOID pvReserved
        );

DWORD
WINAPI
SetDot1xSuppStartPeriod (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xSuppStartPeriod,
        LPVOID pvReserved
        );

DWORD
WINAPI
GetDot1xSuppStartPeriod (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xSuppStartPeriod,
        LPVOID pvReserved
        );

DWORD
WINAPI
SetDot1xSuppMaxStart (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xSuppMaxStart,
        LPVOID pvReserved
        );

DWORD
WINAPI
GetDot1xSuppMaxStart (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PULONG puDot1xSuppMaxStart,
        LPVOID pvReserved
        );


typedef struct _DOT1X_SUPP_STATS {
    ULONG udot1xSuppEapolFramesRx;
    ULONG udot1xSuppEapolFramesTx;
    ULONG udot1xSuppEapolStartFramesTx;
    ULONG udot1xSuppEapolLogoffFramesTx;
    ULONG udot1xSuppEapolRespIdFramesTx;
    ULONG udot1xSuppEapolRespFramesTx;
    ULONG udot1xSuppEapolReqIdFramesRx;
    ULONG udot1xSuppEapolReqFramesRx;
    ULONG udot1xSuppInvalidEapolFramesRx;
    ULONG udot1xSuppEapLengthErrorFramesRx;
    ULONG udot1xSuppLastEapolFrameVersion;
    DOT1X_MAC_ADDRESS udot1xSuppLastEapolFrameSource;
} DOT1X_SUPP_STATS, *PDOT1X_SUPP_STATS;

DWORD
WINAPI
GetDot1xSuppStats (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PDOT1X_SUPP_STATS pDot1xSuppStats,
        LPVOID pvReserved
        );


// APIs:
// Authenticator Configuration

#define FIELD_AUTH_AUTHENTICATOR_PAE_STATE          0x80000000
#define FIELD_AUTH_BACKEND_AUTHENTICATION_STATE     0x40000000
#define FIELD_AUTH_ADMIN_CONTROLLED_DIRECTIONS      0x20000000
#define FIELD_AUTH_OPER_CONTROLLED_DIRECTIONS       0x10000000
#define FIELD_AUTH_AUTH_CONTROLLED_PORT_CONTROL     0x08000000
#define FIELD_AUTH_AUTH_CONTROLLED_PORT_STATUS      0x04000000
#define FIELD_AUTH_RE_AUTH_MAX                      0x02000000
#define FIELD_AUTH_QUIET_PERIOD                     0x01000000
#define FIELD_AUTH_TX_PERIOD                        0x00800000
#define FIELD_AUTH_SUPP_TIME_OUT                    0x00400000
#define FIELD_AUTH_SERVER_TIME_OUT                  0x00200000
#define FIELD_AUTH_MAX_REQ                          0x00100000
#define FIELD_AUTH_RE_AUTH_PERIOD                   0x00080000
#define FIELD_AUTH_RE_AUTH_ENABLED                  0x00040000
#define FIELD_AUTH_KEY_TRANSMISSION_ENABLED         0x00020000


typedef struct _AUTHENTICATOR_CONFIGURATION
{
    DOT1X_AUTH_PAE_STATE AuthenticatorPAEState;
    DOT1X_AUTH_BACKEND_AUTH_STATE BackendAuthenticationState;
    DOT1X_PAE_CONTROLLED_DIRECTIONS AdminControlledDirections;
    DOT1X_PAE_CONTROLLED_DIRECTIONS OperControlledDirections;
    DOT1X_PAE_CONTROLLED_PORT_CONTROL AuthControlledPortControl;
    DOT1X_PAE_CONTROLLED_PORT_STATUS AuthControlledPortStatus;
    DWORD reAuthMax;
    DWORD quietPeriod;
    DWORD txPeriod;
    DWORD suppTimeout;
    DWORD serverTimeout;
    DWORD maxReq;
    DWORD reAuthPeriod;
    DWORD reAuthEnabled;
    BOOL KeyTransmissionEnabled;
} AUTHENTICATOR_CONFIGURATION, *PAUTHENTICATOR_CONFIGURATION;

DWORD
WINAPI
ReadAuthenticatorConfiguration (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PAUTHENTICATOR_CONFIGURATION pAuthenticatorConfiguration,
        LPVOID pvReserved
        );

DWORD
WINAPI
SetAuthenticatorConfiguration (
        HANDLE hPortHandle,
        DWORD dwVersion,
        DWORD dwFields,
        PAUTHENTICATOR_CONFIGURATION pAuthenticatorConfiguration,
        LPVOID pvReserved
        );


DWORD
WINAPI
Reauthenticate (
        HANDLE hPortHandle,
        DWORD dwVersion,
        LPVOID pvReserved
        );


DWORD
WINAPI
ReadAuthenticatorStatistics (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PDOT1X_AUTH_STATS_ENTRY pAuthenticatorStatistics,
        LPVOID pvReserved
        );


// Authenticator Diagnostics

DWORD
WINAPI
ReadAuthenticatorDiagnostics (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PDOT1X_AUTH_DIAG_ENTRY pAuthenticatorDiagnostics,
        LPVOID pvReserved
        );


// Authenticator Session Statistics

DWORD
WINAPI
ReadAuthenticatorSessionStatistics (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PDOT1X_AUTH_SESSION_STATS pAuthenticatorSessionStatistics,
        LPVOID pvReserved
        );


typedef struct _SUPPLICANT_STATUS {
    ULONG SupplicantPAEState;
    ULONG heldPeriod;
    ULONG authPeriod;
    ULONG startPeriod;
    ULONG maxStart;
} SUPPLICANT_STATUS, *PSUPPLICANT_STATUS;

DWORD
WINAPI
ReadSupplicantStatus (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PSUPPLICANT_STATUS pSupplicantStatistics,
        LPVOID pvReserved
        );

typedef struct _SUPPLICANT_CONFIGURATION
{
    ULONG SupplicantPAEState;
    DWORD heldPeriod;
    DWORD authPeriod;
    DWORD startPeriod;
    DWORD maxStart;
} SUPPLICANT_CONFIGURATION, *PSUPPLICANT_CONFIGURATION;


#define FIELD_SUPP_HELD_PERIOD      0x80000000
#define FIELD_SUPP_AUTH_PERIOD      0x40000000
#define FIELD_SUPP_START_PERIOD     0x20000000
#define FIELD_SUPP_MAX_START        0x10000000

DWORD
WINAPI
SetSupplicantConfiguration (
        HANDLE hPortHandle,
        DWORD dwVersion,
        DWORD dwFields,
        PSUPPLICANT_CONFIGURATION pSupplicantConfiguration,
        LPVOID pvReserved
        );


DWORD
WINAPI
ReadSupplicantConfiguration (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PSUPPLICANT_CONFIGURATION pSupplicantConfiguration,
        LPVOID pvReserved
        );


DWORD
WINAPI
ReadSupplicantStatistics (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PDOT1X_SUPP_STATS pSupplicantStatistics,
        LPVOID pvReserved
        );


typedef struct _DOT1X_PORT_CONFIGURATION {
    ULONG PortNumber;
    ULONG ProtocolVersion;
    ULONG PAECapabilities;
} DOT1X_PORT_CONFIGURATION, *PDOT1X_PORT_CONFIGURATION;


typedef struct _SYSTEM_CONFIGURATION {
    DWORD SystemAuthControl;
} SYSTEM_CONFIGURATION, *PSYSTEM_CONFIGURATION;

#define FIELD_SYSTEM_AUTH_CONTROL      0x80000000

DWORD
WINAPI
ReadSystemConfiguration (
        HANDLE hSystemHandle,
        DWORD dwVersion,
        PSYSTEM_CONFIGURATION pSystemConfiguration,
        PDOT1X_PORT_CONFIGURATION pTempPortConfiguration,
        DWORD dwPreferredNumPorts,
        PDOT1X_PORT_CONFIGURATION *ppPortConfiguration,
        LPDWORD pdwNumPorts,
        LPDWORD pdwTotalNumPorts,
        LPDWORD pdwResumeHandle,
        LPVOID pvReserved
        );

DWORD
WINAPI
SetSystemConfiguration (
        HANDLE hSystemHandle,
        DWORD dwVersion,
        DWORD dwFields,
        PSYSTEM_CONFIGURATION pSystemConfiguration,
        LPVOID pvReserved
        );

DWORD
WINAPI
InitializePort (
        HANDLE hPortHandle,
        DWORD dwVersion,
        LPVOID pvReserved
        );




typedef struct _DOT1X_INTERFACE {
    GUID gInterfaceId;
    LPWSTR pszDescription;
} DOT1X_INTERFACE, *PDOT1X_INTERFACE;

DWORD
WINAPI
EnumDot1xInterfaces (
        LPWSTR pServerName,
        DWORD dwVersion,
        PDOT1X_INTERFACE pTempDot1xInterfaces,
        DWORD dwPreferredNumInterfaces,
        PDOT1X_INTERFACE * ppDot1xInterfaces,
        LPDWORD pdwNumInterfaces,
        LPDWORD pdwTotalNumInterfaces,
        LPDWORD pdwResumeHandle,
        LPVOID pvReserved
        );

typedef struct _DOT1X_PORT {
    GUID gInterfaceId;
    DOT1X_MAC_ADDRESS PeerMacAddress;
    PDOT1X_BLOB pPortIdentifier;
    DWORD_PTR PortNumber;
    DWORD dwFlags;
} DOT1X_PORT, *PDOT1X_PORT;

#define DOT1X_ENUM_PORT_SETTINGS    0x80000000
#define DOT1X_ENUM_ACTIVE_PORTS     0x40000000

DWORD
WINAPI
EnumDot1xPorts (
        LPWSTR pServerName,
        DWORD dwVersion,
        DWORD dwFlags,
        LPGUID pGuid,
        PDOT1X_PORT pTemplateDot1xPort,
        DWORD dwPreferredNumPorts,
        PDOT1X_PORT * ppDot1xPorts,
        LPDWORD pdwNumPorts,
        LPDWORD pdwTotalNumPorts,
        LPDWORD pdwResumeHandle,
        LPVOID pvReserved
        );


#define DOT1X_HANDLE_PORT           0x80000000
#define DOT1X_HANDLE_SYSTEM         0x40000000

#define DOT1X_SETTINGS              0x20000000
#define DOT1X_STATUS                0x10000000

#define DOT1X_MODE_AUTHENTICATOR    0x08000000
#define DOT1X_MODE_SUPPLICANT       0x04000000


DWORD
WINAPI
OpenDot1xHandle (
        LPWSTR pServerName,
        DWORD dwVersion,
        DWORD dwFlags,
        PDOT1X_PORT pPort,
        DWORD dwDesiredAccess,
        DWORD dwSharedMode,
        LPVOID pvReserved,
        PHANDLE phHandle
        );

DWORD
WINAPI
CloseDot1xHandle (
        HANDLE hHandle
        );


// Legacy interop APIs


typedef struct _DOT1X_ALLOWED_NON8021X {
    DOT1X_MAC_ADDRESS   MacAddress;
} DOT1X_ALLOWED_NON8021X, *PDOT1X_ALLOWED_NON8021X;

DWORD
WINAPI
EnumDot1xAllowedNon8021x (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PDOT1X_ALLOWED_NON8021X pTempDot1xAllowed,
        DWORD dwPreferredNumEntries,
        PDOT1X_ALLOWED_NON8021X * ppDot1xAllowed,
        LPDWORD pdwNumEntries,
        LPDWORD pdwTotalNumEntries,
        LPDWORD pdwResumeHandle,
        LPVOID pvReserved
        );

DWORD
WINAPI
AddDot1xAllowedNon8021x (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PDOT1X_ALLOWED_NON8021X pDot1xAllowed,
        LPVOID pvReserved
        );

DWORD
WINAPI
RemoveDot1xAllowedNon8021x (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PDOT1X_ALLOWED_NON8021X pDot1xAllowed,
        LPVOID pvReserved
        );


// 802.1x Implementation-Specific APIs

typedef struct _SUPPLICANT_AUTH_PARAMS {
    DWORD dwVersion;
    DWORD dwEapFlags;
    DWORD dwEapType;
    DWORD dwSizeOfSSID;
    BYTE bSSID[MAX_SSID_LEN];
    DWORD heldPeriod;
    DWORD authPeriod;
    DWORD startPeriod;
    DWORD maxStart;
    DWORD dwSupplicantMode;
    DWORD dwEAPOLAuthMode;
} SUPPLICANT_AUTH_PARAMS, *PSUPPLICANT_AUTH_PARAMS;


DWORD
WINAPI
Set8021xSupplicantAuthParams (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PSUPPLICANT_AUTH_PARAMS pSupplicantAuthParams,
        LPVOID pvReserved
        );

DWORD
WINAPI
Get8021xSupplicantAuthParams (
        HANDLE hPortHandle,
        DWORD dwVersion,
        PSUPPLICANT_AUTH_PARAMS pSupplicantAuthParams,
        LPVOID pvReserved
        );
        
DWORD
WINAPI
Set8021xSupplicantEAPData (
        HANDLE hPortHandle,
        DWORD dwVersion,
        DWORD dwEapTypeId,
        PDOT1X_BLOB pEapData,
        LPVOID pvReserved
        );

DWORD
WINAPI
Get8021xSupplicantEAPData (
        HANDLE hPortHandle,
        DWORD dwVersion,
        DWORD dwEapTypeId,
        PDOT1X_BLOB pEapData,
        LPVOID pvReserved
        );

DWORD
WINAPI
Delete8021xSupplicantAuthData (
        HANDLE hPortHandle,
        DWORD dwVersion,
        LPVOID pvReserved
        );

DWORD
WINAPI
Get8021xEapUserInfo (
        HANDLE hPortHandle,
        DWORD dwVersion,
        DWORD dwEapTypeId,
        PDOT1X_BLOB pUserInfo,
        LPVOID pvReserved
        );

DWORD
WINAPI
Set8021xEapUserInfo (
        HANDLE hPortHandle,
        DWORD dwVersion,
        DWORD dwEapTypeId,
        PDOT1X_BLOB pUserInfo,
        LPVOID pvReserved
        );

DWORD
Dot1xUIResponse (
        LPWSTR pServerName,
        ONEEX_EAP_UI_CONTEXT    EapolUIContext,
        ONEEXUI_RESP            EapolUIResp
        );

#ifdef __cplusplus
}
#endif

#endif // _DOT1X_
