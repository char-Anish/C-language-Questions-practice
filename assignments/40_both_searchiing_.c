#include<stdio.h>
int liner(int arr[], int n, int key);
int binary(int arr[], int n, int key);
int main(){
    int n;
    printf("Enter a range of the elements = ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the arrays elements \n");
    for(int i=0; i<n; i++){
        printf("No. %d = ",i+1);
        scanf("%d",&arr[i]);
    }

    int key;
    printf("\nEnter the element to be find = ");
    scanf("%d",&key);

    liner(arr,n,key);
    binary(arr,n,key);
    
    return 0;
}
int liner(int arr[], int n, int key){
    int found = 0;
    for(int i=0; i<n; i++){
        if(key == arr[i]){
            printf("Linear search =  %d\n",i);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("Element not found\n");
    }
}
int binary(int arr[], int n, int key){
    for(int i=1; i<n; i++){
        int k = arr[i];
        int j= i-1;
        while(j>=0 && arr[j] > k){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = k;
    }
    int low = 0, mid, high = n-1, found = 0;

    while(low <= high){
        mid = (low + high)/2;

        if(arr[mid] == key){
            printf("Binary search =  %d\n",mid);
            found = 1; 
            break;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    if(!found){
        printf("Element is not found\n");
    }

}