#include <stdio.h>

void print_arr(int arr[], int n);
void greatest(int arr[], int n);
void smallest(int arr[], int n);
void inverce(int arr[], int n);

int main()
{
    int n;
    printf("Enter the length of the arrays :  ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {

        printf("No. %d = ", i + 1);
        scanf("%d", &arr[i]);
    }

    print_arr(arr, n);
    greatest(arr, n);
    smallest(arr, n);
    inverce(arr, n);

    return 0;
}
void print_arr(int arr[], int n)

{

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void greatest(int arr[], int n)
{

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {

        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Greatest number in arrays is %d\n", max);
}
void smallest(int arr[], int n)
{

    int min = arr[0];
    for (int i = 0; i < n; i++)
    {

        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("Smallest number in arrays is %d\n", min);
}
void inverce(int arr[], int n)
{

    int start = 0, end = n - 1;

    while (start < end)
    {

        int temp;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    printf("Inverce (reverced) arrays : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}