#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  //! The problem with scanf is that it can overflow if you type more

  char food[5];
  printf("Enter favorite food: ");
  scanf("%s", food); //* Enter more than 5 in this example like liver-tangerine-raccoon-toffee
  
  printf("Favorite food: %s\n", food);

  //% This might result in this error
  //! Segmentation fault: 11
  //! It might also be an abort trap
  //% This is because it write data way beyond the allocated space.

  //? The alternative to this is fgets();

  //? The first alternative to this was gets which read all characters including whitespace, but that again may crash as it allocates memory beyond what we have already done.

  return 0;
}