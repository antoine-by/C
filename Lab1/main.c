/*
 * Lab1.c
 *
 * Created: 25.09.2023 15:33:20
 * Author : X3
 */ 

#include <avr/io.h>

#define F_CPU 1000000UL



int main(void)
{
    DDRD = 0b00000001;
    while (1) 
    {
		PORTD = 0b00000001;
		
    }
}

