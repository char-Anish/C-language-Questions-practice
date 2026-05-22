#include <stdio.h>

int main()
{
    int sum = 0, pro = 1, num, y, org;

    printf("Enter a number = ");
    scanf("%d", &num);

    org = num;
    while (num != 0)
    {
        y = num % 10;
        sum = sum + y;
        pro = pro * y;
        num = num / 10;
    }
    if (sum == pro)
    {
        printf("%d is the spy number\n",org );
    }
    else
    {
        printf("%d is not a spy number \n",org);
    }
    return 0;
}