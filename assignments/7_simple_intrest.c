#include <stdio.h>

int main() {
    float p, r, t, result;

    printf("Enter principle amount : ");
    scanf("%f", &p);

    printf("Enter rate of intrest : ");
    scanf("%f", &r);

    printf("Enter time : ");
    scanf("%f", &t);

    result = (p* r* t)/100;

    printf("Simple intrest is : %.2f\n", result);
    
    return 0;
}