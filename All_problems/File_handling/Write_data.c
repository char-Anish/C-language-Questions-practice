#include <stdio.h>

int main()
{
    FILE *fp;
    char data[200];

    fp = fopen("output.txt", "w"); // use to open the file 

    if(fp == NULL){
        printf("Error in opening file \n");
        return 1;
    }

    printf("Enter your data into file \n");
    fgets(data, sizeof(data), stdin);

    fputs(data, fp);  // fputs is used to put input data into file

    printf("Data entered succssfully\n");

    return 0;
}