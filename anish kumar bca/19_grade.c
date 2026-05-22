#include <stdio.h>

int main()
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("marks %d : ", i + 1);
        scanf("%d", &marks[i]);
    }

    float total = 0, percentage;

    for (int i = 0; i < 5; i++)
    {
        if (marks[i] > 0 && marks[i] <= 100)
        {

            total = total + marks[i];
        }
        else
        {
            printf("total is not possible \n");
        }
    }
    percentage = (total / 500) * 100;

    printf("total marks : %.2f \n", total);
    printf("Percentage : %.2f \n", percentage);

    if (percentage > 0 && percentage <= 100)
    {

        if (percentage >= 80)
            printf("Your grade : A");

        else if (percentage >= 60)
            printf("Your grade : B");

        else if (percentage >= 40)
            printf("Your grade : C");

        else if (percentage >= 33)
            printf("Your grade : D\n");

        else
        {
            printf("Your are failed\n");
        }
    }
    else
    {
        printf("Enter valid input\n");
    }
    return 0;
}