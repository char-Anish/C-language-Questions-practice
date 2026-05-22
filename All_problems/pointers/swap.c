#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int a, b;
    printf("Enter two number\n");
    scanf("%d %d", &a, &b);

    printf("Before swap : a = %d & b = %d\n", a, b);
    swap(&a, &b);
    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("after swap : a = %d & b = %d\n", *a, *b);
}