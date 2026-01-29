#include<stdio.h>
int main(){
    int num1[5];
    int *arr1[5];
    int *arr2[5];
    int num2[5];

    printf("Enter array elements : ");
    for(int i=0;i<5;i++){
        scanf("%d",&num1[i]);

        arr1[i] = &num1[i];
    }

    printf("First array : ");
    for(int i=0;i<5;i++){
        printf("%d ",*arr1[i]);
    }

    printf("\nEnter elements of second array : ");
    for(int i=0;i<5;i++){
        scanf("%d",&num2[i]);
        arr2[i] = &num2[i];
    }

    printf("Second array : ");
    for(int i=0;i<5;i++){
        printf("%d ",*arr2[i]);
    }
}