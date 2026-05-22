#include <stdio.h>

int main() {
    int a, b ;

    printf("Enter two number :\n");
    scanf("%d %d", &a, &b);

    printf("The sum of two number is : %d\n", (a+b));
    printf("The minus of two number is %d\n", (a-b));
    printf("The multiplication of two number is %d\n", (a*b));
    printf("The division of two number is %d\n", (a/b));
    printf("The modulas of two number is %d\n", (a%b));
    return 0;
}