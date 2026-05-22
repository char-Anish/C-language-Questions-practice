#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter you string\n");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int j = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] != ' ')
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    
    printf("After removal %s\n", str);
    return 0;
}