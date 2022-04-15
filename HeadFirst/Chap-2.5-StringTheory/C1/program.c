#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//< You'll need to write a C program that will ask the user which
//< track she is looking for, and then get it to search through all of the
//< tracks and display any that match.

char tracks[][80] = {
    "I left my heart in Harvard Med School",
    "Newark, Newark - a wonderful town",
    "Dancing with a Dork",
    "From here to maternity",
    "The girl from Iwo Jima",
};

void find_track(char search_for[]) {
  int i = 0;
  for (i = 0; i < 5; i++) {
    if (strstr(tracks[i], search_for)) {
      printf("Track %i: '%s'\n", i + 1, tracks[i]);
    }
  }
}

int main(int argc, char *argv[]) {

  //% strchr() ==> Finds the location of a character innside of a string.
  //% strcmp() ==> Compares two strings.
  //% strstr() ==> Fins the location of a string inside another.
  //% strcpy() ==> Copy one string to another.
  //% strlen() ==> Returns the length of a string.
  //% strcat() ==> Concatenates two strings.

  //? We should be using the strstr() function to find the track.

  // //$ Example:

  // char word[] = "dysfunctional";
  // printf("%x\t%x\n", strstr(word, "fun"), word + 3);
  // //< 61fd75  61fd75

  // //$ This means that it returs the address of the first character of the word that matches. If there isn't a match, then it returns a 0.

  //@ Real Function:

  // Info: ~At the start, my correction, rest from the book

  //~This ditto copy from the book doesn't run.
  char search_for[80];
  printf("Search for: ");
  fgets(search_for, 80, stdin);

  //~ The problem is that fgets() stores the newline('\n') in the destination string.
  //~ So, the strstr() needs to find "town\n". One solution would be to to trim `search_for` after fgets to get rid of the new line.
  size_t ln = strlen(search_for) - 1; //~
  if (search_for[ln] == '\n') //~
    search_for[ln] = '\0'; //~
    
  find_track(search_for);

  return 0;
}
