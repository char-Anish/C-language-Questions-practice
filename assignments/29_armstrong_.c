#include<stdio.h>
int main(){
    int num, digit, sum = 0, count = 0, temp;

    printf("Enter a number : ");
    scanf("%d",&num);
    temp = num;

    while(temp != 0){
        count++;
        temp /= 10;
    }

    temp = num;
    while(temp != 0){
        digit = temp % 10;
        int fac = 1;
        for(int i=1; i<=count; i++){
            fac = fac * digit;
        }
        sum = sum + fac;
        temp /= 10;
    }
    if(num == sum){
        printf("%d is the armstrong number \n",num);
    }
    else{
        printf("%d is not the armstrong number \n",num);
    }
}