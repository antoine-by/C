/*
 * Lab5.c
 *
 * Created: 26.09.2023 23:43:59
 * Author : X3
 */ 

#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
#define ZAD 500

unsigned char digits [10] = {
	0x3F, 0x6, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x7, 0x7F, 0x6F
							};

int main(void)
{
    DDRD = 0b11111111;
	PORTD = 0b00000000;
	
	while (1) 
    {
		unsigned char ZX;
		for (ZX=0; ZX<=9; ZX++)        //--start--услови€ при котором выолн€етс€--что выполн€етс€ с переменной--
		{
			PORTD = digits[ZX];   //***0...9*** 
		    _delay_ms(ZAD);
		}
		for (ZX=8; ZX>=1; ZX--)        //--start--услови€ при котором выолн€етс€--что выполн€етс€ с переменной--
		{
			PORTD = digits[ZX];   //***8...1*** no zaderjka 
		    _delay_ms(ZAD);
		}
		
		/*
		PORTD = digits[0];   
		_delay_ms(ZAD);
		PORTD = digits[1];    
		_delay_ms(ZAD);
		PORTD = digits[2];    
		_delay_ms(ZAD);
		PORTD = digits[3];    
		_delay_ms(ZAD);
		PORTD = digits[4];    
		_delay_ms(ZAD);
		PORTD = digits[5];    
		_delay_ms(ZAD);
		PORTD = digits[6];    
		_delay_ms(ZAD);
		PORTD = digits[7];  
		_delay_ms(ZAD);
		PORTD = digits[8];   
		_delay_ms(ZAD);
		PORTD = digits[9];   
		_delay_ms(ZAD); 
		*/	
    }
}