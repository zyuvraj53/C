#include<stdio.h> 
#include<stdlib.h> 

int main(){
  int a; //variables are not initialized to 0, rather they have garbage value until initialized
  int *p;
  p = &a;

  printf("%d\n", p);// output 6422296, the first time I ran it.
  printf("%d\n", *p);// output 2281472,the first time I ran it. 

  return 0; 
} 
