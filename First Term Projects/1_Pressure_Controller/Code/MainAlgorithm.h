/*
 * MainAlgorithm.h
 *
 *  Created on: Sep 8, 2023
 *      Author: Kadees
 */

#ifndef MAINALGORITHM_H_
#define MAINALGORITHM_H_

#include "State.h"

enum{
	PressureCheck
}MA_state_id;

STATE_define(PressureCheck);

//Global pointer to function
void (*MA_state)();

#endif /* MAINALGORITHM_H_ */
