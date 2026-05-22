#include <stdio.h>

int main()
{
    int n, max, min;

    printf("Enter the number of arrays : ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {

        printf("No. %d ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    printf("%d is the greatest number \n", max);
    printf("%d is the smallest number \n", min);
    return 0;
}