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

//~                                   Function Pointers

//~ 
int main(int argc, char *argv[]) {
  BEGIN

  puts("Begin");

  int *p = (int *) malloc(sizeof(int));
  for(int i = 0; i < 1; i++)
    *(p + i) = 0;

  puts("End");

  END
  return 0;
}