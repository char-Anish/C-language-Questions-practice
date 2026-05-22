#include <stdio.h>
#include <string.h>

int main() {
    
    char str[100];
    printf("Enter string : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char *ptr = str;
    printf("Print the elements\n");
    while(*ptr != '\0'){

        printf("%c ", *(ptr));
        ptr++;
    }

    
    ptr--;
    
    printf("\nReverce the elements\n");

    while(ptr >= str){
        printf("%c ", *ptr);
        ptr--;
    }
    return 0;
}