#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int x;
  printf("Enter your number X >>> ");
  scanf("%d", &x);
  printf("\n");
  
  printf("Answer: %.4f", (0.125 * x + fabs(sin(x))) / (1.5 * pow(x, 2) + cos(x)));
  printf("\n");
  return 0;
}
