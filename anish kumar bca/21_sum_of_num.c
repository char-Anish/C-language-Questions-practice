#include <stdio.h>

int main()
{
    int num, sum = 0, result;

    printf("Enter a number : ");
    scanf("%d", &num);

    while (num != 0)
    {
        result = num % 10;
        sum = sum + result;
        num = num / 10;
    }
    printf("The sum is %d\n", sum);

    return 0;
}