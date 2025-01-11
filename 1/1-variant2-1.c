#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int x;
  printf("Enter your X >>> ");
  scanf("%d", &x);
  printf("\n");

  printf("Answer: %.2f", 1 + x / 3 + abs(x) + (pow(x, 3) + 4) / 2);
  printf("\n");
  return 0;
}
