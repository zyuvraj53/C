#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = 1;
  for (int i = 1; i <= 31; i++) {
    a = (a<<1) + 1;
  }

  int sizeInBits = sizeof(a) * 8;
  for(int i = 1; i <= sizeInBits; i++) {
    if(a & (1<<(sizeInBits-i))) {
      printf("1");
    } else {
      printf("0");
    }
  }

  // printf("%d\n", a);
}
