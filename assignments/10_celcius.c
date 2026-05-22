#include <stdio.h>

int main()
{
    float celcius, fahrenheit;
    int choice;

    printf("\nTemperature converter\n");
    printf("1. celcius to fahrenheit\n");
    printf("2. fahrenheit to celcius\n");
    printf("Enter choice (1 or 2) : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter celcius : ");
        scanf("%f", &celcius);

        fahrenheit = (9.0 / 5.0 * celcius) + 32;
        printf("Celsius to fahrenheit is : %.2f\n", fahrenheit);
    }

    else if (choice == 2)
    {
        printf("Enter fahrenheit : ");
        scanf("%f", &fahrenheit);

        celcius = (fahrenheit -32)* 5.0/9.0;
        printf("Fahrenheit to celcius is : %.2f\n", celcius);
    }
    else
    {
        printf("Invalid input pls try again\n");
    }
    return 0;
}