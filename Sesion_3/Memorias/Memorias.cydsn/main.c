#include "project.h"
/*
    El siguiente código escribe en la memoria cada que el botón se pulsa
    una vez la cuenta llega a 10 se reinicia el contador
    El led indica cada que se reinicia el contador
*/

#define USED_EEPROM_SECTOR          (1u)
#define RESET_COUNTER_BYTE          ((USED_EEPROM_SECTOR * CYDEV_EEPROM_SECTOR_SIZE) + 0x00)

#define DEBOUNCE_DELAY_MS           (200u)

int main(void)
{   
    uint8 contador;
    uint8 lectura = 0;
    
    EEPROM_Start();
    
    CyGlobalIntEnable; 
    //EEPROM_ReadByte(Address);
    contador = EEPROM_ReadByte(RESET_COUNTER_BYTE);    
    for(;;)
    {
        if (!Boton_Read()){
            LED_Write(1u);
            contador++;
            //EEPROM_WriteByte(byte, Address);        
            EEPROM_WriteByte(contador, RESET_COUNTER_BYTE);
            CyDelay(DEBOUNCE_DELAY_MS);//Si cambiamos el delay a >100 ms tenemos el efecto rebóte en el botón.
        }

        lectura = EEPROM_ReadByte(RESET_COUNTER_BYTE);
        
        if (lectura>10){
            contador=0;
            LED_Write(0u);
            CyDelay(DEBOUNCE_DELAY_MS);
        }
        
    }
}