#include <stdio.h>
#include <string.h>

int main() {
    char str[200];

    printf("Enter your name\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len =0;
    for(int i=0; str[i] != '\0'; i++){
        len ++;
    }

    char temp;
    for(int i=0; i < len /2; i++){

        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("%s reverced string\n",str);
    return 0;
}