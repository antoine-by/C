/*
 * Lab4.c
 *
 * Created: 26.09.2023 19:24:00
 * Author : X3
 */ 
#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
#define ZAD 500
int main(void)
{
    DDRD = 0b11111111;
	PORTD = 0b11111111;
	DDRB = 0b11111111;
	PORTB = 0b00000000;

	

    while (1) 
    {

		
			PORTD = 0x3F;   //***0*** HEX:3F BIN:0b00111111
		PORTB = ~0x3F;
		_delay_ms(ZAD);

		PORTD = 0x6 ;   //***1*** HEX:6  BIN:0b00000110
		PORTB = ~0x6 ;
		_delay_ms(ZAD);

		PORTD = 0x5B;   //***2*** HEX:5B BIN:0b01011011
		PORTB = ~0x5B;
		_delay_ms(ZAD);

		PORTD = 0x4F;   //***3*** HEX:4F BIN:0b01001111
		PORTB = ~0x4F;
		_delay_ms(ZAD);

		PORTD = 0x66;   //***4*** HEX:66 BIN:0b01100110
		PORTB = ~0x66;
		_delay_ms(ZAD);

		PORTD = 0x6D;   //***5*** HEX:6D BIN:0b01101101
		PORTB = ~0x6D;
		_delay_ms(ZAD);

		PORTD = 0x7D;   //***6*** HEX:7D BIN:0b01111101
		PORTB = ~0x7D;
		_delay_ms(ZAD);

		PORTD = 0x7 ;   //***7*** HEX:7  BIN:0b00000111
		PORTB = ~0x7 ;
		_delay_ms(ZAD);

		PORTD = 0x7F;   //***8*** HEX:7F BIN:0b01111111
		PORTB = ~0x7F;
		_delay_ms(ZAD);

		PORTD = 0x6F;   //***9*** HEX:6F BIN:0b01101111
		PORTB = ~0x6F;
		_delay_ms(ZAD);
        
		

		

		/*
		PORTB = ~0x3F;   //***0*** HEX:3F BIN:0b00111111
		_delay_ms(ZAD);
		PORTB = ~0x6 ;   //***1*** HEX:6  BIN:0b00000110
		_delay_ms(ZAD);
		PORTB = ~0x5B;   //***2*** HEX:5B BIN:0b01011011
		_delay_ms(ZAD);
		PORTB = ~0x4F;   //***3*** HEX:4F BIN:0b01001111
		_delay_ms(ZAD);
		PORTB = ~0x66;   //***4*** HEX:66 BIN:0b01100110
		_delay_ms(ZAD);
		PORTB = ~0x6D;   //***5*** HEX:6D BIN:0b01101101
		_delay_ms(ZAD);
		PORTB = ~0x7D;   //***6*** HEX:7D BIN:0b01111101
		_delay_ms(ZAD);
		PORTB = ~0x7 ;   //***7*** HEX:7  BIN:0b00000111
		_delay_ms(ZAD);
		PORTB = ~0x7F;   //***8*** HEX:7F BIN:0b01111111
		_delay_ms(ZAD);
		PORTB = ~0x6F;   //***9*** HEX:6F BIN:0b01101111
		_delay_ms(ZAD);
		*/
    }
}

