//Probna zmiana
/*
 * main.c
 *
 *  Created on: 07-07-2015
 *      Author: Arek
 */


#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	DDRD |= (1<<PD0);
	DDRD |= (1<<PD1);
	DDRD |= (1<<PD2);
	DDRD |= (1<<PD3);
	DDRD |= (1<<PD4);
	_delay_ms(1000);

	while(1){
//PORTB ^=(1<<PB1);

	PORTD |= (1<<PD0);
	_delay_ms(1000);

	PORTD |= (1<<PD1);
	_delay_ms(1000);

	PORTD |= (1<<PD2);
	_delay_ms(1000);

	PORTD |= (1<<PD3);
	_delay_ms(1000);

	PORTD |= (1<<PD4);
	_delay_ms(1000);


	PORTD &= ~(1<<PD0);
	_delay_ms(1000);

	PORTD &= ~(1<<PD1);
	_delay_ms(1000);

	PORTD &= ~(1<<PD2);
	_delay_ms(1000);

	PORTD &= ~(1<<3);
	_delay_ms(1000);

	PORTD &= ~(1<<4);
	_delay_ms(1000);

	}
}
