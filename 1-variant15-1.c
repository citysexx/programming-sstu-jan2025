#include <stdio.h>
#include <math.h>

int main () {
  int x,y,a;
  printf("Enter your x >>> ");
  scanf("%d", &x);
  printf("Enter your y >>> ");
  scanf("%d", &y);
  a=(sin(x)+cos(x)/(cos(x)-sin(x)))*tan(x)*y;
  printf("Answer: %d\n",a);
  return 0;
}
