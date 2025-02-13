#include <project.h>

int main()
{


    /* Start VDAC */
    VDAC8_1_Start();
    
    for(;;)
    {
        VDAC8_1_SetValue(0u);
        CyDelay(1000);
        VDAC8_1_SetValue(240u);
        CyDelay(1000);
    }
}

