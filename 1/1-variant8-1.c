#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int x;
  printf("Enter your number X >>> ");
  scanf("%d", &x);
  printf("\n");
 
  printf("Answer: %.6f", log10(pow(x, 3)) + 2 * x);
  printf("\n");
  return 0;
}
