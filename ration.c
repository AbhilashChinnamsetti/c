#include <stdio.h>

#define NUM_RATION_CARDS 10000

int main(void) {
  int ration_cards[NUM_RATION_CARDS];
  char card_holder_names[NUM_RATION_CARDS][50];
  int i;

  // Initialize array of ration card numbers
  for (i = 0; i < NUM_RATION_CARDS; i++) {
    ration_cards[i] = (i + 1) * 2;
  }
  // Initialize array of card holder names
  for (i = 0; i < NUM_RATION_CARDS; i++) {
    sprintf(card_holder_names[i], "Card holder %d", i + 1);
  }

  // Distribute the ration
  int ration_card_number;
  printf("Enter ration card number: ");
  scanf("%d", &ration_card_number);

  // Check if the entered ration card number is valid
  for (i = 0; i < NUM_RATION_CARDS; i++) {
    if (ration_cards[i] == ration_card_number) {
      printf("Ration collected by %s\n", card_holder_names[i]);
      return 0;
    }
  }

  printf("Invalid ration card number\n");
  return 0;
}
 
