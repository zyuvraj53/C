#include <stdio.h>
#include <stdlib.h>

//? This is about the the fact that a string literal can never be updated.

int main(int argc, char *argv[]) {

  char *cards = "JQK";
  char a_card = cards[2];
  cards[2] = cards[1];
  cards[1] = cards[0];
  cards[0] = cards[2];
  cards[2] = cards[1];
  cards[1] = a_card;
  // puts(cards);
  for(int i = 0; i < 3; i++){
    printf("%c\n",cards[i]); 
  }

  //# The above program doesn't run because:

  //? A variable that points to a string literal can't be used to change the contents of the string:
  //! char *cards = "JQK";  <== This variable cannot modify this string
  //? But if you create an array from a string literal, then you can modify it:
  //* char cards[] = "JQK";
  //? Now, cards is not just a pointer. 'cards' is now an array.

  return 0;
}