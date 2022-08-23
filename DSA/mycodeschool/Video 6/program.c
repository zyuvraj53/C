#include <stdio.h>
#include <stdlib.h>

//~ Linked List: Inserting a Node at the beginning

struct Node{
  int data;
  struct Node* next;
} Node;

void insert_at_beginning(int x);
void print_list();

struct Node* head;

int main(int argc, char *argv[]) {

  head = NULL; // (head) □ --> NULL

  //Suppose we want to input n numbers by the user by asking how many it wants n to be

  printf("How many numbers?\n"); 
  int n, i, x;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    printf("Enter the number\n"); 
    scanf("%d", &x);
    insert_at_beginning(x);
    print_list();
  }

  return 0;
}

void insert_at_beginning(int x){
  struct Node *temp = (struct Node*) malloc(sizeof(struct Node)); //~ malloc returns a void pointer, and we need a pointer to Node, so we are type casting this.
  (*temp).data = x; //~ alternate syntax => temp -> data = x;
  (*temp).next = head; //~ alt syn => temp -> next = head; 
  head = temp;
}

void print_list(){
  struct Node *temp = head;
  printf("List is: "); 
  while(temp != NULL){
    printf(" %d", temp->data); 
    temp = temp->next;
  }
  printf("\n"); 
}