/*
 * GPIO_Section1.c
 *
 * Created: 10/19/2023 6:38:05 PM
 * Author : Kadees
 */ 

//#include <avr/io.h> 
#include "Utils.h" 
#include "MemMap.h"
#define F_CPU 8000000UL
#include <util/delay.h>

int main(void)
{
	//set LEDs at PD5,PD6,PD7
	DDRD = (0b11100000);
	PORTD = 0;

    while (1) 
    {
		if((ReadBit(PORTD,5) || ReadBit(PORTD,6) || ReadBit(PORTD,7))==0)
		{
			SetBit(PORTD,5);
			_delay_ms(500);
			SetBit(PORTD,6);
			_delay_ms(500);
			SetBit(PORTD,7);
			_delay_ms(500);
			ClearBit(PORTD,7);
			_delay_ms(500);
			ClearBit(PORTD,6);
			_delay_ms(500);
			ClearBit(PORTD,5);
			_delay_ms(500);			
		}

    }
}

