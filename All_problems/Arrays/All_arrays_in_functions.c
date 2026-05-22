#include <stdio.h>

int main()
{

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {

        printf("No.%d = ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i < n-1; i++){
        for(int j=0; j < i - n - 1; j++){

            
        }
    }    
    return 0;
}