#include <stdio.h>

// void complain(){
//   puts("I'm really not happy");
//   return;
// }


// int larger(int a, int b){
//   if (a > b)
//     return a;
//   return b;
// }

int z = 2;

int main(){
  
  char stringarray[] = "hello";
  int y = 2;
  // int greatest = larger(100, 1000);
  // printf("%i is the greatest!\n", greatest);
  // complain();
  //printf("%i, and %i", x, y);
  int *x = &z;
  printf("%i\n", sizeof(stringarray));
  //printf("%p", &y);  
  return 0;
}