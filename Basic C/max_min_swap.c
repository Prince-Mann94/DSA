#include<stdio.h>
int main(){ 
    int a[5];
    // swap max and min number of array
    printf("Enter elements of fisrt array : ");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("Array is : ");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    
    int max = a[0];
    int min = a[0];
    
    for(int i=0;i<5;i++){
        if(a[i] > max){
            max = a[i];
        }
         if(a[i] < min){
            min = a[i];
        }
    }
    printf("\nMax num is : %d",max);
    printf("\nMin num is : %d",min);

    int temp = max;
    max = min;
    min = temp;

    printf("\nAfter swapping max and min : ");
    printf("\nMax = %d",max);
    printf("\nMin = %d",min);
    

}