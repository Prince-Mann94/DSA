#include<stdio.h>
int main(){
    int a[5];
    int min;
    printf("Enter array : ");
    
    for(int i=0;i<5;i++){
       scanf("%d",&a[i]);
    }

    printf("\nArray : ");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }

    for(int i=0;i<4;i++){
        int min = i;
        for(int j=i+1;j<5;j++){
            if(a[j] < a[min]){
               min = j;
            }
        }
        int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
    }


        printf("\nSorted array : ");
        for(int i=0;i<5;i++){
        printf("%d ",a[i]);
        }
}