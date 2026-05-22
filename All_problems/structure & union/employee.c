#include <stdio.h>
#include <string.h>

struct employee
{
    char name[50];
    int salary;
};

int main()
{

    int n;
    printf("Enter the number of employess to be store : ");
    scanf("%d", &n);

    struct employee e[n];

    for (int i = 0; i < n; i++)
    {

        printf("\nEnployee Date No. %d\n", i + 1);

        getchar();
        printf("Enter Your name : ");
        fgets(e[i].name, sizeof(e[i].name), stdin);

        printf("Enter your salary : ");
        scanf("%d", &e[i].salary);
    }

    for (int i = 0; i < n; i++)
    {

        printf("\n>>>>>>>>Employee Report<<<<<<<<<<<\n");
        printf("Name   : %s", e[i].name);
        printf("Salary : %d\n", e[i].salary);
    }

    int higest = -1;
    int index;

    for (int i = 0; i < n; i++)
    {
        if (e[i].salary > higest)
        {
            higest = e[i].salary;
            index = i;
        }
    }

    printf("\n>>>>>>>>Higest salary employee <<<<<<\n");
    printf("Name     : %s", e[index].name);
    printf("Salary   : %d\n", higest);

    return 0;
}