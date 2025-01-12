#include <stdio.h>
#include <math.h>

float function(float x, float y) {
  if (x > y) {
    return fabs(x);    
  } else if (x < y) {
    return fabs(y);
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
