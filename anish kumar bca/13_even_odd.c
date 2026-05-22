#include <stdio.h>

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("Its an even number %d", num);
    }
    else if(num == 0){
        printf("zero nither odd nor even ");
    }
    else if(num < 0){
        printf("Its an negative number");
    }
    else{
        printf("its an odd number %d", num);

    }
    return 0;
}