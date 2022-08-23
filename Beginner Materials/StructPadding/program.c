#include <stdio.h>
#include <stdlib.h>

//$ What is the size of abc?

struct abc{
  char a; // 1 byte
  char b; // 1 byte
  int c; // 4 bytes
} var; //! Should've been 6 bytes, but this is wrong.
//~ The processor doesn't read 1 byte, at a time, rather, 1 word at a time, if we have a 32 bit processor, then one word is 32 bits (4 bytes), if we have a 64 bit processor, then one word is 64 bits (8 bytes).
//~ ■■□□ ■■■■ The 2 bytes right after a,b are padding, so that the compiler can read c in a single cylce.
//~ ab   c...
//% Therefore it is actually 8 bytes.

struct abc_more_padding {
  char a; // 1 byte
  int b; // 4 bytes
  char c; // 1 byte
} var_more_padding; //! Should've been 6 bytes, but this is wrong.
//~ ■□□□ ■■■■ ■□□□
//~ a    b... c
//% Therefore it is actually 12 bytes.



int main(int argc, char *argv[]) {

  return 0;
}