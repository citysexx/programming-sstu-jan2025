#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
  int a, b, c;
  printf("Enter a >>> ");
  scanf("%d", &a);
  printf("Enter b >>> ");
  scanf("%d", &b);
  printf("Enter c >>> ");
  scanf("%d", &c);
  
  int numbers[] = {a, b, c};
  int size = sizeof(numbers) / sizeof(numbers[0]);
  int maxNeg = -2147483648;
  int maxNegSwitched = 0;

  for (int i = 0; i < size; i++) {
    if (numbers[i] < 0) {
      maxNeg = MAX(maxNeg, numbers[i]);
      maxNegSwitched = 1;
    }
  }
  

  if (!maxNegSwitched) {
    printf("There was not any negative number provided\n");
  } else {
    printf("Max negative number is %d\n", maxNeg);
  }

  return 0;
}
