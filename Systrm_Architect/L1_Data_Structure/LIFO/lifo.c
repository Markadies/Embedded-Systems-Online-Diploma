/*
 * lifo.c
 *
 *  Created on: Aug 29, 2023
 *      Author: Kadees
 */
#include "lifo.h"
//APIs implementation
LIFO_status LIFO_Add_item (LIFO_Buf_t* lifo_buf , unsigned int item) //takes pointer to buffer base and value added in it, returns the status
{
	//check lifo is valid
	if(!lifo_buf->base || !lifo_buf->head)
		return LIFO_Null;

	//check lifo is full ?
	if(lifo_buf->count == lifo_buf->length) // or I can use head >= base + (length*4)
		return LIFO_full ;

	//add value
	*(lifo_buf->head) = item;
	lifo_buf->head ++; //increment the head pointer
	lifo_buf->count ++;

	return LIFO_no_error ;
}

LIFO_status LIFO_get_item (LIFO_Buf_t* lifo_buf , unsigned int* item)// I will put the value in item (pop)
{
	if(!lifo_buf->base || !lifo_buf->head)
		return LIFO_Null;

	if(lifo_buf->count ==0) //or do this --->(lifo_buf->head < lifo_buf->base)
		return LIFO_empty ;

	//pop value
	item = lifo_buf->head;
	lifo_buf->head --; //decrement the head pointer
	lifo_buf->count --;

	return LIFO_no_error ;
}

LIFO_status LIFO_init (LIFO_Buf_t* lifo_buf, unsigned int* buf, unsigned int length)
{
	if(buf == NULL)
		return LIFO_Null;

	lifo_buf->base = &buf ;
	lifo_buf->head = &buf ;
	lifo_buf->count = 0;
	lifo_buf->length = length ;
	return LIFO_no_error;
}
