#include <stdio.h>

struct date
{
    int dd;
    int mm;
    int yy;
};
struct student
{
    char name[50];
    int roll_no;
    struct date dob;
};
int main()
{

    struct student s1;

    printf("your name : ");
    scanf("%s", s1.name);

    printf("your roll no : ");
    scanf("%d", &s1.roll_no);

    printf("your birth date\n");
    printf("DD-MM-YY\n");
    scanf("%d %d %d", &s1.dob.dd, &s1.dob.mm, &s1.dob.yy);

    printf("=====Student details======\n");
    printf("Name      : %s\n", s1.name);
    printf("Roll No   : %d\n", s1.roll_no);
    printf("Date of birth\n");
    printf("%02d-%02d-%02d \n", s1.dob.dd, s1.dob.mm, s1.dob.yy);

    return 0;
}