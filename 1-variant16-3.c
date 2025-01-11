#include <stdio.h>

int main () {
  int x, a, b;
  printf("Enter your a and b (a b) >>> ");
  scanf("%d %d", &a, &b);
  printf("Answer >>> %d\n", a = (a % b == 0 && b % a == 0)? 1 : 0);
  return 0;
}
