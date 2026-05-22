#include <stdio.h>

int main() {
    int a = 1000;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;

    printf("a = %d\n", a);           // value of a
    printf("*ptr1 = %d\n", *ptr1);   // value of a using single pointer
    printf("ptr1 = %p\n", ptr1);     // address of a
    printf("&a = %p\n", &a);         // address of a (same as ptr1)
    printf("\n");

    printf("**ptr2 = %d\n", **ptr2); // value of a using double pointer
    printf("ptr2 = %p\n", ptr2);     // address of ptr1
    printf("&ptr1 = %p\n", &ptr1);   // address of ptr1 (same as ptr2)

    return 0;
}
