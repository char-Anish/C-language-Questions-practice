#include <stdio.h>

int main()
{
    int num, fac = 1;
    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fac = fac * i;
    }

    printf("The factorial of %d is %d  \n", num, fac);

    return 0;
}