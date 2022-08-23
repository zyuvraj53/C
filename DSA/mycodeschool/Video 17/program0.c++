#include <iostream>
#include <string.h>
#include <stack> //& From C++ STL

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