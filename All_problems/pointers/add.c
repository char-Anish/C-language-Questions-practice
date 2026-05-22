#include <stdio.h>

int sum(int x, int y);
int main()
{
    int x, y, result;
    int (*ptr)(int, int);

    ptr = sum;

    printf("Enter two numbes\n");
    scanf("%d %d", &x, &y);

    result = ptr(x, y);
    printf("sum = %d\n", result);
    return 0;
}
int sum(int x, int y)
{
    return x + y;
}