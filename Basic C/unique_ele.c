#include<stdio.h>
int main(){
    int a[5];
    int count[5] = {0};
    printf("Enter elements of array : ");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    
    printf("Array : ");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i] == a[j]){
                count[i]++;
            }
    }
}

    printf("\nUnique elements : ");
    for(int i=0;i<5;i++){
        if(count[i] == 1){
           printf("%d ",a[i]);
        }
    }
}