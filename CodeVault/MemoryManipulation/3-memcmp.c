#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add_all_characters(char a[], int len){
  int sum = 0;
  for(int i = 0; i < len*sizeof(char); i++){
    sum += a[i];
  }

  return sum;
}

int main() {

  //# From the net:
  //^ int memcmp(const void *s1, const void *s2, size_t n);
  //% negative output: The stopping character in s1 was less than the stopping character in s2
  //% positive output: The stopping character in s1 was greater than the stopping character in s2

  char buffer1[] = "dwgaotp12dfA";
  char buffer2[] = "DWGAOTP12DFA";

  int n;

  n = memcmp(buffer1, buffer2, 12*sizeof(char));

  if (n > 0)
    printf("'%s' is greater than '%s', and the output is: %d.\n", buffer1, buffer2, n);
  else if (n < 0)
    printf("'%s' is less than '%s', and the output is: %d.\n", buffer1, buffer2, n);
  else
    printf("'%s' is the same as '%s', and the output is: %d.\n", buffer1, buffer2, n);

  printf("%d\n", add_all_characters(buffer1, 13) - add_all_characters(buffer2, 13)); 

  return 0;
}

//? Some example outputs:
//^ comparison upto: 12*sizeof(char)
//1 'DWGAOTP12DFA' is less than 'DWGAOTP12DFa', and the output is: -1.
//2 'dwgaotp12dfA' is greater than 'DWGAOTP12DFa', and the output is: 1.
//$ Should've been less than again according to the claim that only the stopping character is checked
//## But according to my calculations, it actually takes the sum of both the ararys, subtracts 2nd from 1st(buffer1 - buffer2), and takes the signum of that number
//3 'Dwgaotp12dfa' is greater than 'DWGAOTP12DFA', and the output is: 1.