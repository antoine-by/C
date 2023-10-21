/*
 * Lab2.c
 *
 * Created: 25.09.2023 17:19:42
 * Author : X3
 */ 
#define Z 500
#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
	


int main(void)
{
	DDRD = 0b00001001;
	
    while(1)
	{
			PORTD = 0b00000001;
			_delay_ms(Z);
			PORTD = 0b00001000;
			_delay_ms(Z);
	}
			
} 
		