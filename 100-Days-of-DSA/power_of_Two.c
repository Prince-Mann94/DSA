// Check whether given number by user is power of two or not

#include<stdio.h>
#include<stdbool.h>
bool power(int n){
    if(n == 0)
      return false;
    if(n == 1)
      return true;
    if(n %2 != 0)
      return false;
    
    return power(n / 2);
}
int main(){
    int n;
    printf("Enter power of 2 : ");
    scanf("%d",&n);

    printf("Does %d is power of two(1 = yes , 0 = no) : %d",n,power(n));
}