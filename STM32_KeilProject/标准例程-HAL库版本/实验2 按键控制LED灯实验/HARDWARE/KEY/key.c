#include "led.h"
#include "delay.h"


void key_init(void)
{
     
    GPIO_InitTypeDef GPIO_Initure;
    __HAL_RCC_GPIOH_CLK_ENABLE();  //¿ªÆôGPIOHÊ±ÖÓ
    
    GPIO_Initure.Pin=GPIO_PIN_2|GPIO_PIN_3;
    GPIO_Initure.Mode=GPIO_MODE_INPUT;
    GPIO_Initure.Pull=GPIO_PULLUP;
    GPIO_Initure.Speed=GPIO_SPEED_FREQ_VERY_HIGH;
    
    HAL_GPIO_Init(GPIOH, &GPIO_Initure);
    
}

uint8_t key_scan(void)
{
    if (HAL_GPIO_ReadPin(GPIOH, GPIO_PIN_2)==0)
    {
        delay_ms(10);
        if (HAL_GPIO_ReadPin(GPIOH, GPIO_PIN_2)==0)
        {
            while(HAL_GPIO_ReadPin(GPIOH, GPIO_PIN_2)==0);
            return 1;
        }
    }
    return 0;
}

uint8_t key0_scan(void)
{
    if (HAL_GPIO_ReadPin(GPIOH, GPIO_PIN_3)==0)
    {
        delay_ms(10);
        if (HAL_GPIO_ReadPin(GPIOH, GPIO_PIN_3)==0)
        {
            while(HAL_GPIO_ReadPin(GPIOH, GPIO_PIN_3)==0);
            return 1;
        }
    }
    return 0;
}
