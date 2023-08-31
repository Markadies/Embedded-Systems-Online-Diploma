/*
 * main.c
 *
 *  Created on: Aug 30, 2023
 *      Author: Kadees
 */
#include "Linked_List.h"


void main()
{
	unsigned int option;
	unsigned int temp;
	while(1)
	{
		DPRINT("================================================\n");
		DPRINT("\tChoose one of the following options :\n");
		DPRINT("1: AddStudent\n2: Delete_Student\n3: List_Length\n4: Get Student Using Index\n5: Get Student Using Index From The End\n6: Get The Student at The Middle of List\n7: Reverse Student List \n8: View All Students \n9: Delete All Students\nEnter Option Number : ");
		scanf(" %d",&option);
		getchar();
		DPRINT("================================================\n");
		switch(option)
		{
		case 1:
			AddStudent();
			break;
		case 2:
			delete_student();
			break;
		case 3:
			DPRINT("The Length of the list is : %d\n",List_Length());
			break;
		case 4:
			GetNth();
			break;
		case 5:
			GetNth_From_End();
			break;
		case 6:
			Get_Middle();
			break;
		case 7:
			List_Reverse();
			break;
		case 8:
			delete_ALL();
			break;
		case 9:
			view_Students();

			break;
		default :
			DPRINT("Error : Invalid option\n");
		}
	}
}




