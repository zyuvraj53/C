#include <stdio.h>

int main(){
  char stringarray[9];
  int a = 2;
  fgets(stringarray, sizeof(stringarray), stdin);
  printf("%c", stringarray[8]);

  //printf("%i %snumberoneis", a, stringarray);

  return 0;
}