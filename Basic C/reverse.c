#include<stdio.h>
// Reverse an array
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    // int start = 0;
    // int end = 6;
    // int temp;

    // while(start < end){
    //     temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;
    //     start++;
    //     end--;
    // }
    // for(int i=0;i<=6;i++){
    //     printf("%d ",arr[i]);
    // }

    // Revise pointer and array
 
    int *start = arr;
    int *end = arr + 6;
    while(start < end){
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }

}