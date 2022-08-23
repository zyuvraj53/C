#include <stdio.h>
#include <stdlib.h>

//~ Linked List: Reverse a Linked List using recursion

typedef struct Node {
  int data;
  Node *next;
} Node;

void insert(int data, int pos);
void reverse(Node *p);
void print(Node *p);

Node *head;

int main(int argc, char *argv[]) {

  head = NULL;
  insert(1, 1);
  insert(2, 2);
  insert(3, 3);
  insert(4, 4);
  print(head);
  printf("\n");
  reverse(head);
  printf("\n");
  print(head);

  return 0;
}

void insert(int data, int pos) {
  Node *temp1 = new Node();
  temp1->data = data;
  temp1->next = NULL; // NULL = 0
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

void reverse(Node *p) {
  if (p->next == NULL) {
    head = p;
    return;
  }
  reverse(p->next);
  Node *q = p->next;
  q->next = p;
  //~ The above two lines can be written as
  //~ p -> next -> next = p;
  p->next = NULL;
}

void print(Node *p) {
  if (p == NULL)
    return;
  printf("%d ", p->data);
  print(p->next);
}