#include <stdio.h>

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    for(int i =0; i<10; i++){
        printf("%d x %d = %d\n",n ,i+1, n*(i+1) );
    }
    printf("\n");
    int i = 10;
    while (i>0){
        printf("%d x %d = %d\n",n ,i ,i*n );
        i--;
        
    }
    return 0;
}