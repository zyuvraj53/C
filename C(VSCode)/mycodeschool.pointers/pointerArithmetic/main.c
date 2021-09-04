#include<stdio.h>
#include<stdbool.h>
int main(){

  int a = 10;
  int* pA = &a; //&a = address of a

  printf("%d\n", pA);
  printf("size of integer is %d bytes\n", sizeof(bool));
  printf("%d\n", pA+2);

}