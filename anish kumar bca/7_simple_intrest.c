#include <stdio.h>

int main() {
    int princple, rate, time;

    float simple_intrest;
    printf("Enter 1. principle  2. rate 3. time\n");
    scanf("%d %d %d", &princple, &rate, &time);

    simple_intrest = (princple*rate*time)/100;

    printf("simple intrest is %.2f\n", simple_intrest);

    return 0;
}