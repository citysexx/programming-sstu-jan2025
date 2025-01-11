#include <stdio.h>
#include <math.h>

int main() {
  int a, b;
  printf("Enter the catets of triangle >>> ");
  scanf("%d", &a);
  scanf("%d", &b);

  printf("Hypotenuse is %.2f\n", sqrt(
    pow(a, 2) + pow(b, 2)
  ));
}
