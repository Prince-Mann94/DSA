#include<stdio.h>
    int fact(int n){
        int fact = 1;
        for(int i=1;i<=n;i++){
            fact*=i;
        }
        return fact;
    }

    int main(){
        int n,c,r,d;
        printf("Enter n : ");
        scanf("%d",&n);

        printf("Enter r : ");
        scanf("%d",&r);

        d = n-r;
       c = fact(n)/(fact(r)*fact(d));

       printf("Combination : %d",c);        

    }

