#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int *data;
    int size;
} FilterResult;


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


FilterResult filterNumbers(int arr[], int size, int x) {
  int *filteredArr = (int *)malloc(sizeof(int));
  int filteredArrSize = 0;
  FilterResult result;
  for (int i = 0; i < size; i++) {
    if (arr[i] == x) {
      filteredArrSize++;
      int *newFilteredArr = safelyResizeDynamicArray(filteredArr, filteredArrSize);
      filteredArr = newFilteredArr;
      filteredArr[filteredArrSize - 1] = i + 1;
    }
  }
  result.data = filteredArr;
  result.size = filteredArrSize;
  return result;
}


int main() {
  srand(time(NULL));
  int size;
  printf("Enter array size >>> ");
  scanf("%d", &size);
  
  int *arr = safelyCreateDynamicArray(size);
  unsigned int lowest = 0;
  unsigned int highest = 100;
  for (int i = 0; i < size; i++) {
    arr[i] = rand() % (highest - lowest + 1) + lowest;
  }

  viewArray(arr, size, "All generated numbers");
  int xToFind;
  printf("Enter number to search >>> ");
  scanf("%d", &xToFind);
  
  FilterResult result = filterNumbers(arr, size, xToFind);

  if (result.size == 0) {
    printf("You entered number which is not in the array\n");
  } else {
    viewArray(result.data, result.size, "B with IDs (not indices)");
  }
  free(arr);
  return 0;
}
