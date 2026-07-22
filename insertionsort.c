#include<stdio.h>

void insertionsort(int A[], int n){
    int i,j,temp;
    for(i = 1; i < n; i++){
        j=i;

        while(j > 0 && A[j -1]>A[j]){
            temp=A[j];
            A[j]=A[j - 1];
            A[j - 1] =temp;
            j--;
        }
    }
}
void printArray(int A[],int n){
    for(int i=0; i < n; i++){
        printf("%d ",A[i]);
    }
        printf("\n");

}
int main(){
    int A[]={7,4,5,2,9,1};
    int n = sizeof(A)/sizeof(A[0]);
    
    printf("Orginal Array: ");
    printArray(A,n);

    insertionsort(A,n);

    printf("Sorted Array: ");
    printArray(A,n);

    return 0;
}