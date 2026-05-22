#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);

    printf("Before swaping a = %d and b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swaping a = %d and b = %d\n", a, b);

    return 0;
}