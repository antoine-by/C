/*
 * Lab9.c
 *
 * Created: 08.10.2023 18:25:18
 * Author : X3
 */ 

#include <avr/io.h>

int main(void)
{
	DDRD = 0xff;
	PORTD = 0x00;
	
	TCCR1B = 0b00000011;    //делим частоту таймера на 64
	TCNT1 = 0;
	
	TCNT1H = 0;
	TCNT1L = 0;
	
	
	while (1)
	{
		if (TCNT1 == 32768)
		{
			PORTD = 0b00001111;
		}
		if (TCNT1 == 0)
		{
			PORTD = 0b11110000;
		}
	}
	
}
