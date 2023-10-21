/*
 * Lab4_1.c
 *
 * Created: 26.09.2023 21:05:35
 * Author : X3
 */ 

#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
#define ZAD 500
int main(void)
{
    DDRD = 0b11111111;
	PORTD = 0b00000000;
	
	DDRB = 0b00000000;
	PORTB = 0b00000011;

	

    while (1) 
    {
		
		if (PINB == 0b00000010)
		{
			PORTD = 0x6 ; //***1***
		} 
		else if (PINB == 0b00000001)
			{
				PORTD = 0x5B;   //***2***
			} 
			else if (PINB == 0b00000000)
			{
				PORTD = 0x4F;   //***3***
			} 
			else
			{
				PORTD = 0x3F;   //***0***
			}
		
				

		
    }
}


