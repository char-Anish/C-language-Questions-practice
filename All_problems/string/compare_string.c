#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter your first string\n");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter yourr second string\n");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int i = 0, flag = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 0 && str1[i] == '\0' && str2[i] == '\0')
    {
        printf("Both string are equal\n");
    }
    else
    {
        printf("Both string are not equal\n");
    }

    return 0;
}