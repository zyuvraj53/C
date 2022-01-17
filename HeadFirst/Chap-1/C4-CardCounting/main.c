/*continuation of the C3
 * by counting the value of the card
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
  char card_name[3];
  int val = 0;
  int count = 0;

  while (card_name[0] != 'X') {
    puts("Enter card name:");
    scanf("%2s", card_name);

    if (card_name[0] == 'K' || card_name[0] == 'Q' || card_name[0] == 'J') {
      val = 10;
    } else if (card_name[0] == 'A') {
      val = 11;
    } else {
      val = atoi(card_name);
    }

    if (val <= 0 || val >= 11){
      puts("Invalid card");
      continue;
    }
    // Check if the value if between 3 and 6, inclusive
    else if (val >= 3 && val <= 6)
      count++;
    // Check if the card was 10, J, Q, or K
    else if (val == 10)
      count--;
    printf("Current count: %i\n", count);
  }
  return 0;
}
