#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//? 2. How to declare an array of strings in C

int main(int argc, char *argv[]) {

  //? 1st way:

  char arr[3][50];
  strcpy(arr[0], "Hello World!");
  strcpy(arr[1], "test");
  strcpy(arr[2], "123");
  //% This function takes in a pointer to a certain address and it copies a string of text on top of it,the string it takes to copy is also a pointer, so it takes two pointers, one destination, and the other one, source pointer.

  printf("The strings are: \n%s\n%s\n%s\n", arr[0], arr[1], arr[2]); 

  printf("-----------------------\n"); 

  //? 2nd way:

  //% combining the 2-D array and have just one 1-D array.
  char array[3 * 50]; //@ This is 150 characters
  strcpy(array      , "Hello World!");
  strcpy(array + 50 , "test");
  strcpy(array + 100, "123");

  printf("The strings are: \n%s\n%s\n%s\n", array, array + 50, array + 100); 

  printf("-----------------------\n"); 

  //? 3rd way:

  char Arr[][50] = { "Hello World!", "test", "123"};
  //# Only the outermost array's size can be automatically deduced.

  //! This is why this notation:
  //< char** array =  { "Hello World!", "test", "123"};
  //! doesn't really work. It does compile but crashes.

  printf("The strings are: \n%s\n%s\n%s\n", Arr[0], Arr[1], Arr[2]); 

  //? Also this:
  //< char* name[]
  //? can be used.

  return 0;
}