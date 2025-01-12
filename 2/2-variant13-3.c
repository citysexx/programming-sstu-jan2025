#include <stdio.h>

int main() {
  int arr[4] = {0};
  for (int i = 0; i < 4; i++) {
    int num;
    printf("Enter number %d >>> ", i + 1);
    scanf("%d", &num);
    arr[i] = num;
  }

  int variants[3][2][2] = {
    {{0, 1}, {2, 3}},
    {{1, 2}, {0, 3}},
    {{1, 3}, {0, 2}}
  };

  for (int i = 0; i < 3; i++) {
    int summarr[2] = {0, 0};
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
        summarr[j] += arr[variants[i][j][k]];
      }
    }

    if (summarr[0] == summarr[1]) {
      printf(
        "%d + %d = %d + %d = %d\n",
        arr[variants[i][0][0]],
        arr[variants[i][0][1]],
        arr[variants[i][1][0]],
        arr[variants[i][1][1]],
        summarr[0]
      );
      printf("Yes\n");
      return 0;
    }
  }
  printf("No\n");

  return 0;
}
