#include <stdio.h>
void square(int n);
void right_angle_triangle(int n);
void _inverce_right_angle_triangle(int n);
void triangle(int n);
void inverce_triangle(int n);

int main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);
    square(num);
    right_angle_triangle(num);
    _inverce_right_angle_triangle(num);
    triangle(num);
    inverce_triangle(num);

    return 0;
}
void square(int n)
{
    printf("Square\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

void right_angle_triangle(int n)
{

    printf("Right angle triangle\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

void _inverce_right_angle_triangle(int n)
{
    printf("Inverce right angle triangle\n");
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

void triangle(int n)
{
    printf("Triangle\n");
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

void inverce_triangle(int n)
{

    printf("Inverce triangle\n");
    for (int i = n; i >= 1; i--)
    {
        for (int k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}
