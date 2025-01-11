#include <stdio.h>
#include <string.h>

int main () {
  char numb[4];
  printf("Input your number >>> ");
  scanf("%3s", numb);
  printf("Number after processing >>> ");
  for (int i=1; i<4-1;i++){
    putchar(numb[i]);
  }
  printf("\n");
  return 0;
}
