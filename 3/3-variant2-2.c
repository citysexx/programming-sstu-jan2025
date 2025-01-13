#include <stdio.h>
#include <stdlib.h>

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

  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }

  printf("Mid arithmetic number is %g\n", (float)sum / (float)size);

  free(arr);
  
  return 0;
}
