#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter your string : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char *ptr = str;
    int lenght = 0;
    while (*ptr != '\0')
    {
        lenght++;
        ptr++;
    }
    printf("The lenght of the string %d\n", lenght);
    return 0;
}