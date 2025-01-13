#include <stdio.h>
#include <math.h>

float function(float x) {
  if (x <= 3) {
    return 2 * cos(x) + 3 * pow(x, 2) + 0.75;
  } else {
    return log10((fabs(sin(2 * x))));
  }
}


int main() {
  float x;
  printf("Enter x >>> ");
  scanf("%f", &x);

  printf("Result is %g\n", function(x));
  return 0;
}
