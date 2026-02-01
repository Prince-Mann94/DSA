#include<stdio.h>
int main(){

    //sum of elements of rows and column of matrix

    int a1[3][3];
    int r1 = 0; int r2 = 0; int r3 = 0;
    int c1 = 0; int c2 = 0; int c3 = 0;
    printf("Enter elements of matrix  : ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a1[i][j]);
        }
    }

    printf("Matrix \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a1[i][j]);
        }
        printf("\n");
    }

    // Rows sum of matrix
        for(int j=0;j<3;j++){
            r1 += a1[0][j];
        }
        for(int j=0;j<3;j++){
            r2 += a1[1][j];
        }
        for(int j=0;j<3;j++){
            r3 += a1[2][j];
        }


        // Columns sum of matrix 1
          for(int i=0;i<3;i++){
            c1 += a1[i][0];
        }
        for(int i=0;i<3;i++){
            c2 += a1[i][1];
        }
        for(int i=0;i<3;i++){
            c3 += a1[i][2];
        }

    printf("\nRow 1 sum : %d",r1);
    printf("\nRow 2 sum : %d",r2);
    printf("\nRow 3 sum : %d\n",r3);

    printf("\nColumn 1 sum : %d",c1);
    printf("\nColumn 2 sum : %d",c2);
    printf("\nColumn 3 sum : %d",c3);

}