#include<stdio.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7};
    int pos = 0,value = 0;
    printf("Enter position at which new value must be added : ");
    scanf("%d",&pos);

    printf("Enter the value of that position : ");
    scanf("%d",&value);

    for(int i=7;i>pos;i--){
       arr[i] = arr[i-1];
    }
     arr[pos] = value;

    for(int i=0;i<8;i++){
       printf("%d ",arr[i]);
    }
    printf("\n");

    printf("Enter position at which new value must be deleted : ");
    scanf("%d",&pos);

    printf("Enter the value you want to delete : ");
    scanf("%d",&value);

    arr[pos] = value;
    for(int i=pos;i<8;i++){
        arr[i] = arr[i+1];
    }
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    int start = 0;
    int end = 6;
    int temp;

    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
}
