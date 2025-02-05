
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; 
    for(;;)
    {
        LED_Write(BOTON_Read());
    }
}