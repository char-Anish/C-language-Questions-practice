#include <stdio.h>

int main()
{
    int year;

    printf("Enter your year : ");
    scanf("%d", &year);

    if (year % 4 == 0 && year != 4 || year % 400 == 0)
    {
        printf("%d is the leap year\n", year);
    }
    else if (year < 0 || year == 0)
    {
        printf("Enter valid input \n");
    }
    else
    {
        printf("%d is not the leap year\n", year);
    }
    return 0;
}