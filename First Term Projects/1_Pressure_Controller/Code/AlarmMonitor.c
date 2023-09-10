/*
 * AlarmMonitor.c
 *
 *  Created on: Sep 8, 2023
 *      Author: Kadees
 */
#include "AlarmMonitor.h"

void (*Alarm_monitor_state)();

//MainAlgorithm -->Alarm Monitor
void HighPressureDetected(){
	Alarm_monitor_state = STATE(Alarm_Monitor_ON);
}

STATE_define(Alarm_Monitor_OFF){
	//do nothing till high pressure is detected
	Alarm_monitor_state_id = Alarm_Monitor_OFF;
}

STATE_define(Alarm_Monitor_ON){
	Alarm_monitor_state_id = Alarm_Monitor_ON;
	start_Alarm();

	//set next state
	Alarm_monitor_state = STATE(Alarm_Monitor_Waiting);
}


STATE_define(Alarm_Monitor_Waiting){
	Alarm_monitor_state_id = Alarm_Monitor_Waiting;
	Delay(20000);
	end_Alarm();
	//set next state
	Alarm_monitor_state = STATE(Alarm_Monitor_OFF);
}

