#include<stdio.h>
int main(){
    int num= 0, digit, n;

    printf("Enter how many digit : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        scanf("%d",&digit);
        num = num * 10 + digit;
    }

    printf("num is %d\n",num);
    return 0;
    
}