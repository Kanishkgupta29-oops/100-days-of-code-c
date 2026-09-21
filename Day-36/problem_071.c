/*
 * Question ID: 71
 * Section: 2D Arrays
 * Problem Statement: Read and print a matrix.
 *
 * Sample Test Cases:
 * Input: 2 2 1 2 3 4 -> Output: 1 2 3 4
 */
#include <stdio.h>

int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2 && r > 0 && c > 0) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                int val;
                scanf("%d", &val);
                printf("%d%c", val, (j == c - 1 ? '\n' : ' '));
            }
        }
    }
    return 0;
}
