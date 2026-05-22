#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter a number \n");
    scanf("%d %d", &num1, &num2);

    int pro = 1;
    for (int i = 1; i <= num2; i++)
    {

        pro *= num1;
    }
    printf("the power of %d is %d\n", num1, pro);
    return 0;
}