#include<stdio.h>
int main(){
    int n,index;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int search,found = 0;
    int count = 0;
    int arr[n];

    printf("Enter elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Array : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("\nEnter num to search : ");
    scanf("%d",&search);

    int i;
    for( i=0;i<n;i++){
        count++;
        if(search == arr[i]){
           found = 1;
           index = i;
        }
    }
    if(found == 1){
        printf("This num is in the array on index : %d\n",index);
    }else{
        printf("Sorry %d this num is not in this array\n",search);
    }

    printf("Total comparisions count is : %d",count);
}