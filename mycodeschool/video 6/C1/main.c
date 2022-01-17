#include<stdio.h> 
#include<stdlib.h> 

int main(){
  int A[5] = {1, 2, 3, 4, 5};

  //For arrays, it is default that the variables are already addresses
  /*
  ** A === &A[0]
  ** however if we try to make A === &A,
  ** then, it throws an error -----
  ** 
  ** main.c: In function 'main':
  ** main.c:12:12: warning: initialization from incompatible pointer type [-Wincompatible-pointer-types]
  **    int *p = &A;
  **   
  ** So, it must not be like this
  **  int *p = &A;
  ** 
  **/

  /*
  * One more thing
  * if I try to do  A++;//It will be invalid, but
  * int *p = A;
  * p++; will be valid
  */

  int *p = A;
  int *q = A;
  printf("%d\n", p); 
  printf("%d\n", *p); 

  printf("%d\n", q); 
  printf("%d\n", *q); 

  printf("%d\n", *(A + 1)); 
  printf("%d\n", A[1]); 
} 