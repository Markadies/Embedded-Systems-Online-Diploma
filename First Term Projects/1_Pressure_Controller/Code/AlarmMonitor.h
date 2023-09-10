/*
 * AlarmMonitor.h
 *
 *  Created on: Sep 8, 2023
 *      Author: Kadees
 */

#ifndef ALARMMONITOR_H_
#define ALARMMONITOR_H_

#include "State.h"

enum{
	Alarm_Monitor_ON,
	Alarm_Monitor_OFF,
	Alarm_Monitor_Waiting
}Alarm_monitor_state_id;

STATE_define(Alarm_Monitor_ON);
STATE_define(Alarm_Monitor_OFF);
STATE_define(Alarm_Monitor_Waiting);

//Global pointer to function
void (*Alarm_monitor_state)();

#endif /* AlarmMonitor.h */
