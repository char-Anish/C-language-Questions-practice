#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of arrays\n");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("No. %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int largest, secondlargest;

    if (arr[0] > arr[1])
    {
        largest = arr[0];
        secondlargest = arr[1];
    }
    else
    {
        largest = arr[1];
        secondlargest = arr[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondlargest && arr[i] != largest)
        {
            secondlargest = arr[i];
        }
    }

    printf("The largest element is %d\n", largest);
    printf("The  second largest element is %d\n", secondlargest);
    return 0;
}