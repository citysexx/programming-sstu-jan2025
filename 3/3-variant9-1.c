#include <stdio.h>
#include <stdlib.h>


int isSwayingStrictly(int arr[], int size) {
  int evenIdent;
  int firstElem = arr[0];
  if (firstElem == 0) {
    evenIdent = 0;
  } else {
    evenIdent = 1;
  }
  
  int evenEqualStop;
  int unEvenEqualStop;
  if (size % 2 == 0) {
    evenEqualStop = size - 2;
    unEvenEqualStop = size - 1;
  } else {
    evenEqualStop = size - 1;
    unEvenEqualStop = size - 2;
  }

  int even = 0; int uneven = 1;
  for (
    ;
    even <= evenEqualStop && uneven <= unEvenEqualStop;
    even += 2, uneven += 2
  ) {
    if (arr[even] != evenIdent) {
      return 0;
    }
    if (arr[uneven] == evenIdent) {
      return 0;
    }
  }
  return 1;
}


int allNumbersOnlyZeroOne(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    if ((arr[i] != 0) && (arr[i] != 1)) {
      return 0;
    }
  }
  return 1;
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
  int size;
  printf("Enter number of elements in array >>> ");
  scanf("%d", &size);

  if (size < 2) {
    printf("Oops, for this to work min size must be 2, abort\n");
    free(arr);
    return 1;
  }
  
  int *arr = safelyCreateDynamicArray(size);

  for (int i = 0; i < size; i++) {
    printf("Enter number %d >>> ", i + 1);
    scanf("%d", &arr[i]);
  }
  
  if (!allNumbersOnlyZeroOne(arr, size)) {
    printf("Oops, you input something other than zero, abort\n");
    free(arr);
    return 1;
  }

  if (isSwayingStrictly(arr, size)) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }


  free(arr);
  return 0;
}
