#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    char word[100], longest[100];
    int i = 0, j = 0, maxLen = 0, currentLen = 0;

    printf("Enter your string:\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            word[j++] = str[i];
            currentLen++;
        }
        else
        {
            word[j] = '\0'; // terminate current word

            if (currentLen > maxLen)
            {
                maxLen = currentLen;
                strcpy(longest, word); // store as longest
            }

            j = 0;
            currentLen = 0;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("The longest word is: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
