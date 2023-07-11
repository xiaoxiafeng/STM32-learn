#include "sys.h"
#include "delay.h"
#include "usart.h" 

int main(void)
{
	u8 t=0;
    Cache_Enable();                 //打开L1-Cache
    HAL_Init();				        //初始化HAL库
	Stm32_Clock_Init(160,5,2,4);    //设置时钟,400Mhz 
	delay_init(400);
	uart_init(115200);
	while(1)
	{
		printf("t:%d\r\n",t);
		delay_ms(500);
		t++;
	}
}
