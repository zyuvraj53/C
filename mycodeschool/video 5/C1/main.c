#include<stdio.h> 
#include<stdlib.h> 

void Increment(int* a){
  (*a)++;
  printf("Address of variable a in Increment %x\n", &a); 
}

int main(){
  int a = 10;
  a = 10;
  Increment(&a);
  printf("Address of variable a in main %x\n", &a); 
  printf("a = %d\n", a); 
} 