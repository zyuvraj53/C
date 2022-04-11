#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//-------------------------------------
// memcmp comapares byte by byte
//-------------------------------------

int main(int argc, char *argv[]) {

  int       arr1[] = {1, 2};
  short int arr2[] = {1, 2}; //~ The difference between this code and the first one is that in this one, we are comparing by increments of 2 bytes

  if (memcmp(arr1, arr2, 2 * sizeof(short int)) == 0) 
    printf("The arrays are the same.\n");
  else
    printf("The arrays are not the same.\n");

  return 0;
}