#include <stdio.h>

int main () {
  int x;
  printf("Enter your number >>> ");
  scanf("%d", &x);

  while (!(x < 1000 && x > 99)) {
    printf("Invalid number!\n");
    printf("Enter your number >>> ");
    scanf("%d", &x);
  }

  printf(
    "Sum: %d\nMultiplication:%d\n",
    x / 100 + (x / 10) % 10 + x % 10,
    (x / 100) * ((x / 10) % 10) * (x % 10)
  );
}

