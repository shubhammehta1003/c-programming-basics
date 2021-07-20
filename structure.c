#include <stdio.h>
#include <stdlib.h>

struct employee{
    char    name[30];
    int     age;
    float   salary;
    float   phonenumber;
};

int main()
{
    /*declare structure variable*/
    struct employee emp;

    /*read employee details*/
    printf("\nEnter details :\n");
    printf("Name ?:");          gets(emp.name);
    printf("age ?:");            scanf("%d",&emp.age);
    printf("Salary ?:");       scanf("%f",&emp.salary);
    printf("phonenumber ?:"); scanf("%f",&emp.phonenumber);

    /*print employee details*/
    printf("\nEntered detail is:");
    printf("Name: %s\n"   ,emp.name);
    printf("age: %d\n"     ,emp.age);
    printf("Salary: %f\n",emp.salary);
    printf("phonenumber: %f\n",emp.phonenumber);
    return 0;
}
