#include<stdio.h>
int main(){
    // conerts uppercase string to lowercase
    char str[100];
    printf("Enter any string : ");
    scanf("%s",str);

    for(int i=0;str[i]!='\0';i++){
        if(str[i] >=65 && str[i] <=90)
           str[i] = str[i]+32;
    }
    
     printf("Lower case string : %s",str);
}
    
