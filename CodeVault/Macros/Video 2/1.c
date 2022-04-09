#include <stdio.h>
#include <stdlib.h>

#define PRINT_VAR(X)\
  printf(#X " is %d at address %p\n", X, &X); //# #X prints the name of the variable itself.
                                      //* Won't work with numbers, as numbers don't have any addresses

int main(int argc, char *argv[]) {
  int a = 5;

  PRINT_VAR(a);

  return 0;
}