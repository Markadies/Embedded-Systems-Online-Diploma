/*
 * CA.h
 *
 *  Created on: Sep 3, 2023
 *      Author: Kadees
 */

#ifndef DC_Motor_H_
#define DC_Motor_H_

#include "State.h"

enum {
	DC_idle,
	DC_busy
}DC_state_id ;

//prototypes
void DC_init();

STATE_define(DC_idle);
STATE_define(DC_busy);

//Global pointer to function
void (*DC_state)();

#endif /* DC_Motor_H_ */
