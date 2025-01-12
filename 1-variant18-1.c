#include <stdio.h>
#include <math.h>

int main () {
  const double pi = 3.14;
  double x, y;
  printf("Enter your x and y (x y) >>> ");
  scanf("%lf %lf", &x, &y);
  double a = cos(x)/(pi-2*x)+16*x*cos(x)*y;
  printf("Answer >>> %lf\n", a);
  return 0;
}
