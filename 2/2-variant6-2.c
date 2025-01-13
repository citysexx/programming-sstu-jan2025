#include <stdio.h>

int main() {
  const char *months[] = {
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
  };

  int monthId;
  printf("Enter month id >>> ");
  scanf("%d", &monthId);

  while (monthId < 1 || monthId > 12) {
    printf("Invalid month ID!\n");
    printf("Enter month id >>> ");
    scanf("%d", &monthId);
  }

  printf("Remaining months: ");
  for (int i = monthId; i <= 12; i++) {
    if (i == 12) {
      if (monthId == 12) {
        printf("\rOnly December is left.");
      } else {
        printf("%s", months[i - 1]);
      }
    } else if (i == monthId) {
      printf("%s(this one), ", months[i - 1]);
    } else {
      printf("%s, ", months[i - 1]);
    }
  }
  printf("\n");
  return 0;
}
