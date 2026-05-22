#include <stdio.h>

int main()
{
    int arr[5];
    int *ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        printf("No. %d : ",i+1);
        scanf("%d", &arr[i]);
    }

    printf("Arrays elements are : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    return 0;
}