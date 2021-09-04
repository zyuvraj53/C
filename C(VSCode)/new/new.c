#include<stdio.h> 

int main(int argc, char* argv[]){

  int x = 10;
  int y = 20;

  x = x ^ y;
  y = y ^ x;
  x = x ^ y;

  printf("%d\n", x);
  printf("%d\n", y);  

  return 0; 
} 