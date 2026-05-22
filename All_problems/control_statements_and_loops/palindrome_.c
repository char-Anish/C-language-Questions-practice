#include <stdio.h>

int main()
{
    int num, original_num, reverced = 0, remainder;

    printf("Enter a number : ");
    scanf("%d", &num);

    original_num = num;

    while (num != 0)
    {
        remainder = num % 10;
        reverced = reverced * 10 + remainder;
        num /= 10;
        ;
    }

    if (original_num == reverced)
    {
        printf("%d is a palindrome number\n", original_num);
    }
    else
    {
        printf("%d is not a palindrome number\n", original_num);
    }
    return 0;
}