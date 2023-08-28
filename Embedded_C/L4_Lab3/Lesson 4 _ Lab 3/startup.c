//startup.c
//Eng.Mark

#include <stdint.h>

extern int main(void);

void Reset_Handler();



void Default_handler(void)
{
	Reset_Handler();
}

//these handlers are weak, considered as prototypes an be overridden in any file
void NMI_Handler() __attribute__((weak,alias("Default_handler"))) ;
void H_fault_handler() __attribute__((weak,alias("Default_handler"))) ;

//compiler take the vectors array and put it in vectors section

//booking 1024 bytes by .bss through uninitializes array of int 256 (1024 bytes)
static unsigned int Stack_top[256]; 

void	(*const g_p_fn_Vectors[])()  __attribute__((section(".vectors"))) =
{
	(void(*)())  ((unsigned int)Stack_top + sizeof(Stack_top)),
	&Reset_Handler,
	&NMI_Handler,
	&H_fault_handler	
};

extern unsigned int _E_text;
extern unsigned int _S_data;
extern unsigned int _E_data;
extern unsigned int _S_bss;
extern unsigned int _E_bss;

void Reset_Handler()
{
	// copying data section from flash to ram
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

	main();
}

