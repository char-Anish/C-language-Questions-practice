#include <stdio.h>

int main()
{
    int n, i, j, temp;
    
    printf("Enter number\n");
    scanf("%d", &n);
    
    int arr[n];
    int *ptr = arr;

    printf("Enter arrays elements\n");
    for (int i = 0; i < n; i++)
    {
        printf("No. %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(ptr + i) > *(ptr + j))
            {

                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }

    printf("Sorted arrays \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}