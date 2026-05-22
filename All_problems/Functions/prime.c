#include <stdio.h>

void prime(int n);
int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    prime(n);
    return 0;
}
void prime(int n)
{
    int isprime = 1;
    if (n <= 1)
    {
        isprime = 0;
    }
    else
    {
        for (int i = 2; i*i < n; i++)
        {
            if (n % i == 0)
            {
                isprime = 0;
                break;
            }
        }
    }

    if (isprime)
    {
        printf("%d is the prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }
}