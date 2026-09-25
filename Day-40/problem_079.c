/*
 * Question ID: 79
 * Section: 2D Arrays
 * Problem Statement: Perform diagonal traversal of a matrix.
 *
 * Sample Test Cases:
 * Input: 3 3 1 2 3 4 5 6 7 8 9 -> Output: 1 2 4 7 5 3 6 8 9
 */
#include <stdio.h>

int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2) {
        int a[r][c];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);
        }
        int first = 1;
        for (int k = 0; k < r + c - 1; k++) {
            for (int i = 0; i < r; i++) {
                int j = k - i;
                if (j >= 0 && j < c) {
                    if (!first) printf(" ");
                    printf("%d", a[i][j]);
                    first = 0;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
