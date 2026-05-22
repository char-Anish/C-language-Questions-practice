#include <stdio.h>

int main()
{
    int a = 0, b = 1, c;

    int num;
    printf("Enter a number : \n");
    scanf("%d", &num);

    printf("The fabonacci series \n");
    for (int i = 0; i <= num; i++)
    {
        c = a + b;

        printf("%d ", a);
        a = b;
        b = c;
    }
    return 0;
}
