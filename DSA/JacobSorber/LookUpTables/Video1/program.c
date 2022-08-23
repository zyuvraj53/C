#include <stdio.h>
#include <stdlib.h>

//~ Lookup Tables - LUTs

//~ A LookUp Table is really just an array, but what makes it a LookUp Table, is how it's used.

//~ An array is a LookUp Table if:
//~ 1. We're indexing directly into it (i.e., not going item-by-item).
//~ 2. We're using it as a replacement for computation (i.e., we're rather looking up a value rathar than computing it).

const char *messages[] = {
  "Not a party, you are alone.",
  "One is the loneliest number.",
  "Not lonely, but not a party.",
  "Now we're talking.",
  "Now we're talking.",
  "Ah, yeah...",
  "Ah, yeah...",
  "Ah, yeah...",
  "Whoa! We violated the fire code."
};

const int NUM_MESSAGES = (sizeof(messages)/sizeof(char *));

void print_party_size_info(size_t people){
  //# We should not be using if-else-if statements.
  if(people > NUM_MESSAGES - 1)
    printf("%s\n", messages[NUM_MESSAGES - 1]);
  else
    printf("%s\n", messages[people]); 
}

int main(int argc, char *argv[]) {

  print_party_size_info(0);
  print_party_size_info(1);
  print_party_size_info(2);
  print_party_size_info(3);
  print_party_size_info(4);
  print_party_size_info(5);
  print_party_size_info(13);

  return 0;
}