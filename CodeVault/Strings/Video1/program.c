#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//? 1.String literals and String initializations

int main(int argc, char *argv[]) {

  char str[] = "Hello!";
  printf("%s\n", str); 
  str[0] = 'h';
  printf("%s\n", str); 

  printf("--------------------\n"); 

  char* p_str = "Hello!";
  printf("%s\n", p_str); 
  // p_str[0] = 'h';
  // printf("%s\n", p_str); //! Won't print out anything and have a segmetation fault

  //% This is because 
  //% line 9 is systactic sugar for:
  //< str = {'H', 'e', 'l', 'l', 'o', '\0'};
  //% and line 16 is systactic sugar for:
  //< const static char noname[] = {'H', 'e', 'l', 'l', 'o', '\0'};
  //< char* p_str = noname;

  //? The reason why the code fails to update line 18 is because at runtime, the code stores it as a constant somewhere in the memory(might be read-only), and gives you the pointer to it, to read from it.
  // ? This is also UB. 

  printf("--------------------\n"); 

  //% If we do want a pointer to a string though
  char* m_str; //> m_str refers to malloc-str
  m_str = malloc(50 * sizeof(char));
  strcpy(m_str, "Hello!");

  printf("%s\n", m_str); 
  m_str[0] = 'h';
  printf("%s\n", m_str); 

  free(m_str);

  return 0;
}