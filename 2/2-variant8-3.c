#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define NUMSSIZE 3

int duplicatesInArray(int arr[], int size, int num) {
  int cnt = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == num) {
      cnt++;
      if (cnt >= 2) {
        return 1;
      }
    }
  }
  return 0;
}

int getIndex(int arr[], int size, int num) {
  for (int i = 0; i < size; i++) {
      if (arr[i] == num) {
          return i;
      }
  }
  return -1;
}

int main() {
  int uniqueInputs = 0;
  int *numbers = (int *)malloc(NUMSSIZE * sizeof(int));

  while (uniqueInputs < 3) {
    printf("Enter unique numbers.\n");
    uniqueInputs = 0;
    free(numbers);
    int *numbers = (int *)malloc(3 * sizeof(int));
    int idx = 0;
    for (int i = idx; i < 3; i++) {
      printf("Enter number %d >>> ", i + 1);
      scanf("%d", &numbers[i]);
      if (!(duplicatesInArray(numbers, i + 1, numbers[i]))) {
        uniqueInputs++;
      }
    }
  }

  int size = NUMSSIZE;
  int maxNum = INT_MIN;
  int minNum = INT_MAX;
  int posSum = 0;

  for (int i = 0; i < size; i++) {
    posSum = posSum + 1 + i;
    maxNum = MAX(maxNum, numbers[i]);
    minNum = MIN(minNum, numbers[i]);
  }

  int midAddr = posSum - (
    (getIndex(numbers, size, maxNum) + 1) + (getIndex(numbers, size, minNum) + 1)
  ) - 1;
  
  printf("MAXNUM is %d, MINNUM is %d, MIDNUM (other num) is %d. Calculating the logic...\n", maxNum, minNum, numbers[midAddr]);
  printf("Half sum of %d and %d is %g, and the midnum is %d\nAnswer is: ", maxNum, minNum, ((float)maxNum + (float)minNum) / 2.0, numbers[midAddr]);
  if ((maxNum + minNum) / 2 < numbers[midAddr]) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  free(numbers);
  return 0;
}
