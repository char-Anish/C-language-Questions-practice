#include <stdio.h>

int main()
{
    int num, isprime;

    printf("Enter range of number : ");
    scanf("%d", &num);

    printf("Prime number between 1 to %d\n", num);

    for (int i = 2; i <= num; i++)
    {
        isprime = 1;

        for (int j = 2; j <= i / 2; j++)
        {

            if (i % j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime == 1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;

}
