#include <stdio.h>
#include <math.h>

int main () {
  int a, y, e;
  printf("Enter your a, y and e (a y e) >>> ");
  scanf("%d %d %d", &a, &y, &e);
  double x = (1+pow(e, y-1))/(1+pow(a,2)*fabs(y-tan(a)));
  printf("Answer >>> %f\n", x);
  return 0;
}
