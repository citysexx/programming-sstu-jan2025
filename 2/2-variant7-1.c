#include <stdio.h>
#include <math.h>

float function(float x, float y) {
  if (x == y) {
    return 0;    
  } else {
    float val = (x > y) ? x / y : pow(x, 2) / y;
    return val;
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
