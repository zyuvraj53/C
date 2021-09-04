#include <stdio.h>

int i = 1;

int main(){

  int a = 1234;
  printf("%i. %i \n",i, a);
      i++;                //prints a decimal
  printf("%i. %x \n",i, a);
      i++;                //prints a hex
  printf("%i. %p \n",i, a);
      i++;                //prints a with trailing zeroes
  printf("%i. %o \n",i, a);
      i++;                //prints an octal
  printf("%i. %u \n",i, a);
      i++;                //prints a decimal
  printf("%i. %e \n",i, a);
      i++;                //prints a (investigate)
  printf("%i. %f \n",i, a);
      i++;                //prints a floating point
  printf("%i. %a \n",i, a);
      i++;                //prints a (investigate)
  printf("%i. %c \n",i, a);
      i++;                //prints a (investigate)

}