#include "uart.h"

#define UART0DR *((volatile unsigned int*)((unsigned int)0x101f1000))

void UART_send_Data(unsigned char* P_tx_Data){
    while( *P_tx_Data !='\0'){
        UART0DR = (unsigned int)(*P_tx_Data);
        P_tx_Data++;
    }
}