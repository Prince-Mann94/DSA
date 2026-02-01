#include<stdio.h>
int main(){
    int al[6];
    int n,pos;

    printf("Enter elements of array : ");
        for(int i=0;i<5;i++){
        scanf("%d",&al[i]);
    }

    printf("Array : ");
     for(int i=0;i<5;i++){
        printf("%d ",al[i]);
    }

    printf("\nEnter no. to be inserted in array : ");
    scanf("%d",&n);

    printf("Enter at which position you want to add : ");
    scanf("%d",&pos);

    for(int i=5;i>pos;i--){
        al[i] = al[i-1];
    }

    al[pos] = n;

    printf("Array after insertion : ");
    for(int i=0;i<6;i++){
        printf("%d ",al[i]);
    }
