#include <stdio.h>
#include <string.h>

//-------------------------------------
//memcmp comapares byte by byte
//-------------------------------------

int main(int argc, char *argv[]) {

  int arr1[] = {1, 2};
  short int arr2[] = {1, 2};

  if (memcmp(arr1, arr2, 2 * sizeof(short int)) == 0)
    printf("The arrays are the same.\n");
  else
    printf("The arrays are not the same.\n");

  return 0;
}

int main() {

  char buffer1[] = "DWgaOtP12df0";
  char buffer2[] = "DWGAOTP12DF0";

  int n;

  n = memcmp(buffer1, buffer2, sizeof(buffer1));

  if (n > 0)
    printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
  else if (n < 0)
    printf("'%s' is less than '%s'.\n", buffer1, buffer2);
  else
    printf("'%s' is the same as '%s'.\n", buffer1, buffer2);

  return 0;
}