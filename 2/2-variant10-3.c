#include <stdio.h>

int main() {
    int a, b, c, o;

    printf("Enter A and B of 1st rectangle (e.g., 5 8) >>> ");
    while (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input! Please enter two integers separated by a space.\n");
        printf("Enter A and B of 1st rectangle (e.g., 5 8) >>> ");
        while (getchar() != '\n');
    }

    printf("Enter C and O of 2nd rectangle (e.g., 5 8) >>> ");
    while (scanf("%d %d", &c, &o) != 2) {
        printf("Invalid input! Please enter two integers separated by a space.\n");
        printf("Enter C and O of 2nd rectangle (e.g., 5 8) >>> ");
        while (getchar() != '\n');
    }

    // Check if the first rectangle fits into the second rectangle
    if ((a <= c && b <= o) || (a <= o && b <= c)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
