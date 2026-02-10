#include<stdio.h>
int main(){
    int num,original;
    int rem,new = 0;
    printf("Enter any num : ");
    scanf("%d",&num);

    original = num;
    while(num > 0){
    rem = num % 10;
    new = (new * 10) + rem;
    num = num/10;
    }

    if(original == new){
        printf("Palindrome number");
    }else{
        printf("Not a palindrome number");
    }
}