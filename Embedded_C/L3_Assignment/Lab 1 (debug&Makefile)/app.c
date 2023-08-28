#include "uart.h"

unsigned char string_buffer[100] = "learn-in-depth : Mark";
unsigned char string_buffer2[100] = "create rodata";

void main(void){

    Send_string(string_buffer);

}