#include<stdio.h>
int linearsearch(int arr[],int size,int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={10,20,30,40,50};
    int target=30;
    int size =sizeof(arr)/sizeof(arr[0]);
    int result =linearsearch(arr, size, target);

    if(result != -1){
        printf("Value Found at index %d\n", result);
    }
    else{
        printf("value not Found at index\n");
    }
    return 0;
}