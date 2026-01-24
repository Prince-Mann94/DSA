#include<stdio.h>
int main(){
    // Sum and product of elements of array
    int a[5];
    int sum = 0;
    int pro = 1;

    printf("Enter elements of array\n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }

    printf("\nArray : ");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }

    for(int i=0;i<5;i++){
        sum += a[i];
        pro *= a[i];
    }

    printf("\nSum = %d",sum);
    printf("\nPro = %d",pro);
}