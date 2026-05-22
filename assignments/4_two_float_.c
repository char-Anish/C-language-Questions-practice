#include <stdio.h>

int main() {
    float a, b;

    printf("Enter two numbers\n");
    scanf("%f %f",&a, &b);

    printf("Multiplication of two float number is : %.2f\n", (a*b));
    return 0;
}