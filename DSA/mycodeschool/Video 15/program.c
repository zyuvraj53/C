#include <stdio.h>
#include <stdlib.h>

//~ Data Structures: Array Implementation of stacks

#define MAX_SIZE 101
#define RED "\e[0;31m"

int top = -1;
int a[MAX_SIZE];

void push(int);
void pop();
int atTop();
void printStack();

int main(int argc, char *argv[]) {

  push(2);printStack();
  push(5);printStack();
  push(10);printStack();
  pop();printStack();
  push(12);printStack();

  return 0;
}

void push(int x){
  if(top == MAX_SIZE - 1){
    fprintf(stderr, RED "Error: Stack Overflow\n"); 
    return;
  }
  a[++top] = x;
}

void pop(){
  if(top == -1){
    fprintf(stderr, RED "No element to pop\n"); 
    return;
  }
  top--;
}

int atTop(){
  return a[top];
}

void printStack(){
  int i;
  printf("Stack: "); 
  for(int i = 0; i <= top; i++){
    printf("%d, ", a[i]); 
  }
  printf("\n"); 
}