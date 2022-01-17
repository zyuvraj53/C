#include <stdio.h>
#include <stdlib.h>

int main() {

  int a = 10;
  int *p = &a;

  // Pointer Arithmetic
  printf("Address p is %x\n", p);
  printf("Value at address p is %d\n", *p);
  printf("Address p+1 is %x\n", p + 1);
  printf("Value at address p+1 is %d\n", *(p+1));

  return 0;
}