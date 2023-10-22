/*
 * Utils.h
 *
 * Created: 10/19/2023 7:23:15 PM
 *  Author: Kadees
 */ 


#ifndef UTILS_H_
#define UTILS_H_

#define SetBit(reg,bit)	(reg |= (1<<bit))
#define ClearBit(reg,bit)	(reg &= ~(1<<bit))
#define ReadBit(reg,bit)	((reg>>bit)&1)
#define ToggleBit(reg,bit)	(reg ^= (1<<bit))


#endif /* UTILS_H_ */