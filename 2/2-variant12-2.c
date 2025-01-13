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

  printf("Answer: %s\n", months[monthId - 1]);
  return 0;
}
