/*
 * CA.c
 *
 *  Created on: Sep 3, 2023
 *      Author: Kadees
 */

#include "US_Sensor.h"

extern void (*US_state)();

//Module variables (use static to be seen within the Module)
unsigned int US_distance;

int US_get_random_value(int l, int r);

void US_init(){
	//initialize Ultrasonic sensor
	//call the US Driver or Functions
	printf("US_init");
}

STATE_define(US_busy){
	//state name
	US_state_id = US_busy;
	//state action
	//	read from the US the distance
	US_distance = US_get_random_value(45, 55);

    printf("US_busy ======== distance = %d\n",US_distance);

	US_distance_set(US_distance); //configured at destination, which is CA.h
	US_state = STATE(US_busy);
}


int US_get_random_value(int l, int r)
{
    return (rand() % (r - l + 1) + l);
}
