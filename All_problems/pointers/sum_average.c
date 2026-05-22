#include <stdio.h>
void avg(int arr[], int n);
int main()
{
    int arrays[5];

    for (int i = 0; i < 5; i++)
    {
        printf("No. %d : ", i + 1);
        scanf("%d", &arrays[i]);
    }
    avg(arrays, 5);
    return 0;
}
void avg(int arr[], int n)
{
    int sum = 0, avgg;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    printf("The sum of arrays is %d\n", sum);
    avgg = sum / n;
    printf("The average of arrays is %d\n", avgg);
}