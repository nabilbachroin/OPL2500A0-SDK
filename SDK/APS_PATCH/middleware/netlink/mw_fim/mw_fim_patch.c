/* *****************************************************************************
 *  Copyright 2017 - 2022, Opulinks Technology Ltd.
 *  ---------------------------------------------------------------------------
 *  Statement:
 *  ----------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of Opulinks Technology Ltd. (C) 2022
 *
 *******************************************************************************
 *
 *  @file mw_fim_patch.c
 * 
 *  @brief 
 * 
 *******************************************************************************/

/*
 *************************************************************************
 *                          Include files
 *************************************************************************
 */
#include "mw_fim.h"
#include "mw_fim_internal.h"

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
*                           Declarations of Private Functions
*************************************************************************
*/
void MwFim_FileDataDefaultFill_impl(void);
/*
 *************************************************************************
 *                          Public Variables
 *************************************************************************
 */

/*
 *************************************************************************
 *                          Private Variables
 *************************************************************************
 */
 




 
 
 
 

/*
 *************************************************************************
 *                          Public Functions
 *************************************************************************
 */



/*
 *************************************************************************
 *                          Private Functions
 *************************************************************************
 */


void MwFim_PatchInit(void)
{
    MwFim_FileDataDefaultFill   = MwFim_FileDataDefaultFill_impl;
}