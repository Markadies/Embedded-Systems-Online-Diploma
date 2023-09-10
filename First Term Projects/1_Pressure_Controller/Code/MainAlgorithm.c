/*
 * MainAlgorithm.c
 *
 *  Created on: Sep 8, 2023
 *      Author: Kadees
 */
#include "MainAlgorithm.h"

extern void (*MA_state)();

int MA_pVal;
void Read_Pressure_Value(PS_pVal);

STATE_define(PressureCheck){
	MA_state_id = PressureCheck;
	volatile unsigned int threshold = 20;
	if(MA_pVal > threshold){
		//MainAlgorithm --> AlarmMonitor
		HighPressureDetected();
	}
	MA_state = STATE(PressureCheck) ;
}

void Read_Pressure_Value(PS_pVal){
	MA_pVal =PS_pVal ;
	MA_state = STATE(PressureCheck);
}
