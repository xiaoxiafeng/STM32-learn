#include "sys.h"
#include "delay.h"
#include "usart.h" 
#include "led.h"
#include "key.h"

int main(void)
{
	Cache_Enable();                 //��L1-Cache
	HAL_Init();				        //��ʼ��HAL��
	Stm32_Clock_Init(160,5,2,4);    //����ʱ��,400Mhz 
	delay_init(400);				//��ʱ��ʼ��
	uart_init(115200);				//���ڳ�ʼ��
	led_init();						//��ʼ��LED
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
