#include "stdio.h"
#include "string.h"

//C program to Store information(name, roll, marks) of a student using structure

struct SStudent 
{
    char name [30];
    int roll;
    float marks;
}; 

struct SStudent ReadStudent()
{
    struct SStudent s;

    printf("Enter name : ");
    scanf("%s",s.name);
    printf("Enter roll number : ");
    scanf("%d",&s.roll);
    printf("Enter marks : ");
    scanf("%f",&s.marks);

    return s ; 
}

void PrintStudent(struct SStudent s)
{
    printf("name: %s\n",s.name);
    printf("Roll: %d\n",s.roll);
    printf("Marks: %0.1f\n",s.marks);
}

void main()
{
    struct SStudent s;

    printf("Enter information of students:\n");
    s = ReadStudent();

    printf("Displaying Information : \n");
    PrintStudent(s);



}