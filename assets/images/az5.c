
#include <mega16.h>
#include <delay.h>

#define R1 PORTB.2
#define Y1 PORTB.1
#define G1 PORTB.0

#define R2 PORTB.5
#define Y2 PORTB.4
#define G2 PORTB.3

#define R3 PORTD.0
#define Y3 PORTD.1
#define G3 PORTD.2

#define R4 PORTD.3
#define Y4 PORTD.4
#define G4 PORTD.5
void main(void)
{
DDRB=0xFF;
PORTB=0x00;
DDRD=0xFF;
PORTD=0x00;

while (1)
      {
        G1=1;
        R2=1;
        R3=1;
        R4=1;
        delay_ms(3000);
        PORTB=0x00;
        PORTD=0x00;
        Y1=1;
        R2=1;
        R3=1;
        R4=1;
        delay_ms(1000);
        PORTB=0x00;
        PORTD=0x00;
        G2=1;
        R1=1;
        R3=1;
        R4=1;
        delay_ms(3000);
        PORTB=0x00;
        PORTD=0x00;
        Y2=1;
        R1=1;
        R3=1;
        R4=1;  
        delay_ms(1000);
        PORTB=0x00;
        PORTD=0x00;
        G3=1;
        R1=1;
        R2=1;
        R4=1;   
        delay_ms(3000);   
        PORTB=0x00;
        PORTD=0x00;    
        Y3=1;
        R1=1;
        R2=1;
        R4=1;  
        delay_ms(1000);
        PORTB=0x00;
        PORTD=0x00;   
        G4=1;
        R1=1;
        R2=1;
        R3=1;  
        delay_ms(3000); 
        PORTB=0x00;
        PORTD=0x00;
        Y4=1;
        R1=1;
        R2=1;
        R3=1;    
        delay_ms(1000); 
        PORTB=0x00;
        PORTD=0x00;
      }
}
