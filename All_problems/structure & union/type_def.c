#include <stdio.h>

typedef struct
{
    int id;
    float salary;
} employee; // using typedef will not longer need to do write struct everywere

int main()
{

    employee emp1;

    printf("Enter ID : ");
    scanf("%d", &emp1.id);

    printf("Enter salary : ");
    scanf("%f", &emp1.salary);

    printf("Employee id : %d\n", emp1.id);
    printf("Employee salary : %.2f\n", emp1.salary);
    return 0;
}