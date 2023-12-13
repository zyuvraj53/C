#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BEGIN \
  double time_spent = 0.0;\
  clock_t begin = clock();
#define END \
  clock_t end = clock();\
  time_spent += (double)(end - begin) / CLOCKS_PER_SEC;\
  printf("[Finished in %f]", time_spent);

//~ This video just explains that never return a statically allocated variable from a function as the memory might've been overwritten by something else, rather use a dynamically allocated variable, as one has to explicitly call to free the assigned memory.

int main(int argc, char *argv[]) {
  BEGIN

  END
  return 0;
}