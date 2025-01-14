#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>


typedef struct {
  int minIdx;
  int maxIdx;
} IndexPair;


typedef struct {
  int minInt;
  int maxInt;
} NumPair;


IndexPair maxAndMinPositions(int arr[], int size) {
  IndexPair result;
  NumPair nums;
  nums.minInt = INT_MAX;
  nums.maxInt = INT_MIN;

  for (int i = 0; i < size; i++) {
    if (arr[i] < nums.minInt) {
      nums.minInt = arr[i];
      result.minIdx = i;
    }

    if (arr[i] > nums.maxInt) {
      nums.maxInt = arr[i];
      result.maxIdx = i;
    }
  } 

  return result;
}


void viewArray(int arr[], int size, const char *name, IndexPair indices) {
  printf("Array %s:\n", name);
  for (int k = 0; k < size; k++) {
    if (k == indices.minIdx || k == indices.maxIdx) {
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
  
  IndexPair indices = maxAndMinPositions(arr, size);
  viewArray(arr, size, "Generated", indices);
  
  

  if (indices.maxIdx < indices.minIdx) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  
  free(arr);

  return 0;
}


