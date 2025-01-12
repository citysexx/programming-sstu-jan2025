#include <stdio.h>

int main () {
  int x, y, z;
  printf("Enter the sides of the triangle (x y z) >>> ");
  scanf("%d %d %d", &x, &y, &z);
  printf("Answer >>> %s\n", ((x==y)||(x==z)||(y==z))? "isosceles triangle" : "a triangle is not an isosceles triangle");
  return 0;
}
