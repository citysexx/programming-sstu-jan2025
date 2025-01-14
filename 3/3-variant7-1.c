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


FilterResult filterStudentMarks(int arr[], int size) {
  int *filteredArr = (int *)malloc(sizeof(int));
  int filteredArrSize = 0;
  FilterResult result;
  for (int i = 0; i < size; i++) {
    if (arr[i] > 3) {
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
  printf("Enter number of students >>> ");
  scanf("%d", &size);
  
  int *arr = safelyCreateDynamicArray(size);
  unsigned int lowest = 2;
  unsigned int highest = 5;
  printf("Randomizing marks...\n");
  for (int i = 0; i < size; i++) {
    arr[i] = rand() % (highest - lowest + 1) + lowest;
  }
  
  FilterResult result = filterStudentMarks(arr, size);
  
  printf("Students passed for 4 and 5: %d\n", result.size);
  char ans = 'N';
  printf("Do you want to view their IDs? y/N >>> ");
  getchar();
  scanf("%c", &ans);

  if (ans == '\n') {
    ans = 'N';
  }

  if (ans == 'y' || ans == 'Y') {
    viewArray(result.data, result.size, "Answer");
  } else if (ans == 'N' || ans == 'n') {
    printf("Quitting.\n");
  } else {
    printf("I processed another kind of char you input, considering this as quit...\n");
  }
  free(arr);
  return 0;
}
