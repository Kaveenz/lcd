/*----------------------------------------------------------------------------
LAB EXERCISE 5.3 - SPI interface
SERIAL COMMUNICATION
 ----------------------------------------
 Interface the LCD display using SPI protocol
	
	GOOD LUCK!
 *----------------------------------------------------------------------------*/
#include "mbed.h"
#include "NHD_0216HZ.h"

/*----------------------------------------------------------------------------
 MAIN function
 *----------------------------------------------------------------------------*/

int main() {
  /* 
    Intialise the SPI and the LCD 
    Print the first string
    Set the cursor to (0,1)
    Print the second string
  */

    printf("SPI MOSI: %d\n", SPI_MOSI);
    printf("SPI SCLK: %d\n", SPI_SCK);
    printf("SPI CS: %d\n", SPI_CS);

    init_spi();
    init_lcd();
   
    set_cursor(0, 0); 
    print_lcd("Kaveens LCD");


    set_cursor(0, 1); 
    print_lcd("Slugma!");

    while (1) {
        wait_us(1);

    }

    
}
// *******************************ARM University Program Copyright (c) ARM Ltd 2019*************************************
