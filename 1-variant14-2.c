#include <stdio.h>
#include <math.h>

int main () {
  int x,y,a;
  printf("Enter your x >>> ");
  scanf("%d", &x);
  y=x*x*x;
  printf("Cube volume: %d", y);
  a=x*x;
  printf("\nThe area of a side of the cube: %d\n", a);
  return 0;
}
