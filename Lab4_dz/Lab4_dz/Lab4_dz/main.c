/*
 * Lab4_dz.c
 *
 * Created: 26.09.2023 22:01:27
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
	
	DDRC = 0b00000000;
	PORTC = 0b1000111;
	

	

    while (1) 
    {
		
		if (PINC == 0b1000110)
		{
			PORTD = 0x6 ; //***1***
		} 
		else if (PINC == 0b1000011)
			{
				PORTD = 0x5B;   //***2***
			} 
			else if (PINC == 0b1000101)
			{
				PORTD = 0x4F;   //***3***
			} 
			else
			{
				PORTD = 0x3F;   //***0***
			}
		
				

		
    }
}


