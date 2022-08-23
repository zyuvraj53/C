#include <stdio.h>
#include <stdlib.h>

//~ Linked List: Deleting a node at Nth position

//* Requirements:
//* 1. Fix the links.
//* 2. Free the space.

typedef struct Node {
  int data;
  struct Node *next;
} Node;

Node *head;
Node *end_node;        // end_node has been defined as a global variable
void insert_at_end(int data); // Insert an integer at the end of the list
void print();          // print all the elements of the list
void delete (int n);   // delete node at position n

int main(int argc, char *argv[]) {

  head = NULL;

  insert_at_end(2);
  insert_at_end(4);
  insert_at_end(6);
  insert_at_end(5); // 2, 4, 6, 5

  print();

  int n;
  printf("\nEnter a position\n");
  scanf("%d", &n);
  delete(n);

  print();

  return 0;
}

void insert_at_end(int data) {
  Node *temp = (Node *)malloc(sizeof(Node));
  temp->data = data;
  temp->next = NULL;
  if(head == NULL) {
    head = temp;
    end_node = temp;
  } else {
    end_node->next = temp;
    end_node = temp;
  }
}

void delete(int n){
  Node *temp1 = head;
  if(n == 1){
    head = temp1->next; //head now points to the second node.
    free(temp1);
    return;
  }
  for(int i = 1; i <= n-2; i++) //goes to the (N-1)th node, if starting index is 1, if starting index is 0, then change to n-1
    temp1 = temp1->next;

  Node *temp2 = temp1->next; //points to the Nth node
  temp1->next = temp2->next;
  free(temp2);
}

void print() {
  Node *temp = head;
  printf("List is: ");
  while (temp != NULL) {
    printf(" %d", temp->data);
    temp = temp->next;
  }
}