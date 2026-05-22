#include<stdio.h>
int main(){
    int num, og, count, sum;

    printf("Enter a number : ");
    scanf("%d",&num);

    while (num > 9)
    {
        sum = 0;
        og = num;
        while (og != 0)
        {
            count = og % 10;
            sum = sum + count;
            og /= 10;
        }
        num = sum;
    }
    printf("The digital root is %d\n",num);
    return 0;
}