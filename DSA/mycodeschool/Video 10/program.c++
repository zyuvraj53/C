#include <stdio.h>
#include <stdlib.h>

//~ Linked List: Print elements of a linked list in forward and reverse using recursion.

typedef struct Node {
  int data;
  Node *next;
} Node;

Node *head;

void insert(int data, int pos);
void print(Node *p);
void print_rev(Node *p);

int main(int argc, char *argv[]) {

  head = NULL;
  insert(1, 1);
  insert(2, 2);
  insert(3, 3);
  insert(4, 4);
  insert(5, 5);

  print(head);
  printf("\n");
  print_rev(head);

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

void print(Node *p) {
  if (p == NULL)
    return;
  printf("%d ", p->data);
  print(p->next);
  //~ To print the list in reverse order, just call the function first and print later.
}

void print_rev(Node *p) {
  if (p == NULL)
    return;
  print_rev(p->next);
  printf("%d ", p->data);
}