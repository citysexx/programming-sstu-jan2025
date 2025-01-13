#include <stdio.h>
#include <math.h>

int main() {
  int x;
  printf("Enter your number X >>> ");
  scanf("%d", &x);
  printf("\n");

  printf("Answer: %.6f", log10(fabs(cos(x))) / log10(1 + pow(x, 2)));
  printf("\n");
  return 0;
}
