#include <stdio.h>

// Function prototypes
void square(int n);
void ryt_angle_triangle(int n);
void inverce_ryt_angle_triangle(int n);
void triangle(int n);
void inverce_triangle(int n);

int main()
{
    int num;

    printf("Enter a number : \n");
    scanf("%d", &num);

    square(num);
    ryt_angle_triangle(num);
    inverce_ryt_angle_triangle(num);
    triangle(num);
    inverce_triangle(num);

    return 0;
}

// Print right-angle triangle
void ryt_angle_triangle(int n)
{
    printf("Right angle triangle\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// Print inverse right-angle triangle
void inverce_ryt_angle_triangle(int n)
{
    printf("Inverse right angle triangle\n");
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// Print square
void square(int n)
{
    printf("Square\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// Centered triangle
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
            printf("* ");
        }
        printf("\n");
    }
}

// Inverse centered triangle
void inverce_triangle(int n)
{
    printf("Inverse triangle\n");
    for (int i = n; i >= 1; i--)
    {
        for (int k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
