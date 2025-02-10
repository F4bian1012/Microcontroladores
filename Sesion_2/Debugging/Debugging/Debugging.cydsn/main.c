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

int contador;
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    contador=0;
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        contador++;
        if  (contador==8)
        {
            contador=0;
        }
    }
}

/* [] END OF FILE */
