#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
int main(){
    struct node *head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current -> data = 50;
    current -> link = NULL;

    head -> link = current;
    current = malloc(sizeof(struct node));
    current -> data = 65;
    current -> link = NULL;

    head -> link -> link = current;

    // head -> link = current;
    printf("Value at head : %d\n",head->data);
    printf("Vale at current : %d\n",head->link->data);
    printf("Value at current 2 : %d",head->link->link->data);

}
