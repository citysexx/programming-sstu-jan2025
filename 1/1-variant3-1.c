#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define E 2.71828182845904523536

int main() {
  int x, y;
  printf("Enter your X >>> ");
  scanf("%d", &x);
  printf("\n");

  printf("Enter your Y >>> ");
  scanf("%d", &y);
  printf("\n");

  printf("Answer: %.2f", pow(E, -x) - cos(x) + sin(2 * x * y));
  printf("\n");
  return 0;
}
