#include <stdio.h>

int main(){

    int n;
    printf("enter the size of the array=");
    scanf("%d",&n);
    int arr[n];
    int largest=0;
    
    // taking input in the array of size n
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("the array is-\n");
    
    // printing the array of size n
    
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    
    // finding the largest number in the array
    
    
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        
    }
    
    // printing the largest number in the array
    
    printf("the largest number in the array is=%d",largest);

    return 0;
}
