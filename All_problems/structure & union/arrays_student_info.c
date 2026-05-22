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

    struct student s[n]; // struct arrays

    // for taking input
    for (int st = 0; st < n; st++)
    {

        printf("\nEnter student details of No. %d\n", st + 1);
        printf("Enter your student Id : ");
        scanf("%d", &s[st].student_ID);

        getchar();
        printf("Enter your name : ");
        fgets(s[st].name, sizeof(s[st].name), stdin);

        printf("Enter your marks\n");

        for (int i = 0; i < 5; i++)
        {
            printf("Marks %d = ", i + 1);
            scanf("%d", &s[st].marks[i]);
        }
    }

    float higest = -1;
    int topperindex = 0;

    // For printing output
    for (int st = 0; st < n; st++)
    {

        printf("\n>>>>student report<<<<\n");
        printf("Student ID = %d\n", s[st].student_ID);
        printf("Name = %s", s[st].name);

        for (int i = 0; i < 5; i++)
        {
            printf("Marks %d = %d\n", i + 1, s[st].marks[i]);
        }

        float sum = 0, average;
        for (int i = 0; i < 5; i++)
        {

            sum += s[st].marks[i];
        }
        printf("You got %.2f out of 500 \n", sum);

        average = (sum / 500) * 100;
        printf("Your percentage is %.2f\n", average);

        if (sum > higest)
        {
            higest = sum;
            topperindex = st;
        }
    }

    printf("\n>>>>>>Topper student<<<<<\n");
    printf("Student id = %d\n", s[topperindex].student_ID);
    printf("Name = %s", s[topperindex].name);
    printf("Total marks = %.2f\n", higest);
    printf("Percentage = %.2f\n", (higest / 500) * 100);
    return 0;
}

// its store all stuent data