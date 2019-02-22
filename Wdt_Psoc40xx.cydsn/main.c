/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>

void Wdt_Callback(void) {
    Pin_LED_Write(~Pin_LED_Read());
}

int main()
{
    // Initialize WDT interrupt
    Wdt_int_StartEx(CySysWdtIsr);
    CySysWdtSetInterruptCallback(Wdt_Callback);
    CySysWdtUnmaskInterrupt();
        
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
