/*
 * Sensor.c
 *
 *  Created on: Sep 8, 2023
 *      Author: Kadees
 */
#include "Sensor.h"

extern void (*PS_state)();

//Module variables (use static to be seen within the Module)
int PS_pVal = 0;

void Sensor_init(){
	PS_state = STATE(PS_busy);
}


STATE_define(PS_busy){
	PS_state_id = PS_busy;
	PS_pVal = getPressureVal();

	//Sensor --> MainAlgorithm
	Read_Pressure_Value(PS_pVal);
	PS_state = PS_idle;
}


STATE_define(PS_idle){
	PS_state_id = PS_idle;

	//Delay between readings
	Delay(6000);
	//Set First State
	PS_state = PS_busy;
}
