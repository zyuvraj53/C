#include <stdio.h>
#include <stdlib.h>

//~ 11. Pointers and multidimensional arrays

int main(int argc, char *argv[]) {

  int B[][3] = {{2, 3, 6},//~ 2 at Ox200, and so on
                {4, 5, 8}};//~ In C, arrays must have bounds for all arrays except the first

  printf("%x\n", &B); 
  int (*p)[3] = B;//~ B will return a 1D array pointer to 3 integers
  printf("%x\n", p); 

  //~ Questions:
  printf("%d\n", B); //The first address of B
  printf("%d\n", *B);  //The first address of the first 1D array
  printf("%d\n", B[0]); //The address of first 1D array
  printf("%d\n", &B[0][0]);  //The first element address

  //~ B[i][j] = *(B[i] + j)
  //~         = *(*(B + i) + j)

  return 0;
}