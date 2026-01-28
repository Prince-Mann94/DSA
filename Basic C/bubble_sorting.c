#include<stdio.h>
int main(){
    int a[5];
    int count = 0;
    // bubble sorting
    printf("Enter elements of array : ");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }

    printf("Array : ");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4-i;j++){
            count++;
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
        printf("\nSorted array : ");
        for(int i=0;i<5;i++){
            printf("%d ",a[i]);
        }

    printf("Comparison count : %d",count);   // formula = (n(n-1)/2)

}
