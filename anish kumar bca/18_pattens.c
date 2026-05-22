#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j <= num; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("square\n");

    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("Right angle triangle \n");

    for (int i = num; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    printf("Inverter right angle triangle\n");

    for (int i = 1; i <= num; i++)
    {
        for (int s = i; s < num; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}