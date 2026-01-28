#include<stdio.h>
int bin(int num){
    int bin = 0;
    int n = 1;
    int rem;
    while(num!=0){
        rem=num%2;
        bin += rem*n;
        n = n*10;
        num=num/2;
    }
    return bin;
}
int main(){
    int num,n,rem;
    printf("Enter num that to be shifted : ");
    scanf("%d",&num);

    printf("\nNum in binary : %d\n",bin(num));

    int right_shift = num >> 1;
    int left_shift = num << 1;

    printf("\nLeft shift : %d",left_shift);
    printf("\nright shift : %d\n",right_shift);

    printf("\nLeft shift in binary : %d",bin(left_shift));
    printf("\nRight shift in binary : %d",bin(right_shift));
    
}
    

