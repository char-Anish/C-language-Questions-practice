#include <stdio.h>

int main()
{
    int num, j = 1, fac = 1;
    printf("Enter number : ");
    scanf("%d", &num);

    // by for loop
    for (int i = 1; i <= num; i++)
    {
        fac = fac * i;
    }
    printf("The factorial of %d is %d\n", num, fac);

    // by while loop
    int factor = 1;
    while (j <= num)
    {
        factor = factor * j;
        j++;
    }

    printf("The Factorial of %d is %d\n", num, factor);
    return 0;
}