#include <stdio.h>
void main() {
  int a = 10, b = 20, c;

  __asm__("movl %edx, %eax\n\t"
        "addl $2, %eax\n\t");

  printf("c= %d", c);
}