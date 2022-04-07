#include <stdio.h>

int fibTerm(int term) {
  if (term == 0 || term == 1)
    return 1;
  else
    return fibTerm(term - 1) + fibTerm(term - 2);
}

int main(int argc, char *argv[]) {

  int input;
  scanf("%d", &input);

  for(int i = 0; i <= input; i++){
    printf("%d ", fibTerm(i));
  }
}