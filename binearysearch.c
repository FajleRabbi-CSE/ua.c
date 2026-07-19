#include<stdio.h>

int binarysearch(int arr[],int size, int target){
    int low=0;
    int high = size - 1;
    int mid;
    while( low <= high ){
        mid = (low + high)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid] < target){
            low = mid +1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target = 40;
    int result = binarysearch(arr, size, target);
    if(result != -1){
        printf("Value found at index %d\n",result);
    }
    else{
       printf("Value not found \n");
    }
    return 0;
}
