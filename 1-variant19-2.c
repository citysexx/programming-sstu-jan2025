#include <stdio.h>

int main () {
  int x;
  printf("Enter your x number >>> ");
  scanf("%d", &x);
  printf("Answer >>> %s\n", ((x/1000)%10)>(x%10)? "The first digit of the entered number is greater than the last digit" : "The last digit of the entered number is greater than the first digit");
  return 0;
}
