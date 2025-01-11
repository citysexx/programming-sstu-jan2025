#include <stdio.h>
#include <math.h>

int main() {
  int x;
  printf("Enter your number X >>> ");
  scanf("%d", &x);
  printf("\n");

  printf("Answer: %.2f", 10 * sin(x) + fabs(pow(x, 4) - pow(x, 5)));
  printf("\n");
  return 0;
}
