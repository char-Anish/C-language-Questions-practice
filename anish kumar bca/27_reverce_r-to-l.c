#include <stdio.h>

int main()
{
    int num, rev = 0, y, org = 0;

    printf("Enter a number = ");
    scanf("%d", &num);

    while (num != 0)
    {
        y = num % 10;
        rev = rev * 10 + y;
        num = num / 10;
    }
    printf("Reverce number is %d\n", rev);

    while (rev != 0)
    {
        y = rev % 10;
        org = org * 10 + y;
        rev = rev / 10;
    }

    printf("Original number is %d\n", org);
    return 0;
}