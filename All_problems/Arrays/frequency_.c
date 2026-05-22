#include <stdio.h>

int main()
{
    int n, count, i, j;

    printf("Enter number of arrays : ");
    scanf("%d", &n);

    int arr[n], freq[n];

    for (int i = 0; i < n; i++)
    {
        printf("No. %d : ", i + 1);
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    printf("\nFrequency of each element \n");
    for (int i = 0; i < n; i++)
    {
        if (freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
    return 0;
}