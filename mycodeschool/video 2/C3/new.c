#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = 10;
  int *p = &a;

  printf("Address of p is %x\n", &p);
  printf("Value of p is %x\n", p);
  printf("Address of a is %x\n", p);
}
