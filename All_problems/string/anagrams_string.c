#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char str1[100], str2[100];

    printf("Enter string No. 1 : ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter string No. 2 : ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    char lower1[100];
    for (int i = 0; str1[i] != '\0'; i++)
    {
        lower1[i] = tolower(str1[i]);
    }

    char lower2[100];
    for (int i = 0; lower2 != '\0'; i++)
    {
        lower2[i] = tolower(str2[i]);
    }

    int isanagram = 1;
    for (int i = 0; i < 256; i++)
    {
        if (lower1 != lower2)
        {
            isanagram = 0;
            break;
        }
    }

    if (isanagram)
    {
        printf("Both string is anagrams\n");
    }
    else
    {
        printf("Both string is not anagrams\n");
    }
    return 0;
}