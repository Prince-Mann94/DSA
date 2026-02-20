#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

struct dec_node{
    do{
        struct node 
    }
}
int main(){
    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head -> data = 35;
    head -> link = NULL;

    struct node *current = NULL;
    current = (struct node*)malloc(sizeof(struct node));
    current -> data = 45;
    current -> link = head;

    printf("%d",head->data);
}