#include <avr/io.h>

int main()
{
  DDRB |= 0x3F;
  DDRD |= 0xFF;
  while (1)
  {
    uint8_t state = 1;
    bool isChangedState = digitalToggle(13, &state);
  }
}

bool digitalToggle(uint8_t pin, uint8_t *state)
{
  
    int _pinport = 0;
    if (pin > 7 && pin <= 13)
    {
      _pinport = pin - 8;
      if(DDRB & (1 << _pinport))
      { 
      	PORTB ^= (*state << _pinport);
        return true;
      }
    }
    else if (pin >= 0 && pin <= 7)
    {
      _pinport = pin;
      if(DDRD & (1 << _pinport))
      { 
      	PORTD ^= (*state << _pinport);
        return true;
      }
    }
  return false;
}

/*bool digitalToggle(uint8_t pin, uint8_t *state)
{
  
    int _pinport = 0;
    if (pin > 7 && pin <= 13)
    {
      _pinport = pin - 8;
      if(DDRB & (1 << _pinport))
      { 
      	PORTB = (*state << _pinport);
        return true;
      }
    }
    else if (pin >= 0 && pin <= 7)
    {
      _pinport = pin;
      if(DDRD & (1 << _pinport))
      { 
      	PORTD = (*state << _pinport);
        return true;
      }
    }
  return false;
}
*/
