#include<stdio.h>

int main(){
  int a = 1025;
  int* pA = &a;

  printf("size of integer is %d bytes\n", sizeof(int));
  printf("Address = %x, value = %d\n", pA, *pA);
  printf("Address = %x, value = %d\n", pA + 1, *(pA + 1));

  char* p0;
  p0 = (char*) pA; //typecasting

  printf("size of char is %d bytes\n", sizeof(char));
  printf("Address = %x, value = %d\n", p0, *p0);
  printf("Address = %x, value = %d\n", p0 + 1, *(p0 + 1));

  // 1025 = 00000000 00000000 00000100 00000001

}