#include <stdio.h>
int main()
{
    int n;
    printf("Enter a range : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter arrays elements \n");
    for (int i = 0; i < n; i++)
    {
        printf("No.%d = ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        if (minIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
    printf("After sorting in ascending order\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int maxindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[maxindex])
            {
                maxindex = j;
            }
        }

        if (maxindex != i)
        {
            int temp = arr[i];
            arr[i] = arr[maxindex];
            arr[maxindex] = temp;
        }
    }
    printf("\nAfter sorting in decending order\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    return 0;
}