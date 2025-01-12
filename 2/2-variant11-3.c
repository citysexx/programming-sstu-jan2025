#include <stdio.h>
#include <math.h>
#define COORDS 6

int main() {
  float arr[COORDS] = {0.0};
  for (int i = 0; i < COORDS; i++) {
    float coord;
    printf(
      "Enter the coord %c of point %d >>> ",
      (i % 2 == 0) ? 'X' : 'Y',
      (i / 2) + 1
    );
    scanf("%f", &coord);
    arr[i] = coord;
  }

  float area = 0.5 * fabs(
    (arr[0] * (arr[3] - arr[5])) + (arr[2] * (arr[5] - arr[1])) + (arr[4] * (arr[1] - arr[3]))
  );
  
  if (area != 0.0) {
    printf("can build triangle\n");
  } else {
    printf("cannot build triangle\n");
    return 1;
  }

  float ab = sqrt(pow(arr[2] - arr[0], 2) + pow(arr[3] - arr[1], 2));
  float bc = sqrt(pow(arr[4] - arr[2], 2) + pow(arr[5] - arr[3], 2));
  float cd = sqrt(pow(arr[0] - arr[4], 2) + pow(arr[1] - arr[5], 2));

  if ((ab == bc) || (bc == cd) || (cd == ab)) {
    printf("Yes, has at least both sides equal\n");
  } else {
    printf("No, triangle is different sides\n");
  }
  return 0;
}
