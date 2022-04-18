#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  struct student
  {
    char name[25];
    int age;
  };

  struct student anil = {"Anil", 30}; 

  struct student *ptr;

  ptr = &anil;

  printf("%s\n", ptr->name); // -> is  syntactic sugar for *ptr.name

  printf("Name = %s, Age = %d\n", anil.name, anil.age); 

  return 0;
}