#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  char food[5];

  printf("Enter favorite food: ");
  fgets(food, sizeof(food), stdin);
  //? 1st ==> takes a pointer to a buffer
  //? 2nd ==> must get a maximum length('\0' included) upto which it stores, it if does overflow then it just takes upto the point to which we have allocated it
  //? 3rd ==> it just means that data will be coming in from the keyboard

  //% 2nd ==> it means that we won't have to subtract 1 from the length like we did in scanf

  printf("%4s\n", food); 

  return 0;
}