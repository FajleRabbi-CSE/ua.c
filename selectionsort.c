#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionsort(int arr[],int n)
{
    int i,j,minindex;

    for(i = 0;i < n -1; i++){
        minindex = i;
        for(j= i+1; j<n; j++){
            if(arr[minindex]>arr[j]){
                minindex = j;
            }
        }
        if(minindex != i){
            swap(&arr[minindex],&arr[j]);
        }
    }
}
void printarray(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[]={64,25,12,22,11};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Orginal Array: ");
    printarray(arr,n);

    selectionsort(arr,n);

    printf("Sorted Array: ");
    printarray(arr,n);
    return 0;
}