/*
 * Sensor.h
 *
 *  Created on: Sep 8, 2023
 *      Author: Kadees
 */

#ifndef SENSOR_H_
#define SENSOR_H_

#include "State.h"

enum{
	PS_busy,
	PS_idle
}PS_state_id;

void Sensor_init();

STATE_define(PS_busy);
STATE_define(PS_idle);

//Global pointer to function
void (*PS_state)();



#endif /* SENSOR_H_ */
