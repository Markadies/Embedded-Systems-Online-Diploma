/*
 * Linked_List.h
 *
 *  Created on: Aug 31, 2023
 *      Author: Kadees
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

#include <stdio.h>
#include "string.h"
#include "stdlib.h"
#include "conio.h"




#define DPRINT(...)  printf(__VA_ARGS__);\
					fflush(stdin); fflush(stdout);\

//Data part
	struct Sdata{
		int ID;
		char name[40];
		float height ;
	};

//Linked list node
	struct SStudent
	{
		struct Sdata Student ; //Data part
		struct SStudent* PNext_Student ;
	};


//APIs
void AddStudent();
void delete_student();
void view_Students();
void delete_ALL();
int List_Length();
void GetNth();
void GetNth_From_End();
void List_Reverse();
void Get_Middle();

#endif /* LINKED_LIST_H_ */
