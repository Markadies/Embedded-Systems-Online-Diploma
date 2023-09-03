/*
 * main.c
 *
 *  Created on: Sep 3, 2023
 *      Author: Kadees
 */

#include "Collision_Avoidance.h"
#include "US_Sensor.h"
#include "DC_Motor.h"

void setup(){
	DC_init();
	US_init();
	CA_init();
	CA_state = STATE(CA_waiting);
	US_state = STATE(US_busy);
	DC_state = STATE(DC_idle);
}


void main(){

	volatile int d;
	setup();

	while(1){
		US_state();
		CA_state();
		DC_state();

		//delay
		for(d=0; d<1000000; d++);

	}
}
