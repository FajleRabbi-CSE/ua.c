#include<stdio.h>
int main(){
    int n,v,found;
    printf("enter the number of element: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("enter terget value: ");
    scanf("%d",&v);

    for(int i=0; i<n; i++){
        if(arr[i] == v){
            printf("Yes\n");
            found = 1;
            break;
        }
    }
    if(found == 0){
        printf("No\n");
    }
    return 0;
}