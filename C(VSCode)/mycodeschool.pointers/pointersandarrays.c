#include <stdio.h>

int main(){

  int A[] = {1, 2, 3, 4, 5};

  printf("%d\n", A); 
  printf("%d\n", &A[0]); 
  printf("%d\n", A[0]); 
  printf("%d\n", *A); 

  return 0;
}