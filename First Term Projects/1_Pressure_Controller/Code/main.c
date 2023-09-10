/*
 * main.c
 *
 *  Created on: Sep 8, 2023
 *      Author: Kadees
 */

#include <stdint.h>

#include "sensor.h"
#include "MainAlgorithm.h"
#include "AlarmMonitor.h"
#include "AlarmActuatorDriver.h"

#include "driver.h"

void setup(){

//All initializations

	GPIO_INITIALIZATION();

	Sensor_init();
	Alarm_Actuator_init();

	//Initialize states
	Alarm_monitor_state = STATE(Alarm_Monitor_OFF);
	MA_state = STATE(PressureCheck);

}


int main (){

	 setup();

	 //SUPER LOOP
	while (1)
	{

		PS_state();
		MA_state();

		//for algorithm confirmation
		Alarm_monitor_state();
		Alarm_Actuator_state();
		Alarm_monitor_state();
		Alarm_Actuator_state();
	}

}
