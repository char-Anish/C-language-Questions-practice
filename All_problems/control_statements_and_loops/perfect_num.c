#include <stdio.h>

int main()
{
    int num;

    printf("Enter a num of range  : ");
    scanf("%d", &num);

    printf("Perfect numbers in range\n");
    for (int i = 1; i <= num; i++)
    {
        int sum =0;

        for (int j = 1; j<i ; j++)
        {

            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
