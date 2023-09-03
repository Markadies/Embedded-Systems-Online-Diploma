/*
 * CA.h
 *
 *  Created on: Sep 3, 2023
 *      Author: Kadees
 */

#ifndef COLLISION_AVOIDANCE_H_
#define COLLISION_AVOIDANCE_H_

#include "State.h"

enum {
	CA_waiting,
	CA_driving
}CA_state_id ;

//prototypes
STATE_define(CA_waiting);
STATE_define(CA_driving);



void CA_init();


//Global pointer to function
void (*CA_state)();


#endif /* COLLISION_AVOIDANCE_H_ */
