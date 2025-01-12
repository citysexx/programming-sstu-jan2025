#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int aTriangleReal(int a, int b, int c) {
  return (
    (a + b > c) && (b + c > a) && (c + a > b)
  );
}



int main() {
  printf("Write comma-separated and spaced A, B, C sides of a triangle (e.g. 3, 4, 5) >>> ");
  int a, b, c;
  
  while (scanf("%d, %d, %d", &a, &b, &c) == 1) {
    printf("Incorrect input format!\n");
    printf("Write comma-separated and spaced A, B, C sides of a triangle (e.g. 3, 4, 5) >>> ");
  }
  while (!(aTriangleReal(a, b, c))) {
    printf("This triangle does not exist in nature!\n");
    printf("Write comma-separated and spaced A, B, C sides of a triangle (e.g. 3, 4, 5) >>> ");
    scanf("%d, %d, %d", &a, &b, &c);
  }
  
  float halfp = (a + b + c) * 0.5;
  float s = sqrt(halfp * (halfp - a) * (halfp - b) * (halfp - c));
  
  printf(
    "H to A: %g\nH to B: %g\nH to C: %g\n",
    s / (0.5 * a),
    s / (0.5 * b),
    s / (0.5 * c)
  );

}
