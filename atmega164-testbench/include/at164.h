#ifndef AT164 _H
#define AT164 _H

void initialize_ports(void){
    // set PORTB as input
    unsigned char * DDRB, *DDRC;
    unsigned char * PORTB, *PORTC;
    DDRB = 0xff; //  input
    PORTB = (unsigned char) 0x25;   // intitialize LOW 
    PORTB = 0x00;

    // set PORT C as output
    DDRC = 0x00;
    PORTC = (unsigned char) 0x28;
    
    PORTC = 0x00; // initialize low


    
}

#endif