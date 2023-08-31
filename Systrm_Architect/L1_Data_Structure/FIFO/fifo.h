/*
 * fifo.h
 *
 *  Created on: Aug 29, 2023
 *      Author: Kadees
 */

#ifndef FIFO_H_
#define FIFO_H_

#include "stdio.h"
#include "Platform_Types.h"

//User Configuration

//select element type (uint8,uint26,uint32) to make it more generic
#define element_type  uint8 //<<<<<-----------------(the semicolon here)
//create buffer 1
#define width 5
element_type uart_buff[width];

typedef struct {
	unsigned int length ;
	unsigned int count ;
	element_type* base;
	element_type* head;
	element_type* tail;
}FIFO_Buf_t;


typedef enum{
	FIFO_no_error,
	FIFO_full,
	FIFO_empty,
	FIFO_null
}FIFO_status;

FIFO_status FIFO_init (FIFO_Buf_t* fifo ,element_type* buf, uint32 length  );
FIFO_status FIFO_enqueue (FIFO_Buf_t* fifo ,element_type item);
FIFO_status FIFO_dequeue (FIFO_Buf_t* fifo ,element_type* item );
FIFO_status FIFO_is_full (FIFO_Buf_t* fifo);
void FIFO_print(FIFO_Buf_t* fifo);
#endif /* FIFO_H_ */
