/*
 * fifo.c
 *
 *  Created on: Aug 29, 2023
 *      Author: Kadees
 */
#include "fifo.h"

FIFO_status FIFO_init (FIFO_Buf_t* fifo ,element_type* buf, uint32 length  ){
	if(buf == NULL)
		return FIFO_null;

	fifo->base = buf;
	fifo->head = buf;
	fifo->tail = buf;
	fifo->length = length;
	fifo->count = 0;
	return FIFO_no_error;

}

FIFO_status FIFO_enqueue (FIFO_Buf_t* fifo ,element_type item)
{
	if(!fifo->base ||!fifo->head || !fifo->tail)
		return FIFO_null;
	if(FIFO_is_full(fifo) == FIFO_full)
		return FIFO_full;

	*(fifo->head)= item;
	fifo->count ++;
	//circular fifo
	if(fifo->head == (fifo->base +(fifo->length *sizeof(element_type))))
		fifo->head = fifo->base ;
	else
		fifo->head ++ ;

	return FIFO_no_error;
}

FIFO_status FIFO_dequeue (FIFO_Buf_t* fifo ,element_type* item )
{
	if(!fifo->base ||!fifo->head || !fifo->tail)
		return FIFO_null;
	if(fifo->count == 0)
		return FIFO_empty;
	*item= *(fifo->tail);
	fifo->count --;
	if(fifo->tail == (fifo->base +(fifo->length *sizeof(element_type))))
		fifo->tail = fifo->base ;
	else
		fifo->tail ++ ;
	return FIFO_no_error;

}

FIFO_status FIFO_is_full (FIFO_Buf_t* fifo)
{
	if(!fifo->base ||!fifo->head || !fifo->tail)
		return FIFO_null;

	if(fifo->count == fifo->length)
		return FIFO_full;
	return FIFO_no_error;
}

void FIFO_print(FIFO_Buf_t* fifo)
{
	element_type* temp;
	int i;
	if (fifo->count == 0)
		printf("fifo is empty");
	else {
		temp = fifo->tail;
		printf("========FIFO Print========\n");
		for(i =0;i<fifo->count;i++){
			printf("\t %X \n",*temp);
			temp++;
		}
		printf("========Done Printing========\n");
	}
}

