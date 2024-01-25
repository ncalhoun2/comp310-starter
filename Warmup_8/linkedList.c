#include <stdio.h>
#include <stdlib.h>

struct LinkedList{
    struct Node* head;
};

struct Node{
    int data;
    struct Node* next;
};

void createLinkedList(struct LinkedList* list){
    list->head = NULL;
}

void push(struct LinkedList* list, int data){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));// from generative ai
    new_node->data = data;
    new_node->next = list->head;
    list->head = new_node;
}

void printList(struct LinkedList* list){
    struct Node* tnode = list->head;
    while(tnode != NULL){
        printf("%d ", tnode->data);
        tnode = tnode->next;
    }
}

void deleteNode(struct LinkedList* list, int key){
    struct Node* temp = list->head;
    struct Node* prev = NULL;

    if(temp != NULL && temp->data == key){
        list->head = temp->next;
        return;
    }
    while(temp != NULL && temp->data != key){
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL){
        return;
    }
    prev->next = temp->next;

}


int main() {
    struct LinkedList llist;
    createLinkedList(&llist);

    push(&llist, 7);
    push(&llist, 1);
    push(&llist, 3);
    push(&llist, 2);

    printf("\nCreated Linked list is:\n");

    printList(&llist);

    deleteNode(&llist,1);

    printf("\nLinked List after Deletion of 1:\n");

    printList(&llist);


}




