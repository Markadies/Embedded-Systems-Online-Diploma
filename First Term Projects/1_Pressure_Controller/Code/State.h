/*
 * State.h
 *
 *  Created on: Sep 8, 2023
 *      Author: Kadees
 */

#ifndef STATE_H_
#define STATE_H_

#include "driver.h"

//Automatic state function generated
#define STATE_define(_stateFunc_) void ST_##_stateFunc_() //State Function
#define STATE(_stateFunc_) ST_##_stateFunc_

void Read_Pressure_Value(int Pressure_Value);
void HighPressureDetected();
void start_Alarm();
void end_Alarm();


#endif /* STATE_H_ */
