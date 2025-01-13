#include <stdio.h>

int main () {
  int x;
  printf("Enter your number >>> ");
  scanf("%d", &x);

  while (!(x > 999 && x < 10000)) {
    printf("Invalid number!\n");
    printf("Enter your number >>> ");
    scanf("%d", &x);
  }

  printf(
    "Answer: %d%d\n",
    x % 100,
    x / 100
  );
  return 0;
}
