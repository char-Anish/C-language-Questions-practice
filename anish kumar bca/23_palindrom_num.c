#include <stdio.h>

int main()
{
    int num, rev = 0, y, m;

    printf("Enter a number : ");
    scanf("%d", &num);

    m = num;

    while (num != 0)
    {

        y = num % 10;
        rev = rev * 10 + y;
        num /= 10;
    }

    if (m == rev)
    {
        printf("%d is the palindrom number\n", m);
    }
    else{
        printf("%d is not the palindrom number\n", m);
        
    }
    return 0;
}