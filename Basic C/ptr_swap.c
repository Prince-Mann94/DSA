#include<stdio.h>
int main(){
    int n1,n2;
    int *a = &n1;
    int *b = &n2;
    printf("Enter two nums : ");
    scanf("%d %d",&n1,&n2);

    printf("Before swapping : a = %d , b = %d\n",*a,*b);

    int temp = *a;
    *a = *b;
    *b = temp;

    printf("After swapping : a = %d , b = %d",*a,*b);

    return 0;
}