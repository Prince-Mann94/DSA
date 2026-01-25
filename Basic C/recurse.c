#include<stdio.h>
    int fun(int n){
    if(n == 1)
        return 1;
    else
        return n + fun(n-1);
    }
    int main(){
       int sum = fun(3);
       printf("%d",sum);
        return 0;
}

int fun(int n){
    if(n == 1)
        return 1;
    else
        return 1 + fun(n-1);
}
int main(){
    int count = fun(5);
    printf("%d",count);
}