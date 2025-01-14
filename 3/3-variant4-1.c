#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float *safelyCreateDynamicArray(int size) {
  float *arr = (float *)malloc(size * sizeof(float));
  if (arr == NULL) {
    printf("Memory allocation failed!\n");
    exit(1);
  }
  return arr;
}

int main() {
  int size;
  printf("Enter size of array >>> ");
  scanf("%d", &size);

  float *arr = safelyCreateDynamicArray(size);

  for (int i = 0; i < size; i++) {
    printf("Enter element %d >>> ", i + 1);
    scanf("%f", &arr[i]);
  }
  
  float numberMargin = 1.0;
  float number = 0.0;

  for (int i = 0; i < size; i++) {
    float someMargin = fabs(arr[i]) - abs((int)arr[i]);
    float currentMargin = ((1 - someMargin) < (0 + someMargin)) ? 1 - someMargin : 0 + someMargin;
    if (currentMargin < numberMargin) {
      numberMargin = currentMargin;
      number = arr[i];
    }
  }

  printf("The number which is close to the int is %.8f\n", number);
  free(arr);
  return 0;
}
