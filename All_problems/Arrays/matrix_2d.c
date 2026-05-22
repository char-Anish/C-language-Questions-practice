#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter rows : ");
    scanf("%d", &num1);

    printf("Enter colums : ");
    scanf("%d", &num2);

    int arr[num1][num2];

    for (int i = 0; i < num1; i++)
    {
        for (int j = 0; j < num2; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < num1; i++)
    {
        for (int j = 0; j < num2; j++)
        {

            printf("[%d][%d] = ", i, j);
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}