/*
 * @Author: your name
 * @Date: 2021-04-29 22:35:44
 * @LastEditTime: 2021-06-13 13:48:47
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \��4-1 UCOSIII��ֲ\HARDWARE\LED\led.c
 */
#include "led.h"

//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ���������ɣ��������������κ���;
//ALIENTEKս��STM32������
//LED��������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2012/9/2
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) �������������ӿƼ����޹�˾ 2009-2019
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 	   

//��ʼ��PB5��PE5Ϊ�����.��ʹ���������ڵ�ʱ��		    
//LED IO��ʼ��
void LED_Init(void)
{
 
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB|RCC_APB2Periph_GPIOE, ENABLE);	 //ʹ��PB,PE�˿�ʱ��

 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO���ٶ�Ϊ50MHz

  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;				 //LED0-->PB.5 �˿�����
 GPIO_Init(GPIOB, &GPIO_InitStructure);					 //�����趨������ʼ��GPIOB.0
 GPIO_SetBits(GPIOB,GPIO_Pin_0);						 //PB.0 �����

 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;	    		 //LED1-->PB.1 �˿�����, �������
 GPIO_Init(GPIOB, &GPIO_InitStructure);	  				 //������� ��IO���ٶ�Ϊ50MHz
 GPIO_SetBits(GPIOB,GPIO_Pin_1); 						 //PB.1 ����� 


//  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5;	    		 //LED1-->PB.1 �˿�����, �������
//  GPIO_Init(GPIOB, &GPIO_InitStructure);	  				 //������� ��IO���ٶ�Ϊ50MHz
//  GPIO_SetBits(GPIOB,GPIO_Pin_5); 						 //PB.1 ����� 





 
}
 