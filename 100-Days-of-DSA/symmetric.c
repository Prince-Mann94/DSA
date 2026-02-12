#include<stdio.h>
int main(){
int r,c;
int symm = 1;
printf("Enter row and column size of matrix : ");
scanf("%d %d",&r,&c);

if(r!=c){
    printf("Row and column size should be equal");
}else{

int m[r][c];
printf("Enter elements of matrix : ");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&m[i][j]);
    }
}

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",m[i][j]);
    }
    printf("\n");
}

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(m[i][j] != m[j][i]){
            symm = 0;
            break;
        }
    }
}

if(symm == 1){
    printf("Matrix is symmteric");
}else{
    printf("Matrix is not symmetric");
}

}
}