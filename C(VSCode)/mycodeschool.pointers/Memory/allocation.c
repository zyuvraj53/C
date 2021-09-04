#include<stdio.h> 

int main(int argc, char* argv[]){

  int* p = (int*) malloc(10*sizeof(int));

  printf("%d\n", sizeof(p)); 

  return 0; 
} 