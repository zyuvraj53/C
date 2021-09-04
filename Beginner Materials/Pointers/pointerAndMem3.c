#include <stdio.h>

// int a = 1;
// int* pointer_of_address_of_a = &a;

char str[] = "hello";

int main(){
  // printf("%p\n",&a);
  // printf("%e\n",pointer_of_address_of_a);
  // printf("%p\n",&pointer_of_address_of_a);
  printf("%p\n", str);
  printf("%p\n", &str);
}