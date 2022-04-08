#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  // We must change the seed to get a new random value
  srand(99); // The default is 1
  // However, we need a new random number every time we execute it.
  // For achieving that, we use time.

  // printf("%d\n", rand());

  time_t timeFromEpoch = time(NULL);
  // time_t is a variable type, and the time() function takes in a pointer, you can have a NULL in it.
  // The time function is like the createCanvas function, it stores the value to the pointer, and returns it just like createCanvas(t=10, t).

  srand(timeFromEpoch);
  int r = rand();
  printf("%d\n", r);
  printf("%d\n", r%10);

  return 0;
}
