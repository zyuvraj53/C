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

//~ If we have a block of memory, and we want to change the size of this assigned memory, then we can use realloc...

//~ void *realloc(void *ptr, size_t size);
//~ the void *ptr is the starting address of the existing block, and the next one is the size of the block which we want, if it cannot just lengthen the previously assigned memory, then it creates a new block of memory, and copies everything into it, and deletes the previously held memory.

//% Something interesting: (int *) realloc(ptr, 0); is the equivalent of free(ptr);

int main(int argc, char *argv[]) {
  BEGIN

  END
  return 0;
}