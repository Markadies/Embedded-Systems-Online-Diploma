/* 
linker_script.ld for ARM-cortex-M3 
(an Application on STM32F103C6)
Learn-in-depth First term project 
		Made by Mark Kadies
*/


MEMORY
{
	flash(RX) : ORIGIN = 0x00000000, LENGTH = 128K
	sram(RWX) : ORIGIN = 0x20000000, LENGTH = 20K
}

SECTIONS
{
	.text :	{
		_S_TEXT = .;
		*(.vectors*)
		*(.text*)
		*(.rodata)
		_E_TEXT = .;
	}> flash
	
	.data : {
		_S_DATA = .;
		*(.data)
		*(.data*)
		. = ALIGN(4);
		_E_DATA = .;
	}>sram AT> flash

	.bss : {
		_S_BSS = .;
		*(.bss*)
		_E_BSS = .;
		. = ALIGN(4);
		. = . + 0x1000;
		_stack_top = .;

	}> sram
}