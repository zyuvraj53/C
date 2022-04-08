#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randInterval(int lower, int upper) {
  int random = rand() % (upper - lower + 1) + lower;
  return random;
}

int main(int argc, char *argv[]) {
  // Getting numbers from 1 to n
  srand(time(NULL));
  int random = rand() % 100; // return from 0 to 99
  printf("%d\n", random);

  //* How to get numbers from m to n:
  //* [0, 10] + 4 => [4, 14]
  //* To get from 50 to 150

  random = rand() % 100 + 50;
  printf("%d\n", random);

  int counter = 0;
  while (true) {
    printf("%d, ", randInterval(34, 35));
    counter ++;
    if(counter == 101)
      break;
  }

  return 0;
}
