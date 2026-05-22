#include <stdio.h>
int main()
{
    int n;
    printf("Enter the range of an arrays : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements \n");
    for (int i = 0; i < n; i++)
    {
        printf("No.%d = ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    printf("Sorted arrays =  ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }

    int key;
    printf("\nEnter a number to be find : ");
    scanf("%d", &key);

    printf("\n");
    // binary search
    int low = 0, high = n - 1, mid, found = 0;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (key == arr[mid])
        {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (!found)
    {
        printf("Element is not found\n");
    }

    return 0;
}