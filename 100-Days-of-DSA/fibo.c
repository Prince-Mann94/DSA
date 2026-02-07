#include<stdio.h>
int fibo(int n){
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else{
        return fibo(n-1) + fibo(n-2);
    }
    }

int main(){
    int n;
    printf("Enter num : ");
    scanf("%d",&n);

    printf("Fibo at %d : %d",n,fibo(n));
}

// Series of fibo

// int fun(int n){
//     if(n == 0)
//         return 0;
//     if(n == 1)
//         return 1;
//     else
//        return fun(n-1) + fun(n-2);
// }

// int main(){
//     int n;
//     printf("Enter num for fibo : ");
//     scanf("%d",&n);

//     for(int i=0;i<n;i++){
//     printf("%d ",fun(i));
//     }
// }