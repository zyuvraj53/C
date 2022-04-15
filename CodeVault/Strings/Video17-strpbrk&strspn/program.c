#include <stdio.h>
#include <stdlib.h>
#include <string.h>

///////////////////////////////////////////////////////////////////////////////
//   Read More About These Functions, couldn't really understand them        // 
///////////////////////////////////////////////////////////////////////////////

int main(int argc, char *argv[]) {

  char str[] = "Daniel is 25 years old.";
  //~ We want the 25 out of that string. A pointer
  char* age = strpbrk(str, "0123456789");


  // char* s_age = 
  // for(int i = 0; i < strlen(str); i++)
  //   if(str[i] >= '0' && str[i] <= '9') {
  //     age = str + i;
  //     break;
  //   }

  printf("%s\n", age); 
  
  size_t num_of_digits = strspn(age, "123456789");

  printf("%s\n", age);

  for(int i = 0; i <= num_of_digits; i++)
    printf("%c", age[i]);
  printf("\n");  

  return 0;
}