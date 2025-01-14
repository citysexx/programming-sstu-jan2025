#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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


int *safelyCreateEmptyDynamicArray() {
  int *arr = (int *)malloc(sizeof(int));
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
  srand(time(NULL));
  int size;
  printf("Enter number of elements in array >>> ");
  scanf("%d", &size);
  
  int *arr = safelyCreateDynamicArray(size);
  int lowest = -100;
  int highest = 100;
  printf("Randomizing numbers...\n");
  for (int i = 0; i < size; i++) {
    arr[i] = rand() % (highest - lowest + 1) + lowest;
  }
  
  viewArray(arr, size, "Generated");
  
  int Ysize = 0;
  int Zsize = 0;
  int *Y = safelyCreateEmptyDynamicArray();
  int *Z = safelyCreateEmptyDynamicArray();
  
  for (int i = 0; i < size; i++) {
    if (i % 2 == 1) {
      Ysize++;
      Y = safelyResizeDynamicArray(Y, Ysize);
      Y[Ysize - 1] = arr[i];
    }

    if (arr[i] % 5 == 0) {
      Zsize++;
      Z = safelyResizeDynamicArray(Z, Zsize);
      Z[Zsize - 1] = arr[i];
    }
  }
  
  viewArray(Y, Ysize, "Y");
  viewArray(Z, Zsize, "Z");

  free(arr); free(Y); free(Z);

  return 0;
}
