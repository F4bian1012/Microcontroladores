#include <project.h>

int main()
{
    uint8 output;
    ADC_DelSig_1_Start();

    /* Start the ADC conversion */
    ADC_DelSig_1_StartConvert();

    for(;;)
    {
        if(ADC_DelSig_1_IsEndConversion(ADC_DelSig_1_RETURN_STATUS))
        {
            output = ADC_DelSig_1_GetResult8();
            
            if ( output<127){
                LED_Write(1u);}
            else
            {
                LED_Write(0u);
            }
            /* Saturate ADC result to positive numbers. */
            if(output < 0)
            {
                output = 0;
            }
        }
    }
}