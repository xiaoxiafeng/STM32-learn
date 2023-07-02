#include "sys.h" 
#include "usart.h" 
#include "delay.h" 
//ALIENTEK ������STM32H7������ ʵ��0
//�½�����ʵ��  
//����֧�֣�www.openedv.com
//������������ӿƼ����޹�˾

int main(void)
{ 
	u8 t=0;
	Stm32_Clock_Init(160,5,2,4);	//����ʱ��,400Mhz
    delay_init(400);				//��ʱ��ʼ��
	uart_init(100,115200);			//���ڳ�ʼ��
	while(1)
	{
		printf("t:%d\r\n",t);
		delay_ms(500);
		t++;
	}
}
