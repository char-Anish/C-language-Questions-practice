#include <stdio.h>
int main()
{
    int n, temp;
    printf("Enter arrays lenght : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter arrays elements\n");
    for (int i = 0; i < n; i++)
    {
        printf("No. %d = ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Elements are ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }

    printf("\n");
    int max = arr[0], min = arr[0], sum = 0;
    float avg;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];

        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    avg = (float)sum / n;

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    printf("Sorting an arrays\n");
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
    }
    for(int i=0; i<n; i++){
        printf(" %d",arr[i]);
    }
    return 0;
}