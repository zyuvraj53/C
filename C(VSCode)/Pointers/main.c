#include<stdio.h> 

int main(){

  int a = -512;
  int b = 512;
  int *pB = &b;

  printf("%u  %p\n", a, pB); 

  return 0;
} 

//check what 'u' does.
//check what 'i' does.
//check what 'p, a' does.


// printf("%s\n", a); 
// printf("%f\n", a); 
// printf("%g\n-----------------\n", a); 
// printf("%c\n", a); 
// printf("%n\n", a); 

