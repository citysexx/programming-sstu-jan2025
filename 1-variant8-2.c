#include <stdio.h>
#include <math.h>

int main() {
  int first, step, members;

  printf("Enter first member >>> ");
  scanf("%d", &first);
  printf("Enter step >>> ");
  scanf("%d", &step);
  printf("Enter total members >>> ");
  scanf("%d", &members);

  
  printf("Result: %d\n", ((2 * first + (members - 1) * step) / 2) * members);
  return 0;
}
