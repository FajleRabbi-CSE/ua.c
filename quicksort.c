#include<stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int pertition(int arr[],int low,int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

      while(1){
        while(i<=high && arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
            if(i<j){
                swap(&arr[i],&arr[j]);
            }
            else{
                break;
            }
        }
        swap(&arr[low],&arr[j]);
        return j;
}
void quicksort(int arr[],int low,int high){
    if(low<high){
        int p = pertition(arr,low,high);
        quicksort(arr,low,p-1);
        quicksort(arr,p+1,high);
    }
}
void printarray(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[]={45,23,78,12,56,89,34};
    int n =sizeof(arr)/sizeof(arr[0]);

    printf("Orginal Array: ");
    printarray(arr,n);

    quicksort(arr,0,n-1);

    printf("Sorted Array: ");
    printarray(arr,n);
    return 0;
}