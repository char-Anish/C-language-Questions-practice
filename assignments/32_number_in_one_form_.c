#include<stdio.h>
int main(){
    int num, temp, digit, div = 1;

    printf("Enter a number : ");
    scanf("%d",&num);

    temp = num; 
    while(temp >= 10){
        temp /=10;
        div *= 10;
    }

    while(div != 0){
        digit = num / div;

        switch(digit){
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine "); break;

        };
        num = num % div;
        div = div / 10;
    }
    return 0;
}