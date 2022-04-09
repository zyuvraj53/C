#include<stdio.h> 
#include "decToBin.c"

int main(int argc, char* argv[]){

  int x = 5; // 0000 0101
  int y = 6; // 0000 0110

  binary(x);
  printf("\n"); 
  binary(y);
  printf("\n"); 
  
  int r = x < y;
  
  printf("%d\n", r); 

  binary(r);
  printf("\n"); 
  binary(8);
  //binary(8);

  return 0; 
} 