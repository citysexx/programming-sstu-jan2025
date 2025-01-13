#include <stdio.h>

int main() {
  int weekId;
  printf("Enter week id >>> ");
  scanf("%d", &weekId);

  while (weekId < 1 || weekId > 7) {
    printf("Invalid week ID!\n");
    printf("Enter week id >>> ");
    scanf("%d", &weekId);
  }

  switch (weekId) {
    case 1: printf("Monday\n"); break;
    case 2: printf("Tuesday\n"); break;
    case 3: printf("Wednesday\n"); break;
    case 4: printf("Thursday\n"); break;
    case 5: printf("Friday\n"); break;
    case 6: printf("Saturday\n"); break;
    case 7: printf("Sunday\n"); break;
  }
  return 0;
}
