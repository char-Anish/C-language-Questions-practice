#include <stdio.h>

int main()
{
    int num, a = 0, b = 1, c;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Fabonacci series\n");
    for (int i = 0; i <= num; i++)
    {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
