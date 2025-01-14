#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>


void viewArray(int arr[], int size, const char *name) {
  printf("Array %s:\n", name);
  for (int k = 0; k < size; k++) {
    printf("%3d ", arr[k]);
  }
  printf("\n");
}

void viewArrayHighlighted(int arr[], int size, const char *name) {
  printf("Array %s:\n", name);
  for (int k = 0; k < size; k++) {
    if (arr[k] % 2 == 0) { // condition here
      printf("\033[4m%3d\033[0m ", arr[k]);
    } else {
      printf("%3d ", arr[k]);
    }
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


int compareAscend(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int getIndex(int array[], int size, int number) {
  int *ptr = array;
  for (int i = 0; i < size; ptr++, i++) {
    if (number == *ptr) {
      return i;
    }
  }
  return -1;
}


int max(int array[], int size) {
  int maxNumber = INT_MIN;
  for (int k = 0; k < size; k++) {
    if (array[k] > maxNumber) {
      maxNumber = array[k];
    }
  }
  return maxNumber;
}


int main() {
  int size;

  printf("Enter array size >>> ");
  scanf("%d", &size);

  int *arr = safelyCreateDynamicArray(size);

  for (int i = 0; i < size; i++) {
    printf("Enter number %d >>> ", i + 1);
    scanf("%d", &arr[i]);
  }

  int maxNum = max(arr, size);

  viewArray(arr, size, "Main");
  qsort(arr, size, sizeof(int), compareAscend);
  viewArrayHighlighted(arr, size, "Sorted and all Even numbers Highlighted");

  int maxNumIndex = getIndex(arr, size, maxNum);
  int cnt = 0;
  for (int j = 0; j < maxNumIndex; j++) {
    if (arr[j] % 2 == 0) {
      cnt++;
    }
  }
  
  printf("Even numbers (excl. max numbers): %d\n", cnt);
  free(arr);

  return 0;
}

