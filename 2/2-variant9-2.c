#include <stdio.h>

int main() {
  const char *suits[] = {
    "Spades",
    "Diamonds",
    "Clubs",
    "Hearts"
  };

  int suitId;
  printf("Enter card suit id >>> ");
  scanf("%d", &suitId);

  while (suitId < 1 || suitId > 4) {
    printf("Invalid card suit ID!\n");
    printf("Enter card suit id >>> ");
    scanf("%d", &suitId);
  }
  
  printf("This is %s\n", suits[suitId - 1]);
  return 0;
}
