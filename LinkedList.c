#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
typedef struct ListNode {
  int val;
  ListNode *next;
} ListNode;

void insert_at_end(int, ListNode **);
void print(ListNode *);

int main(int argc, char *argv[]) {

  ListNode *head1 = NULL;
  insert_at_end(1, &head1);
  print(head1);

  return 0;
}

void insert_at_end(int val, ListNode **head) {
  ListNode *temp = (ListNode *)malloc(sizeof(ListNode));
  if (*head == NULL) {
    temp->val = val;
    temp->next = NULL;
    *head = temp;
    return;
  }
  //ListNode *temporary = head;
  //while(temporary != NULL){
  //  temporary = temporary->next;
  //}
}

void print(ListNode *head) {
  ListNode *temp = head;
  printf("List is: ");
  while (temp != NULL) {
    printf(" %d", temp->val);
    temp = temp->next;
  }
}