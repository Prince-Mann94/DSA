#include<stdio.h>
int main(){

    // Deletion of element of array.
    int n;
    int pos;

    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Array : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("\nEnter pos to delete element : ");
    scanf("%d",&pos);
    for(int i=pos;i<n;i++){
        arr[i] = arr[i+1];
    }
    
    printf("Array after deletion : ");
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
}
