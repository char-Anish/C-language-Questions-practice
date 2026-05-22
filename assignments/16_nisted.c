#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks : ");
    scanf("%d",&marks);

    switch (marks / 10){
        case 10:
        case 9:
        printf("Grade = A\n");
        break;

        case 8:
        printf("Grade = B\n");
        break;

        case 7:
        printf("Grade = C\n");
        break;

        case 6:
        printf("Grade = D\n");
        break;

        case 5:
        case 4:
        printf("Grade = E\n");
        break;

        default:
        if(marks >= 0 && marks < 40){
            printf("Grade = F (fail)\n");
        }
        else{
            printf("Invalid marks\n");
        }
    }
}