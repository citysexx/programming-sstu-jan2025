#include <stdio.h>
#include <math.h>


float function(float x, float a_1, float a_2, float a_3) {
  if (x < a_1) {
    return 1;    
  } else if (x < a_2 && x >= a_1) {
    return 2;
  } else if (a_2 <= x && x < a_3) {
    return 3;
  } else {
    return 4;
  }
}


int main() {
  float x;
  printf("Enter X >>> ");
  scanf("%f", &x);
  float a_1;
  printf("Enter a1 >>> ");
  scanf("%f", &a_1);
  float a_2;
  printf("Enter a2 >>> ");
  scanf("%f", &a_2);
  float a_3;
  printf("Enter a3 >>> ");
  scanf("%f", &a_3);

  printf("Result is %g\n", function(x, a_1, a_2, a_3));
  return 0;
}
