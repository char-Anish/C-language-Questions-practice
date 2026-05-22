#include <stdio.h>

struct student
{

    int student_ID;
    char name[50];
    int marks[5];
};
int main()
{

    int n;
    printf("Enter number of student to be record : ");
    scanf("%d", &n);

    struct student s;

    for (int st = 1; st <= n; st++)
    {

        printf("\nEnter student details of No. %d\n",st);
        printf("Enter your student Id : ");
        scanf("%d", &s.student_ID);

        getchar();
        printf("Enter your name : ");
        fgets(s.name, sizeof(s.name), stdin);

        printf("Enter your marks\n");

        for (int i = 0; i < 5; i++)
        {
            printf("Marks %d = ", i + 1);
            scanf("%d", &s.marks[i]);
        }

        printf("\n>>>>student report<<<<\n");
        printf("Student ID = %d\n", s.student_ID);
        printf("Name = %s\n", s.name);

        for (int i = 0; i < 5; i++)
        {
            printf("Marks %d = %d\n", i + 1, s.marks[i]);
        }

        float sum = 0, average;
        for (int i = 0; i < 5; i++)
        {

            sum += s.marks[i];
        }
        printf("You got %.2f out of 500 \n", sum);

        average = (sum / 500) * 100;
        printf("Your percentage is %.2f\n", average);
    }
    return 0;
}


// Enter student 1 → show report
// Enter student 2 → show report
// Student 1’s data is lost

//Its records only one student date only 