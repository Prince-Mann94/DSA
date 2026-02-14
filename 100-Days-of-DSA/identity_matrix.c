#include<stdio.h>
int main(){
    int r,c;
    printf("Enter row and column size : ");
    scanf("%d %d",&r,&c);

    int m[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&m[i][j]);
        }
    }

    int is_identity = 1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j && m[i][j] != 1)
                is_identity = 0;
            if(i!=j && m[i][j] != 0)  
                is_identity = 0;      
        }
    }
    if(is_identity == 1){
        printf("Identity matrix");
    }else{
        printf("Not an identity matrix");
    }
}