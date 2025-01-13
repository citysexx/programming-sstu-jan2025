#include <stdio.h>

int main () {
  int x;
  printf("Enter your number >>> ");
  scanf("%d", &x);

  while (!(x > 9)) {
    printf("Invalid number!\n");
    printf("Enter your number >>> ");
    scanf("%d", &x);
  }

  printf(
    "Answer: %d\n",
    (x / 10) % 10
  );
  return 0;
}

