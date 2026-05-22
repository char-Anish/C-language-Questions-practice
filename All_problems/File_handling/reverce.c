#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    long size;

    printf("Enter filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Move to the end of the file
    fseek(file, 0, SEEK_END);
    size = ftell(file);   // Get file size

    // Read backward
    for (long i = size - 1; i >= 0; i--) {
        fseek(file, i, SEEK_SET);
        putchar(fgetc(file));
    }

    fclose(file);
    return 0;
}

