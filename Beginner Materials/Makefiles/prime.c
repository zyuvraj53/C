#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "prime.h"

bool *primes_upto_n(int n) {

  bool *primes = (bool *)malloc(sizeof(bool) * n);
  for(int i = 0; i < n; i++)
    primes[i] = true;

  primes[0] = false;
  primes[1] = false;

  for (int i = 2; i * i <= n; i++)
    if (primes[i] == true)
      for (int j = i * i; j <= n; j += i)
        primes[j] = false;

  return primes;
}