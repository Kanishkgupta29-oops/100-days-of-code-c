/*
 * Question ID: 57
 * Section: Arrays (1D)
 * Problem Statement: Find the sum of array elements.
 *
 * Sample Test Cases:
 * Input: 4 2 4 6 8 -> Output: 20
 * Input: 3 1 1 1 -> Output: 3
 */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            int val;
            scanf("%d", &val);
            sum += val;
        }
        printf("%lld\n", sum);
    }
    return 0;
}
