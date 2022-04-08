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

/*
Output reads:

size of int is 4 and the size of char is 1
address of p = 6422292, value of p = 1025
address now = 6422292, value now  = 1
address now = 6422293, value now  = 4
*/

/*
Something to notice is that when adding 1 to the char pointer, it actually moved backwards and gave the previous 8-bit value, rather that moving forwards and giving the next 8-bit garbage value.
This means that 8-bit are stacked inversely, moving 1 8-bit memory block forward, gives the value of 1 8-bit memory block backwards.
*/