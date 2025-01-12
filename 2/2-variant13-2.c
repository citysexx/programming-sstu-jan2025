#include <stdio.h>

int main() {
  int number;
  printf("Enter number >>> ");
  scanf("%d", &number);

  switch (number) {
    case 1:
      printf("switch\n");
      break;
    case 2:
      printf("конструкции switch\n");
      break;
    case 3:
      printf("пример конструкции switch\n");
      break;
    case 4:
      printf("просто пример конструкции switch\n");
      break;
    case 5:
      printf("Это просто пример конструкции switch\n");
      break;
    default:
      printf("Введен неверный код строки\n");
      break;
  }

  return 0;
}
