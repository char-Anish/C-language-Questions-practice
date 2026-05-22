#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];

    printf("Enter your name : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char *ptr = str;

    printf("characters of your name using pointers\n");
    while (*ptr != '\0')
    {
        printf("%c ", *ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}