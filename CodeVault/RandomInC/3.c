#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double rand_double() {
  return ((double)rand()) / ((double)RAND_MAX); // 0x7FFF or 32767 or 2¹⁵ - 1
}

//* This operation always gives a value between 0 and 1;
//* rand_double() ∈ [0, 1]
//* to get number upto 5, just multiply by 5, since [0, 1] * 5 => [0, 5]

//? Now let's say we need numbers from 1 to 2
//? [0, 1] + 1 ==> [1, 2]
//? for 3 to 8
//? [0, 1] * 5 ==> [0, 5] + 3 ==> [3, 8]

//# So, basically for m to n
//# [0, 1]*(n - m) ==> [0, n - m] + m ==> [m, n]

double rand_double_interval(double lower, double upper) {
  double d = ((double)rand()) / ((double)RAND_MAX);
  return d * (upper - lower) + lower;
}

int main(int argc, char *argv[]) {
  for (int i = 1; i <= 100; i++) {
    printf("%lf, ", rand_double_interval(4.3, 5.567));
  }

  return 0;
}
