#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int x;
  printf("Enter your number X >>> ");
  scanf("%d", &x);
  printf("\n");
  
  int y;
  printf("Enter your number Y >>> ");
  scanf("%d", &y);
  printf("\n");

  printf("Answer: %.6f", 1 + sin(sqrt(x + 1)) / cos(12 * y - 4));
  printf("\n");
  return 0;
}
