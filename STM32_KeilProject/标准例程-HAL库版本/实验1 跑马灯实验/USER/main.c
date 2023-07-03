#include "stm32h7xx.h"                  // Device header
#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"


int main(void)
{
    Cache_Enable(); //打开 L1-Cache
    HAL_Init(); //初始化 HAL 库
    Stm32_Clock_Init(432,25,2,9); //设置时钟,216Mhz 
    delay_init(216); //延时初始化
    uart_init(115200); //串口初始化
    LED_Init(); //初始化 LED
    while(1)
    {
        HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,GPIO_PIN_RESET); 
        //LED0 对应引脚 PB1 拉低，亮，等同于 LED0(0)
        HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,GPIO_PIN_SET); 
        //LED1 对应引脚 PB0 拉高，灭，等同于 LED1(1)
        delay_ms(500); //延时 500ms
        HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,GPIO_PIN_SET); 
        //LED0 对应引脚 PB1 拉高，灭，等同于 LED0(1)
        HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,GPIO_PIN_RESET); 
        //LED1 对应引脚 PB0 拉低，亮，等同于 LED1(0)
        delay_ms(500); //延时 500ms 
 }
}
