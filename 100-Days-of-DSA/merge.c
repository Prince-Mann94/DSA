#include<stdio.h>
int main(){
    // Taking array and then merging
    int n1,n2,k=0;
    printf("Enter size of array 1 : ");
    scanf("%d",&n1);

    printf("Enter size of array 2 : ");
    scanf("%d",&n2);

    int a1[n1];
    int a2[n2];
    int c[n1+n2];

    printf("Enter 1st array : ");
    for(int i=0;i<n1;i++){
        scanf("%d",&a1[i]);
    }

    printf("1st Array : ");
    for(int i=0;i<n1;i++){
        printf("%d ",a1[i]);
    }

    printf("\nEnter 2nd array : ");
    for(int i=0;i<n2;i++){
        scanf("%d",&a2[i]);
    }

    printf("2nd Array : ");
    for(int i=0;i<n2;i++){
        printf("%d ",a2[i]);
    }

    int i=0,j=0;
   while(i<n1 && j<n2){
    if(a1[i] < a2[j]){
        c[k++] = a1[i++];
    }else{
        c[k++] = a2[j++];
    }
   }
   while(i<n1){
    c[k++] = a1[i++];
   }
   while(j<n2){
    c[k++] = a2[j++];
   }

    printf("\nMerged array : ");
    for(int i=0;i<n1+n2;i++){
        printf("%d ",c[i]);
    }
}