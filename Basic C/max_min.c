#include<stdio.h>
int main(){
   int a,b,c;
   int max,min;
   printf("Enter three num : ");
   scanf("%d %d %d",&a,&b,&c);
   
   max = a;
   if(b>max){
    max = b;
   }
   if(c>max){
    max = c;
   }
   printf("Max num is : %d\n",max);

   min = a;
   if(b<min){
    min = b;
   }
   if(c<min){
    min = c;
   }
   printf("Min num is : %d\n",min);
}