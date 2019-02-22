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

int main(void) {
    CySysWdtSetInterruptCallback(CY_SYS_WDT_COUNTER0, Wdt_Callback);
    
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for (;;) {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
