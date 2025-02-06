#include "project.h"

int conteo=0;

CY_ISR(isr_1_Handler)
{
    isr_1_ClearPending();
    LED_Write(~LED_Read());
    conteo++;
}

int main(void)
{
     CyGlobalIntEnable; 

    isr_1_StartEx(isr_1_Handler);

    for(;;)
    {
       
    }
}

