#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int start;
    int end;
} IntPair;


int compareAscend(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}


IntPair truncateSortedArray(int arr[], int size) {
  // pass sorted array only, will lead to unexpected behavior if otherwise
  int start = -1;
  int end = -1;
  IntPair result;

  for (int i = 0; i < size; i++) {
    if ((start == -1) && (arr[i] > 9 && arr[i] < 100)) {
      start = i;
    }

    if ((end == -1) && ((arr[i] > 99) || (i + 1 == size))) {
      end = i;
    }
  }
  
  if (start == -1) {
    result.start = -1;
    result.end = -1;
    return result; 
  }
  result.start = start;
  result.end = end;
  return result;
}


void viewArray(int arr[], int size, const char *name) {
  printf("Array %s:\n", name);
  for (int k = 0; k < size; k++) {
    printf("%3d ", arr[k]);
  }
  printf("\n");
}


int main() {
  int size;
  printf("Enter array size >>> ");
  scanf("%d", &size);

  int *arr = (int *)malloc(size * sizeof(int));
  
  for (int i = 0; i < size; i++) {
    printf("Enter number %d >>> ", i + 1);
    scanf("%d", &arr[i]);
  }
  
  viewArray(arr, size, "Main");
  qsort(arr, size, sizeof(int), compareAscend);
  viewArray(arr, size, "Sorted");
  
  IntPair borders = truncateSortedArray(arr, size);

  if (borders.start == -1) {
    printf("No 2-digit numbers found in sequence\n");
    return 1;
  } else {
    printf("Max 2 digit number in array: %d\n", arr[borders.end - 1]);
  }

  free(arr);
  
  return 0;
}
