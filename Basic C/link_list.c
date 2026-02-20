#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};


void insertAtEnd(struct Node **head, int value){
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

   
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;

    
    while (temp->next != NULL) {
        temp = temp->next;
    }

 
    temp->next = newNode;
}

void insertAtBeginning(struct Node **head, int value) {
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = *head;

    *head = newNode;
}

void displayList(struct Node *head) {
    struct Node *temp = head;

    printf("\nLinked List: ");

    int count = 0;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
        count++;
    }
    printf("NULL\n");
    printf("\nNumber of nodes = %d",count);
}

void deleteValue(struct Node **head,int index){
    if(*head == NULL){
        printf("\nList is empty!");
        return;
    }

    struct Node *temp = *head;
    struct Node *prev = NULL;

    if(temp->data == index){
        *head = temp->next;
        
    }

    while(temp != NULL && temp->data != index){
        prev = temp;
        temp = temp->next;
    }
        prev->next = temp->next;
}

int main() {
    struct Node *head = NULL;
    int index;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    displayList(head);
    insertAtBeginning(&head, 5);
    displayList(head);
    printf("\nEnter index at which you want to delete : ");
    scanf("%d",&index);
    deleteValue(&head,index);
    displayList(head);
    return 0;
}