#include <stdio.h>
int main()
{
    int n;
    printf("Enter a range of the arrays : ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter the elements of the arrays\n");
    for (int i = 0; i < n; i++)
    {
        printf("No. %d = ", i + 1);
        scanf("%d", &arr[i]);
    }

    int found = 0, key;
    printf("Enter the element to find = ");
    scanf("%d",&key);
    
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Element is not found\n");
    }

    return 0;
}