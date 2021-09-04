#include <stdio.h>

int main(){

  char stringarray[30];
  scanf("%29s", stringarray);
  //fgets(stringarray, sizeof(stringarray), stdin);
  //gets(stringarray);
  printf("%s", stringarray);

  return 0;
}