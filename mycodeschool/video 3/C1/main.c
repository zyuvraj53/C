#include<stdio.h> 
#include<stdlib.h> 

int main(){
  int a = 1025;
  int *p = &a;

  printf("size of int is %d and the size of char is %d\n", sizeof(int), sizeof(char)); 
  printf("address of p = %d, value of p = %d\n", p, *p); 

  char *p0;
  p0 = (char*)p;

  printf("address now = %d, value now  = %d\n", p0, *p0); 
  printf("address now = %d, value now  = %d\n", p0 + 1, *(p0+1)); 

  //1025 = 00000000 00000000 00000100 00000001
} 