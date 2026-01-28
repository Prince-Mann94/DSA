#include<stdio.h>
int main(){
    int arr[5];
    int search,found = 0;
    printf("Enter elements of array : ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nArray : ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

    printf("\nEnter num to search : ");
    scanf("%d",&search);

    for(int i=0;i<5;i++){
        if(search == arr[i]){
           found = 1;
        }else{
           
        }
    }
    if(found == 1){
        printf("This num is in the array : %d",search);
    }else{
        printf("Sorry %d this num is not in this array",search);
    }

}