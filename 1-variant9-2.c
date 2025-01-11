#include <stdio.h>
#include <math.h>
#define PI 3.1459

int main() {
  int R, r;

  printf("Enter R >>> ");
  scanf("%d", &R);
  
  printf("Enter r >>> ");
  scanf("%d", &r);

  if (R <= r) {
    printf("Oops! r should be less than R!\n");
    return 1;
  }

  printf("Answer: %.4f\n", PI * (pow(R, 2) - pow(r, 2)));
  return 0;
}
