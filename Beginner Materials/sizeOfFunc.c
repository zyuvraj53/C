#include <stdio.h>
int main()
{
/* Assume name shorter than 20 chars. */
// char ex[20];
// puts("Enter boyfriend's name: ");
// char stringarray[] = "hello and my name is this";
// printf("%i", sizeof(stringarray));

char quote[] = "Cookies make you fat";
fortune_cookie(quote);
}

void fortune_cookie(char msg[]){
  printf("Message reads: %s\n", msg);
  printf("msg occupies %i bytes\n", sizeof(msg));
}