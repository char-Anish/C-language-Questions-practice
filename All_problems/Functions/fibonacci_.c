#include <stdio.h>

void fabonacci(int n);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("The fabonacci series\n");
    fabonacci(num);

    return 0;
}
void fabonacci(int n)
{
    int a = 0, b = 1, c;
    for (int i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;

        printf("%d ", a);
    }
}