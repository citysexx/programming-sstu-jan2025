#include <stdio.h>

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
  int sumOf = 0;
  int metEvens = 0;

  for (int i = 0; i < size; i++) {
    if (numbers[i] % 2 == 0) {
      sumOf += numbers[i];
      metEvens++;
    }
  }
  

  if (!metEvens) {
    printf("There was not any even number provided\n");
  } else {
    printf("Result is %g\n", sumOf / metEvens);
  }

  return 0;
}
