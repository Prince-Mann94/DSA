#include<stdio.h>
int main(){
    int r,c;
    int sum = 0;
    printf("Enter row and column size : ");
    scanf("%d %d",&r,&c);

    int m[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&m[i][j]);
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j){
                sum += m[i][j];
            }
        }
    }

    printf("%d",sum);
}