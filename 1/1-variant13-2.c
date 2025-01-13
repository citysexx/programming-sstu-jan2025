#include <stdio.h>

int main() {
  float celsius;
  
  while (1) {
    printf("Enter the temperature in Celsius >>> ");
    scanf("%f", &celsius);
    printf(
      "%.2f Celsius equals %.2f Fahrenheit\n",
      celsius,
      celsius * 1.8 + 32
    );
  }
  return 0;
}
