#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("You entered zero\n");
    }
    else if (num < 0)
    {
        printf("You enterd negative number \n");
    }
    else if (num == 1)
    {
        printf("1 is nither odd nor even\n");
    }
    else if (num % 2 == 0)
    {
        printf("%d is even number\n", num);
    }
    else
    {
        printf("%d is an odd number\n", num);
    }
    return 0;
}