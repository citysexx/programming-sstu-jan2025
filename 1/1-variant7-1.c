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

  printf("Answer: %.6f", (sin(x) + cos(y)) / tan(x) + 0.43);
  printf("\n");
  return 0;
}
