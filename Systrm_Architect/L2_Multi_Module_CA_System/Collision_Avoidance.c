/*
 * CA.c
 *
 *  Created on: Sep 3, 2023
 *      Author: Kadees
 */

#include "Collision_Avoidance.h"

extern void (*CA_state)();

//Module variables
unsigned int CA_distance = 0;
unsigned int CA_speed = 0 ;
unsigned int CA_threshold = 50;

void CA_init(){
	CA_state = STATE(CA_waiting);
}


void US_distance_set(int distance){ //signal from US --> configured here at destination
	CA_distance = distance;

    printf("US_sensor ==> CA: distance = %d\n", CA_distance);

	(CA_distance <= CA_threshold)? (CA_state = STATE(CA_waiting)): (CA_state = STATE(CA_driving)) ;

}

STATE_define(CA_waiting){
	//state name
	CA_state_id = CA_waiting;
	printf("CA_waiting ======== distance = %d =========== speed = %d\n",CA_distance, CA_speed);

	//state action
	CA_speed = 0;
	DC_Set_Speed(CA_speed); //signal to the DC module--> implemented at the destination (DC module)
}

STATE_define(CA_driving){
	//state name
	CA_state_id = CA_driving;
	printf("CA_driving ======== distance = %d =========== speed = %d\n",CA_distance, CA_speed);
	//state action
	CA_speed = 30;
	DC_Set_Speed(CA_speed);
}
