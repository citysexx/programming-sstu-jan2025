#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int x, y;
  printf("Enter your number X >>> ");
  scanf("%d", &x);
  printf("\n");

  printf("Enter your number Y >>> ");
  scanf("%d", &y);
  printf("\n");
  
  printf("Answer: %.4f", (1 + pow(sin(x + y), 2)) / (2 + fabs(x - ((2 * x) / (1 + pow(x, 2) * pow(y, 2))))));
  printf("\n");
  return 0;
}
