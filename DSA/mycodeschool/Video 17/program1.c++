#include <iostream>
#include <string.h>
#include <stack> //& From C++ STL

//~ When we reverse a linked list using recursion, we're still using the stack in the computer's memory, i.e., we are using an implicit stack, but here we'll see how to solve it using an explicit stack.

void reverse(char*, int);

int main(){
  char c[51];
  printf("Enter a string: "); 
  gets(c);
  reverse(c, strlen(c));
  printf("Output String: %s", c);
}   
    
void reverse(char *c, int size){
  std::stack<char> S;
  //push loop
  for(int i = 0; i < size; i++){
    S.push(c[i]);
  }
  //pop loop
  for(int i = 0; i < size; i++){
    c[i] = S.top();//overwrite the character at index i
    S.pop();//pop the top element
  }
}