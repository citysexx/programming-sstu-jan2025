#include <stdio.h>
#include <math.h>


float function(float argument) {
  if (argument < 0) {
    return pow(argument, 2) + 1;    
  } else if (argument >= 0 && argument < 1) {
    return argument + 1;
  } else {
    return 0;
  }
}


int main() {
  float x;
  printf("Enter X >>> ");
  scanf("%f", &x);

  printf("Result is %g\n", function(x));

}
