#include<stdio.h>
#include<stdlib.h> 
#include<string.h> //? REQUIRED HEADER FOR memset and memchr

int main(int argc, char* argv[]){
  //! ❌ Sets the whole array to a particular value
  //$ ✔  Sets every byte to a particular value until the size mentioned

  int arr[] = {1, 2, 3, 4};
  memset(arr, 0, 4* sizeof(int));
  //% 0
  //% 0
  //% 0
  //% 0

  memset(arr, 1, 4*sizeof(int));
  //% All the number get set to: (10000000 10000000 10000000 10000000)₂ which is (16843009)₁₀

  for(int i = 0; i < 4; i++)
    printf("%d\n", arr[i]);
  
  printf("----------------------------\n"); 

  //. memchr()
  //# It is used for finding only 1 byte inside an array.
  //~ Very similar to strchr -- Finds a character from the place in memory.

  int arr1[] = {3, 4}; // 3₁₀ = 0 0 0 3₁₀ = 00000000 00000000 00000000 00000003₂
  // actual arrangement of the array above = 0 0 0 3 0 0 0 4
  int arr2[] = {1, 2};

  //$ 1st argument is the place in memory
  //$ 2nd is what we want to find
  //$ 3rd is the size upto which to search

  //% The function returns the pointer to the place in memory to the byte which we are searching for if we found the byte, and returns null if it didn't

  if(memchr(arr1, 0, 2*sizeof(int)) != NULL)
    printf("Found the byte.\n"); 
  else
    printf("Did not find the byte.\n");  

  return 0; 
}