#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];

    printf("Enter string\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    printf("The lenght of the sting is %d\n", len);

    return 0;
}
