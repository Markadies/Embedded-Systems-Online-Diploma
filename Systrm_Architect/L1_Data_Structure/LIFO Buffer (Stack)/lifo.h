/*
 * lifo.h
 *
 *  Created on: Aug 29, 2023
 *      Author: Kadees
 */

#ifndef LIFO_H_
#define LIFO_H_
#include "stdio.h"
#include "stdlib.h"

// type definitions used by users
typedef struct {
	unsigned int length ;
	unsigned int count ;
	unsigned int* base ;
	unsigned int* head ;
}LIFO_Buf_t; //LIFO_Buf_t x  (Created an object x of structure)

typedef enum{
	LIFO_no_error,
	LIFO_full,
	LIFO_empty,
	LIFO_Null //LIFO doesn't exist
}LIFO_status;

//APIs
LIFO_status LIFO_Add_item (LIFO_Buf_t* lifo_buf , unsigned int item); //takes pointer to buffer base and value added in it, returns the status
LIFO_status LIFO_get_item (LIFO_Buf_t* lifo_buf , unsigned int* item);// I will put the value in item (pop)
LIFO_status LIFO_init (LIFO_Buf_t* lifo_buf, unsigned int* buf, unsigned int length); //initialize a buffer


#endif /* LIFO_H_ */
