#include <stdio.h>
#include <math.h>
#define X1 1
#define Y1 0
#define X2 -1
#define Y2 0
#define X3 0
#define Y3 1


int pointInTriangle(float ptX, float ptY) {
  
  float firstArea = (X1 - ptX) * (Y2 - Y1) - (X2 - X1) * (Y1 - ptY);
  float secondArea = (X2 - ptX) * (Y3 - Y2) - (X3 - X2) * (Y2 - ptY);
  float thirdArea = (X3 - ptX) * (Y1 - Y3) - (X1 - X3) * (Y3 - ptY);

  return (
    (firstArea > 0 && secondArea > 0 && thirdArea > 0) || \
    (firstArea < 0 && secondArea < 0 && thirdArea < 0)
  );
}


int main() {
  float x, y;

  printf("Enter X >>> ");
  scanf("%f", &x);
  
  printf("Enter Y >>> ");
  scanf("%f", &y);

  if (pointInTriangle(x, y)) {
    printf("Point in triangle\n");
  } else {
    printf("Point not in triangle\n");
  }
  return 0;
}
