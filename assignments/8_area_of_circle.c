#include <stdio.h>

int main() {
    float area, circumference, r, pie = 3.14;

    printf("Enter radius of a circle : ");
    scanf("%f", &r);

    area = pie* r* r;

    printf("Area of cirle is %.2f\n", area);

    circumference = 2* pie* r;

    printf("Circumference of a circle is %.2f\n",circumference);
    return 0;
}