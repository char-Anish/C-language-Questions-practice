#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    printf("Enter your name : ");

    fgets(str, sizeof(str), stdin);

    int i = 0, vowels=0, consonents=0, spaces=0, digts=0;

    while (str[i] != '\0')
    {

        char ch = tolower(str[i]);
        if (ch >= '0' && ch <= '9')
        {
            digts++;
        }
        else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
        {
            vowels++;
        }
        else if (ch == ' ')
        {
            spaces++;
        }
        else if( ch >= 'a' && ch <= 'z')
        {
            consonents++;
        }
        i++;
    }
    printf("vowels : %d\n", vowels);
    printf("digits : %d\n", digts);
    printf("spaces : %d\n", spaces);
    printf("consonents : %d\n", consonents);
    return 0;
}