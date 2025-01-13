#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float calc(float num1, float num2, char operand) {
  if (operand == '+') {
    return num1 + num2;
  }
  if (operand == '-') {
    return num1 - num2;
  }
  if (operand == '*') {
    return num1 * num2;
  }
  if (operand == '/') {
    return num1 / num2;
  }
  printf("Unsupported operand!\n");
  exit(1);
}

int main() {
  float number_1, number_2;
  char sign;

  printf("Enter number 1 >>> ");
  scanf("%f", &number_1);
  printf("Enter number 2 >>> ");
  scanf("%f", &number_2);
  printf("Enter operand >>> ");
  scanf(" %c", &sign);

  printf(
    "\nOperation will be done: %g %c %g. The result is %g\n",
    number_1, sign, number_2, calc(
      number_1, number_2, sign
    )
  );
  return 0;
}
