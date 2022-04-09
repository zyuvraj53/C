#include <stdio.h>
#include <stdlib.h>

#define PRODUCT1(X, Y) X *Y
#define PRODUCT2(X, Y) (X) * (Y)

int main(int argc, char *argv[]) {
  int a = 5, b = 6;

  printf("%d\n", PRODUCT1(a + 1, b));
  printf("%d\n", PRODUCT2(a + 1, b));

  return 0;
}