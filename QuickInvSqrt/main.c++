#include "message.h"
#include <cstdlib>
#include <stdio.h>

int main(){
  Message m;
  m.print_message();

  int (*bar)[5];
  fprintf(stdout, "bar is: %d\n", bar);
  fprintf(stdout, "bar + 1 is: %d", bar + 1);

  return 0;
}