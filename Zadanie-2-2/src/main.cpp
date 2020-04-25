#include <Arduino.h>
#include <avr/io.h>

#define LED_LENGHT 8

int main(void){

  DDRD |= 0xFF;   //wyjście

  while(1){

    for(uint8_t i=0 ; 1<(LED_LENGHT-1) ; i++){
      PORTD = (1 << i);

      for(uint32_t j=0x1FFFF;j>0;j--){
        __asm__ __volatile__("nop");
      }

    }

    for(uint8_t i=1 ; i<(LED_LENGHT-1) ; i++){
      PORTD = (PORTD >> 1);

      for(uint32_t j=0x1FFFF;j>0;j--){
        __asm__ __volatile__("nop");
      }

    }

  }

}