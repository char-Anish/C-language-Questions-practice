#include<stdio.h>

int left_to_right(int num);
int right_to_left(int num);

int main(){
    int n;

    printf("Enter a number : ");
    scanf("%d",&n);
    
    left_to_right(n);
    printf("\n");
    right_to_left(n);
    return 0;
    
}
int right_to_left(int num){
    int digit;
    while(num != 0){
        digit = num % 10;
        printf(" %d",digit);
        num /= 10;
    }
}

int left_to_right(int num){
    int temp, div = 1, digit;
    temp = num;
    while(temp >= 10){
        temp /=10;
        div = div * 10;
    }

    while(div !=0){
        digit = num / div;
        printf(" %d",digit);
        num = num % div;
        div = div / 10;
    }
}