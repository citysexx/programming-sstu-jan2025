#include <stdio.h>
#include <math.h>

int main () {
  int x;
  double a;
  printf("Enter your x >>> ");
  scanf("%d", &x);
  a=sin(sqrt(x+1))-sin(sqrt(x-1));
  printf("Answer >>> %2lf\n", a);
}
