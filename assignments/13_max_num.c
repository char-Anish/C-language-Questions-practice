#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers\n");

    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("a is the greatest number : %d\n", a);
    }

    if (b > a && b > c)
    {
        printf("b is the greatest number : %d\n", b);
    }

    if (c > b && c > a)
    {
        printf("c is the gratest number : %d\n", c);
    }
    return 0;
}