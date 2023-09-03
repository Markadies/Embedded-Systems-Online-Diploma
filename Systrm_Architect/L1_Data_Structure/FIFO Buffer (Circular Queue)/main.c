/*
 * main.c
 *
 *  Created on: Aug 29, 2023
 *      Author: Kadees
 */


#include "fifo.h"
void main(){

	FIFO_Buf_t FIFO_UART;
	element_type i, temp;

	if( FIFO_init( &FIFO_UART,&uart_buff ,5 ) )
		printf("fifo init ---------------Done and Dusted");

	for(i=0 ; i<7 ; i++)
	{
		printf("FIFO Enqueue (%x) \n",i);
		if(FIFO_enqueue(&FIFO_UART,i) == FIFO_no_error)
			printf("\tFIFO enqueue Done \n");
		else
			printf("\tFIFO enqueue Failed\n");
	}

	FIFO_print(&FIFO_UART);

	if(FIFO_dequeue(&FIFO_UART,&temp) == FIFO_no_error)
		printf("\tFIFO dequeue Done \n");
	else
		printf("\tFIFO enqueue Failed\n");

	FIFO_print(&FIFO_UART); //dequeue then print



}
