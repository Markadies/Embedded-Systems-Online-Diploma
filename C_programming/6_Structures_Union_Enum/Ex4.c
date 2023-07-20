#include "stdio.h"
#include "string.h"

//C program to Store information(name, roll, marks) of 10 students using structure

struct SStudent 
{
    char name [30];
    int roll;
    float marks;
}; 

struct SStudent ReadStudent(int rollNo)
{
    struct SStudent s;
    s.roll = rollNo;
    printf("\nfor roll number %d \n",s.roll);

    printf("Enter name : ");
    scanf("%s",s.name);
    
    printf("Enter marks : ");
    scanf("%f",&s.marks);

    return s ; 
}

void PrintStudent(struct SStudent s)
{
    printf("Information for roll number %d: \n",s.roll);
    printf("Marks: %0.1f\n",s.marks);
    printf("name: %s\n",s.name);
}

void main()
{
    struct SStudent s[10];

    printf("Enter information of students:\n");

    for(int i=0 ; i<(sizeof(s)/sizeof(struct SStudent)); i++)
    {
        s[i] = ReadStudent(i+1);
    }

    printf("Displaying Information : \n");

    for(int j=0 ; j<(sizeof(s)/sizeof(struct SStudent)); j++)
    {
        PrintStudent(s[j]);
    }
}