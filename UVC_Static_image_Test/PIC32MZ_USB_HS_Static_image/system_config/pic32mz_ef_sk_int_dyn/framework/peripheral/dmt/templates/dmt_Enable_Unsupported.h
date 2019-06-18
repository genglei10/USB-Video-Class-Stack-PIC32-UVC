/*******************************************************************************
  DMT Peripheral Library Template Implementation

  File Name:
    dmt_Enable_Unsupported.h

  Summary:
    DMT PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : Enable
    and its Variant : Unsupported
    For following APIs :
        PLIB_DMT_Enable
        PLIB_DMT_Disable
        PLIB_DMT_IsEnabled
        PLIB_DMT_ExistsEnableControl

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2014 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/

//DOM-IGNORE-END

#ifndef _DMT_ENABLE_UNSUPPORTED_H
#define _DMT_ENABLE_UNSUPPORTED_H


//******************************************************************************
/* Function :  DMT_Enable_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_DMT_Enable 

  Description:
    This template implements the Unsupported variant of the PLIB_DMT_Enable function.
*/

PLIB_TEMPLATE void DMT_Enable_Unsupported( DMT_MODULE_ID index )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_DMT_Enable");
}


//******************************************************************************
/* Function :  DMT_Disable_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_DMT_Disable 

  Description:
    This template implements the Unsupported variant of the PLIB_DMT_Disable function.
*/

PLIB_TEMPLATE void DMT_Disable_Unsupported( DMT_MODULE_ID index )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_DMT_Disable");
}


//******************************************************************************
/* Function :  DMT_IsEnabled_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_DMT_IsEnabled 

  Description:
    This template implements the Unsupported variant of the PLIB_DMT_IsEnabled function.
*/

PLIB_TEMPLATE bool DMT_IsEnabled_Unsupported( DMT_MODULE_ID index )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_DMT_IsEnabled");

    return false;
}


//******************************************************************************
/* Function :  DMT_ExistsEnableControl_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_DMT_ExistsEnableControl

  Description:
    This template implements the Unsupported variant of the PLIB_DMT_ExistsEnableControl function.
*/

PLIB_TEMPLATE bool DMT_ExistsEnableControl_Unsupported( DMT_MODULE_ID index )
{
    return false;
}


#endif /*_DMT_ENABLE_UNSUPPORTED_H*/

/******************************************************************************
 End of File
*/

