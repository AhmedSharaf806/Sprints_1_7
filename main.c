/*
 * main.c
 *
 *  Created on: Dec 3, 2019
 *      Author: ahmed
 */

#include "led.h"
#include "gpio.h"
#include "softwareDelay.h"
#include "pushButton.h"
#include "timers.h"
#include "interrupt.h"
#include "SoftwarePWM.h"
#include "MotorDC.h"


int main(){

    MotorDC_Init(MOT_1);
    MotorDC_Dir(MOT_1,FORWARD);

    MotorDC_Init(MOT_2);
    MotorDC_Dir(MOT_2,BACKWARD);

    timer1Init(T1_NORMAL_MODE,T1_OC1_DIS,T1_PRESCALER_NO,0,0,0,0,T1_POLLING);

    uint8 u8_iterator1=0;
    uint16 u16_iterator2=0;
    while(1)
	{

	    while(u8_iterator1<100)
		{
		    while(u16_iterator2<414)
			{
			    MotorDC_Speed_PollingWithT0(u8_iterator1);
			    u16_iterator2++;
			}
		    u8_iterator1++;
		    u16_iterator2=0;
		}
	    while(u8_iterator1>0)
		{
		    while(u16_iterator2<414)
			{
			    MotorDC_Speed_PollingWithT0(u8_iterator1);
			    u16_iterator2++;
			}
		    u8_iterator1--;
		    u16_iterator2=0;
		}
	   // break;

	while(1);

	}

    MotorDC_Dir(MOT_1,STOP);
    MotorDC_Dir(MOT_2,STOP);


}

