#include <stdio.h>

int main()
{
    int num, a = 0, b = 1, c;
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Fabonacci series \n%d\t%d\t", a, b);
    for (int i = 3; i <= num; i++)
    {

        c = a + b;
        printf("%d\t", c);

        a = b;
        b = c;
    }
    return 0;
}