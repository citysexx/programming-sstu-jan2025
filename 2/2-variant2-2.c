#include <stdio.h>

int main() {
  int pts;
  printf("Enter Points (0-100) >>> ");
  scanf("%d", &pts);

  switch (pts) {
    case 0 ... 29:
      printf("Mark: 1\n");
      break;
    case 30 ... 49:
      printf("Mark: 2\n");
      break;
    case 50 ... 69:
      printf("Mark: 3\n");
      break;
    case 70 ... 89:
      printf("Mark: 4\n");
      break;
    case 90 ... 100:
      printf("Mark: 5\n");
      break;
    default:
      printf("The points out of range 0-100!\n");
      break;
  }
  return 0;
}
