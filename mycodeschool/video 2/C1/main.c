#include <stdio.h>
#include <stdlib.h>

int var;// variable initialized to zero

int main() {
  int a; // variables are not initialized to 0, have a garbage value.
  int *p;

  printf("%x\n", p);
  printf("%x\n", a);
  printf("%x\n", var);

  //static and global variables are initialized to 0, because that memory is allocated at compile time, whereas for local variables, their memory is allocated at runtime, and are located on the Stack.

  return 0;
}

// This should not have printed anything, but it printed out 4194432, for both 'p' and 'a' in decimal