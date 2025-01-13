#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countInArray(int arr[], int size, int number) {
  int cnt = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == number) {
      cnt++;
    }
  }
  return cnt;
}

void viewArray(int arr[], int size, const char *name) {
  printf("Array %s:\n", name);
  for (int k = 0; k < size; k++) {
    printf("%3d ", arr[k]);
  }
  printf("\n");
}

int *safelyCreateDynamicArray(int size) {
  int *arr = (int *)malloc(size * sizeof(int));
  if (arr == NULL) {
    printf("Memory allocation failed!\n");
    exit(1);
  }
  return arr;
}

int *safelyResizeDynamicArray(int *oldArr, int newSize) {
  int *arr = realloc(oldArr, newSize * sizeof(int));
  if (arr == NULL) {
    printf("Memory allocation failed during resizing!\n");
    free(oldArr);
    exit(1);
  }
  return arr;
}

int main() {
  int size;

  printf("Enter array size >>> ");
  scanf("%d", &size);

  int *uniqueArr = safelyCreateDynamicArray(1);
  int *totalArr = safelyCreateDynamicArray(size);
  uniqueArr[0] = 0;

  for (int i = 0; i < size; i++) {
    printf("Enter number %d >>> ", i + 1);
    scanf("%d", &totalArr[i]);
  }

  viewArray(totalArr, size, "Main");

  int uniqueArrSize = 1;
  for (int j = 0; j < size; j++) {
    if ((countInArray(totalArr, size, totalArr[j]) == 3) && (totalArr[j] % 2 == 0)) {
      if (countInArray(uniqueArr, uniqueArrSize, totalArr[j]) == 0) {
        uniqueArrSize++;
        uniqueArr = safelyResizeDynamicArray(uniqueArr, uniqueArrSize);
        uniqueArr[uniqueArrSize - 1] = totalArr[j];
      }
    }
  }

  free(totalArr);
  if (uniqueArrSize > 1) {
    viewArray(uniqueArr + 1, uniqueArrSize - 1, "Unique");
  } else {
    printf("No numbers met the conditions.\n");
  }

  printf("Numbers that met conditions (arraylen): %d\n", uniqueArrSize - 1);

  free(uniqueArr);

  return 0;
}

