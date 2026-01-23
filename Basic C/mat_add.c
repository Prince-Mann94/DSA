#include<stdio.h>
int main(){
    int m1[4][4];
    int m2[4][4];
    int a[4][4];

    printf("Enter elements of 1st matrix : ");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&m1[i][j]);
        }
    }

    printf("\nMatrix 1\n");
     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d ",m1[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements of 2nd matrix : ");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&m2[i][j]);
        }
    }

     printf("\nMatrix 2\n");
     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d ",m2[i][j]);
        }
        printf("\n");
    }

     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
           a[i][j] = m1[i][j] + m2[i][j];
        }
     }

     printf("\n");
    printf("Addition of matrix : \n");
      for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
     }
}