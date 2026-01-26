#include<stdio.h>
int main(){
    int m1[3][3];
    int m2[3][3];
    int m3[3][3];
    
    printf("Enter 9 elements for Matrix 1 :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    
    printf("Enter 9 elements for Matrix 2 :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&m2[i][j]);
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

   printf("\nMatrix mul : \n");
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        m3[i][j] = 0;
        for(int k=0;k<3;k++){
            m3[i][j] += m1[i][k]*m2[k][j];
        }
    }
   }

   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",m3[i][j]);
    }
    printf("\n");
   }
}