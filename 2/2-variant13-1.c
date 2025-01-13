#include <stdio.h>
#include <math.h>

float function(float x, float y) {
  if (x != y) {
    if (x >= y) {
      return (2 * x) / y;
    } else {
      return pow(x, 2) - 4;
    }
  } else {
    return 0;
  }
}


int main() {
  float x;
  printf("Enter X >>> ");
  scanf("%f", &x);
  float y;
  printf("Enter Y >>> ");
  scanf("%f", &y);

  printf("Result is %g\n", function(x, y));
  return 0;
}
