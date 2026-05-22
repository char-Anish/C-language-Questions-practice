#include <stdio.h>

int main()
{
    int n, fac = 1, sum =0;

    printf("Enter the range of factorial : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
        sum = sum + i;
    };

    printf("%d is the factorial  of %d\n", fac, n);
    printf("%d is the sum of %d number \n",sum, n);
    return 0;
}