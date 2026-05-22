#include <stdio.h>

struct student
{

    int student_ID;
    char name[50];
    int marks[5];
};
int main()
{

    struct student s1;

    printf("Enter your student Id : ");
    scanf("%d", &s1.student_ID);

    getchar();
    printf("Enter your name : ");
    fgets(s1.name, sizeof(s1.name), stdin);

    printf("Enter your marks\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Marks %d = ", i + 1);
        scanf("%d", &s1.marks[i]);
    }

    printf("\n>>>>student report<<<<\n");
    printf("Student ID = %d\n", s1.student_ID);
    printf("Name = %s\n", s1.name);

    for (int i = 0; i < 5; i++)
    {
        printf("Marks %d = %d\n", i + 1, s1.marks[i]);
    }

    float sum = 0, average;
    for (int i = 0; i < 5; i++)
    {

        sum += s1.marks[i];
    }
    printf("You got %.2f out of 500 \n", sum);

    average = (sum/500)*100;
    printf("Your percentage is %.2f\n", average);
    return 0;
}