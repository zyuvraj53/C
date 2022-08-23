#include <stdio.h>
#include <stdlib.h>

//~                       Data Structures: Linked List Implementation of Queue

//~ We will use a modified version of a Linked List where we also have a pointer pointing to the end of the linked list.
//~ We will dequeue from the head, and move the head pointer to the next node.
//~ We will enqueue from the tail, and move the tail pointer to the newly created node.

typedef struct Node{
  int data;
  struct Node* next; //% This is to store the address of the next node
}Node;

void enqueue(int);
void dequeue();

Node *front = NULL;
Node *rear = NULL; //% This is the address of the last node.

int main(int argc, char *argv[]) {

  enqueue(2);
  dequeue();
  dequeue();

  return 0;
}

void enqueue(int x){
  Node* temp = (Node*)malloc(sizeof(Node)); //% This is a temp node created to put in the linked list
  temp->data = x;
  temp->next = NULL;

  if(front == NULL && rear == NULL){
    front = rear = temp;
    return;
  }

  rear->next = temp;
  rear = temp;
}

void dequeue(){
  Node* temp = front; //% Make temp store the address of front

  if(front == NULL){
    fprintf(stderr, "\e[0;31m" "The queue is empty."); 
    return;
  }

  if(front == rear){
    front = rear = NULL;
  }else{
    front = front->next;
  }
  
  free(temp);
}