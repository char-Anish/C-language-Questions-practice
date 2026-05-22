#include <stdio.h>
int main()
{
    int n;
    printf("Enter a langht of arrays = ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("No.%d = ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Before sorting = ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }

    printf("\nAfter sorting in assending order = ");
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            int temp;
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }

    printf("\nAfter sorting in decending order = ");
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    return 0;
}