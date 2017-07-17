#define F_CPU 11059200UL
#include <avr/io.h>
#include <util/delay.h>
#include "waitDelay.h"

void waitDelay(void){
  _delay_ms(200);
}
