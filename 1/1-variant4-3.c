#include <stdio.h>

int main () {
  int x;
  printf("Enter your number >>> ");
  scanf("%d", &x);

  while (!(x > 99 && x < 1000)) {
    printf("Invalid number!\n");
    printf("Enter your number >>> ");
    scanf("%d", &x);
  }

  printf(
    "Answer: %d%d%d\n",
    (x / 10) % 10,
    x / 100,
    x % 10
  );
}
