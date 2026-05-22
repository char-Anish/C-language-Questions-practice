#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {

        sum = sum + i;
    }

    printf("%d is the sum of %d number\n", sum, num);

    return 0;
}