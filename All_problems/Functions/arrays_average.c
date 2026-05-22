#include <stdio.h>

void average(int avg[], int num);

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int arr[num];
    average(arr, num);
    return 0;
}
void average(int avg[], int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("No. %d : ", i + 1);
        scanf("%d", &avg[i]);
    }
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum = sum + avg[i];
    }
    printf("Total of arrays is %d\n", sum);

    float percentage = (float)sum / num;
    printf("averge of the arrays is %.2f\n", percentage);
}