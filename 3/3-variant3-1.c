#include <stdio.h>
#include <stdlib.h>


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


int main() {
  int size;
  printf("Enter array size >>> ");
  scanf("%d", &size);

  int *arr = (int *)malloc(size + 1 * sizeof(int));
  
  for (int i = 0; i < size; i++) {
    printf("Enter number %d (can be negative or positive) >>> ", i + 1);
    scanf("%d", &arr[i]);
  }
  arr[size - 1] = 0;

  qsort(arr, size, sizeof(int), compareAscend);
  
  int zeroIdx = getIndex(arr, size, 0);

  for (int i = zeroIdx + 1; i < size; i++) {
    if (arr[i] != 0) {
      printf("The least positive element is %d\n", arr[i]);
      break;
    } 
  }

  free(arr);
  return 0;
}
