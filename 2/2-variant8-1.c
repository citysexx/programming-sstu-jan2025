#include <stdio.h>
#include <math.h>

float function(float x, float y) {
  if (x < 0 || x > 10) {
    return x;    
  } else {
    int val = (x <= y) ? pow(x, 2) : pow(y, 2);
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
