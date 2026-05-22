#include <stdio.h>
#include <string.h>

struct student
{
    int roll_no;
    char name[50];
    float marks;
};

int main()
{

    struct student s[100]; // store upto 100 student

    int n = 0; // current number of student
    int choise;

    do
    {

        printf("\n=====Student record menu=====\n");
        printf("No. 1 Add student\n");
        printf("No. 2 Display all student\n");
        printf("No. 3 Search student by roll number\n");
        printf("No. 4 Delete student by roll number\n");
        printf("No. 5 Exit\n");
        printf("Enter your choise\n");
        scanf("%d", &choise);

        switch (choise)
        {
        case 1: // Add student
            printf("your roll No : ");
            scanf("%d", &s[n].roll_no);

            getchar();
            printf("Your name : ");
            fgets(s[n].name, sizeof(s[n].name), stdin);

            printf("Your marks : ");
            scanf("%f", &s[n].marks);

            n++;
            printf("Student added successfully !\n");
            break;

        case 2: // display all student
            if (n == 0)
            {
                printf("No student record found\n");
            }
            else
            {
                printf(">>>>All students<<<<<\n");
                for (int i = 0; i < n; i++)
                {

                    printf("roll no : %d\n", s[i].roll_no);
                    printf("Name    : %s", s[i].name);
                    printf("Marks   : %.2f\n", s[i].marks);
                }
            }
            break;

        case 3: // Search student by roll number

            if (n == 0)
            {
                printf("No student record was found !\n");
                break;
            }
            else
            {
                int roll;
                printf("Enter roll no to find student : ");
                scanf("%d", &roll);
                int found = 0;

                for (int i = 0; i < n; i++)
                {

                    if (s[i].roll_no == roll)
                    {
                        printf("Student found\n");
                        printf("roll no : %d\n", s[i].roll_no);
                        printf("Name    : %s", s[i].name);
                        printf("Marks   : %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                {
                    printf("Student with %d roll number was not found\n", roll);
                }
                break;
            }

        case 4: // delete student data by roll number

            if (n == 0)
            {
                printf("No student record found\n");
                break;
            }
            else
            {
                int roll;
                printf("Enter roll number to delete : ");
                scanf("%d", &roll);

                int found = 0;

                for (int i = 0; i < n; i++)
                {
                    if (s[i].roll_no == roll)
                    {
                        // shift all remaing record left

                        for (int j = i; j < n - 1; j++)
                        {
                            s[j] = s[j + 1];
                        }
                        n--;

                        found = 1;
                        printf("Student with %d roll number deleted succsessfully !\n", roll);
                        break;
                    }
                }
                if (!found)
                {
                    printf("Student with %d roll number was not found \n", roll);
                }
                break;
            }

        case 5:
            printf("Exiting the programm ........\n");
            break;

        default:
            printf("Invalid choise !! try again\n");
        }

    } while (choise != 5);
    return 0;
}