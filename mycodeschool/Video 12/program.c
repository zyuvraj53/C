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

//~ Application's memory is divided into several parts:

//~ 1) Stack: On the top is 'Stack' which grows downward
//~ 2) Heap:  The next part is 'Heap' which grows upward
//~ 3) Globals/Static: Then below the Heap are the global and static variables.
//~ 4) Code:  In the last part is where the instructions which we've written live.

//!!! Stack cannot grow during runtime, which means that a program cannot request more memory during its execution, whereas the Heap can.

//!!! The Heap referred to here is not the same as 'Heap Data Structure'.

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!! If malloc or calloc is not able to find any free memory to give to the pointer, then it returns null, which is why we should always check if the pointer is null or not.
int main(int argc, char *argv[]) {
  BEGIN

  //~ Storing in the Heap.
  int *p = (int *) malloc(sizeof(int));
  *p = 10;

  printf("%d\n", *p); 

  //~ After its use, we must free the memory which was occupied by p.
  free(p);


  //> int *p = new int[20];
  //!! In C++, to free an array of memory put the [] operator right after delete.
  //> delete[] arr;

  END
  return 0;
}