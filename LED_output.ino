/*
  The script shows a 
*/

#include <avr/io.h>
#include <util/delay.h>

int main(void){
  DDRB |= (1 << DDB5); // sets the value of the DDRB gate to output for pin13 on the arduino or 19 on the IC

  while(1){            // Super loop
  PORTB |= (1 << PB5);   //turns on the on
  _delay_ms(500);         // delay from delay/util
  PORTB &= ~(1 << PB5);  // turns the LED off
  _delay_ms(500);
  } 
}