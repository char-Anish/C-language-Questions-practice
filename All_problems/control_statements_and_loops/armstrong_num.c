#include<stdio.h>
int main(){
    int num, digit, sum=0, pow= 1, n, temp, count = 0;

    printf("Enter a number : ");
    scanf("%d",&num);
    temp = num;

    while(temp != 0 ){
        n = temp % 10;
        count++;
        temp /= 10;
    }
    temp = num;

    while(temp != 0){
        digit = temp % 10;
        pow = 1;
        for(int i=1; i<= count; i++){
            pow = pow * digit;
        }
        sum += pow;
        temp /= 10;
    }
    if(num == sum){
        printf("%d is the armstrong number \n",num);
    }else{
        printf("%d is not the armstrong number \n",num);

    }
    return 0;
}

