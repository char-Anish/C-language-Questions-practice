#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num / 2; i++)
    {

        if (num % i == 0)
        {
            printf("%d is the divisor of %d\n", i, num);
            sum += i;
        }
    }
    printf("\n");

    if (sum == num && num != 0)
    {
        printf("%d is the perfect number of %d\n", sum, num);
    }
    else
    {
        printf("%d is not the perfect number\n", sum);
    }
    return 0;
}