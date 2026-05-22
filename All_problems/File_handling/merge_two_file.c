#include <stdio.h>

int main()
{
    FILE *file1, *file2, *file3;
    char fileName1[100], fileName2[100], fileName3[100];
    char ch;

    printf("Enter first file name: ");
    scanf("%s", fileName1);

    printf("Enter second file name: ");
    scanf("%s", fileName2);

    printf("Enter destination file name: ");
    scanf("%s", fileName3);

    file1 = fopen(fileName1, "r");
    if (file1 == NULL)
    {
        printf("Error opening first file.\n");
        return 1;
    }

    file2 = fopen(fileName2, "r");
    if (file2 == NULL)
    {
        printf("Error opening second file.\n");
        fclose(file1);
        return 1;
    }

    file3 = fopen(fileName3, "w");
    if (file3 == NULL)
    {
        printf("Error opening destination file.\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }

    /* Copy contents of first file */
    while ((ch = fgetc(file1)) != EOF)
    {
        fputc(ch, file3);
    }

    /* Copy contents of second file */
    while ((ch = fgetc(file2)) != EOF)
    {
        fputc(ch, file3);
    }

    printf("Files merged successfully!\n");

    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;
}
