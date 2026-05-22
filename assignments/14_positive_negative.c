#include <stdio.h>

int main() {
    int num;
    printf("Enter random number : ");
    scanf("%d",&num);

    if(num == 0){
        printf("You entered Zero : %d\n", num);
    }

    else if(num > 0 ){
        printf("Your Entered postive number : %d\n",num);
    }

    else if (num < 0){
        printf("Your Entered negative number : %d\n",num);
    }

    else{
        printf("Something went wrong \n");
    }
    return 0;
}