#include <stdio.h>

int main() {
  const char *cards[] = {
    "Six",
    "Seven",
    "Eight",
    "Nine",
    "Ten",
    "Jack",
    "Queen",
    "King",
    "Ace"
  };

  int cardId;
  printf("Enter card id >>> ");
  scanf("%d", &cardId);

  while (cardId < 6 || cardId > 14) {
    printf("Invalid card ID!\n");
    printf("Enter card id >>> ");
    scanf("%d", &cardId);
  }
  
  printf("This is %s\n", cards[cardId - 6])
  return 0;
}
