#include <stdio.h>

int main() {
    int x, y;
    for (int a = 1; a <= 9; a++) {
        for (int b = 0; b <= 9; b++) {
            for (int c = 0; c <= 9; c++) {
                x = 100 * a + 10 * b + c;
                y = 100 * b + 10 * c + a;
                if (y > 99 && y < 1000 && y % 10 != 0) {
                    printf("Number x = %d, y = %d\n", x, y);
                }
            }
        }
    }
    return 0;
}
