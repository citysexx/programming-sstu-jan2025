#include <stdio.h>
#include <math.h>

int main () {
  double x1, x2, x3, x4, y1, y2, y3, y4, o;
  printf("Enter the coordinates of the first vertex (x1 y1) >>> ");
  scanf("%lf %lf", &x1, &y1);
  printf("Enter the coordinates of the second vertex (x2 y2) >>> ");
  scanf("%lf %lf", &x2, &y2);
  printf("Enter the coordinates of the third vertex (x3 y3) >>> ");
  scanf("%lf %lf", &x3, &y3);
  printf("Enter the coordinates of the fourth vertex (x4 y4) >>> ");
  scanf("%lf %lf", &x4, &y4);
  o=0.5*fabs(x1*y2+x2*y3+x3*y4+x4*y1-(y1*x2+y2*x3+y3*x4+y4*x1));
  printf("The area of a quadrilateral >>> %lf\n", o);
  return 0;
}
