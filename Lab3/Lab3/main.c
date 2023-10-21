/*
 * Lab3.c
 *
 * Created: 26.09.2023 10:39:43
 * Author : X3
 */ 
#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
#define KNOPKA PORTB
#define KNOPKAREAD PINB
#define LED PORTD

int main(void)
{
	DDRD = 0b00001111;
	DDRB = 0b00000000; 
	LED = 0b00001111;
	KNOPKA = 0b00000001;
 
     while (1) 
    {
	/*  if (KNOPKAREAD == 0b00000000)
		{
			LED = 0b00000110;
		}
		else
		{
			LED = 0b00001001;
		}
    */
		while(KNOPKAREAD == 0b00000000)
		{
			LED = 0b00000110;
			_delay_ms(100);
			LED = 0b00000000;
			_delay_ms(100);
		}
		LED = 0b00001001;
	}
	
	
}

