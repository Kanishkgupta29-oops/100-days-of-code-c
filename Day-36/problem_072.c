/*
 * Question ID: 72
 * Section: 2D Arrays
 * Problem Statement: Find the sum of all elements in a matrix.
 *
 * Sample Test Cases:
 * Input: 2 3 1 2 3 4 5 6 -> Output: 21
 */
#include <stdio.h>

int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2 && r > 0 && c > 0) {
        long long sum = 0;
        for (int i = 0; i < r * c; i++) {
            int val;
            scanf("%d", &val);
            sum += val;
        }
        printf("%lld\n", sum);
    }
    return 0;
}
