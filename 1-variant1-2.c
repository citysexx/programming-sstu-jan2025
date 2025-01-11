#include <stdio.h>
#include <math.h>

int main() {
  int a, b, c, d;
  printf("Enter the coordinates of A >>> ");
  scanf("%d", &a);
  scanf("%d", &b);

  printf("Enter the coordinates of B >>> ");
  scanf("%d", &c);
  scanf("%d", &d);

  printf("Length is %.2f\n", sqrt(
    pow(c - a, 2) + pow(d - b, 2)
  ));
}
