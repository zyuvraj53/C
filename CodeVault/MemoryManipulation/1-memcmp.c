#include <stdio.h>
#include <stdlib.h>
#include <string.h> //? REQUIRED HANDLER FOR memcmp

//-------------------------------------
// memcmp comapares byte by byte
//-------------------------------------

/// int memcmp(const void *s1, const void *s2, size_t n);

int main(int argc, char *argv[]) {

  int       arr1[] = {1, 2};
  short int arr2[] = {1, 2}; //# In C, the 'short int' is the same as 'short' in java

  //& memcmp actually takes in void pointers, but if you pass in something else, then it doesn't give you any warning

  //% 1st and 2nd argument: Takes in two pointers in memory so, passing an array will do pointer decay
  //% 3rd argument: how far you want to compare (give the size in bytes)

  //@ If the result of memcmp is 0, that means that the arrays are the same

  if (memcmp(arr1, arr2, 2 * sizeof(short int)) == 0) //^ Since, there were two elements, we compared upto two elements
    printf("The arrays are the same.\n");
  else
    printf("The arrays are not the same.\n");

  return 0;
}