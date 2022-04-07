#include<stdint.h>
#include<string.h> 
#include<stdio.h> 
#include<stdlib.h> 

void print(const char *c){
  // int i = 0;
  while(*c != '\0'){
    printf("%c", *c);
    c++;
  }

  // printf("\n");
}

int main(int argc, char* argv[]){

  char C[20] = "Hello";
  char *ptr = "Second String";
  C[0] = 'A';
  print(C);
}









