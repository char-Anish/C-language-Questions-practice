#include <stdio.h>

int main() {
    int radius;
    float  circumference;

    printf("Enter a radius: ");
    scanf("%d", &radius);

    circumference = (2 * 3.14) * radius;

    printf("The circumference of a circle is %.2f with radius %d\n", circumference, radius);
    return 0;
}