#include "project.h"

int main(void)
{
    uint8 tmpVar = 0u;
    
    RTC_TIME_DATE Start;

    /* Fill struct with date and time */
    Start.Sec = 25u;
    Start.Min = 30u;
    Start.Hour = 9u;
    Start.DayOfMonth = 11u;
    Start.Month = 2u;
    Start.Year = 2025u;

    CyGlobalIntEnable;

    /* Set date and time */
    RTC_WriteTime(&Start);
    RTC_Stop();
    RTC_ReadStatus();
    RTC_Start();
    
    for(;;)
    {
        
        tmpVar = RTC_ReadSecond();
        if (tmpVar>30){
        LED_Write(!LED_Read());
        }
    }
}

