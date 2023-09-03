/*
 * CA.h
 *
 *  Created on: Sep 3, 2023
 *      Author: Kadees
 */

#ifndef _US_Sensor_H_
#define _US_Sensor_H_

#include "State.h"

enum {
	US_busy
}US_state_id ;

//prototypes
void US_init();
STATE_define(US_busy);
//Global pointer to function
void (*US_state)();

#endif /* _US_Sensor_H_ */
