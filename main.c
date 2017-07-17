#define F_CPU 11059200UL
#include <stdlib.h>
#include <stdio.h>
#include <avr/io.h>
#include <string.h>
#include <util/delay.h>
#include "tcn75.h"
#include "uart.h"


int main(void)
{
	float temp;
	uint8_t cfg;
	char *string;
	char *string2;

	string = malloc(80);

	/* Initializing LED 7segment*/
	DDRC=0xFF;

	tcn75_init();
	uart_init(0);
	uart_printstrn(0, "\nTCN75a Temperature Sensor");

	while(1) {

		cfg = 255;

		if (tcn75_read_config_reg(&cfg)) {
			uart_printstrn(0, "Error reading conf reg!");
		} else {
			uart_printstrn(0, "Config reg in hex");
			string = itoa(cfg, string, 16);
			uart_printstrn(0, string);
		}

		temp = tcn75_read_temperature();

		if (temp == -99) {
			uart_printstrn(0, "Error reading temp!");
		} else {
			uart_printstrn(0, "temp");
			string = dtostrf(temp, 3, 5, string);
			string2= strcat(string," °C");
			uart_printstrn(0, string2);
			
			if (temp >= 30){
			  PORTC = 0b01111111;
		}
			else {
			  PORTC = 0b11111111;
			}
		}
		_delay_ms(2000);
	}

	free(string);
	return(0);
}
