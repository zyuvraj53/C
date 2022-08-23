// This file uses prime.c to calculate and print primes upto the given number entered by the user.

#include <stdio.h>
#include <stdbool.h>

#include "prime.h"

int main(){

  int n;
  printf("Enter a number upto which you want to calculate primes for: ");
  scanf("%d", &n);
  fflush(stdin);

  bool *primes = primes_upto_n(n);

  for(int i = 1; i <= n; i++)
    if(primes[i])
      printf("%d, ", i);

 return 0;
}