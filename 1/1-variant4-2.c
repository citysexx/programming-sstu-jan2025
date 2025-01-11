#include <stdio.h>
#include <math.h>

int main() {
  int x, y;
  printf("Enter your X >>> ");
  scanf("%d", &x);
  printf("\n");

  printf("Enter your Y >>> ");
  scanf("%d", &y);
  printf("\n");

  printf("Answer: %.2f\n", x + y + sqrt(pow(x, 2) + pow(y, 2)));
  return 0;
}
