#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char ch[200];
    int vowels = 0;

    printf("Enter your string \n");
    fgets(ch, sizeof(ch), stdin);

    for (int i = 0; ch[i] != '\0'; i++)
    {
        char word = tolower(ch[i]);

        if (word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u')
        {
            vowels++;
        }

    }

    printf("The total number of vowels in the string is %d\n", vowels);


    return 0;
}