#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];

    printf("Enter string : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("\nNormal string : %s\n", str);

    char upperstr[100];
    strcpy(upperstr, str);

    for (int i = 0; upperstr[i] != '\0'; i++)
    {
        upperstr[i] = toupper(upperstr[i]);
    }

    printf("UPPER STRING : %s\n", upperstr);

    char lowerstr[100];
    strcpy(lowerstr, str);

    for (int i = 0; lowerstr[i] != '\0'; i++)
    {
        lowerstr[i] = tolower(lowerstr[i]);
    }

    printf("lower string : %s\n", lowerstr);

    return 0;
}