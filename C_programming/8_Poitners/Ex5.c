#include <stdio.h>
//Write a program in C to show a pointer to an array which contents are pointer to structure.
typedef struct {
    char name[50];
    int id;
} Employee;

void main() {
    Employee e1 = {"Alex", 1002};

    Employee *arr[1] = {&e1};
    Employee *(*ptr)[1] = &arr;

    printf("Employee Name : %s\n", (*ptr)[0]->name);
    printf("Employee ID : %d\n", (*ptr)[0]->id);

}
