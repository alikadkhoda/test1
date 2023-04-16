#include <mega16.h>
#include <alcd.h>
flash char shift[4]={0xFE,0xFD,0xFB,0xF7};
flash char display[4][4]={'7','8','9','/',
                            '4','5','6','*',
                            '1','2','3','-',
                            'C','0','=','+'};

void main(void)
{
int row=0,column=-1;
DDRD=0x0F;
PORTD=0xF0;
lcd_init(16);

while (1)
      {
    
          for(row=0;row<4;row++){
          PORTD=shift[row];
          if(PIND.4==0)column=0; 
          if(PIND.5==0)column=1;
          if(PIND.6==0)column=2;
          if(PIND.7==0)column=3;
          if(column!=-1){
          lcd_putchar(display[row][column]);
          column=-1;
          while(PIND.4==0){};
          while(PIND.5==0){};
          while(PIND.6==0){};
          while(PIND.7==0){};}}
          
      }
}
