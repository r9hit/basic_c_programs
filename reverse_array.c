#include<stdio.h>


void reverse(int *arr,int n){
    int temp;
    for(int i=0 ; i<(n/2) ; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    
}


int main(){
    int n;
    printf("Enter the size of an array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d value in array : \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d value in array \n", i + 1);
        scanf("%d", &arr[i]);
    }
    // To print the entered array
    printf("Array: [ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]");
    printf("\n");
    
    // calling function to reverse array
    reverse(arr,n);

    // printing reversed array
    printf("Array: [ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("]");
    printf("\n");
    
   
    return 0;
}


