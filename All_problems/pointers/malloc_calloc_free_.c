#include <stdio.h>
#include <stdlib.h> // required for malloc, calloc, free

int main() {
    int n, i;
    int *ptr1, *ptr2;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // -------- Using malloc() --------
    ptr1 = (int*) malloc(n * sizeof(int));
    if (ptr1 == NULL) {
        printf("Memory not allocated (malloc)\n");
        return 1;
    }

    printf("\nUsing malloc():\n");
    for (i = 0; i < n; i++) {
        ptr1[i] = i + 1;   // assigning values
    }

    printf("Values stored in malloc block: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr1[i]);
    }
    printf("\n");

    // -------- Using calloc() --------
    ptr2 = (int*) calloc(n, sizeof(int));
    if (ptr2 == NULL) {
        printf("Memory not allocated (calloc)\n");
        return 1;
    }

    printf("\nUsing calloc():\n");
    printf("Initial values (should be all zeros): ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr2[i]);
    }
    printf("\n");

    for (i = 0; i < n; i++) {
        ptr2[i] = (i + 1) * 10; // assigning values
    }

    printf("Values after assigning: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr2[i]);
    }
    printf("\n");

    // -------- Free the memory --------
    free(ptr1);
    free(ptr2);

    printf("\nMemory successfully freed.\n");

    return 0;
}
