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


int isPrime(int number) {
  for (int i = 2; i < number / 2; i++) {
    if (number % i == 0) {
      return 0;
    } 
  }
  return 1;
}


int main() {
  int size;
  printf("Enter array size >>> ");
  scanf("%d", &size);

  int *arr = (int *)malloc(size * sizeof(int));
  
  // наверняка здесь вы захотите более разнообразной генерации. 
  // тогда вам надо прочесть, что такое C generator ceeds 
  for (int i = 0; i < size; i++) {
    arr[i] = rand() % 100;
  }
  
  printf("Generated array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  qsort(arr, size, sizeof(int), compareAscend);

  printf("Sorting mAgiK happened bro. Sorted array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  int x;
  printf("Enter x >>> ");
  scanf("%d", &x);
  
  int idx = getIndex(arr, size, x);
  if (idx == -1) {
    printf("No\n");
    return 1;
  }

  for (int i = idx + 1; i < size; i++) {
    if (arr[i] == x) {
      continue;
    }

    if (isPrime(arr[i])) {
      printf("Closest prime number that is more than %d: %d\n", x, arr[i]);
      break;
      return 0;
    }   
  }

  printf("No\n");
  free(arr);
  
  return 0;
}
