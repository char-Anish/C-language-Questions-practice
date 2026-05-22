#include <stdio.h>

int main()
{
    int num,org_num, f, sum = 0, remainder;

    printf("Enter a number : ");
    scanf("%d",&num);

    org_num = num;
    while (num != 0)
    {
        remainder = num % 10;

        f = 1;
        for (int i = 1; i <= remainder; i++)
        {
            f = f * i;
        }

        sum = sum + f;
        num /= 10;
    }

    if (sum == org_num)
        printf("%d is the strong number \n", sum);

    else
        printf("%d is not the strong number \n", sum);
    return 0;
}