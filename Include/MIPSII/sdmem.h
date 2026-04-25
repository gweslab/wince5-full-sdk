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

// Copyright (c) 2002 BSQUARE Corporation.  All rights reserved.
// DO NOT REMOVE --- BEGIN EXTERNALLY DEVELOPED SOURCE CODE ID 40973--- DO NOT REMOVE

// Types and variables used for Memory Lists and Memory Tagging   

#ifndef SDMEM_DEFINED
#define SDMEM_DEFINED


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus


//  SDInitializeCardLib - initializes the card library
//  Input:
//  Output:
//  Return: success or failure
//  Notes:  call this in your DLL entry upon attach to
//          avoid race conditions in the memory subsystem
//
BOOL SDInitializeCardLib();


//  SDDeinitializeCardLib - initializes the card library
//  Input:
//  Output:
//  Return: success or failure
//  Notes:  call this in your DLL entry upon detach to
//          avoid race conditions in the memory subsystem
//
BOOL SDDeinitializeCardLib();


//  SDAllocateMemoryWithTag - allocates memory with a tag
//  Input:  Size - size of the allocation
//          Tag - tag in the form of 4 ASCII characters to track the allocation
//  Output:
//  Return:
//  Notes:  returns a pointer to the allocated memory
//          must use SDFreeMemory
//
PVOID SDAllocateMemoryWithTag(ULONG Size,
    ULONG Tag);


//  SDFreeMemory - frees memory allocated with SDAllocateMemoryWithTag
//  Input:  pMemory - the memory to free
//  Output:
//  Return:
//  Notes:  
//
VOID SDFreeMemory(PVOID pMemory);


// memory list handle is an opaque structure
typedef PVOID SD_MEMORY_LIST_HANDLE;

//  SDDeleteMemhList - delete a memory list
//      
//  Input:
//          hList - memory list to delete
//        
//  Output:
//  Return: 
//          
//  Notes:  
//          
VOID SDDeleteMemList(SD_MEMORY_LIST_HANDLE hList);


//  SDCreateMemoryList - create a memory list
//      
//  Input:  Tag      - Memory Tag
//          Depth    - threshold of committed memory list size, also initial number of 
//                     entries
//          EntrySize - Size of each entry/block
//          
//  Output: 
//  Return: handle to memory list        
//  Notes:  
//          Initializes a mem list structure for use in allocating and deallocating
//          fixed blocks of memory.  This is a mechanism to reduce heap fragmentation.  
//          Allocations are dynamic (i.e. the list grows to accomodate allocations), 
//          however, deallocated blocks are recycled rather than returned to the process heap.
//          
//          The  depth specifies the maximum number of heap committed allocations.  Additional
//          allocations beyond the maximum depth are allocated normally, but returned to the heap rather
//          than re-cycled.
// 
//            
//          Must call SDDeleteMemList to free the list.
//          Returns Memory hList Object handle, otherwise NULL
//
SD_MEMORY_LIST_HANDLE SDCreateMemoryList(ULONG Tag,
    ULONG Depth,
    ULONG EntrySize);


//  SDFreeToMemList - free a block of memory to the memory list
//      
//  Input:  hList - mem list object
//          pMemory - block of memory to free 
//  Output: 
//  Return:
//          
//  Notes:  
//          returns memory block to mem list
//
VOID SDFreeToMemList(SD_MEMORY_LIST_HANDLE hList,
    PVOID                 pMemory);


//  SDAllocateFromMemhList - Allocate a block from the memory list
//      
//  Input:
//          hList - memory list
//        
//  Output: 
//  Return: returns pointer to memory block, NULL if system is out of memory         
//  Notes:  
//          returns memory block from mem list
//
PVOID SDAllocateFromMemList(SD_MEMORY_LIST_HANDLE hList);


// The following routines are no longer supported.
#define SDCheckMemoryTags(LogFileName) (TRUE)
#define SDDumpMemoryTagState()
#define SDInitializeMemoryTagging(Tags, pModuleName) (TRUE)
#define SDDeleteMemoryTagging()


#ifdef __cplusplus
}
#endif //__cplusplus

#endif

// DO NOT REMOVE --- END EXTERNALLY DEVELOPED SOURCE CODE ID --- DO NOT REMOVE
