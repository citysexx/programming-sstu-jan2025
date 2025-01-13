#include <stdio.h>
#include <math.h>


float function(float x, float y, float l) {
  if (x > y) {
    return sqrt(x);    
  } else if (x < y) {
    return sqrt(y);
  } else {
    return l;
  }
}


int main() {
  float x;
  printf("Enter X >>> ");
  scanf("%f", &x);
  float y;
  printf("Enter Y >>> ");
  scanf("%f", &y);
  float l;
  printf("Enter l >>> ");
  scanf("%f", &l);

  printf("Result is %g\n", function(x, y, l));
  return 0;
}
