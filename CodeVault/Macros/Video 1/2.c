#include <stdio.h>
#include<stdlib.h>

#define PRODUCT(X, Y) X * Y

int main(int argc, char *argv[]) {
  int a = 5, b = 6;

  printf("%d\n", PRODUCT(a, b)); 

  return 0; 
}