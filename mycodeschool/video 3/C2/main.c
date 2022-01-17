#include<stdio.h> 
#include<stdarg.h>

int main(){
  void *p;
  int a = 10;
  int *p0 = &a;

  p = p0;
  printf("%d\n", p); 
} 