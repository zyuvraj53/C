#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//? 4. Pointer assignment v/s strcpy in C

char* str;
int num;

void create() {
  num = 100;
  str = malloc(sizeof(char) * num);
}

void process(){
  char example[100] = "This is a test.";

  //% Now, what is the difference between 
  //< str = example;
  //< strcpy(str, example);

  //~ Before we do any of these, example and str are pointing to some memory, example points to a memory containing, "This is a test", and example points to an empty block of memory that is 100 bytes long.
  //~ □□□□□...□□□□□ <== str | This is a test.□□□□□□...□□□□□ <== example
  //% When we do str = example, we are assigning the address of example to str, then
  //~ str ==> This is a test.□□□□□□...□□□□□ <== example
  //% Now, when process() is called, and the function is done, the memory that example is pointing to is freed, and therefore, the memory that str is pointing to is freed as well, now str points to nothing. [Gives a segmentation fault]
  //% So, we cannot say free(str), it will give an execution fault, as str is pointing to nothing.

  //? So, this is why we must do strcpy(str, example);

  strcpy(str, example);
}

int main(int argc, char *argv[]) {

  create();
  process();
  printf("%s\n", str); 

  return 0;
}