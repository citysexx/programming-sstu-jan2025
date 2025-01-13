#include <stdio.h>

int main() {
  int size;
  printf("Enter array size >>> ");
  scanf("%d", size);

  int *arr = (int *)malloc(size * sizeof(int));
  
  for (int i = 0; i < size; i++) {
    printf("Enter number %d (can be negative or positive) >>> ", i + 1);
  }

  int cnt = 0;
  int sign = 0;
  
  for (int i = 0; i < size; i++) {
    if (i == 0) {
      sign = (arr[i] > 0) ? 1 : 0;
    } else {
      if ((sign == 0 && arr[i] > 0) || (sign == 1 && arr[i] < 0)) {
        sign = (sign == 1) ? 0 : 1; // toggle
        cnt++;
      }
    }
  }

  printf("Total sign changeovers: %d\n", cnt);
  free(arr);
  return 0;
}
