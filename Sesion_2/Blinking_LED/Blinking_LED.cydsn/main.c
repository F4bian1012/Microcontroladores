#include "project.h"
int main(void)
{
    CyGlobalIntEnable; 
    for(;;)
    {
        LED_Write(~LED_Read());
        CyDelay(500);
    }
}