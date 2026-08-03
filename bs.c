#include<stdio.h>
int main(){
    int n,v;
    printf("Enter the Number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter Sorted Array: ");
    for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
    }

    printf("Enter terget value: ");
    scanf("%d",&v);
    
    int low=0,high=n-1,mid;
    while(low <= high){
        mid = (low+high)/2;
        if(arr[mid] == v){
            printf("Found value at index %d\n", mid);
            return 0;
        }
        else if(arr[mid] < v){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    printf("Not found at index:\n");
    return 0;
    
}