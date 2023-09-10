/*
startup.c ARM-cortex-M3 (an application on STM32)
Learn-in-depth First term project 
		Made by Mark Emad Kadies
*/

// Start of SRAM is at address 0x20000000
//include needed data type 

#include <stdint.h>

//Exporting needed labels from linker

extern uint32_t _stack_top;
extern uint32_t _E_BSS;
extern uint32_t _S_BSS;
extern uint32_t _E_DATA;
extern uint32_t _S_DATA;
extern uint32_t _E_TEXT;
extern uint32_t _S_TEXT;

// Exporting needed functions labels 

extern int main(void);

//declaration important Handler
void Reset_Handler(void);
void Default_Handler(void);
void NMI_Handler(void) __attribute__ ((weak,alias("Default_Handler")));
void H_Fault_Handler(void) __attribute__ ((weak,alias("Default_Handler")));
void MM_Fault_Handler(void) __attribute__ ((weak,alias("Default_Handler")));
void Bus_Fault_Handler(void) __attribute__ ((weak,alias("Default_Handler")));
void Usage_Fault_Handler(void) __attribute__ ((weak,alias("Default_Handler")));

//declaration vector section to be stored in first of memory

void (* const g_p_fn_Vectors[])() __attribute__((section(".vectors"))) = {
	( void(* const)() ) (&_stack_top) ,
	&Reset_Handler,
	&NMI_Handler,
	&H_Fault_Handler,
	&MM_Fault_Handler,
	&Bus_Fault_Handler,
	&Usage_Fault_Handler
};

//defination of some Handler

void Reset_Handler(void){
	uint32_t DATA_SIZE = (uint8_t*)&_E_DATA - (uint8_t*)&_S_DATA;
	uint8_t* P_src = (uint8_t*)&_E_TEXT;
	uint8_t* P_dst = (uint8_t*)&_S_DATA;
	int i;
	for (i = 0; i < DATA_SIZE; ++i)
	{
		*(P_dst++) = *(P_src++);
	}

	uint32_t BSS_SIZE = (uint8_t*)&_E_BSS - (uint8_t*)&_S_BSS;
	P_dst = (uint8_t*)&_S_BSS;
	for (i = 0; i < BSS_SIZE; ++i)
	{
		*(P_dst++) = *(uint8_t*)0;
	}

	//Call main Function
	main();
}

void Default_Handler(void){

	Reset_Handler();

}