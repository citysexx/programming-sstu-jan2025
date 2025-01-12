#include <stdio.h>

int main() {
  int digit;
  
  printf("Enter any digit from 0 to 9 >>> ");
  if (scanf("%d", &digit) != 1) {
    printf("Wrong input!\n");
    return 1;
  }
  while (getchar() != '\n');

  int found = 0;
  if (digit < 10 && digit >= 0) {
    for (int i = digit; i < 10; i++) {
      if (i % 2 == 1) {
        printf("The closest uneven digit: %d\n", i);
        found = 1;
        break;
      }
    }
  } else {
    printf("Invalid digit!\n");
    return 1;
  }

  if (!found) {
    printf("No digit found\n");
  }

  return 0;

}
