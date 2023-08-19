#include "uart.h"

char String[100] = "Learn in depth : Mark";

void main(void){
    UART_send_Data(String);
}
