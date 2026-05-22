#include<stdio.h>
#include<string.h>

int main(){
    char str[50];

    // scanf("%s" ,str);
    fgets(str, sizeof(str), stdin);
    printf("%s", str);
    str[strcspn(str, "\n")] = '\0';

    
    return 0 ;
}