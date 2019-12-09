/*
 * interrupt.c
 *
 *  Created on: Dec 9, 2019
 *      Author: ahmed
 */
#include "interrupt.h"
#include "led.h"
#include "pushButton.h"


ISR(INT0_vect){


}


ISR(INT1_vect){


}


ISR(INT2_vect){


	//pushButton_Update();
	//uint8 u8_buttonCheckedStatus = pushButton_GetStatus(1);
	//if(u8_buttonCheckedStatus==Pressed)
	    Led_Toggle(0);


}


ISR(TIMER2_COMP_vect){


}

ISR(TIMER2_OVF_vect){


}

ISR(TIMER1_CAPT_vect){


}

ISR(TIMER1_COMPA_vect){


}

ISR(TIMER1_COMPB_vect){


}

ISR(TIMER1_OVF_vect){


}

ISR(TIMER0_COMP_vect){


}

ISR(SPI_STC_vect){


}

ISR(USART_RXC_vect){


}

ISR(USART_UDRE_vect){


}

ISR(SIG_USART_TRANS){


}

ISR(ADC_vect){


}

ISR(EE_RDY_vect){


}

ISR(TWI_vect){


}

ISR(SPM_RDY_vect){


}
