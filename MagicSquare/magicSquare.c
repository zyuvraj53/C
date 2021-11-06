#include <stdio.h>
#define ullint unsigned long long int

void initializeArray(int *array[]) {
  for (int i = 0; i < 3; i++) {
    array[i] = 0;
  }
}

int main() {
  ullint input;
  scanf("%llu", input);

  ullint arr1[3];
  ullint arr2[3];
  ullint arr3[3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
      }
    }
  }

  initializeArray(&arr1);

  for (int i = 0; i < 3; i++) {
    printf("%d", arr1[i]);
  }
}