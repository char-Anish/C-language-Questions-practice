#include <stdio.h>
#include <math.h>

int main()
{
    int num, org_num, n = 0, remainder;
    float result = 0.0;

    printf("Enter a number : ");
    scanf("%d", &num);

    org_num = num;

    while (org_num != 0)
    {
        org_num = org_num / 10;
        n++;
    }

    org_num = num;

    while (org_num != 0)
    {
        remainder = org_num % 10;
        result = result + pow(remainder, n);
        org_num = org_num / 10;
    }

    if ((int)result == num)
    {
        printf("%d is the armstrong number \n", num);
    }
    else
    {
        printf("%d is not the armstrong number \n", num);
    }
    return 0;
}