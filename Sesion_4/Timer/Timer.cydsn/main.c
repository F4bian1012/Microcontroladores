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
#include "project.h"

int lectura;
CY_ISR(Interruption){
    LED_Write(!LED_Read());
    isr_1_ClearPending();
    Timer_1_ReadStatusRegister();//Status register bits may be clear on read.

}
int main(void)
{
    CyGlobalIntEnable; 
    Timer_1_Start();
    
    isr_1_StartEx(Interruption);
    for(;;)
    {
    
    }
}

