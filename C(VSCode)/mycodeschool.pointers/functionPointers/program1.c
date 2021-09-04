#include <stdio.h>

void A(){

  printf("Hello\n"); 

}

void B(void (*ptr)()){

  ptr();

}

int main(int argc, char *argv[]) {

  void (*p)() = A;
  B(p);

  return 0;
}