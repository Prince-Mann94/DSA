#include<stdio.h>
int main(){
    // find the intersection of two array
    int a1[3];
    int a2[3];
    int c[3];
    int n = 0;

    printf("Enter elements of 1st array : ");
    for(int i=0;i<3;i++){
        scanf("%d",&a1[i]);
    }

    printf("\nEnter elements of 2nd array : ");
    for(int i=0;i<3;i++){
        scanf("%d",&a2[i]);
    }

    printf("\nFirst array : ");
    for(int i=0;i<3;i++){
        printf("%d ",a1[i]);
    }

    printf("\nSecond array : ");
    for(int i=0;i<3;i++){
        printf("%d ",a2[i]);
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a1[i] == a2[j]){
                c[n] = a1[i];
                n++;
                break;
            }
            
        }
    }

    if(n == 0){
        printf("\nNo common elements found");
    }else{
        printf("\nIntersected array : ");
        for(int i=0;i<n;i++){
        printf("%d ",c[i]);
        }
    }

    return 0;

}