/* *****************************************************************************
 *  Copyright 2019, Opulinks Technology Ltd.
 *  ---------------------------------------------------------------------------
 *  Statement:
 *  ----------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of Opulinks Technology Ltd. (C) 2018
 *
 *******************************************************************************
 *
 *  @file sys_init_patch.h 
 * 
 *  @brief Patch for Sys init patch
 *  
 ******************************************************************************/

#ifndef _SYS_INIT_H_
#error "Please include sys_init.h. Don't directly include sys_init_patch.h"
#endif

#ifndef _SYS_INIT_PATCH_H_
#define _SYS_INIT_PATCH_H_

#ifdef __cplusplus
extern "C" {
#endif

/*
 *************************************************************************
 *                          Include files
 *************************************************************************
 */
#include "sys_init.h"
/*
 *************************************************************************
 *                          Definitions and Macros
 *************************************************************************
 */


/*
 *************************************************************************
 *                          Typedefs and Structures
 *************************************************************************
 */



/*
 *************************************************************************
 *                          Public Variables
 *************************************************************************
 */


/*
 *************************************************************************
 *                          Public Functions
 *************************************************************************
 */
void SysInit_EntryPoint(void);
void Sys_XipEnable(E_FUNC_ST eFunc);


#ifdef __cplusplus
}
#endif
#endif  /* _SYS_INIT_PATCH_H_ */
