#include <stdio.h>

void binary(int n)
{
  int r[100] = {0}, i = 0;
  while (n > 0)
  {
    r[i] = n % 2;
    n = n / 2;
    i++;
  }
  for (; i >= 0; i--)
  {
    printf("%d", r[i]);
  }
}