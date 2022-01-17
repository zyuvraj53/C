#include<stdio.h> 
#include<stdlib.h> 

int main(){
  int a; //variables are initialized to 0.
  int *p;

  printf("%x\n", p);

  return 0; 
} 

//This should not have printed anything, but it printed out 4194432, for both 'p' and 'a' in decimal