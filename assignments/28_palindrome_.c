#include<stdio.h>
int main(){
    int num, digit, rev = 0, temp;

    printf("Enter a number : ");
    scanf("%d",&num);

    temp = num;
    while(temp !=0){
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    if(num == rev){
        printf("%d is the palindrome number \n",num);
    }
    else{
        printf("%d is not the palindrome number \n",num);
        
    }
}