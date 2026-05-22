#include <stdio.h>
#include <string.h>

int palindrome(char s[]);
int main()
{
    char str[200];
    int ispalindrome = 1;

    printf("Enter your string\n");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    if (palindrome(str))
    {
        printf("%s is the palindrome string\n",str);
    }
    else
    {
        printf("%s is not the palindrome string\n",str);
    }
    return 0;
}
int palindrome(char s[])
{

    int len = strlen(s);
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            return 0;
        }
    }
    return 1;
}