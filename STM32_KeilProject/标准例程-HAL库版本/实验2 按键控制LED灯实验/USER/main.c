#include "sys.h"
#include "delay.h"
#include "usart.h" 
#include "led.h"
#include "key.h"

int main(void)
{
	Cache_Enable();                 //打开L1-Cache
	HAL_Init();				        //初始化HAL库
	Stm32_Clock_Init(160,5,2,4);    //设置时钟,400Mhz 
	delay_init(400);				//延时初始化
	uart_init(115200);				//串口初始化
	led_init();						//初始化LED
    key_init();
	while(1)
	{
        if (key_scan())
        {
            HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_0);
        }
        else
        {
            delay_ms(10);
        }

	}
}
