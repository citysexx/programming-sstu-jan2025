#include <stdio.h>
#include <math.h>

float function(float a_1, float a_2, float a_3) {
  if (a_1 <= a_2 && a_2 <= a_3) {
    if (a_1 == a_2) {
      return a_1;
    } else {
      return a_2;
    }
  } else {
    return a_3;
  }
}


int main() {
  float a_1;
  printf("Enter a1 >>> ");
  scanf("%f", &a_1);
  float a_2;
  printf("Enter a2 >>> ");
  scanf("%f", &a_2);
  float a_3;
  printf("Enter a3 >>> ");
  scanf("%f", &a_3);

  printf("Result is %g\n", function(a_1, a_2, a_3));
  return 0;
}
