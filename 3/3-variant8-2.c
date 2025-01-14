#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>


typedef struct {
  int maxDiff;
  int idx1;
  int idx2;
} Shit;


void viewArray(int arr[], int size, const char *name, int idx1, int idx2) {
  printf("Array %s:\n", name);
  for (int k = 0; k < size; k++) {
    if (k == idx2 || k == idx1) {
      printf("\033[0;32m%3d\033[0m ", arr[k]);
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


Shit findMaxDiffNeighbors(int arr[], int size) {
  Shit result;
  result.maxDiff = INT_MIN;
  int diff;
  int diff1;
  int diff2;

  for (int i = 0; i < size - 1; i++) {
    diff1 = arr[i] - arr[i + 1];
    diff2 = arr[i + 1] - arr[i];
    diff = (diff1 > diff2) ? diff1 : diff2;
    if (diff > result.maxDiff) {
      result.maxDiff = diff;
      result.idx1 = i; result.idx2 = i + 1;
    }
  }

  return result;
}


int main() {
  srand(time(NULL));
  int size;
  printf("Enter number of elements in array >>> ");
  scanf("%d", &size);
  
  int *arr = safelyCreateDynamicArray(size);

  int lowest;
  int highest;
  printf("Enter min int number for your generator >>> ");
  scanf("%d", &lowest);
  printf("Enter max int number for your generator >>> ");
  scanf("%d", &highest);

  printf("Randomizing numbers...\n");
  for (int i = 0; i < size; i++) {
    arr[i] = rand() % (highest - lowest + 1) + lowest;
  }
  
  Shit result = findMaxDiffNeighbors(arr, size);
  viewArray(
    arr, 
    size, 
    "Generated (green are found nums, diff counts both ways and max is taken)", 
    result.idx1, 
    result.idx2
  );

  
  printf(
    "Maximum possible diff between the heighbors in array: %d\n",
    result.maxDiff
  );

  free(arr);

  return 0;
}
