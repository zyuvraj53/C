#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//? 3. How to properly copy text in C

int main(int argc, char *argv[]) {

  char text1[50];
  char text2[] = "Temp";
  char text3[] = "Hello this world";

  //% We want to copy the third array into the first one.

  // strcpy(text1, text3);

  // printf("%s\n%s\n%s\n", text1, text2, text3);

  //! Well, what if text3 is not formatted properly, and strcpy() doesn't know how to get the length of the source array, i.e., text3?

  //* Then we, can use strncpy() instead.

  printf("--------------------\n");   

  printf("%d\n", *(text1)); 

  strncpy(text1, text3, 16);

  printf("%s\n%s\n%s\n", text1, text2, text3); 

  //% From copilot:
  //% strncpy copies the first n characters of the source string to the destination string, and then it adds a null character at the end of the destination string
  //! But this information is wrong, it does not null terminate.

  //~ The output is this:
  //< 97
  //< Hello this worlda
  //< Temp
  //< Hello this world
  //~ We oberve that there is a character 'a' at the end of the first array, a random character, which we did not expect.
  //~ Why is this?
  //# For this, we have to know how the arrays are allocated inside the memory.
  //* We have to understand that it is actually looking for '\0' character and then going that many characters back to copy so we actually have to do 17 instead of 16.

  strncpy(text1, text3, 16);

  printf("%s\n%s\n%s\n", text1, text2, text3); 

  return 0;
}