#ifndef AT164 _H
#define AT164 _H


/* PORT D */
#define PIND (*(volatile unsigned char *) 0x29)
#define DDRD (*(volatile unsigned char *) 0x2A)
#define PORTD (*(volatile unsigned char *) 0x2B)

/* PORT C */
#define PINC (*(volatile unsigned char *) 0x26)
#define DDRD (*(volatile unsigned char *) 0x27)
#define PORTD (*(volatile unsigned char *) 0x28)

/* PORT B */
#define PINB (*(volatile unsigned char *) 0x23)
#define DDRB (*(volatile unsigned char *) 0x24)
#define PORTB (*(volatile unsigned char *) 0x25)

/* PORT A */
#define PINA (*(volatile unsigned char *) 0x20)
#define DDRA (*(volatile unsigned char *) 0x21)
#define PORTA (*(volatile unsigned char *) 0x22)

/* Timer/Counter interrupts */
#define TIFRO (*(volatile unsigned char *) 0x35)
#define OCFOB   2
#define OCFOA   1
#define TOVO    0
#define TIMSKO (*(volatile unsigned char *) 0x6E)
#define OCIEOB  2
#define OCIEOA  1
#define TOIEO   0
#define TIFR1   (*(volatile unsigned char *) 0x36)
#define ICF1    5
#define OCF1B   2
#define OCF1A   1
#define TOV1    0
#define TIMSK1 (*(volatile unsigned char *)0x6F)
#define ICIE1   5
#define OCIE1B  2
#define OCIE1A  1
#define TOIE1   0
#define TIFR2 (*(volatile unsigned char *)0x37)
#define OCF2B   2
#define OCF2A   1
#define TOV2    0
#define TIMSK2 (*(volatile unsigned char *)0x70)
#define OCIE2B  2
#define OCIE2A  1
#define TOIE2   0

/* External Interrupts */
#define EIFR (*(volatile unsigned char *)0x3C)
#define INTF2   2
#define INTF1   1
#define INTF0   0
#define EIMSK (*(volatile unsigned char *)0x3D)
#define INT2    2
#define INT1    1
#define INT0    0
#define EICRA (*(volatile unsigned char *)0x69)
#define ISC21   5
#define ISC20   4
#define ISC11   3
#define ISC10   2
#define ISC01   1
#define ISC00   0

/* Pin Change Interrupts */
#define PCIFR (*(volatile unsigned char *)0x3B)
#define PCIF3   3
#define PCIF2   2
#define PCIF1   1
#define PCIF0   0
#define PCICR (*(volatile unsigned char *)0x68)
#define PCIE3   3
#define PCIE2   2
#define PCIE1   1
#define PCIE0   0
#define PCMSK0 (*(volatile unsigned char *)0x6B)
#define PCMSK1 (*(volatile unsigned char *)0x6C)
#define PCMSK2 (*(volatile unsigned char *)0x6D)
#define PCMSK3 (*(volatile unsigned char *)0x73)

/* GPIOR */
#define GPIOR0 (*(volatile unsigned char *)0x3E)
#define GPIOR1 (*(volatile unsigned char *)0x4A)
#define GPIOR2 (*(volatile unsigned char *)0x4B)

/* EEPROM */
#define EECR (*(volatile unsigned char *)0x3F)
#define EEPM1   5
#define EEPM0   4
#define EERIE   3
#define EEMPE   2



#endif