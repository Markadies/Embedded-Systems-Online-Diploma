/*
 * AlarmActuatorDriver.c
 *
 *  Created on: Sep 8, 2023
 *      Author: Kadees
 */
#include "AlarmActuatorDriver.h"

void (*Alarm_monitor_state)();

void Alarm_Actuator_init(){
	//Set first state
	Alarm_Actuator_state = STATE(Alarm_Actuator_OFF);
}


//Alarm Monitor --> AlarmActuator
void start_Alarm(){
	Alarm_Actuator_state = STATE(Alarm_Actuator_ON);
}

void end_Alarm(){
	Alarm_Actuator_state = STATE(Alarm_Actuator_OFF);
}
STATE_define(Alarm_Actuator_ON){
	Alarm_Actuator_state_id = Alarm_Actuator_ON ;
	Set_Alarm_actuator(0);
}

STATE_define(Alarm_Actuator_OFF){
	Alarm_Actuator_state_id = Alarm_Actuator_OFF ;
	Set_Alarm_actuator(1);

}
