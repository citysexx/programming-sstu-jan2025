#include <stdio.h>
#include <limits.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

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

int main() {
  int a, b, c;
  printf("Enter a >>> ");
  scanf("%d", &a);
  printf("Enter b >>> ");
  scanf("%d", &b);
  printf("Enter c >>> ");
  scanf("%d", &c);
  
  int numbers[] = {a, b, c};
  int size = sizeof(numbers) / sizeof(numbers[0]);
  int anyEqualMax = 0;
  int maxNum = INT_MIN;
  
  for (int i = 0; i < size; i++) {
    maxNum = MAX(maxNum, numbers[i]);
  }

  
  

  if (duplicatesInArray(numbers, size, maxNum)) {
    printf("found 2 or more max numbers, aborting\n");
  } else {
    printf("Max number is %d\n", maxNum);
  }

  return 0;
}
