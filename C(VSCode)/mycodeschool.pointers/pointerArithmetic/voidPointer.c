#include<stdio.h>

int main(){
  int a = 1025;
  int* p = &a;

  printf("size of integer is %d bytes\n", sizeof(int));
  printf("Address = %x, value = %d\n", p, *p);

  //void pointer type - Generic Pointer type

  void *p0;
  p0 = p;

  printf("Address = %x, value = %d\n", po, *p0);


}