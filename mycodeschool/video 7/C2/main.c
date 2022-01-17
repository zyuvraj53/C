#include<stdio.h> 
#include<stdlib.h> 

int SumOfElements(int A[]){// this is actually interpreted as int *A by the compiler
  int i, sum = 0;
  int size = sizeof(A)/sizeof(A[0]);
  for(i = 0; i < size; i++){
    sum += A[i];
  }
  return sum;
}

int main(){
  int A[] = {1, 2, 3, 4, 5};
  int total = SumOfElements(A);
  printf("Sum of elements = %d\n", total);
  return 0;
} 