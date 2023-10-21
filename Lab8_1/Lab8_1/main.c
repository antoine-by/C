/*
 * Lab8_1.c
 *
 * Created: 08.10.2023 10:03:02
 * Author : X3
 */ 
#include <avr/io.h>

int main(void)
{
	DDRD = 0xff;
	PORTD = 0x00;
	
	TCCR0 = 0b00000101;    //делим частоту таймера на 1024
	TCNT0 = 0;
    
    while (1) 
    {
		if (TCNT0 == 128)
		{
			PORTD = 0b00001111;
		}
		if (TCNT0 == 255)
		{
			PORTD = 0b11110000;
		}
    }
	
}