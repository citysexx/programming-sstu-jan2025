#include <math.h>
#include <stdio.h>

int main() {
  int syst, mon, kbd, mouse, n;
  
  printf("Enter block price >>> ");
  scanf("%d", &syst);
  printf("Enter monitor price >>> ");
  scanf("%d", &mon);
  printf("Enter keyboard price >>> ");
  scanf("%d", &kbd);
  printf("Enter mouse price >>> ");
  scanf("%d", &mouse);

  printf("Enter the number of computers >>> ");
  scanf("%d", &n);

  printf("Result: %d rubles\n", (syst + mon + kbd + mouse) * n);
  return 0;
}
