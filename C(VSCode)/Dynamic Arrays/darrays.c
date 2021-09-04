#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int *arr = malloc(sizeof(int) * 9);
  int *temp = realloc(arr, sizeof(int) * 4);
  if (temp == NULL) {
    perror("Failed to reallocate");
    exit(1);
  }
  arr = temp; // Reassign arr to the return value of realloc if reallocation was successful.

  return 0;
}