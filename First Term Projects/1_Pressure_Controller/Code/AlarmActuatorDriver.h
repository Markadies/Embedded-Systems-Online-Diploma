/*
 * AlarmActuatorDriver.h
 *
 *  Created on: Sep 8, 2023
 *      Author: Kadees
 */

#ifndef ALARMACTUATORDRIVER_H_
#define ALARMACTUATORDRIVER_H_

#include "State.h"

enum{
	Alarm_Actuator_ON,
	Alarm_Actuator_OFF,
}Alarm_Actuator_state_id;

STATE_define(Alarm_Actuator_ON);
STATE_define(Alarm_Actuator_OFF);

//Global pointer to function
void (*Alarm_Actuator_state)();

void Alarm_Actuator_init();

#endif /* AlarmActuatorDriver.h */
