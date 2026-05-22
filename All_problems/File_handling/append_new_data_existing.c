#include <stdio.h>

int main()
{
    FILE *file;
    char filename[100];
    char data[200];

    printf("Enter file name to append data to: ");
    scanf("%s", filename);

    // Open the file in append mode
    file = fopen(filename, "a");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter data to append (end input with ENTER):\n");
    getchar();                        // to consume leftover newline from scanf
    fgets(data, sizeof(data), stdin); // read a line of input

    fputs(data, file); // write to file
    printf("Data appended successfully!\n");

    fclose(file);
    return 0;
}
