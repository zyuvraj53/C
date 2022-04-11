#include <stdio.h>
#include <stdlib.h>
#include <string.h>//? REQUIRED HANDLER FOR memcpy

int main(int argc, char *argv[]) {

  int arr1[] = {3, 4};
  int arr2[] = {1, 2};

  //% This function can overwrite just like in this example.

  memcpy(arr1, arr2, 2 * sizeof(int));//~ The first array is the destination, the second array remains unchanged
  //~ The third argument is how much we want to copy

  for (int i = 0; i < 2; i++) {//& Because, we have copied on the first array, we're gonna print the 
    printf("%d\n", arr1[i]);   //& first array.
  }

  return 0;
}