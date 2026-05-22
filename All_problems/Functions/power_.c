#include <stdio.h>
void power(int x, int y);

int main() {
    int num1, num2;
    printf("Enter two number \n");
    scanf("%d %d",&num1, &num2);
    
    power(num1, num2);
    return 0;
}
void power(int x, int y){

    int pow=1;
    for(int i=1; i <= y; i++){

        pow = pow * x;
    }
    printf("%d^%d power is %d\n",x,y,pow);
}