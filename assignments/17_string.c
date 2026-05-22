#include <stdio.h>
#include <string.h>

int main()
{

    char name[100];

    printf("Enter your name : ");

    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Wecome %s ", name);
    return 0;
}