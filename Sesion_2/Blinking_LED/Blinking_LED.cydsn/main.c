#include "project.h"
int main(void)
{
    CyGlobalIntEnable; 
    for(;;)
    {
        /*       LED_Write(1u);
        CyDelay(500);
        LED_Write(0u);
        CyDelay(500);
        */
        
        //Alternmativa 
        LED_Write(~LED_Read()); 
        CyDelay(500);
        
 
    }
}