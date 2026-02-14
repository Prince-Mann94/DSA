#include<stdio.h>
int main(){
    int r,c;
    printf("Enter row and column size : ");
    scanf("%d %d",&r,&c);

    int top = 0;int right = c-1;
    int left = 0;int bottom = r-1;

    int m[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&m[i][j]);
        }
    }

    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    while(left<=right && top<=bottom){
    for(int i=left;i<=right;i++){
        printf("%d",m[top][i]);
    }
    top++;
    for(int i=top;i<=bottom;i++){
        printf("%d",m[i][right]);
    }
    right--;
    if(top<=bottom){
    for(int i=right;i>=left;i--){
        printf("%d",m[bottom][i]);
    }
}
    bottom--;
    if(left<=right){
    for(int i=bottom;i>=top;i--){
        printf("%d",m[i][left]);
    }
    left++;
  }
}
}