#include<stdio.h> 
#include<stdlib.h>

int main(){
  int a = 5;
  int* b = &a;
  printf("&a = %x\n",b);

  printf("&b = %x\n",&b);

  printf("a = %x\n",*b);
}