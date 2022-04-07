#include <stdio.h>

int main(int argc, char *argv[]) {

  int a = 0, b = 1;
  int c, input;

  scanf("%d", &input);

  printf("\n The sequence starts here: %d, %d", a, b); 

  for(int i = 0; i <input; i++) {
    c = a + b;
    b = c;
    a = b;
    printf(", %d", c); 
  }

  return 0;
}