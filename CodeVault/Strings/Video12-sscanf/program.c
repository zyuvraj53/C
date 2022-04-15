#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char str[] = "Andrew;New York;20;0";

  char name[20] = {0};
  char city[20] = {0};
  unsigned int age;
  int hasDegree;

  sscanf(str, "%[^;];%[^;];%u;%d", name, city, &age, &hasDegree);
  //~ same with scanf, remove the 'str'
  //~ same with fscanf for files, change the str to the file handle

  // printf("%llu\n", sizeof(size_t)); 

  printf("%s is in %s and is %u years old.\n", name, city, age);

  return 0;
}