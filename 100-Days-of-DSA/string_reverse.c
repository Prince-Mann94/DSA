#include<stdio.h>
#include<string.h>
int main(){
    int k;
    printf("Enter size of string : ");
    scanf("%d",&k);

    char ch[k];
    printf("Enter any string : ");
    scanf("%s",ch);

    int start = 0;
    int end = strlen(ch) - 1;

    while(start < end){
        char temp = ch[start];
        ch[start] = ch[end];
        ch[end] = temp;
        
        start++;
        end--;
    }
    printf("Reversed string : %s",ch);
}