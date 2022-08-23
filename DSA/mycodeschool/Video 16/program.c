#include <stdio.h>
#include <stdlib.h>

//~ Data Structures: Linked List Implementation of Stack

//~ The cost of deleting or inserting at the end of a Linked List is O(n), but at the beginning it is , O(1), so inserting or deleting at the end is not an option for us, as we won't be able to push or pop in constant time.

void push(int);
void pop();

typedef struct Node{
  int data;
  Node *link;
}Node;

Node *top = NULL; //% When top is NULL, my stack is empty.

int main(int argc, char *argv[]) {

  return 0;
}

void push(int x){
  Node *temp = (Node*) malloc(sizeof(Node));//< unlike top, temp is not poining to NULL, but to a memory address.
  temp -> data = x; //< x is set as temp's data field
  temp -> link = top;//< top is set at temp's link field(which is Node* itself), i.e., NULL
  top = temp;//< top is set as temp
}

void pop(){
  Node *temp;//< We make a temp var of type Node*
  if(top == NULL) return; //< if the top is pointing to null, it means that the list is empty, do nothing
  temp = top;//< Otherwise, make temp point to whatever top was pointing
  top = top -> link;//< make top point to whatever top's link was pointing to, i.e. the address of the next node
  free(temp);//< and then free whatever temp was pointing to
}