/*
 * Question ID: 76
 * Section: 2D Arrays
 * Problem Statement: Check if a matrix is symmetric.
 *
 * Sample Test Cases:
 * Input: 2 2 1 2 2 1 -> Output: True
 * Input: 2 2 1 0 2 1 -> Output: False
 */
#include <stdio.h>

int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2) {
        int a[r][c];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);
        }
        if (r != c) {
            printf("False\n");
            return 0;
        }
        int sym = 1;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (a[i][j] != a[j][i]) {
                    sym = 0;
                    break;
                }
            }
            if (!sym) break;
        }
        if (sym) printf("True\n");
        else printf("False\n");
    }
    return 0;
}
