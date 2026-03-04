#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};

    void insertAtEnd(struct node **head,int value){
        struct node *newnode = malloc(sizeof(struct node));
        if(newnode == NULL){
            printf("\nMemory allocation failed");
            return;
        }
        newnode -> prev = NULL;
        newnode -> data  = value;
        newnode -> next = NULL;

        if(*head == NULL){
            *head = newnode;
            return;
        }

        struct node *temp = *head;
        while(temp != NULL){
            temp = temp->next;
        }

        temp->next = newnode;
        newnode->prev = temp;  
    }

    void insertAtBeginning(struct node **head,int value){
    if(newnode == NULL){
        printf("\nMemory allocation failed");
        return;

    struct node *newnode = malloc(sizeof(struct node));
    newnode -> prev = NULL;
    newnode -> next = NULL;
    newnode -> data = value;
    if(*head != NULL){
        *head -> prev = newnode;
    }
    *head = newnode;
    }
    }
    void display(struct node *head){
        struct node *temp = head;
        printf("\nLinked list");

        while(temp != NULL){
            printf("%d -> ",temp->data);
            temp = temp->next;
        }

    }
    
    int main(){
        struct node *head = NULL;
        insertAtEnd(&head,14);
        insertAtEnd(&head,20);
        insertAtEnd(&head,25);

        insertAtBeginning(&head,5);
        insertAtBeginning(&head,10);
        insertAtBeginning(&head,15);
    }





































    /* void insertAtBeginning(struct Node **head, int value) {
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = *head;

    *head = newNode;
} */