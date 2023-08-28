#include "uart.h"

#define UART0DR *((volatile unsigned int*)((unsigned int)0x101f1000))

void Send_string (unsigned char* P_to_String){
    while( *P_to_String != '\0'){
        UART0DR = (unsigned int)(*P_to_String) ;
        P_to_String++;
    }
}