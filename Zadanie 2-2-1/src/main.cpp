#include <Arduino.h>
volatile int state = LOW;
void myISR();

int main() {
   init(); // Inicjalizacja biblioteki Arduino
   pinMode(12, OUTPUT); // Konfiguracja portu PB4 (D12) jako wyjście
   pinMode(13, OUTPUT); // Konfiguracja portu PB5 (D13) jako wyjście
   attachInterrupt(0, myISR, CHANGE);
   sei();
   while (1) {
     digitalWrite(13, HIGH);
     delay(500);
     digitalWrite(13, LOW);
     delay(500);
   }
}

void myISR() {
  state = !state;
}