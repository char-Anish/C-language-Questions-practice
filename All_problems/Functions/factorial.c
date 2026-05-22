#include <stdio.h>

void factorial(int num);
int main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    factorial(num);
    return 0;
}
void factorial(int num)
{
    int fac = 1;
    for (int i = 1; i <= num; i++)
    {
        fac = fac * i;
    }

    printf("The factororial of %d is %d\n", num, fac);
}