#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  char ch;
  printf("Enter a Character: "); 
  ch = getchar();
  printf("The character entered is: "); 
  putchar(ch);

  return 0;
}