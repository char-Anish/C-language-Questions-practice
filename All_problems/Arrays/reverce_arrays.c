#include <stdio.h>

int main()
{
    int n, i, temp;

    printf("Enter number of arrays : ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("No. %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("Arrays after revercing \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}