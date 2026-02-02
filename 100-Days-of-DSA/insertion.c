#include<stdio.h>
int main(){
    int n;
    int pos,value;
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

    printf("\nEnter pos at which you want to insert : ");
    scanf("%d",&pos);

    printf("Enter element which you want to insert : ");
    scanf("%d",&value);

    for(int i=n;i>pos;i--){
        arr[i] = arr[i-1];
    }

    arr[pos] = value;

    printf("Array after insertion : ");
    for(int i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
}