#include<stdio.h>
int main(){
    // Taking array and then merging
    int a1[5];
    int a2[5];
    int a3[10];
    int a4[10];

    printf("Enter fisrt array in ascending order : ");
    for(int i=0;i<5;i++){
        scanf("%d",&a1[i]);
    }
    printf("Enter second array in ascending order : ");
    for(int i=0;i<5;i++){
        scanf("%d",&a2[i]);
    }
    printf("\nFirst array : ");
    for(int i=0;i<5;i++){
        printf("%d ",a1[i]);
    }
    printf("\nSecond array : ");
    for(int i=0;i<5;i++){
        printf("%d ",a2[i]);
    }
    
    for(int i=0;i<5;i++){
            a3[i] = a1[i];
    }
    for(int j=0;j<5;j++){
        a3[j+5] = a2[j];
    }
    printf("\nMerged array : ");
    for(int i=0;i<10;i++){
        printf("%d ",a3[i]);
    }
}