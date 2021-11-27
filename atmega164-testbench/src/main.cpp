#include <Arduino.h>

void initialize_ports(void);    // initialize ports

// main program
// some global variables
unsigned char old_PORTB = 0x00; // present value of PORTB
unsigned char new_PORTB;

void main(){
  initialize_ports();

  while (1)
  {   
    new_PORTB = PINB;   // read PORTB  
  } 
}
