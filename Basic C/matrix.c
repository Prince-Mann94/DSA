#include<stdio.h>
int main(){
    int m1[3][3];
    int m2[3][3];

    
    printf("Enter 9 elements for Matrix 1 :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d ",&m1[i][j]);
        }
    }
    
    printf("Enter 9 elements for Matrix 2 :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d ",&m2[i][j]);
        }
    }
    printf("\nMatrix 1 : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        printf("%d ",m1[i][j]);
    }
    printf("\n");
   }
   printf("\nMatrix 2 : \n");
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",m2[i][j]);
    }
    printf("\n");
   }
}