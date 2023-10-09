
#include "stdint.h"

typedef volatile unsigned int vuint32_t ;

#define RCC_BASE 0x40021000


#define RCC_APB2ENR *(volatile uint32_t *) (RCC_BASE + 0x18)
#define RCC_CFGR *(volatile uint32_t *) (RCC_BASE + 0x04)

#define GPIO_BASE 0x40010800
#define GPIO_CRH    *(volatile uint32_t *) (GPIO_BASE + 0X04)
#define GPIO_ODR    *(volatile uint32_t *) (GPIO_BASE + 0x0c)

#define RCC_IOPAEN 	(1<<2)

typedef union
{
	vuint32_t all_fields;
	struct
	{
		vuint32_t reserved:13;
		vuint32_t p_13:1;
	}Pin;
}R_ODR_t;

volatile R_ODR_t* R_ODR=(volatile R_ODR_t*) (GPIO_BASE + 0x0c) ;

int main(void)
{
    RCC_APB2ENR |= RCC_IOPAEN;
//    Bits 10:8 PPRE1: APB low-speed prescaler (APB1)
//    Set and cleared by software to control the division factor of the APB low-speed clock
//    (PCLK1).
//    Warning: the software has to set correctly these bits to not exceed 36 MHz on this domain.
//    0xx: HCLK not divided
//    100: HCLK divided by 2
//    101: HCLK divided by 4
//    110: HCLK divided by 8
//    111: HCLK divided by 16

    RCC_CFGR |= (0b100<<8);

//    Bits 13:11 PPRE2: APB high-speed prescaler (APB2)
//    Set and cleared by software to control the division factor of the APB high-speed clock
//    (PCLK2).
//    0xx: HCLK not divided
//    100: HCLK divided by 2
//    101: HCLK divided by 4
//    110: HCLK divided by 8
//    111: HCLK divided by 16

    RCC_CFGR |= (0b101<<11);

    GPIO_CRH &=0xff0fffff;
    GPIO_CRH |=0x00200000;

    while(1)
    {
     	//GPIO_ODR |=1<<13;
    	R_ODR->Pin.p_13=1;
    	for(int i=0;i<5000;i++);
    	//GPIO_ODR &=~(1<<13);
    	R_ODR->Pin.p_13=0;
    	for(int i=0;i<5000;i++);

    }
}