#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int arr1[] = {3, 4};
  int arr2[] = {1, 2};

  memcpy(arr1, arr2, 2 * sizeof(int));

  for (int i = 0; i < 2; i++) {
    printf("%d\n", arr1[i]);
  }

  return 0;
}