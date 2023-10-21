/*
 * Lab8_dz.c
 *
 * Created: 03.10.2023 19:00:15
 * Author : X3
 */ 
#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

unsigned int r0_1000, r1_100 = 0 , r2_10 = 0, r3_1 = 0;

unsigned char digits [10] = {
	0x3F, 0x6, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x7, 0x7F, 0x6F
};

void chislo (unsigned int chislo_all)
{
	r0_1000 = chislo_all/1000;          //tisiachi
	r1_100 = chislo_all%1000/100;       //sotni
	r2_10 = chislo_all%100/10;    // desiatki
	r3_1 = chislo_all%10;        //edinici
}


int main(void)
{
	DDRD = 0xff;
	//PORTD = digits[1];
	DDRB |=(1<<3) | (1<<2) | (1<<1) | (1<<0);
	
	while (1)
	{
		chislo(2024);
		PORTB |= (1<<1) | (1<<2) | (1<<3);
		PORTB &= ~(1<<0);               //0
		PORTD = digits[r0_1000];
		
		_delay_ms(3);
		PORTB |= (1<<2) | (1<<0) | (1<<3);
		PORTB &= ~(1<<1);               //1
		PORTD = digits[r1_100];
		
		_delay_ms(3);
		PORTB |= (1<<1) | (1<<0) | (1<<3);
		PORTB &= ~(1<<2);              //2
		PORTD = digits[r2_10];
		
		_delay_ms(3);
		PORTB |= (1<<1) | (1<<0) | (1<<2);
		PORTB &= ~(1<<3);               //3
		PORTD = digits[r3_1];
		
		_delay_ms(3);
	}
}