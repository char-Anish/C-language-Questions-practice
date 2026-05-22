#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;
    printf("Enter rows of first matrix : ");
    scanf("%d", &r1);

    printf("Enter Coloums of first matrix : ");
    scanf("%d", &c1);

    printf("Enter rows of second matrix : ");
    scanf("%d", &r2);

    printf("Enter coloum of second matrix : ");
    scanf("%d", &c2);

    int mat[r1][c1];
    int mat2[r2][c2];

    printf("\nEnter elements of first matrix\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nEnter elements of  second mateix\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("\n");

    printf("first matrix\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("[%d][%d] = %d", i, j, mat[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond matix\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("[%d][%d] = %d", i, j, mat2[i][j]);
        }
        printf("\n");
    }

    int sum[r1][c1];
    int dif[r1][c1];

    if (r1 == r2 && c1 == c2)
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                sum[i][j] = mat[i][j] + mat2[i][j];
                dif[i][j] = mat[i][j] - mat2[i][j];
            }
        }

        printf("\nAddition of the matrix\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("%d  ", sum[i][j]);
            }
            printf("\n");
        }

        printf("\nSubtraction of the matrix\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("%d  ", dif[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Addition and subtraction is not possible (matrix must have same dimentions)\n");
    }

    int pro[r1][c1];

    if (r1 == c1)
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {

                pro[i][j] = 0;
            }
        }


        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                for (int k = 0; k < c1; k++)
                {

                    pro[i][j] += mat[i][k] * mat2[k][j];
                }
            }
        }


        
        printf("Multipilcation of matrix\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d  ", pro[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nMultiplication not possible (columns of first must equal rows of second).\n");
    }

    return 0;
}