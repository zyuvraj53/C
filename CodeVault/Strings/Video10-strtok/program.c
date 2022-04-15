#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//? 6. strtok

int makeNew(int a, int b){
	return a + b;
}

int main(int argc, char *argv[]) {

  char str[] = "Let's   break this string into pieces.";
 
  //? strtok
  char* piece = strtok(str, " ");

  while(piece != NULL){
    printf("%s\n", piece);
    piece = strtok(NULL, " ");
  }
  
  makeNew

  return 0;
}