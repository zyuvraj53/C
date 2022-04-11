#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

  char text1[50];
  char text2[] = "Temp";
  char text3[17] = "Hello this world"; //This string has 16 characters.

  for(char* p = text3; p < text1 + 20; p++) //B We go from text3 to text1, because it goes in reverse.
    printf("%c ", *p); 

  return 0;
}