#include <stdio.h>
#include <math.h>


float function(float x, float a_1, float a_2, float b_1, float b_2) {
  if (x < b_1) {
    return a_1;    
  } else if (x < b_2 && x >= b_1) {
    return a_2;
  } else {
    return 0;
  }
}


int main() {
  float x;
  printf("Enter X >>> ");
  scanf("%f", &x);
  float a_1;
  printf("Enter a1 >>> ");
  scanf("%f", &a_1);
  float b_1;
  printf("Enter b1 >>> ");
  scanf("%f", &b_1);
  float a_2;
  printf("Enter a2 >>> ");
  scanf("%f", &a_2);
  float b_2;
  printf("Enter b2 >>> ");
  scanf("%f", &b_2);

  printf("Result is %g\n", function(x, a_1, a_2, b_1, b_2));

  return 0;
}
