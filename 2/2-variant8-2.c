#include <stdio.h>

int main() {
  const char *workHours[] = {
    "work 08:00-16:00",
    "work 07:00-16:00",
    "work 10:00-19:00",
    "work 13:00-17:00",
    "work 9:00-16:00",
    "weekend",
    "weekend"
  };

  int weekId;
  printf("Enter week id >>> ");
  scanf("%d", &weekId);

  while (weekId < 1 || weekId > 7) {
    printf("Invalid week ID!\n");
    printf("Enter week id >>> ");
    scanf("%d", &weekId);
  }
  
  printf("Doctor has %s\n", workHours[weekId - 1]);
  return 0;
}
