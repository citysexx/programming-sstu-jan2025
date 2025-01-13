#include <stdio.h>
#include <stdlib.h>

int main() {
  int size;
  printf("Enter array size >>> ");
  scanf("%d", &size);

  int *arr = (int *)malloc(size * sizeof(int));

  for (int i = 0; i < size; i++) {
    arr[i] = i;
  }
  
  printf("Array Before: ");
  for (int i = 0; i < size; i++) {
    printf("%3d ", arr[i]);
  }
  printf("\n");

  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 1) {
      arr[i] *= 2;
    }
    if (i % 2 == 0) {
      arr[i] = -arr[i];
    }
  }

  printf("Array Result: ");
  for (int i = 0; i < size; i++) {
    printf("%3d ", arr[i]);
  }
  printf("\n");
  free(arr);
  return 0;
}
