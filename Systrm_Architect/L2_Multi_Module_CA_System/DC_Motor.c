/*
 * CA.c
 *
 *  Created on: Sep 3, 2023
 *      Author: Kadees
 */

#include "DC_Motor.h"

//Global pointer to function
extern void (*DC_state)();
//Module variables
unsigned int DC_speed = 0;

void DC_init(){
	//initialize Module functions
	printf("DC_init");
}

void DC_Set_Speed(int s){
	DC_speed = s;
	DC_state = STATE(DC_busy);
    printf("CA ==> DC_motor: speed = %d\n", DC_speed);
}

STATE_define(DC_idle){
	//state name
	DC_state_id = DC_idle;
    DC_state = STATE(DC_idle);
	//state action
    printf("DC_idle ========== speed = %d\n", DC_speed);
}

STATE_define(DC_busy){
	//state name
	DC_state_id = DC_busy;

	//Set the new motor speed to 30 and send it to the motor module
	//state action
    printf("DC_busy =========== speed = %d\n\n", DC_speed);
	DC_state = DC_idle;
}
