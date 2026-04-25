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
/*

THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
PARTICULAR PURPOSE.

Module Name:  
    rndismini.h

Abstract:  
	This module defines the constants and type definitions shared by
	the rndis miniport mdd and pdd modules.

Functions:

    
--*/

#ifndef _RNDISMDD_H

#define _RNDISMDD_H

#include <types.h>

#ifdef __cplusplus
extern "C" {
#endif


////////////////////////////////////////////////////////////////////////////////
//
//	DebugZones shared by both MDD & PDD. PDD takes zone 8..13
//

#ifdef DEBUG
#define ZONE_INIT		DEBUGZONE(0)
#define	ZONE_RNDIS		DEBUGZONE(1)		
#define	ZONE_HOSTMINI	DEBUGZONE(2)
#define	ZONE_CEMINI		DEBUGZONE(3)
#define	ZONE_MEM		DEBUGZONE(4)
#define	ZONE_PDDCALL	DEBUGZONE(5)
#define ZONE_MDD_REF    DEBUGZONE(6)


/*

  DEBUGZONE(8..13) are for PDD.

*/

#define ZONE_WARNING	DEBUGZONE(14)
#define ZONE_ERROR		DEBUGZONE(15)
#endif


////////////////////////////////////////////////////////////////////////////////
//
//	USB Communication Class specific request code used by RNDIS
//

#define	SEND_ENCAPSULATED_COMMAND		0x00	
#define	GET_ENCAPSULATED_RESPONSE		0x01	
#define	RESPONSE_AVAILABLE				0x01


////////////////////////////////////////////////////////////////////////////////
//
//	RequestID sent for PDD's SetHandler & GetHandler.
//	

#define	REQ_ID_HARD_RESET				0x00000001	//	SET:: Hard reset..
#define	REQ_ID_SOFT_RESET				0x00000002	//	SET:: Soft reset..
#define REQ_ID_ENABLE_INT				0x00000003  //  SET:: Enable Interrupt 
#define REQ_ID_DISABLE_INT				0x00000004  //  SET:: Disable Interrupt

#define	REQ_ID_VENDOR_ID				0x80000001	//	GET:: Vendor ID
#define	REQ_ID_VENDOR_DESCRIPTION		0x80000002	//	GET:: Vendor desc.
#define	REQ_ID_DEVICE_MAX_RX			0x80000003	//	GET:: Vedor max rx.
#define REQ_ID_DEVICE_MACADDR           0x80000004  //  GET:: MAC Address.

////////////////////////////////////////////////////////////////////////////////
//
//	Wrapper for user data / RNDIS messages communicated between
//	MDD / PDD.
//

typedef struct _DATA_WRAPPER
{
	LIST_ENTRY	Link;	
	UCHAR		*pucData;	
	DWORD		dwDataSize;	

}	DATA_WRAPPER, *PDATA_WRAPPER;



////////////////////////////////////////////////////////////////////////////////
//
//	The RNDIS PDD driver needs to export the following functions for RNDIS MDD
//	during the call to InitPDD()
//

typedef
void
(* PFN_PDD_SEND_RNDIS_MESSAGE)(
	IN	PDATA_WRAPPER	pDataWrapper);

typedef
void
(* PFN_PDD_INDICATE_RNDIS_PACKET_COMPLETE)(
	IN	PDATA_WRAPPER	pDataWrapper);	


typedef
BOOL
(* PFN_PDD_SET)(
	IN	UINT	uiRequestId,
	IN	PVOID	pvData,
	IN	ULONG	ulDataLength);

typedef
BOOL
(* PFN_PDD_GET)(
	IN	UINT	uiRequestId,
	IN	PVOID	pvData,
	IN	ULONG	ulDataLength,
	OUT	ULONG	*pulRequiredLength);

typedef
void
(* PFN_PDD_SEND_RNDIS_PACKET)(
	IN	PDATA_WRAPPER	pDataWrapper);

typedef
BOOL
(* PFN_PDD_ISR)(PDWORD	pdwWaitTime);


typedef	struct _RNDIS_PDD_CHARACTERISTICS
{	
	PFN_PDD_SEND_RNDIS_MESSAGE				SendRndisMessageHandler;	
	PFN_PDD_SEND_RNDIS_PACKET				SendRndisPacketHandler;
	PFN_PDD_INDICATE_RNDIS_PACKET_COMPLETE	IndicateRndisPacketCompleteHandler;	
	PFN_PDD_SET								SetHandler;
	PFN_PDD_GET								GetHandler;
	PFN_PDD_ISR								ISRHandler;
	DWORD									dwIRQ;
	DWORD									dwMaxRx;
	DWORD									dwBaseAddr;

    //
    //  BUS specific information
    //  If it is PCI then this driver will be loaded by PCI enumerator through
    //  NDIS.   
    //

    BOOL    bPCIDevice;
    
    //
    //  These are only needed for PCI type device AND if the driver chooses
    //  to use GIISR.DLL as default ISR.
    //

    BOOL    CheckPort;            // If true, check port to see if device is asserting IRQ
    BOOL    PortIsIO;             // Port is IO port (possibly true only for x86)
    BOOL    UseMaskReg;           // If true, read from MaskAddr to obtain mask
    DWORD   PortAddr;             // Port Address
    DWORD   PortSize;             // Port data width in bytes
    DWORD   Mask;                 // Mask to use on data port to determine if device is asserting IRQ
    DWORD   MaskAddr;             // Address of register to use as mask

}	RNDIS_PDD_CHARACTERISTICS, *PRNDIS_PDD_CHARACTERISTICS;



////////////////////////////////////////////////////////////////////////////////
//
//	Functions exported by RNDIS PDD driver.
//
BOOL
PDDInit(
	OUT RNDIS_PDD_CHARACTERISTICS	*pRndisPddCharacteristics,
	IN	PBYTE 				pBaseAddress);

void
PDDDeinit(void);



////////////////////////////////////////////////////////////////////////////////
//
//	Functions exported by RNDIS MDD driver
//

void 
DumpMemory (PBYTE	pSource, DWORD	dwLength);

#ifdef	CELOGMSG 
#undef	CELOGMSG
#endif

#if DEBUG	
	void RndisMiniCeLogMsg(LPCWSTR lpszFmt, ...);
	
	#define CELOGMSG(cond,printf_exp)   \
		((void)((cond)?(RndisMiniCeLogMsg printf_exp),1:0))
#else

	#define CELOGMSG(cond,printf_exp)   

#endif

void
MddIndicateRndisMessage (
	PDATA_WRAPPER	pDataWrapper);

void
MddIndicateRndisPacket(
	PDATA_WRAPPER	pDataWrapper);
	
void
MddSendRndisMessageComplete(
	PDATA_WRAPPER	pDataWrapper);

void
MddSendRndisPacketComplete(
	PDATA_WRAPPER	pDataWrapper);

PDATA_WRAPPER
MDDAllocDataWrapper(void);

void
MDDFreeDataWrapper(PDATA_WRAPPER pDataWrapper);

PBYTE
MDDAllocMem(void);

void
MDDFreeMem(PBYTE pBuffer);

void
MddDisconnect();

BOOL
MddConnect();

void
MddEnterPdd(void);

void
MddLeavePdd(void);

void
MDDInit();

void
MDDDeinit();

DWORD
MDDGetBulkTransferSize();


#ifdef __cplusplus
}
#endif

#endif	// _RNDISMDD_H