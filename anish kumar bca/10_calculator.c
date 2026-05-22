#include <stdio.h>
#include <math.h>

float divv(float, float);

int mod(int, int);

void print_menu();
int main()
{
    int n;
    float first, second, result;

    while (1)
    {
        print_menu();
        printf("Enter your number : ");
        scanf("%d", &n);

        if (n == 7)
        {
            printf("Exiting the program !\n");
            break;
        }
        printf("Enter first number : ");
        scanf("%f", &first);

        printf("Enter second number : ");
        scanf("%f", &second);

        switch (n)
        {
        case 1: // addition
            result = (first + second);
            break;

        case 2: // subtraction
            result = (first - second);
            break;

        case 3: // multiplication
            result = (first * second);
            break;

        case 4: // division
            result = divv(first, second);
            break;

        case 5: // modulus
            result = mod((int)first, (int)second);
            break;

        case 6: // power
            result = pow(first, second);
            break;

        default:
            printf("Invalid choice try again !\n");
            continue;
        }
        printf("\n\t\t\t\t>>>>>>>>>>>>>>>> The result of the operation is [ %.2f ] <<<<<<<<<<<<<<<<<<<<<<<<<<<<", result);
    }

    return 0;
}

void print_menu()
{
    printf("\n==============================\n");
    printf("1. Addition :\n");
    printf("2. subtraction :\n");
    printf("3. multiplication :\n");
    printf("4. division :\n");
    printf("5. modulus :\n");
    printf("6. power :\n");
    printf("7. exit :\n");
}

float divv(float x, float y)
{
    if (y == 0)
    {
        printf("Error : division by zero \n");
        return 0;
    }
    else
    {
        return (x / y);
    }
}

int mod(int x, int y)
{
    if (y == 0)
    {
        printf("Error : modulus by zero \n");
        return 0;
    }
    else
    {
        return (x % y);
    }
}