#include "exti.h"
#include "delay.h"

void exti_init(void)
{
     
    GPIO_InitTypeDef GPIO_Initure;
    __HAL_RCC_GPIOH_CLK_ENABLE();  //¿ªÆôGPIOHÊ±ÖÓ
    
    GPIO_Initure.Pin=GPIO_PIN_3;
    GPIO_Initure.Mode=GPIO_MODE_IT_FALLING;
    GPIO_Initure.Pull=GPIO_PULLUP;
    GPIO_Initure.Speed=GPIO_SPEED_FREQ_VERY_HIGH;
    
    HAL_GPIO_Init(GPIOH,&GPIO_Initure);
    
    HAL_NVIC_SetPriority(EXTI3_IRQn, 2, 0);
    HAL_NVIC_EnableIRQ(EXTI3_IRQn);
}

void EXTI3_IRQHandler()
{
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_3);
    __HAL_GPIO_EXTI_CLEAR_IT(GPIO_PIN_3);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    delay_ms(20);
    
    if(GPIO_Pin == GPIO_PIN_3)
    {
        if(HAL_GPIO_ReadPin(GPIOH,GPIO_PIN_3) == 0)
        {
            HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_0);
        }
    }
}
   