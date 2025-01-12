#include <stdio.h>

int main () {
  int y, m;
  printf("Enter your y and m (y m) >>> ");
  scanf("%d %d", &y, &m);
  int x=(y/m)*10+m;
  printf("Answer >>> %d\n", x);
  return 0;
}
