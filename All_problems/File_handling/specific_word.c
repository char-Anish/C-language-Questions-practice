#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *file;
    char fileName[100], word[50], temp[1000];
    int found = 0;

    printf("Enter file name: ");
    scanf("%s", fileName);

    printf("Enter word to search: ");
    scanf("%s", word);

    file = fopen(fileName, "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(file, "%s", temp) != EOF)
    {
        if (strcmp(temp, word) == 0)
        {
            found++;
        }
    }

    if (found > 0)
        printf("The word '%s' was found %d time(s).\n", word, found);
    else
        printf("The word '%s' was not found in the file.\n", word);

    fclose(file);

    return 0;
}
