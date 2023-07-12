#include "sys.h"
#include "delay.h"
#include "usart.h" 
#include "led.h"
#include "exti.h"

int main(void)
{
	Cache_Enable();                 //��L1-Cache
	HAL_Init();				        //��ʼ��HAL��
	Stm32_Clock_Init(160,5,2,4);    //����ʱ��,400Mhz 
	delay_init(400);				//��ʱ��ʼ��
	uart_init(115200);				//���ڳ�ʼ��
	led_init();						//��ʼ��LED
    exti_init();
    
	while(1)
	{
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,GPIO_PIN_SET);	//PB1��1
		delay_ms(500);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,GPIO_PIN_RESET); //PB1��0		
		delay_ms(500);
        
        
	}
}
