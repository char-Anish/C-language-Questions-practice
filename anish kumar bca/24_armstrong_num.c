#include <stdio.h>

int main()
{
    int num, sum = 0, y, m;

    printf("Enter a number : ");
    scanf("%d", &num);

    m = num;

    while (num != 0)
    {
        y = num % 10;
        sum = sum + (y * y * y);
        num /= 10;
    }

    if (m == sum)
    {
        printf("%d is the armstrong number \n", sum);
    }
    else
    {

        printf("%d is not the armstrong number \n", sum);
    }
    return 0;
}