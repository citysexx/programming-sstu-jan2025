#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int haveTheSameSign(int a, int b) {
  return (a * b >= 0);
}

int main() {
  int x, t;
  printf("Enter X and T like this: 3, 5 >>> ");
  while (scanf("%d, %d", &x, &t) == 1) {
    printf("Fix your input and try again!\nEnter X and T like: 3, 5 >>> ");
  }
  
  if (haveTheSameSign(x, t)) {
    printf(
      "X: %d; T: %d\n",
      abs(x - t),
      x * t
    ); 
  } else {
    printf(
      "X: %d; T: %d\n",
      x * t,
      abs(x - t)
    ); 
  }
  
  return 0;
}
