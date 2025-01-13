#include <stdio.h>
#include <math.h>

int main() {
  int a, b, h;
  
  printf("Enter a, lesser side >>> ");
  scanf("%d", &a);
  printf("Enter b, bigger side >>> ");
  scanf("%d", &b);

  if (a >= b) {
    printf("oops, a is bigger than b\n");
    return 1;
  }
  printf("Enter h >>> ");
  scanf("%d", &h);

  float c = sqrt(pow(h, 2) + pow((b - a) / 2, 2));

  printf("Result: %f\n", a + b + c + c);
  return 0;
}
