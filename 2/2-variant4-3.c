#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
  int a, b, c;
  printf("Enter a >>> ");
  scanf("%f", &a);
  printf("Enter b >>> ");
  scanf("%f", &b);
  printf("Enter c >>> ");
  scanf("%f", &c);
  
  int numbers[] = {a, b, c};
  int size = sizeof(vars) / sizeof(vars[0]);
  int maxNeg = -2147483648;

  for (int i = 0; i < size; i++) {
    if (numbers[i] < 0) {
      maxNeg = MAX(maxNeg, numbers[i]);
    }
  }
  

  printf("Max negative number is %d\n", maxNeg);
  return 0;
}
