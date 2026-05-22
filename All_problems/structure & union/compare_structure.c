#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int marks;
};

int main() {

    struct student s1, s2;

    // Input for student 1
    printf("Enter first student name: ");
    fgets(s1.name, sizeof(s1.name), stdin);

    printf("Enter first student marks: ");
    scanf("%d", &s1.marks);

    getchar(); // clear newline

    // Input for student 2
    printf("\nEnter second student name: ");
    fgets(s2.name, sizeof(s2.name), stdin);

    printf("Enter second student marks: ");
    scanf("%d", &s2.marks);

    // Compare marks
    if (s1.marks == s2.marks) {
        printf("\nBoth students have SAME marks.\n");
    } else {
        printf("\nStudents have DIFFERENT marks.\n");
    }

    return 0;
}
