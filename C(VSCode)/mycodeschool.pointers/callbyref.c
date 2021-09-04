#include<stdio.h> 

void Increment(int* a){
  *a += 1;
}

int main(){

  int a;
  a = 10;
  Increment(&a);
  printf("a = %d\n", a);  

  return 0; 
} 