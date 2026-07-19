#include<stdio.h>
void bubblesort(int A[], int n){
    int i,j,temp;
    int swapped;

    for(i=0; i< n-1; i++){

        swapped = 0;
        
        for(j = 0; j<n-i-1;j++){
            if(A[j] >A[j+1]){
                temp = A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                swapped = 1;
            }
        }
        if(swapped == 0){
            break;
        }
    }
}
void printarray(int A[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}
int main(){
    int A[]={64,34,25,12,22,11,90};
    int n = sizeof(A)/sizeof(A[0]);
    printf("Orginal Array: ");
    printarray(A,n);
    bubblesort(A,n);
    printf("Sorted Array: ");
    printarray(A,n);
    return 0;
}