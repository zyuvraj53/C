#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(int argc, char *argv[]) {
  int arr[SIZE];
  int i;

  for (i = 0; i < SIZE; i++) {
    arr[i] = i * 2;
  }

  for (i = 0; i < SIZE; i++) {
    printf("%d, ",arr[i]);
  }

  return 0;
}
