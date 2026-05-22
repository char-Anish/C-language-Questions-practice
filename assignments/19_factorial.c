#include <stdio.h>

int main()
{
    int num, fac = 1;

    printf("Enter your number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {

        fac = fac * i;
    }
    printf("The Factorial is %d of %d\n", fac, num);

    return 0;
}
