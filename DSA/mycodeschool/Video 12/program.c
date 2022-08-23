#include <stdio.h>
#include <stdlib.h>

//~ Linked List: Intro to Doubly Linked List

typedef struct SNode {
  int data;
  struct SNode *next;
} SinglyLinkedList;

typedef struct DNode {
  int data;
  struct DNode *next;
  struct DNode *prev;
} DoublyLinkedList;

int main(int argc, char *argv[]) {

  return 0;
}