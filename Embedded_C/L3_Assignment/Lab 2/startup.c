//startup.c
//Eng.Mark

#include <stdint.h>
extern int main(void);
extern unsigned int _stack_top;

void Reset_Handler();

void Default_handler(void)
{
	Reset_Handler();
}


//these handlers are weak, considered as prototypes an be overridden in any file
void NMI_Handler() __attribute__((weak,alias("Default_handler"))) ;
void H_Fault_Handler() __attribute__((weak,alias("Default_handler"))) ;
void MM_Fault_Handler() __attribute__((weak,alias("Default_handler"))) ;
void Bus_Fault() __attribute__((weak,alias("Default_handler"))) ;
void Usage_Fault_Handler() __attribute__((weak,alias("Default_handler"))) ;

//compiler take the vectors array and put it in vectors section 
uint32_t vectors[] __attribute__((section(".vectors"))) = {

(uint32_t)  &_stack_top,
(uint32_t)  &Reset_Handler,
(uint32_t)  &NMI_Handler,
(uint32_t)  &H_fault_handler,
(uint32_t)  &Bus_Fault,
(uint32_t)  &Usage_Fault_Handler,

};



extern unsigned int _E_text;
extern unsigned int _S_data;
extern unsigned int _E_data;
extern unsigned int _S_bss;
extern unsigned int _E_bss;

void Reset_Handler()
{
	// copying data section from flash(ROM) to RAM
	unsigned int dataSize= (unsigned char*) &_E_data - (unsigned char*) &_S_data;
	unsigned char* pSrc= (unsigned char*) &_E_text;
	unsigned char* pDst= (unsigned char*) &_S_data;
	int i;
	for(i=0; i<dataSize; i++)
	{
		*((unsigned char*)pDst++) = *((unsigned char*)pSrc++);
	}

	// initialize .bss section with zeros in SRAM
	unsigned int bssSize= (unsigned char*) &_E_bss - (unsigned char*) &_S_bss;
	pDst= (unsigned char*) &_S_bss;
		for(i=0; i<bssSize; i++)
	{
		*((unsigned char*)pDst++) = (unsigned char) 0;
	}
	//done
	//jump to main
	main();
}

