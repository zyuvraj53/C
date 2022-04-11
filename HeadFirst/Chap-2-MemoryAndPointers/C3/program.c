#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  char first_name[20];
  char last_name[20];
  
  printf("Enter first and last name: ");
  scanf("%19s %19s", first_name, last_name);
  printf("First: %s Last:%s\n", first_name, last_name);

  const char string[32]; 

  scanf("%5s", string);//? This only stores 5 characters if there is no whitespace between them.
  printf("%s\n", string);//> Run this with himynameisyuvraj
                         //< Observe that only himyn is taken
  return 0;
}