#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//? 5. How to check if a character is a digit in C

int main(int argc, char *argv[]) {

  char c = 116; //# 116 is the ASCII code for t
  if(c >= 48 && c <= 57) {
    printf("%c is a digit\n", c);
  } else {
    printf("%c is not a digit\n", c);
  }

  return 0;
}