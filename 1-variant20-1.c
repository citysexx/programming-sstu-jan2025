#include <stdio.h>
#include <math.h>

int main () {
  double a, b, c;
  printf("Input your a, b and c number (a b c) >>> ");
  scanf("%lf %lf %lf", &a, &b, &c);
  double x = (b+sqrt(pow(b,2)+4*a*c))/(2*a)-pow(a,3)+pow(b,-2);
  printf("Answer >>> %lf\n", x);
  return 0;
}
