/*
 * main.c
 *
 *  Created on: Aug 29, 2023
 *      Author: Kadees
 */
#include "lifo.h"


unsigned int buffer1 [5];  //5*4= 20 bytes


void main()
{
	unsigned int i, temp =0;

	LIFO_Buf_t uart_lifo, I2C_lifo ;
	//static allocation (in .bss section)
	LIFO_init(&uart_lifo,&buffer1[0],5);


	//dynamic allocation (in heap section)
	unsigned int* buffer2 = (unsigned int*)malloc(5*sizeof(unsigned int)); //5*4= 20 bytes
	LIFO_init(&I2C_lifo,&buffer2[0],5);



	for(i = 0 ;i<5;i++){
		if( ( LIFO_Add_item(&uart_lifo,5) ) == LIFO_no_error )
			printf("UART_LIFO add : %d \n",i);
	}
	for(i = 0 ;i<5;i++){
		if ( ( LIFO_get_item(&uart_lifo,&temp) ) == LIFO_no_error )
			printf("UART_LIFO get : %d \n",i);
	}
}
