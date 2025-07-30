#include<stdio.h>
#include<string.h>


struct SEmployee{
    char Name[50];
    int ID;
};
struct SEmployee employee;

int main(){
    strcpy(employee.Name, "Alex");
    employee.ID= 1002;
    struct SEmployee* p;
    p= &employee;
    printf("Employee Name : %s\n", p->Name);
    printf("Employee ID : %d\n", p->ID);
    return 0;

}

