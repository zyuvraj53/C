#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  long long a = 5;
  long long *p_to_a = &a;

  printf("%d\n", sizeof(p_to_a)); 

  return 0;
}