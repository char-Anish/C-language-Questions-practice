#include<stdio.h>
#include<string.h>

int main(){
    
    char str[50];

    printf("Your name = ");
    fgets(str, sizeof(str), stdin);

    int len=0;
    while(str != "\0"){
        len++;
    }
    printf("length of the str %d\n",len);

    printf("%d", strlen(str));
    return 0;
}