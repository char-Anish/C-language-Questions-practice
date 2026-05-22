#include<stdio.h>
int main(){
    int n, temp, digit, div = 1, sum = 0, count = 0;
    float avg;
    int max, min;

    printf("Enter a number : ");
    scanf("%d",&n);

    temp = n;
    while(temp >= 10){
        temp = temp / 10;
        div = div * 10;
    }

    digit = n / div;
    max = min = digit;

    while(div != 0){
        digit = n / div;

        if(digit > max){
            max = digit;
        }
        if(digit < min){
            min = digit;
        }
        sum = sum + digit;
        count++;
        n = n % div;
        div /= 10; 
    }
    avg = sum / (float)count;

    printf("max = %d\n",max);
    printf("min = %d\n",min);
    printf("sum = %d\n",sum);
    printf("average = %.2f\n",avg);

    return 0;
}