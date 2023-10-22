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
	PORTD = 0;
	//Set Buzzer at PD4 as output
	SetBit(DDRD,4);
	ClearBit(PORTD,4);
		
	//Set PD0 Button as input
	ClearBit(DDRD,0);
	SetBit(PORTD,0); //pull up button
	
    while (1) 
    {
		while ( (ReadBit(PIND,0) ) ==1 )
		{
			_delay_ms(250);
			SetBit(PORTD,4);	
		}
		
		ClearBit(PORTD,4);
	}
}
