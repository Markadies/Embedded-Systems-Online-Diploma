/*
 * MemMap.h
 *
 * Created: 10/19/2023 6:44:46 PM
 *  Author: Kadees
 */ 


#ifndef MEMMAP_H_
#define MEMMAP_H_

//all registers addresses needed

#define DDRA	*((volatile unsigned char*)0x3A)
#define PORTA	*((volatile unsigned char*)0x3B)
#define PINA	*((volatile unsigned char*)0x39)

#define DDRC	*((volatile unsigned char*)0x34)
#define PORTC	*((volatile unsigned char*)0x35)
#define PINC	*((volatile unsigned char*)0x33)

#define DDRD	*((volatile unsigned char*)0x31)
#define PORTD	*((volatile unsigned char*)0x32)
#define PIND	*((volatile unsigned char*)0x30)

#endif /* MEMMAP_H_ */