#include <stdio.h>
#include <stdlib.h>

//~ Linked List - Implementation in C/C++

struct Node{
  int data;
  struct Node* link;//~ In C++, we can use "Node* link" instead of "struct Node* link"
};

//~ Although, that can be avoided by simply declaring a typedef

typedef struct Nodal{
  int data;
  Nodal* link;
}Nodal;

Nodal *head;

int main(int argc, char *argv[]) {

  head = NULL;

  return 0;
}