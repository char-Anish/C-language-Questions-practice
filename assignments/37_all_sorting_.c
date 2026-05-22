#include <stdio.h>

int bubble(int arr[], int n);
int selection(int arr[], int n);
int insertion(int arr[], int n);
int main()
{
    int n;
    printf("Enter the range of the arrays : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the Elements\n");
    for (int i = 0; i < n; i++)
    {
        printf("No.%d = ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nArrays elements = ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }

    bubble(arr, n);
    selection(arr, n);
    insertion(arr,n);
    return 0;
}

int bubble(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nBubble sorting = ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
}

int selection(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }

        if (minindex != i)
        {
            int temp = arr[i];
            arr[i] = arr[minindex];
            arr[minindex] = temp;
        }
    }

    printf("\nSelection sorting = ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
}

int insertion(int arr[], int n)
{
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
    printf("\nInsertion sorting = ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
}