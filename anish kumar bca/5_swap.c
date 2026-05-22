#include <stdio.h>
int main() {
    int a , b, temp;
    printf("Enter two number :\n");
    scanf("%d %d", &a, &b);

    printf("Before swap a = %d and b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;
    
    printf("After swap a = %d and b = %d\n", a, b);


    return 0;
}