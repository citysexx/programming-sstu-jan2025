#include <stdio.h>
#include <math.h>

int main() {
  int first, denominator, members;

  printf("Enter first member >>> ");
  scanf("%d", &first);
  printf("Enter denominator >>> ");
  scanf("%d", &denominator);
  printf("Enter total members >>> ");
  scanf("%d", &members);

  
  printf("Result: %f\n", (first - first * pow(denominator, members)) / (1 - denominator));
  return 0;
}
