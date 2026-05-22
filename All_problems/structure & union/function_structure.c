#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

// Function to display the structure (passed as argument)
void display(struct Student s) {
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
}

// Function to modify/return structure
struct Student update(struct Student s) {
    s.marks += 5;   // add 5 marks
    return s;       // return updated structure
}

int main() {

    struct Student s1 = {10, 85.5};

    printf("Original Data:\n");
    display(s1);

    // Pass structure & get returned value
    s1 = update(s1);

    printf("\nAfter Update:\n");
    display(s1);

    return 0;
}
