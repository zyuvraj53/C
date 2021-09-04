#include <stdio.h>

int x = 4;

int* pointer_of_address_of_x = &x;

int main(){
  int value_stored_at_address_of_x = pointer_of_address_of_x;
  printf("%p\n", &x);
  printf("%i\n", value_stored_at_address_of_x);
  printf("%i\n", *pointer_of_address_of_x);
  printf("%p\n", pointer_of_address_of_x);
}