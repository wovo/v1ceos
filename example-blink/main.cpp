#include "mmapgpio.hpp"
#include "bcm2835.h"

const int led_pin = 16;

int main(void){
   mmapGpio rpiGpio; 
   rpiGpio.setPinDir( led_pin, mmapGpio::OUTPUT ); 
   while(1) {
      rpiGpio.writePinHigh( led_pin );
      delay (500) ;
      rpiGpio.writePinLow( led_pin );
      delay (500) ;
   }

   return 0;
}