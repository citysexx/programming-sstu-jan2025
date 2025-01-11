#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int x;
  printf("Enter your number X >>> ");
  scanf("%d", &x);
  printf("\n");

  printf("Answer: %.6f", sqrt(pow(x, 4 + sqrt(abs(x + 1)))));
  printf("\n");
  return 0;
}
