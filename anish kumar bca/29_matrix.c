#include <stdio.h>

int main()
{
    int a[3][3], sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    printf("\nSum of rows\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            sum = sum + a[i][j];
        }
        printf("sum = %d \n", sum);
        sum = 0;
    }

    printf("\nsum of coloums\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            sum = sum + a[j][i];
        }
        printf("sum = %d \n", sum);
        sum = 0;
    }

    return 0;
}