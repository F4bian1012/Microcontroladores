
#include "project.h"

int conteo=0;

CY_ISR(isr_1_Handler)
{
    
    LED_Write(~LED_Read());
    BOTON_ClearInterrupt();
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

/* [] END OF FILE */
