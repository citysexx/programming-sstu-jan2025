#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *safelyCreateDynamicArray(int size) {
  int *arr = (int *)malloc(size * sizeof(int));
  if (arr == NULL) {
    printf("Memory allocation failed!\n");
    exit(1);
  }
  return arr;
}

int isArrayDecrementing(int arr[], int size) {
  int number;
  for (int i = 0; i < size; i++) {
    if (i == 0) {
      number = arr[i];
    }

    if (arr[i] >= number) {
      number = arr[i];
    } else {
      return 1;
    }
  }
  return 0;
}

int main() {
  int size;
  printf("Enter size of array >>> ");
  scanf("%d", &size);

  int *arr = safelyCreateDynamicArray(size);

  for (int i = 0; i < size; i++) {
    printf("Enter element %d >>> ", i + 1);
    scanf("%d", &arr[i]);
  }
  
  if (isArrayDecrementing(arr, size)) {
    printf("Array is not suitable\n");
  } else {
    printf("Array is suitable\n");
  }

  free(arr);
  return 0;
}
