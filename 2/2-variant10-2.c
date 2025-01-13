#include <stdio.h>
#include <stdlib.h>
#define SIZE 7
#define MAX_WORD_LENGTH 50

int main() {
  char **words = (char **)malloc(SIZE * sizeof(char *));

  for (int i = 0; i < SIZE; i++) {
    words[i] = (char *)malloc(MAX_WORD_LENGTH * sizeof(char));
    printf("Enter word %d >>> ", i + 1);
    scanf("%s", words[i]);
  }
  
  int pick;
  printf("Enter the number (position of word) >>> ");
  scanf("%d", &pick);

  if (pick > SIZE || pick <= 0) {
    printf("No word with this position number\n");
    return 0;
  }

  printf("The word at position %d is %s\n", pick, words[pick - 1]);
  free(words);
  return 0;
}
