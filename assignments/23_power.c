#include <stdio.h>

int main() {
    int base, exponeant, result = 1;

    printf("Enter the base of the number : ");
    scanf("%d",&base);

    printf("Enter the exponeant of the number : ");
    scanf("%d",&exponeant);

    for(int i=1; i <= exponeant; i++){

        result *= base;
    }
    printf("power of %d of %d is = %d\n", base, exponeant, result);
    return 0;
}