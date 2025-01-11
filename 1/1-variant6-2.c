#include <stdio.h>
#include <math.h>
#define PI 3.1459

int main() {
  float len;
  printf("Enter length of a circle >>> ");
  scanf("%f", &len);
  printf("\n");

  printf("Radius is %.4f\n", len / (2 * PI));
  return 0;
}
