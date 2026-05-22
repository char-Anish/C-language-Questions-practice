#include <stdio.h>

int main() {
    int num, reverce = 0, r;

    printf("Enter a number : ");
    scanf("%d",&num);

    while(num != 0){
        
        r = num % 10;
        reverce = reverce * 10 + r;
        num /= 10;
    }
    printf("reverce a num = %d\n", reverce);
    return 0;
}