#include <stdio.h>

int main() {
    int num, bin[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    int temp = num;

    while (temp > 0) {
        bin[i] = temp % 2;
        temp /= 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
    printf("\n");

    return 0;
}
