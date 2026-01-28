#include<stdio.h>
int sum_array(int arr[],int n){
    if(n <= 0){
        return 0;
    }else{
        return arr[n-1] + sum_array(arr,n-1);
    }
}
int main(){
    int n = 5;
    int arr[n];
    printf("Enter elements of array : ");
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }

    printf("Array : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("\nSum of elements of array : %d",sum_array(arr,5));
}