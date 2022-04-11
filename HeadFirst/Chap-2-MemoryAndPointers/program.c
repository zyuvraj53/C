#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {


  char cards[] = "JQK";
  char a_card = cards[2];
  cards[2] = cards[1];
  cards[1] = cards[0];
  cards[0] = cards[2];
  cards[2] = cards[1];
  cards[1] = a_card;
  puts(cards);
  for(int i = 0; i < 3; i++)
    printf("%c, ",cards[i]); 
  

  return 0;
}