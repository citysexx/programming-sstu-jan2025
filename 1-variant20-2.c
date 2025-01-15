#include <stdio.h>

int main () {
  int a;
  printf("Input your a number (a) >>> ");
  scanf("%d", &a);
  printf("Answer >>> %s\n", a%2==0? "The number is even":"The number is not even");
  return 0;
}
