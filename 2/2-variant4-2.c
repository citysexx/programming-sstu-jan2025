#include <stdio.h>

int main() {
  int monthId;
  printf("Enter month id >>> ");
  scanf("%d", &monthId);

  while (monthId < 1 || monthId > 12) {
    printf("Invalid month ID!\n");
    printf("Enter month id >>> ");
    scanf("%d", &monthId);
  }

  if (monthId == 2) {
    printf("28/29 (year dependent)\n");
  } else if (monthId >= 1 && monthId <= 7) {
    if (monthId % 2 == 1) {
      printf("31\n");
    } else {
      printf("30\n");
    }
  } else {
    if (monthId % 2 == 0) {
      printf("31\n");
    } else {
      printf("30\n");
    }
  }
  return 0;
}
