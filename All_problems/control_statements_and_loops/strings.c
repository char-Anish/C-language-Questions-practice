#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char str[200];
    int digits = 0, vowels = 0, conconents = 0, spaces = 0, symbols = 0;

    printf("Enter a string \n");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {

        char ch = tolower(str[i]);

        if (ch >= '0' && ch <= '9')
            digits++;

        else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowels++;

        else if (ch >= 'a' && ch <= 'z')
            conconents++;

        else if (ch == ' ')
            spaces++;

        else if (ch != '\n')
            symbols++;
    }

    printf("\nNumber of digits is %d\n", digits);
    printf("\nNumber of vowels is %d\n", vowels);
    printf("\nNumber of consonents is %d\n", conconents);
    printf("\nNumber of spaces is %d\n", spaces);
    printf("\nNumber of symbols is %d\n", symbols);

    return 0;
}