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

#pragma once
#ifndef __NDISWWAN_H__
#define __NDISWWAN_H__ 1


#ifdef __cplusplus
extern "C" {
#endif

#define WWAN_MANUFACTURER_LEN   32
#define WWAN_MODEL_LEN          32
#define WWAN_FIRMWARE_LEN       32
#define WWAN_PIN_LEN            32
#define WWAN_IMSI_LEN           32
#define WWAN_IMEI_LEN           32
#define WWAN_PROVIDERNAME_LEN   32
#define WWAN_ACCESSSTRING_LEN   64
#define WWAN_USERNAME_LEN       32
#define WWAN_PASSWORD_LEN       32


typedef ULONG WWAN_VERSION;         /* A value specifies the version.      */
                                    /*   bit[16:31]: major version         */
                                    /*   bit[0:15]:  minor version         */

#define WWAN_VERSION_1_0        0x00010000
#define WWAN_VERSION_NONE       0xffffffff
#define WWAN_CURRENT_VERSION    WWAN_VERSION_1_0

typedef struct _WWAN_VERSION_RANGE
{
    WWAN_VERSION    LowVersion;
    WWAN_VERSION    HighVersion;
    WWAN_VERSION    NegotiatedVersion;
}
WWAN_VERSION_RANGE;


/*-----------------------------------------------------------------------
    wwan specific status codes
  -----------------------------------------------------------------------*/
typedef enum _WWAN_RESULT_CODE
{
    WwanResultSuccess,              /* Succeeded                           */
    WwanResultSuccessPartial,       /* Succeeded, partial results given    */
    WwanResultFailure,              /* Failed, no reason given             */ 
    WwanResultNoSim,                /* Failed, SIM is not present          */ 
    WwanResultBadSim,               /* Failed, SIM is invalid              */ 
    WwanResultSimRejected,          /* Failed, SIM was rejected            */ 
    WwanResultNotInitialized,       /* Failed, device not ready            */ 
    WwanResultSubsidyLocked,        /* Failed, Device is subsidy locked    */
    WwanResultPinLocked,            /* Failed, operation requires PIN      */
    WwanResultPukLocked,            /* Failed, operation requires PUK      */
    WwanResultPin2Locked,           /* Failed, operation requires PIN2     */
    WwanResultPuk2Locked,           /* Failed, operation requires PUK2     */
    WwanResultNetworkPwdLocked,     /* Failed, requires network pwd        */
    WwanResultDevicePwdLocked,      /* Failed, requires device pwd         */
    WwanResultWrongPassword,        /* Failed, password/PIN is incorrect   */
    WwanResultPasswordIgnored,      /* Failed, password type is unlocked   */
    WwanResultRegistrationDenied,   /* Failed, emergency calls okay        */
    WwanResultNoProvidersFound,     /* Failed, still searching             */
    WwanResultNoActiveProvider,     /* Failed, must be registered          */
    WwanResultNotAttached,          /* Failed, must be packet attached     */
    WwanResultMaxActivatedContexts, /* Failed, max active contexts         */
    WwanResultServiceUnavailable,   /* Failed, e.g. no packet roaming      */
    WwanResultMax                   /* Maximum value                       */
}
WWAN_RESULT_CODE;


/*-----------------------------------------------------------------------
    async operation data structures
  -----------------------------------------------------------------------*/
typedef struct _WWAN_ASYNC_NOTIFY
{
    ULONG       StatusType;         /* Notification Code NDIS_WW_XXX       */
    ULONG       DataSize;           /* Size of the OID data in bytes       */
    ULONG       DataOffset;         /* Offset of the OID data in bytes     */
}
WWAN_ASYNC_NOTIFY;


typedef struct _WWAN_ASYNC_REQUEST
{
    ULONG_PTR   RequestId;          /* Used to match the async response    */
    ULONG       DataSize;           /* Size and offset of data structure   */
    ULONG       DataOffset;         /* associated with this operation      */
}
WWAN_ASYNC_REQUEST;


typedef struct _WWAN_ASYNC_RESPONSE
{
    ULONG_PTR           RequestId;  /* Used to match the async response    */
    WWAN_RESULT_CODE    ResultCode; /* Result of the command               */
    ULONG               DataSize;   /* Size and offset of data structure   */
    ULONG               DataOffset; /* associated with this operation      */
}
WWAN_ASYNC_RESPONSE;


/*-----------------------------------------------------------------------
    wwan data structures
  -----------------------------------------------------------------------*/

typedef enum _WWAN_DEVICE_TYPE
{
    WwanDeviceTypeUnknown,
    WwanDeviceTypeLocal,
    WwanDeviceTypeRemote,
    WwanDeviceTypeMax
}
WWAN_DEVICE_TYPE;


typedef enum _WWAN_CELLULAR_CLASS
{
    WwanCellularClassUnknown,
    WwanCellularClassGsm,
    WwanCellularClassCdma,
    WwanCellularClassMax
}
WWAN_CELLULAR_CLASS;


typedef enum _WWAN_VOICE_CLASS
{
    WwanVoiceClassUnknown,
    WwanVoiceClassNoVoice,
    WwanVoiceClassSeparateVoiceData,
    WwanVoiceClassSimultaneousVoiceData,
    WwanVoiceClassMax
}
WWAN_VOICE_CLASS;


typedef enum _WWAN_SIM_CLASS
{
    WwanSimClassUnknown,
    WwanSimClassNoSim,
    WwanSimClassSimSupported,
    WwanSimClassMax
}
WWAN_SIM_CLASS;


#define WWAN_DATA_CLASS_UNKNOWN     0x00000000
#define WWAN_DATA_CLASS_GPRS        0x00000001
#define WWAN_DATA_CLASS_EGPRS       0x00000002
#define WWAN_DATA_CLASS_UMTS        0x00000004
#define WWAN_DATA_CLASS_HSDPA       0x00000008
#define WWAN_DATA_CLASS_1XRTT       0x00000010
#define WWAN_DATA_CLASS_1XEVDO      0x00000020
#define WWAN_DATA_CLASS_1XEVDV      0x00000040
#define WWAN_DATA_CLASS_3XRTT       0x00000080
#define WWAN_DATA_CLASS_INVMASK     0xffffff00


typedef struct _WWAN_DEVICE_CAPS
{
    WWAN_DEVICE_TYPE    WwanDeviceType;     /* Local or remote             */
    WWAN_CELLULAR_CLASS WwanCellularClass;  /* GSM, CDMA, etc              */
    WWAN_VOICE_CLASS    WwanVoiceClass;     /* Voice service capabilities  */
    WWAN_SIM_CLASS      WwanSimClass;       /* SIM required?               */
    ULONG               WwanDataClass;      /* Technology of data service  */
    WCHAR Manufacturer[WWAN_MANUFACTURER_LEN]; /* Null-term'd mfg string   */
    WCHAR Model[WWAN_MODEL_LEN];            /* Null-term'd model string    */
    WCHAR FirmwareInfo[WWAN_FIRMWARE_LEN];  /* Null-term'd fwinfo string   */
    ULONG MaxActivatedContexts;             /* Max simultaneous            */
    ULONG DevSpecificSize;                  /* Size and offset of device   */
    ULONG DevSpecificOffset;                /* specific WWAN info OPTIONAL */
}
WWAN_DEVICE_CAPS;


#define WWAN_READY_STATE_SHUTDOWN    0x00000001 /* stack is off            */
#define WWAN_READY_STATE_PHONEBOOK   0x00000002 /* can read PB             */
#define WWAN_READY_STATE_SMSSTORE    0x00000004 /* can read SMSs           */
#define WWAN_READY_STATE_INITIALIZED 0x00000008 /* ready to power tx/rx reg*/
#define WWAN_READY_STATE_NO_SIM      0x00000010 /* SIM not inserted        */
#define WWAN_READY_STATE_BAD_SIM     0x00000020 /* SIM is invalid          */
#define WWAN_READY_STATE_FAILURE     0x00000040 /* device failure          */
#define WWAN_READY_STATE_INVMASK     0xffffff80


typedef struct _WWAN_READY_STATE
{
    ULONG   State;                  /* A WWAN_READY_STATE_* constants      */
    WCHAR   Imsi[WWAN_IMSI_LEN];    /* Null-term'd IMSI string             */
    WCHAR   Imei[WWAN_IMEI_LEN];    /* Null-term'd IMEI string             */
    ULONG   IsdnCount;              /* Number of ISDNs listed              */
    ULONG   IsdnListSize;           /* Size and offset of Null-terminated  */
    ULONG   IsdnListOffset;         /* ISDN strings (phone numbers).       */
}
WWAN_READY_STATE;


typedef enum _WWAN_PIN_TYPE
{
    WwanPinTypeUnknown,             /* Unknown PIN type                    */
    WwanPinTypeNone,                /* no PIN is needed                    */
    WwanPinTypeSubsidyLock,         /* subsidy unlock code                 */
    WwanPinTypePin,                 /* awaiting PIN entry                  */
    WwanPinTypePuk,                 /* awaiting PUK entry                  */
    WwanPinTypePin2,                /* awaiting PIN2 entry                 */
    WwanPinTypePuk2,                /* awaiting PUK2 entry                 */
    WwanPinTypeNetworkPassword,     /* awaiting network password           */
    WwanPinTypeDevicePassword,      /* awaiting device password            */
    WwanPinTypeMax
}
WWAN_PIN_TYPE;


typedef enum _WWAN_PIN_FORMAT
{
    WwanPinFormatUnknown,           /* format of needed pin is unknown     */
    WwanPinFormatNumeric,           /* allow characters 0-9,*,#            */
    WwanPinFormatAlphaNumeric,      /* allow characters a-z, A-Z, 0-9,*,#  */
    WwanPinFormatMax
}
WWAN_PIN_FORMAT;


typedef struct _WWAN_PIN_STATE
{
    WWAN_PIN_TYPE   PinType;            /* A WWAN_SIM_FLAG value           */
    WWAN_PIN_FORMAT PinFormat;          /* Numeric, aplhanumeric, etc.     */
    ULONG           PinLengthMin;       /* Minimum number of characters    */
    ULONG           PinLengthMax;       /* Maximum number of characters    */
    ULONG           AttemptsRemaining;  /* # of attempts remaining         */
}
WWAN_PIN_STATE;


typedef enum _WWAN_PIN_ACTION
{
    WwanPinActionUnknown,
    WwanPinActionSend,
    WwanPinActionEnable,
    WwanPinActionDisable,
    WwanPinActionChange,
    WwanPinActionCancel,
    WwanPinActionMax
}
WWAN_PIN_ACTION;


typedef struct _WWAN_SET_PIN
{
    WWAN_PIN_ACTION PinAction;              /* A WWAN_PIN_ACTION value     */
    WWAN_PIN_TYPE   PinType;                /* A WWAN_PIN_TYPE value       */
    WCHAR           Pin[WWAN_PIN_LEN];      /* Null-term'd PIN             */
    WCHAR           NewPin[WWAN_PIN_LEN];   /* Null-term'd new PIN/PUK     */
}
WWAN_SET_PIN;


typedef enum _WWAN_PROVIDER_STATE
{
    WwanProviderStateUnknown,
    WwanProviderStateForbidden,
    WwanProviderStateAvailable,
    WwanProviderStatePreferred,
    WwanProviderStateCurrent,
    WwanProviderStateMax
}
WWAN_PROVIDER_STATE;


typedef struct _WWAN_PROVIDER
{
    ULONG   ProviderId;             /* Provider ID                         */
    WWAN_PROVIDER_STATE State;      /* WWAN_PROVIDER_STATE_ value          */
    WCHAR   Name[WWAN_PROVIDERNAME_LEN]; /* Null-term'd provider name str  */
}
WWAN_PROVIDER;


typedef struct _WWAN_PROVIDER_LIST
{
    ULONG   ProviderCount;          /* Number of providers in the array    */
    ULONG   ProviderListSize;       /* Size and offset to an array of      */
    ULONG   ProviderListOffset;     /* WWAN_PROVIDER entries               */
}
WWAN_PROVIDER_LIST;


typedef enum _WWAN_REGISTER_MODE
{
    WwanRegisterModeUnknown,
    WwanRegisterModeReregister,     /* Reregister to the registered        */
                                    /* operator using current mode         */
    WwanRegisterModeAutomatic,      /* Turn on transceiver, camp on best   */
                                    /* available network, packet attach    */
    WwanRegisterModeManual,         /* Turn on transceiver, use numeric    */
                                    /* code to camp, packet attach         */
    WwanRegisterModeDeregister,     /* Transceiver is on, but device is    */
                                    /* detached and deregistered           */
    WwanRegisterModeRadioOff,       /* Transceiver is off, device is       */
                                    /* detached and deregistered           */
    WwanRegisterModeMax
}
WWAN_REGISTER_MODE;


typedef enum _WWAN_REGISTER_STATE
{
    WwanRegisterStateUnknown,       /* Registration state unknown          */
    WwanRegisterStateDeregistered,  /* Not registered, not searching       */
    WwanRegisterStateSearching,     /* Searching for a provider            */
    WwanRegisterStateHome,          /* Device is on a home provider        */
    WwanRegisterStateRoaming,       /* Device is on roaming provider       */
    WwanRegisterStateDenied,        /* Registration denied, emergency      */
    WwanRegisterStateMax            /* may still be made                   */
}
WWAN_REGISTER_STATE;


typedef struct _WWAN_REGISTRATION
{
    WWAN_REGISTER_MODE   RegisterMode;  /* WWAN_REGISER_MODE value         */
    WWAN_REGISTER_STATE  RegisterState; /* WWAN_REGISER_STATE value        */
    WWAN_PROVIDER        Provider;      /* WWAN_PROVIDER structure         */
}
WWAN_REGISTRATION;


typedef enum _WWAN_ATTACH_STATE
{
    WwanAttachStateUnknown,
    WwanAttachStateDetached,            /* Device is likely unregistered   */
    WwanAttachStateSearching,           /* Automatic after registered      */
    WwanAttachStateAttached,            /* Packet attached                 */
    WwanAttachStateDenied,              /* Packet service unavailable      */
    WwanAttachStateMax
}
WWAN_ATTACH_STATE;


typedef struct _WWAN_PACKET_SERVICE
{
    WWAN_ATTACH_STATE   AttachState;    /* Attach state, ignored for CDMA  */
    ULONG               DataClass;      /* WWAN_DATA_CLASS_ flags          */
}
WWAN_PACKET_SERVICE;


typedef struct _WWAN_SIGNAL_STATE
{
    ULONG Rssi;                         /* Decibels (db)                   */
    ULONG RssiInterval;        /* Suggested interval in seconds   */
    ULONG RssiThreshold;       /* Suggested +/- threshold in db   */
}
WWAN_SIGNAL_STATE;


typedef enum _WWAN_CONTEXT_AUTHENTICATION
{
    WwanContextAuthenticationUnknown,   /* Ignore user/pwd fields          */
    WwanContextAuthenticationNone,      /* Ignore user/pwd fields          */
    WwanContextAuthenticationChap,      /* Use CHAP authentication         */
    WwanContextAuthenticationPap,       /* Use PAP authentication          */
    WwanContextAuthenticationEap,       /* Use EAP authentication          */
    WwanContextAuthenticationMax
}
WWAN_CONTEXT_AUTHENTICATION;


typedef enum _WWAN_ACTIVATION_STATE
{
    WwanActivationStateUnknown,
    WwanActivationStateActivated,
    WwanActivationStateDeactivated,
    WwanActivationStateMax
}
WWAN_ACTIVATION_STATE;


typedef struct _WWAN_CONTEXT
{
    ULONG   ProviderId;                     /* Provider owns the access str*/
    WWAN_ACTIVATION_STATE ActivationState;  /* Activation state            */
    WCHAR   AccessString[WWAN_ACCESSSTRING_LEN]; /* Null-term'd access str */
    WWAN_CONTEXT_AUTHENTICATION AuthenticationType; /* Authentication type */
    WCHAR   UserName[WWAN_USERNAME_LEN];    /* Null-term'd username        */
    WCHAR   Password[WWAN_PASSWORD_LEN];    /* Null-term'd password        */
}
WWAN_CONTEXT;


typedef struct _WWAN_CONTEXT_LIST
{
    ULONG   ContextCount;               /* Number of contexts in the list  */
    ULONG   ContextListSize;            /* Size and offset to an array of  */
    ULONG   ContextListOffset;          /* WWAN_CONTEXT                    */
}
WWAN_CONTEXT_LIST;


typedef struct _WWAN_VENDOR_SPECIFIC
{
    ULONG_PTR   AppId;                  /* 0 reserved for ALL              */
    ULONG       DataSize;               /* Size and offset to the vendor   */
    ULONG       DataOffset;             /* specific data                   */
}
WWAN_VENDOR_SPECIFIC;


/*-----------------------------------------------------------------------
    notification codes
  -----------------------------------------------------------------------*/
#define NDIS_WW_READY_STATE                 0x00001000
#define NDIS_WW_PIN_STATE                   0x00001001
#define NDIS_WW_REGISTER_STATE              0x00001002
#define NDIS_WW_PACKET_SERVICE              0x00001003
#define NDIS_WW_SIGNAL_STATE                0x00001004
#define NDIS_WW_ACTIVATION_STATE            0x00001005
#define NDIS_WW_LOCATION_INFO               0x00001006
#define NDIS_WW_VENDOR_SPECIFIC             0x00001007


/*-----------------------------------------------------------------------
    oids
  -----------------------------------------------------------------------*/
#define OID_WW_NEGOTIATE_VERSION            0x0e010100
#define OID_WW_DEVICE_CAPS                  0x0e010101
#define OID_WW_INITIALIZE                   0x0e010102
#define OID_WW_SHUTDOWN                     0x0e010103
#define OID_WW_GET_READY_STATE              0x0e010104
#define OID_WW_GET_PIN_STATE                0x0e010105
#define OID_WW_SET_PIN                      0x0e010106
#define OID_WW_GET_PREFERRED_PROVIDERS      0x0e010107
#define OID_WW_SET_PREFERRED_PROVIDERS      0x0e010108
#define OID_WW_GET_VISIBLE_PROVIDERS        0x0e010109
#define OID_WW_GET_REGISTER_STATE           0x0e01010a
#define OID_WW_SET_REGISTER_STATE           0x0e01010b
#define OID_WW_GET_PACKET_SERVICE           0x0e01010c
#define OID_WW_SET_SIGNAL_SUGGESTION        0x0e01010d
#define OID_WW_GET_SIGNAL_STATE             0x0e01010e
#define OID_WW_GET_PROVISIONED_CONTEXTS     0x0e01010f
#define OID_WW_SET_PROVISIONED_CONTEXTS     0x0e010110
#define OID_WW_GET_ACTIVATION_STATE         0x0e010111
#define OID_WW_SET_ACTIVATION_STATE         0x0e010112
#define OID_WW_GET_LOCATION_INFO            0x0e010113
#define OID_WW_SET_LOCATION_INFO            0x0e010114
#define OID_WW_VENDOR_SPECIFIC              0x0e010115


/*-----------------------------------------------------------------------
    ndis status codes
  -----------------------------------------------------------------------*/
#define NDIS_STATUS_WW_ASYNC_RESPONSE       0x40020000

/* already defined in ddk/inc/ndis.h */
#ifdef NDIS_STATUS_WW_INDICATION
#undef NDIS_STATUS_WW_INDICATION
#endif

#define NDIS_STATUS_WW_INDICATION           0x40020001

#define NDIS_STATUS_WW_UNKNOWN_VERSION      0xC0020001
#define NDIS_STATUS_WW_DEVICE_BUSY          0xC0020002
#define NDIS_STATUS_WW_INVALID_CAPABILITIES 0xC0020003


/*-----------------------------------------------------------------------
    guids for status & oids
  -----------------------------------------------------------------------*/
extern const GUID GUID_NDIS_GEN_SUPPORTED_LIST;
extern const GUID GUID_NDIS_STATUS_WW_ASYNC_RESPONSE;
extern const GUID GUID_NDIS_STATUS_WW_INDICATION;
extern const GUID GUID_NDIS_WW_NEGOTIATE_VERSION;
extern const GUID GUID_NDIS_WW_DEVICE_CAPS;
extern const GUID GUID_NDIS_WW_INITIALIZE;
extern const GUID GUID_NDIS_WW_SHUTDOWN;
extern const GUID GUID_NDIS_WW_GET_READY_STATE;
extern const GUID GUID_NDIS_WW_GET_PIN_STATE;
extern const GUID GUID_NDIS_WW_SET_PIN;
extern const GUID GUID_NDIS_WW_GET_PREFERRED_PROVIDERS;
extern const GUID GUID_NDIS_WW_SET_PREFERRED_PROVIDERS;
extern const GUID GUID_NDIS_WW_GET_VISIBLE_PROVIDERS;
extern const GUID GUID_NDIS_WW_GET_REGISTER_STATE;
extern const GUID GUID_NDIS_WW_SET_REGISTER_STATE;
extern const GUID GUID_NDIS_WW_GET_PACKET_SERVICE;
extern const GUID GUID_NDIS_WW_SET_SIGNAL_SUGGESTION;
extern const GUID GUID_NDIS_WW_GET_SIGNAL_STATE;
extern const GUID GUID_NDIS_WW_GET_PROVISIONED_CONTEXTS;
extern const GUID GUID_NDIS_WW_SET_PROVISIONED_CONTEXTS;
extern const GUID GUID_NDIS_WW_GET_ACTIVATION_STATE;
extern const GUID GUID_NDIS_WW_SET_ACTIVATION_STATE;
extern const GUID GUID_NDIS_WW_GET_LOCATION_INFO;
extern const GUID GUID_NDIS_WW_SET_LOCATION_INFO;
extern const GUID GUID_NDIS_WW_VENDOR_SPECIFIC;


#ifdef __cplusplus
}
#endif


#endif /* __NDISWWAN_H__ */
