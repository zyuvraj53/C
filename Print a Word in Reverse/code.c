#include <stdio.h>
#include <string.h>

char word[1024];

void reverseWord(char* funcWord){

  //char tempVar[sizeof(*funcWord)];

  for(int i = strlen(funcWord)-1; i >= 0; i--){
      printf("%c", funcWord[i]);
  }
}

// void print_reverse(char *s){
//   size_t len = strlen(s);
//   char *t = s + len - 1;

//   while (t >= s){
//     printf("%c", *t);
//     t = t - 1;
//   }

//   puts("");
// }

int main(){
  fgets(word, sizeof(word), stdin);
  reverseWord(word);

  //printString(word);

  return 0;
}