#include <stdio.h>
#include <stdlib.h>

int main() {
  int a = 10;
  int *p = &a;

  printf("Address of p is %d\n", &p);
  printf("Value of p is %d, this is also the address of a\n", p);

  printf("Value at p is %d\n", *p);

  int b = 20;
  *p = b; // Will the address in p change now to point to b?

  printf("Address of p is %d\n", &p);
  printf("Value at p is %d\n", *p);

  return 0;
}
