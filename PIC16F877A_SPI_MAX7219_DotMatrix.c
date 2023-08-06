#include "MAX7219_DotMatrix.h"
#include "config.h"

// Define the external frequency
#define _XTAL_FREQ 16000000

void main(void) {
    // Initiate variables
    uint8_t c = 0;
    
    // Configure the SPI module and MAX7219 dot matrix
    Matrix_Init();
    Matrix_Clear(MAX7219);
    
    // Main duty
    while(1)
    {
        Matrix_Write_Char(MAX7219, c++);
        if(c > 9)
            c = 0;
        __delay_ms(1000);
    }
    return;
}
