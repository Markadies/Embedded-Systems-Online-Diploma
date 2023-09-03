/*
 * Linked_List.c
 *
 *  Created on: Aug 31, 2023
 *      Author: Kadees
 */
#include "Linked_List.h"

struct SStudent* gpFirst_Student = NULL ; //head Global pointer points to the first node in the list


void AddStudent()
{

	struct SStudent* pNew_Student ;
	struct SStudent* pLast_Student ;
	char temp_text[40];
	//check list is empty
	if(gpFirst_Student == NULL)
	{
		//create new student
		pNew_Student = (struct SStudent*) malloc (sizeof(struct SStudent));
		gpFirst_Student = pNew_Student ;
	}
	else //list contains records
	{
		//navigate until reach to the last
		pLast_Student = gpFirst_Student;
		while (pLast_Student->PNext_Student)
			pLast_Student=pLast_Student->PNext_Student;
		//create new record
		if (pNew_Student = (struct SStudent*) malloc (sizeof(struct SStudent))) //condition that new student is pointing to a valid position
			pLast_Student->PNext_Student=pNew_Student;

	}
	//fill new record
	DPRINT("Enter the ID: ");
	gets(temp_text);
	pNew_Student->Student.ID = atoi(temp_text);

	DPRINT("Enter Student Full Name: ");
	gets(pNew_Student->Student.name);

	DPRINT("Enter the height: ");
	gets(temp_text);
	pNew_Student->Student.height = atof(temp_text); //atof because it is a float

	//set next pointer to null
	pNew_Student->PNext_Student = NULL ;

}


void  delete_student()
{
	char temp_text[40];
	unsigned int selected_id;

	DPRINT("\n Enter the student ID to be deleted :");
	gets(temp_text);
	selected_id = atoi(temp_text);

	//check list is not empty
	if(gpFirst_Student == NULL){
		DPRINT("The list is empty, no Record is there to print. \n");}
	else
	{
		//move with 2 pointers the selected and previous to the selected
		struct SStudent* pSelected_Student = NULL;
		struct SStudent* pPrevious_Student = NULL;

		pSelected_Student = gpFirst_Student ;
		pPrevious_Student->PNext_Student =(struct SStudent*) pSelected_Student;

		//compare each node with the selected ID (loop on all records)
		while(pSelected_Student){
			if(pSelected_Student->Student.ID == selected_id){
				if(pPrevious_Student){ //if the prev exists ---> the first student is not the selected one
					pPrevious_Student->PNext_Student = pSelected_Student->PNext_Student;
				}
				else{ //1st student == ID
					gpFirst_Student =(struct SStudent*) pSelected_Student->PNext_Student;
				}
				free(pSelected_Student);
				return ;
			}
			pPrevious_Student = pSelected_Student;
			pSelected_Student = (struct SStudent*)pSelected_Student->PNext_Student;
		}
	}
	DPRINT("cannot find student ID\n");
	return ;

}

void view_Students(){

	struct SStudent* pCurrent_Student =(struct SStudent*) gpFirst_Student;
	int count = 0;
	if(gpFirst_Student == NULL){
		DPRINT("\n Empty List");}
	else
	{
		while(pCurrent_Student){
			DPRINT("Record no : %d\n",count+1);
			DPRINT("Name : %s\n",pCurrent_Student->Student.name);
			DPRINT("ID : %d\n",pCurrent_Student->Student.ID);
			DPRINT("height : %f\n",pCurrent_Student->Student.height);
			DPRINT("======================================\n");
			pCurrent_Student =(struct SStudent*) pCurrent_Student->PNext_Student ;
			count++;
		}
	}
}

void delete_ALL(){

	struct SStudent* pCurrent_Student = (struct SStudent*)gpFirst_Student->PNext_Student;
	struct SStudent* pPrevious_Student = gpFirst_Student;

	if(gpFirst_Student == NULL){
		DPRINT("\n Empty List");}
	else
	{
		while(pPrevious_Student){

			free(pPrevious_Student);
			pPrevious_Student = pCurrent_Student;
			pCurrent_Student = (struct SStudent*)pCurrent_Student->PNext_Student ;
		}
	}
}

int List_Length(){
	int count = 0;
	struct SStudent* pCurrent_Student = gpFirst_Student;
	if(gpFirst_Student == NULL){
		DPRINT("\nEmpty List\n");}
	else
	{
		while(pCurrent_Student){
			count++;
			pCurrent_Student =(struct SStudent*) pCurrent_Student->PNext_Student;
		}
	}
	return count;
}

void GetNth(){

	int tempIndex ;
	DPRINT("Enter The Index : ");
	scanf("%d",&tempIndex);
	int count = 1; //begin from node 1

	struct SStudent* pCurrent_Student = gpFirst_Student;
	if(gpFirst_Student == NULL){
		DPRINT("\n Empty List");}
	else
	{
		while(pCurrent_Student){
			if(count == tempIndex){
				DPRINT("\nRecord no : %d",count);
				DPRINT("\nName : %s",pCurrent_Student->Student.name);
				DPRINT("\nID : %d",pCurrent_Student->Student.ID);
				DPRINT("\nHeight : %f",pCurrent_Student->Student.height);
				DPRINT("======================================\n");
				return;
			}
			else{
				count++;
				pCurrent_Student = (struct SStudent*)pCurrent_Student->PNext_Student;
			}
		}
	}
}


void GetNth_From_End(){

	int tempIndex ;
	DPRINT("Enter The Index From The End : ");
	scanf("%d",&tempIndex);
	int len = List_Length();
	int count = 1;
	struct SStudent* pCurrent_Student = gpFirst_Student;

	if(gpFirst_Student == NULL){
		DPRINT("\n Empty List");}
	if((tempIndex + 1) > List_Length())
		printf("Error : Index Out of Bounds !!\n");
	else
	{
		while(pCurrent_Student){
			if(count == (len - tempIndex + 1)){

				DPRINT("\nRecord no : %d",count);
				DPRINT("\nName : %s",pCurrent_Student->Student.name);
				DPRINT("\nID : %d",pCurrent_Student->Student.ID);
				DPRINT("\nHeight : %f",pCurrent_Student->Student.height);
				DPRINT("======================================\n");
				return;
			}
			else{
				count++;
				pCurrent_Student = (struct SStudent*)pCurrent_Student->PNext_Student;
			}
		}
	}
}


void Get_Middle()
{
	int temp = List_Length()/2; //Index of the middle student
	GetNth(temp);
}

void List_Reverse()
{
	if(!gpFirst_Student || !gpFirst_Student->PNext_Student)
	{
		printf("Error : Nothing To Reverse or There's only one Student in the list\n");
		return;
	}
	struct SStudent* Reference_Node = gpFirst_Student->PNext_Student ;
	struct SStudent* Previous_Node = gpFirst_Student;
	struct SStudent* Current_Node = gpFirst_Student->PNext_Student;
	while(Current_Node->PNext_Student)
	{
		Reference_Node = Current_Node->PNext_Student;
		Current_Node->PNext_Student = Previous_Node;
		Previous_Node = Current_Node;
		Current_Node = Reference_Node;
		if(!Current_Node->PNext_Student)
		{
			gpFirst_Student->PNext_Student = NULL;
			gpFirst_Student = Current_Node;
			Current_Node ->PNext_Student = Previous_Node;
			break;
		}
	}
	printf("The list is Reversed Successfuly !\n");
}






