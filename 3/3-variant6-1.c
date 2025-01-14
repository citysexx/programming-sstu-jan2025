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


FilterResult filterStudents(int arr[], int size, int height) {
  int *filteredArr = (int *)malloc(sizeof(int));
  int filteredArrSize = 0;
  FilterResult result;
  for (int i = 0; i < size; i++) {
    if (arr[i] < height) {
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
  int arr[70];
  int lowestHeight = 140;
  int highestHeight = 200;
  for (int i = 0; i < 70; i++) {
    arr[i] = rand() % (highestHeight - lowestHeight + 1) + lowestHeight;
  }

  viewArray(arr, 70, "All students");
  FilterResult result = filterStudents(arr, 70, 180);
  viewArray(result.data, result.size, "Eligible IDs");

  printf(
    "Total number of students: %d\nStudents fit the criteria: %d\n",
    70,
    result.size
  );
  return 0;
}
