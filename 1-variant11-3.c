#include <stdio.h>

int main () {
  int x;
  printf("Enter your number >>> ");
  scanf("%d", &x);

  while (!(x > 999 && x < 10000)) {
    printf("Invalid number!\n");
    printf("Enter your number >>> ");
    scanf("%d", &x);
  }
  
  int firstHalf = x / 100;
  int secondHalf = x % 100;

  printf(
    "Answer: %d%d%d%d\n",
    firstHalf % 10,
    firstHalf / 10,
    secondHalf % 10,
    secondHalf / 10
  );
}
