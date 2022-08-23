#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int B[2][3] = {{1,2,3}, {4,5,6}};

  // int *p = B;//will result in a compilation error
  int (*p)[3] = B;
  int (*ptr)[3] = B;
  printf("%d %d\n", B, &B[0]); //this line 
  printf("%d %d %d\n", *B, B[0], &B[0][0]); //and this line are the same 
  printf("%d\n", (B+1));
  printf("%d\n",*(B+1));

  return 0;
}
