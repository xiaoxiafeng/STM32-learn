#include "sys.h"
#include "delay.h"
#include "usart.h" 

int main(void)
{
	u8 t=0;
    Cache_Enable();                 //��L1-Cache
    HAL_Init();				        //��ʼ��HAL��
	Stm32_Clock_Init(160,5,2,4);    //����ʱ��,400Mhz 
	delay_init(400);
	uart_init(115200);
	while(1)
	{
		printf("t:%d\r\n",t);
		delay_ms(500);
		t++;
	}
}
