#include <stdio.h>

float function(float x, float y) {
  if (x >= 0 && y >= 0) {
    return 1;    
  } else if (x < 0 && y < 0) {
    return 2;
  } else if (x >= 0 && y < 0) {
    return 3;
  } else {
    return 4;
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
