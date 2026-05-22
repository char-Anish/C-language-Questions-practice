#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    FILE *file;
    struct Student s;
    int n, i;

    file = fopen("students.txt", "w");
    if (file == NULL)
    {
        printf("Cannot open file.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &s.roll);
        printf("Name: ");
        scanf("%s", s.name);
        printf("Marks: ");
        scanf("%f", &s.marks);

        fprintf(file, "%d %s %.2f\n", s.roll, s.name, s.marks);
    }

    fclose(file);

    /* Reading back from file */
    file = fopen("students.txt", "r");
    if (file == NULL)
    {
        printf("Cannot open file.\n");
        return 1;
    }

    printf("\nStudent Records from File:\n");
    while (fscanf(file, "%d %s %f", &s.roll, s.name, &s.marks) != EOF)
    {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", s.roll, s.name, s.marks);
    }

    fclose(file);

    return 0;
}