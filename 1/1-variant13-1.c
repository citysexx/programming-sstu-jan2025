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
  
  printf("Answer: %f", sin(y + x) * sin(y - x));
  printf("\n");
  return 0;
}
