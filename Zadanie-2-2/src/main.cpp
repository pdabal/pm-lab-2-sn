#include <Arduino.h>
#include <avr/io.h>

#define DIODA PB5   //dioda podłączona pod PB5

int main(void){
  uint32_t i;

  DDRB |= (1<<DIODA);   //wyjście

  while(1){
    PORTB |= (1<<DIODA);  //zapalanie 
    i = 0x3FFFF;
      do{
        __asm__ __volatile__("nop");  
      } while(i--);

    PORTB &= !(1<<DIODA);  //gaszenie
    i = 0x3FFFF;
     do{
       __asm__ __volatile__("nop");
     } while(i--);
  }
}