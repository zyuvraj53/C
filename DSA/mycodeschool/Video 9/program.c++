#include <stdio.h>
#include <stdlib.h>

//~ Linked List: Reverse a linked list - Iterative Method


typedef struct Node {
  int data;
  Node *next;
} Node;


struct Node *head;

struct Node* reverse(Node *head);
void insert(int data, int pos);
void print();


int main(int argc, char *argv[]) {

  head = NULL;
  insert(2, 1);
  insert(4, 1);
  insert(6, 1);
  insert(8, 1);
  print();
  head = reverse(head);
  print();

  return 0;
}

Node* reverse(Node *head) {
  Node *current, *prev, *next;
  current = head;
  prev = NULL;
  while (current != NULL) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  head = prev;
  return head;
}

void insert(int data, int pos) {
  Node *temp1 = new Node();
  temp1->data = data;
  temp1->next = NULL; //NULL = 0
  if (pos == 1) {
    temp1->next = head;
    head = temp1;
    return;
  }

  Node *temp2 = head;
  for (int i = 0; i < pos - 2; i++) {
    temp2 = temp2->next;
  }
  temp1->next = temp2->next;
  temp2->next = temp1;
}
void print(){
  Node *temp = head;
  while(temp != NULL){ //NULL=0
    printf(" %d", temp->data);
    temp = temp->next; 
  }
  printf("\n"); 
}