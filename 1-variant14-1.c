#include <stdio.h>
#include <math.h>

int main () {
  int x,y,a;
  printf("Enter your x >>> ");
  scanf("%d", &x);
  printf("Enter your y >>> ");
  scanf("%d", &y);
  a=x*log(x)+y/cos(x)-x/3;
  printf("Answer: %d\n",a);
  return 0;
}
