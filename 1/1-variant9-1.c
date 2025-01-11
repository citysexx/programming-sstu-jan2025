#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int a, b;
  printf("Enter your number A >>> ");
  scanf("%d", &a);
  printf("\n");

  printf("Enter your number B >>> ");
  scanf("%d", &b);
  printf("\n");
 
  printf("Answer: %.6f", (pow(a, 2) + pow(b, 2)) / (1 - ((pow(a, 3) - b)) / 3));
  printf("\n");
  return 0;
}
