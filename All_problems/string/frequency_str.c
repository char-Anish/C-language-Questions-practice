#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int freq[256] = {0};

    printf("Enter your string\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++)
    {

        unsigned char ch = str[i];
        freq[ch]++;
    }

    printf("Character\t frequency\n");
    printf("----------------------\n");
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            if (i == ' ')
            {
                printf("' '(space)\t %d\n", freq[i]);
            }
            else
            {
                printf("%c\t\t %d\n", i, freq[i]);
            }
        }
    }
    return 0;
}