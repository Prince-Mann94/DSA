// #include<stdio.h>
// int main(){
//     int m1[4][4];
//     int m2[4][4];
//     int a[4][4];

//     printf("Enter elements of 1st matrix : ");
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             scanf("%d",&m1[i][j]);
//         }
//     }

//     printf("\nMatrix 1\n");
//      for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             printf("%d ",m1[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Enter elements of 2nd matrix : ");
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             scanf("%d",&m2[i][j]);
//         }
//     }

//      printf("\nMatrix 2\n");
//      for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             printf("%d ",m2[i][j]);
//         }
//         printf("\n");
//     }

//      for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//            a[i][j] = m1[i][j] + m2[i][j];
//         }
//      }

//      printf("\n");
//     printf("Addition of matrix : \n");
//       for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//      }
// }


#include<stdio.h>
int main(){
    int a,b;
    printf("Enter row size of matrix 1 : ");
    scanf("%d",&a);

    printf("Enter column size of matrix 1 : ");
    scanf("%d",&b);

    printf("Enter elements of matrix 1 : ");
    int m1[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&m1[i][j]);
        }
   }

    int c,d;
    printf("Enter row size of matrix 2 : ");
    scanf("%d",&c);

    printf("Enter column size of matrix 2 : ");
    scanf("%d",&d);

    int m2[c][d];

    printf("Enter elements of matrix 2 : ");
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            scanf("%d",&m2[i][j]);
        }
   }
    int sum[a][b];

   for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        sum[i][j] = m1[i][j] + m2[i][j];
      }
   }

   printf("Addition of matrix 1 and 2 : ");
   for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        printf("%d ",sum[i][j]);
     }
     printf("\n");
   }
}