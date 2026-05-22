#include <stdio.h>

int main()
{
    int n;
    printf("Enter no of Arrays : ");
    scanf("%d", &n);

    int arr1[n];
    int arr2[n];
    int merged[2 * n];
    int i, j, temp;

    printf("\nElements of first Arrays\n");
    for (int i = 0; i < n; i++)
    {
        printf("No. %d : ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("\nElements of second Arrays\n");
    for (int i = 0; i < n; i++)
    {
        printf("No. %d : ", i + 1);
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n; i++)
    {
        merged[i] = arr1[i];
    }

    for (int j = 0; j < n; j++)
    {
        merged[n + j] = arr2[j];
    }

    int total = 2 * n;

    printf("\nMerged Arrays\n");
    for (int i = 0; i < total; i++)
    {
        printf("%d\t", merged[i]);
    }

    for (int i = 0; i < total - 1; i++)
    {
        for (int j = 0; j < total - i - 1; j++)
        {
            if (merged[j] > merged[j + 1])
            {
                temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }

    printf("\nMerged and sorted arrays\n");
    for (int i = 0; i < total; i++)
    {
        printf("%d\t", merged[i]);
    }
    return 0;
}