#include <stdio.h>
#include <stdlib.h>

#define PIN_LENGTH 5

int main(int argc, char *argv[]) {

  char user_pin[PIN_LENGTH + 1];

  for (int i = 0; i < PIN_LENGTH; i++) {
    printf("Enter digit %d of your PIN: ", i);

    user_pin[i] = getchar();
    while (getchar() != '\n');  // what is this line doing??

    //% From StackOverflow:
    //~ The next line is discarding the possible extra chars that the user may have inputted, and also the linefeed char that the user had to input.
    //~ So other scanf/getchar methods further in the code are not polluted by this spurious input.
  }

  return 0;
}