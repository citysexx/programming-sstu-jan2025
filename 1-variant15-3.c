#include <stdio.h>

int main () {
  int x, a;
  printf("Enter the number of seconds >>> ");
  scanf("%d",&x);
  a = x % 60;
  printf("Seconds since the beginning of the last minute: %d\n", a);
  return 0;
}
