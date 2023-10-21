/*
 * Lab6.c
 *
 * Created: 27.09.2023 19:27:15
 * Author : X3
 */ 
#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
#define zadejk 100

int main(void)
{
    DDRD = 0b11111111;
	PORTD = 0b11111111;
	
    while (1) 
    {
		
		
		
		PORTD &= ~((1<<0) | (1<<2));   
		_delay_ms(300);

		
		
		
		
		
		/*
		char z;
		for (z=0; z<=7; z++)
		{
			PORTD = PORTD >> 1;
			_delay_ms(300);
		}
		
		
		PORTD = 0b00111100;
		_delay_ms(zadejk);
		PORTD = PORTD >> 2;
		_delay_ms(zadejk);
		PORTD = 0b11000011;
		_delay_ms(zadejk);
		PORTD = 0b11110000;
		_delay_ms(zadejk);
		*/
		
    }
}