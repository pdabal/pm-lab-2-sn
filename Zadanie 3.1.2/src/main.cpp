#include <avr/io.h>

int main()
{
  DDRB |= 0x3F;
  DDRD |= 0xFF;
  while (1)
  {
    uint8_t state = 1;
    bool isChangedState = digitalButton(2, &state);
  }
}

bool digitalButton(uint8_t pin, uint8_t *state)
{
  
    int _pinport = 0;
    if (pin > 7 && pin <= 13)
    {
      _pinport = pin - 8;
      if(DDRB & (0 << _pinport))
      { 
      	PINB = (*state << _pinport);
        return true;
      }
    }
    else if (pin >= 0 && pin <= 7)
    {
      _pinport = pin;
      if(DDRD & (0 << _pinport))
      { 
      	PIND = (*state << _pinport);
        return true;
      }
    }
  return false;
}
