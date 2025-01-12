#include <stdio.h>

int main () {
  int x;
  printf("Enter your number >>> ");
  scanf("%d", &x);

  while (!(x > 99)) {
    printf("Invalid number!\n");
    printf("Enter your number >>> ");
    scanf("%d", &x);
  }

  printf(
    "Answer: %d\n",
    (x / 100) % 10
  );
  return 0;
}

