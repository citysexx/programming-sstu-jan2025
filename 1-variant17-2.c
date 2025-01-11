#include <stdio.h>
#include <math.h>

int main () {
  double x1, x2, x3, y1, y2, y3, o;
  printf("Enter the coordinates of the first vertex (x1 y1) >>> ");
  scanf("%lf %lf", &x1, &y1);
  printf("Enter the coordinates of the first vertex (x2 y2) >>> ");
  scanf("%lf %lf", &x2, &y2);
  printf("Enter the coordinates of the first vertex (x3 y3) >>> ");
  scanf("%lf %lf", &x3, &y3);
  o=0.5*fabs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
  printf("The area of a triangle >>> %lf\n", o);
  return 0;
}
