/*
 * Lab_10.c
 *
 * Created: 14.10.2023 15:22:50
 * Author : X3
 */ 

#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
#define ZAD 500
#define DDR_7_SEG DDRB
#define PORT_7_SEG PORTB
int ZX = 0;
unsigned char digits [10] = {
	0x3F, 0x6, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x7, 0x7F, 0x6F
							};

int main(void)
{
    DDR_7_SEG = 0b11111111;
	PORT_7_SEG = 0b00000000;
	DDRD &=~((1<<2)|(1<<1));
	PORTD |=(1<<2)|(1<<1);
	
	while (1) 
    {
		
		if (~PIND & (1<<1))
		{
			ZX++;
			if (ZX>9) ZX=0;
			PORT_7_SEG = digits[ZX];
			while (~PIND & (1<<1))	
			{
			}
			_delay_ms(200);
		}
		
		if (~PIND & (1<<2))
		{
			ZX--;
			if (ZX<0) ZX=9;
			PORT_7_SEG = digits[ZX];
			while (~PIND & (1<<2))
			{
			}
			_delay_ms(200);
		}
    }
}
