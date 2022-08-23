#include <stdio.h>
#include <stdlib.h>

//~ Linked List: Inserting a node at Nth position

//~ Address:  head      200         100         250
//~ Node:      ■  -->  ■   ■  -->  ■   ■  -->  ■   ■  -->  □
//~ Value:    200      2, 100      4, 250      6,  0      NULL
//~                      ↑           ↑           ↑
//~ Node No.:            1           2           3

//* The insert function should be able to handle the following situations:
//*   1. The maximum possible position should be 4.
//*   2. 5 is an invalid position.
//*   3. If we want to insert at beginning, the position should be 1.

//# Let us assume, for the sake of simplicity, we always give valid position, so that we do not have to handle the case for invalid position.

//~ Let us say that we want to insert a node at position 3, with value 8.
//~ For this, we will have to go to the (n-1)th node, is this case the 'n' is 3, so we will have to go to 3-1, i.e., 2nd node.
//~ The first thing we'll have to do is set the link field of the newly created node to link field of the (n-1)th node.
//~ Let's say the address we get for the newly created node is 150, we will have to break the link of the Nth and (N-1)th node, and set the link field of the (N-1)th node as the address of this newly created node.

//~ Address:  head      200         100            250
//~ Node:      ■  -->  ■   ■  -->  ■   ■  --⨯⨯->  ■   ■  -->  □
//~ Value:    200      2, 100      4, 250⨯->150   6,  0      NULL
//~                                  ↓              ↑
//~                                  ↓     150      ↑
//~                                  ↓    ■   ■     ↑
//~                                  -->  8, 250  -->

//@ Coding:

typedef struct Node {
  int data;
  Node *next;
} Node;

Node *head;

void insert(int data, int pos);
void print();

int main(int argc, char *argv[]) {

  head = NULL;  // empty list
//~  head
//~   □ 
//~  0x0
  insert(2, 1); // List: 2 
//~  head      0x1  
//~   ■  -->  ■   □
//~  0x1      2, 0x0
  insert(3, 2); // List: 2, 3
//~  head       0x1          0x2 
//~   ■  -->  ■    ■  -->  ■    □ 
//~  0x1      2, 0x2       3,  0x0
  insert(4, 1); // List: 4, 2, 3
//~  head          0x1          0x2 
//~   ■  --⨯⨯->  ■    ■  -->  ■    □ 
//~  0x1⨯->0x3   2,  0x2      3,  0x0
//~   ↓              ↑
//~   ↓     0x3      ↑
//~   ↓    ■   ■     ↑
//~   -->  4, 0x1  -->
  insert(5, 2); // List: 4, 5, 2, 3
//~  head       0x3                 0x1          0x2 
//~   ■  -->  ■    ■    --⨯⨯->    ■    ■  -->  ■    □ 
//~  0x3      4, 0x1⨯->0x4        2,  0x2      3,  0x0
//~             ↓                      ↑
//~             ↓         0x4          ↑
//~             ↓        ■   ■         ↑
//~             -->      5, 0x1      -->
  print();
//~  head       0x3          0x4          0x1          0x2         
//~   ■  -->  ■    ■  -->  ■    ■  -->  ■    ■  -->  ■    □
//~  0x3      4, 0x4       5,  0x1      2,  0x2      3,  0x0 
  return 0;
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