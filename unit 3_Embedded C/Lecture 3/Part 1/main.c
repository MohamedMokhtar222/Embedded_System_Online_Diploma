#include "stdint.h"

typedef volatile unsigned int vuint32_t ;

#define RCC_base       (0x40021000)
#define GPIOA_base     (0x40010800)
#define RCC_APB2ENR   *(vuint32_t*)(RCC_base + 0x18)
#define GPIOA_CRH     *(vuint32_t*)(GPIOA_base + 0x04)
#define GPIOA_ODR     *(vuint32_t*)(GPIOA_base + 0x0c)

typedef union {
	vuint32_t ALL_FIELDS;
	struct{
		vuint32_t reserved:13 ;
 		vuint32_t pin_13:1 ;
	}pin;
}R_ODR_t;

int main(void)
{
	volatile R_ODR_t* R_ODR = (volatile R_ODR_t*)(GPIOA_base + 0x0c);
	RCC_APB2ENR |= 1<<2 ;
	GPIOA_CRH &= 0xFF0FFFFF ;
	GPIOA_CRH |= 0x00200000 ;
	int i;
	while (1)
	{
		R_ODR->pin.pin_13 = 1;
		for(i=0;i<5000;i++);  //DELAY
		R_ODR->pin.pin_13 = 0;
		for(i=0;i<5000;i++);  //DELAY
	}
	return 0;
}